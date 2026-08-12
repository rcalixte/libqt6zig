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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlace object in C++ memory
    ///
    pub fn new() QPlace {
        return .{ .ptr = qtc.QPlace_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlace object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlace `
    ///
    pub fn new2(other: anytype) QPlace {
        comptime _ = @TypeOf(other)._is_QPlace;
        return .{ .ptr = qtc.QPlace_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` other: QPlace `
    ///
    pub fn operatorAssign(self: QPlace, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlace;
        qtc.QPlace_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` other: QPlace `
    ///
    pub fn swap(self: QPlace, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlace;
        qtc.QPlace_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `categories` instead
    ///
    pub const Categories = categories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#categories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn categories(self: QPlace, allocator: std.mem.Allocator) []QPlaceCategory {
        const _arr: qtc.libqt_list = qtc.QPlace_Categories(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPlaceCategory, _arr.len) catch @panic("QPlace.categories: Memory allocation failed");
        const _data_val: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setCategory` instead
    ///
    pub const SetCategory = setCategory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` category: QPlaceCategory `
    ///
    pub fn setCategory(self: QPlace, category: anytype) void {
        comptime _ = @TypeOf(category)._is_QPlaceCategory;
        qtc.QPlace_SetCategory(@ptrCast(self.ptr), @ptrCast(category.ptr));
    }

    /// ### DEPRECATED: Use `setCategories` instead
    ///
    pub const SetCategories = setCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` _categories: []QPlaceCategory `
    ///
    pub fn setCategories(self: QPlace, _categories: []QPlaceCategory) void {
        const categories_list = qtc.libqt_list{
            .len = _categories.len,
            .data = @ptrCast(_categories.ptr),
        };
        qtc.QPlace_SetCategories(@ptrCast(self.ptr), categories_list);
    }

    /// ### DEPRECATED: Use `location` instead
    ///
    pub const Location = location;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#location)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    pub fn location(self: QPlace) QGeoLocation {
        return .{ .ptr = qtc.QPlace_Location(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLocation` instead
    ///
    pub const SetLocation = setLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` _location: QGeoLocation `
    ///
    pub fn setLocation(self: QPlace, _location: anytype) void {
        comptime _ = @TypeOf(_location)._is_QGeoLocation;
        qtc.QPlace_SetLocation(@ptrCast(self.ptr), @ptrCast(_location.ptr));
    }

    /// ### DEPRECATED: Use `ratings` instead
    ///
    pub const Ratings = ratings;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#ratings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    pub fn ratings(self: QPlace) QPlaceRatings {
        return .{ .ptr = qtc.QPlace_Ratings(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRatings` instead
    ///
    pub const SetRatings = setRatings;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setRatings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` _ratings: QPlaceRatings `
    ///
    pub fn setRatings(self: QPlace, _ratings: anytype) void {
        comptime _ = @TypeOf(_ratings)._is_QPlaceRatings;
        qtc.QPlace_SetRatings(@ptrCast(self.ptr), @ptrCast(_ratings.ptr));
    }

    /// ### DEPRECATED: Use `supplier` instead
    ///
    pub const Supplier = supplier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#supplier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    pub fn supplier(self: QPlace) QPlaceSupplier {
        return .{ .ptr = qtc.QPlace_Supplier(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSupplier` instead
    ///
    pub const SetSupplier = setSupplier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setSupplier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` _supplier: QPlaceSupplier `
    ///
    pub fn setSupplier(self: QPlace, _supplier: anytype) void {
        comptime _ = @TypeOf(_supplier)._is_QPlaceSupplier;
        qtc.QPlace_SetSupplier(@ptrCast(self.ptr), @ptrCast(_supplier.ptr));
    }

    /// ### DEPRECATED: Use `attribution` instead
    ///
    pub const Attribution = attribution;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#attribution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn attribution(self: QPlace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_Attribution(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlace.attribution: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAttribution` instead
    ///
    pub const SetAttribution = setAttribution;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setAttribution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` _attribution: []const u8 `
    ///
    pub fn setAttribution(self: QPlace, _attribution: []const u8) void {
        const attribution_str = qtc.libqt_string{
            .len = _attribution.len,
            .data = _attribution.ptr,
        };
        qtc.QPlace_SetAttribution(@ptrCast(self.ptr), attribution_str);
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    pub fn icon(self: QPlace) QPlaceIcon {
        return .{ .ptr = qtc.QPlace_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` _icon: QPlaceIcon `
    ///
    pub fn setIcon(self: QPlace, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QPlaceIcon;
        qtc.QPlace_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `content` instead
    ///
    pub const Content = content;

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
    pub fn content(self: QPlace, allocator: std.mem.Allocator, typeVal: i32) ArrayMap_i32_QPlaceContent {
        const _map: qtc.libqt_map = qtc.QPlace_Content(@ptrCast(self.ptr), @bitCast(typeVal));
        var _ret: ArrayMap_i32_QPlaceContent = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QPlace.content: Total capacity allocation failed");
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
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setContent` instead
    ///
    pub const SetContent = setContent;

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
    /// ` _content: ArrayMap_i32_QPlaceContent `
    ///
    pub fn setContent(self: QPlace, allocator: std.mem.Allocator, typeVal: i32, _content: ArrayMap_i32_QPlaceContent) void {
        const content_count = _content.count();
        const content_keys = allocator.alloc(i32, content_count) catch @panic("QPlace.setContent: Memory allocation failed");
        defer allocator.free(content_keys);
        const content_values = allocator.alloc(QtC.QPlaceContent, content_count) catch @panic("QPlace.setContent: Memory allocation failed");
        defer allocator.free(content_values);
        var i: usize = 0;
        var content_it = _content.iterator();
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

    /// ### DEPRECATED: Use `insertContent` instead
    ///
    pub const InsertContent = insertContent;

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
    /// ` _content: ArrayMap_i32_QPlaceContent `
    ///
    pub fn insertContent(self: QPlace, allocator: std.mem.Allocator, typeVal: i32, _content: ArrayMap_i32_QPlaceContent) void {
        const content_count = _content.count();
        const content_keys = allocator.alloc(i32, content_count) catch @panic("QPlace.insertContent: Memory allocation failed");
        defer allocator.free(content_keys);
        const content_values = allocator.alloc(QtC.QPlaceContent, content_count) catch @panic("QPlace.insertContent: Memory allocation failed");
        defer allocator.free(content_values);
        var i: usize = 0;
        var content_it = _content.iterator();
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

    /// ### DEPRECATED: Use `totalContentCount` instead
    ///
    pub const TotalContentCount = totalContentCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#totalContentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    pub fn totalContentCount(self: QPlace, typeVal: i32) i32 {
        return qtc.QPlace_TotalContentCount(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `setTotalContentCount` instead
    ///
    pub const SetTotalContentCount = setTotalContentCount;

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
    pub fn setTotalContentCount(self: QPlace, typeVal: i32, total: i32) void {
        qtc.QPlace_SetTotalContentCount(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(total));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QPlace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlace.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QPlace, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QPlace_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `placeId` instead
    ///
    pub const PlaceId = placeId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#placeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn placeId(self: QPlace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_PlaceId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlace.placeId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPlaceId` instead
    ///
    pub const SetPlaceId = setPlaceId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setPlaceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn setPlaceId(self: QPlace, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPlace_SetPlaceId(@ptrCast(self.ptr), identifier_str);
    }

    /// ### DEPRECATED: Use `primaryPhone` instead
    ///
    pub const PrimaryPhone = primaryPhone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryPhone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn primaryPhone(self: QPlace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_PrimaryPhone(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlace.primaryPhone: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `primaryFax` instead
    ///
    pub const PrimaryFax = primaryFax;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryFax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn primaryFax(self: QPlace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_PrimaryFax(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlace.primaryFax: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `primaryEmail` instead
    ///
    pub const PrimaryEmail = primaryEmail;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryEmail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn primaryEmail(self: QPlace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_PrimaryEmail(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlace.primaryEmail: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `primaryWebsite` instead
    ///
    pub const PrimaryWebsite = primaryWebsite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryWebsite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    pub fn primaryWebsite(self: QPlace) QUrl {
        return .{ .ptr = qtc.QPlace_PrimaryWebsite(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `detailsFetched` instead
    ///
    pub const DetailsFetched = detailsFetched;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#detailsFetched)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    pub fn detailsFetched(self: QPlace) bool {
        return qtc.QPlace_DetailsFetched(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDetailsFetched` instead
    ///
    pub const SetDetailsFetched = setDetailsFetched;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setDetailsFetched)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` fetched: bool `
    ///
    pub fn setDetailsFetched(self: QPlace, fetched: bool) void {
        qtc.QPlace_SetDetailsFetched(@ptrCast(self.ptr), fetched);
    }

    /// ### DEPRECATED: Use `extendedAttributeTypes` instead
    ///
    pub const ExtendedAttributeTypes = extendedAttributeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#extendedAttributeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn extendedAttributeTypes(self: QPlace, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QPlace_ExtendedAttributeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QPlace.extendedAttributeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPlace.extendedAttributeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `extendedAttribute` instead
    ///
    pub const ExtendedAttribute = extendedAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#extendedAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` attributeType: []const u8 `
    ///
    pub fn extendedAttribute(self: QPlace, attributeType: []const u8) QPlaceAttribute {
        const attributeType_str = qtc.libqt_string{
            .len = attributeType.len,
            .data = attributeType.ptr,
        };
        return .{ .ptr = qtc.QPlace_ExtendedAttribute(@ptrCast(self.ptr), attributeType_str) };
    }

    /// ### DEPRECATED: Use `setExtendedAttribute` instead
    ///
    pub const SetExtendedAttribute = setExtendedAttribute;

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
    pub fn setExtendedAttribute(self: QPlace, attributeType: []const u8, attribute: anytype) void {
        const attributeType_str = qtc.libqt_string{
            .len = attributeType.len,
            .data = attributeType.ptr,
        };
        comptime _ = @TypeOf(attribute)._is_QPlaceAttribute;
        qtc.QPlace_SetExtendedAttribute(@ptrCast(self.ptr), attributeType_str, @ptrCast(attribute.ptr));
    }

    /// ### DEPRECATED: Use `removeExtendedAttribute` instead
    ///
    pub const RemoveExtendedAttribute = removeExtendedAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#removeExtendedAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` attributeType: []const u8 `
    ///
    pub fn removeExtendedAttribute(self: QPlace, attributeType: []const u8) void {
        const attributeType_str = qtc.libqt_string{
            .len = attributeType.len,
            .data = attributeType.ptr,
        };
        qtc.QPlace_RemoveExtendedAttribute(@ptrCast(self.ptr), attributeType_str);
    }

    /// ### DEPRECATED: Use `contactTypes` instead
    ///
    pub const ContactTypes = contactTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#contactTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contactTypes(self: QPlace, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QPlace_ContactTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QPlace.contactTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPlace.contactTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `contactDetails` instead
    ///
    pub const ContactDetails = contactDetails;

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
    pub fn contactDetails(self: QPlace, allocator: std.mem.Allocator, contactType: []const u8) []QPlaceContactDetail {
        const contactType_str = qtc.libqt_string{
            .len = contactType.len,
            .data = contactType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlace_ContactDetails(@ptrCast(self.ptr), contactType_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPlaceContactDetail, _arr.len) catch @panic("QPlace.contactDetails: Memory allocation failed");
        const _data_val: [*]QtC.QPlaceContactDetail = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setContactDetails` instead
    ///
    pub const SetContactDetails = setContactDetails;

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
    pub fn setContactDetails(self: QPlace, contactType: []const u8, details: []QPlaceContactDetail) void {
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

    /// ### DEPRECATED: Use `appendContactDetail` instead
    ///
    pub const AppendContactDetail = appendContactDetail;

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
    pub fn appendContactDetail(self: QPlace, contactType: []const u8, detail: anytype) void {
        const contactType_str = qtc.libqt_string{
            .len = contactType.len,
            .data = contactType.ptr,
        };
        comptime _ = @TypeOf(detail)._is_QPlaceContactDetail;
        qtc.QPlace_AppendContactDetail(@ptrCast(self.ptr), contactType_str, @ptrCast(detail.ptr));
    }

    /// ### DEPRECATED: Use `removeContactDetails` instead
    ///
    pub const RemoveContactDetails = removeContactDetails;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#removeContactDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` contactType: []const u8 `
    ///
    pub fn removeContactDetails(self: QPlace, contactType: []const u8) void {
        const contactType_str = qtc.libqt_string{
            .len = contactType.len,
            .data = contactType.ptr,
        };
        qtc.QPlace_RemoveContactDetails(@ptrCast(self.ptr), contactType_str);
    }

    /// ### DEPRECATED: Use `visibility` instead
    ///
    pub const Visibility = visibility;

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
    pub fn visibility(self: QPlace) i32 {
        return qtc.QPlace_Visibility(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisibility` instead
    ///
    pub const SetVisibility = setVisibility;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setVisibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` _visibility: qlocation_enums.Visibility `
    ///
    pub fn setVisibility(self: QPlace, _visibility: i32) void {
        qtc.QPlace_SetVisibility(@ptrCast(self.ptr), @bitCast(_visibility));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    pub fn isEmpty(self: QPlace) bool {
        return qtc.QPlace_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#dtor.QPlace)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlace `
    ///
    pub fn delete(self: QPlace) void {
        qtc.QPlace_Delete(@ptrCast(self.ptr));
    }
};
