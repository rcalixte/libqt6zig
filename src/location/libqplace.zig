const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlocation_enums = @import("libqlocation.zig").enums;
const qplacecontent_enums = @import("libqplacecontent.zig").enums;
const std = @import("std");
const arraymap_i32_qtcqplacecontent = std.AutoArrayHashMapUnmanaged(i32, QtC.QPlaceContent);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html)
pub const qplace = struct {
    /// New constructs a new QPlace object.
    ///
    pub fn New() QtC.QPlace {
        return qtc.QPlace_new();
    }

    /// New2 constructs a new QPlace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPlace `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPlace {
        return qtc.QPlace_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` other: QtC.QPlace `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlace_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` other: QtC.QPlace `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlace_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#categories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Categories(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QPlaceCategory {
        const _arr: qtc.libqt_list = qtc.QPlace_Categories(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPlaceCategory, _arr.len) catch @panic("qplace.Categories: Memory allocation failed");
        const _data: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` category: QtC.QPlaceCategory `
    ///
    pub fn SetCategory(self: ?*anyopaque, category: ?*anyopaque) void {
        qtc.QPlace_SetCategory(@ptrCast(self), @ptrCast(category));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` categories: []QtC.QPlaceCategory `
    ///
    pub fn SetCategories(self: ?*anyopaque, categories: []QtC.QPlaceCategory) void {
        const categories_list = qtc.libqt_list{
            .len = categories.len,
            .data = @ptrCast(categories.ptr),
        };
        qtc.QPlace_SetCategories(@ptrCast(self), categories_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#location)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    pub fn Location(self: ?*anyopaque) QtC.QGeoLocation {
        return qtc.QPlace_Location(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` location: QtC.QGeoLocation `
    ///
    pub fn SetLocation(self: ?*anyopaque, location: ?*anyopaque) void {
        qtc.QPlace_SetLocation(@ptrCast(self), @ptrCast(location));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#ratings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    pub fn Ratings(self: ?*anyopaque) QtC.QPlaceRatings {
        return qtc.QPlace_Ratings(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setRatings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` ratings: QtC.QPlaceRatings `
    ///
    pub fn SetRatings(self: ?*anyopaque, ratings: ?*anyopaque) void {
        qtc.QPlace_SetRatings(@ptrCast(self), @ptrCast(ratings));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#supplier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    pub fn Supplier(self: ?*anyopaque) QtC.QPlaceSupplier {
        return qtc.QPlace_Supplier(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setSupplier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` supplier: QtC.QPlaceSupplier `
    ///
    pub fn SetSupplier(self: ?*anyopaque, supplier: ?*anyopaque) void {
        qtc.QPlace_SetSupplier(@ptrCast(self), @ptrCast(supplier));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#attribution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Attribution(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_Attribution(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplace.Attribution: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setAttribution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` attribution: []const u8 `
    ///
    pub fn SetAttribution(self: ?*anyopaque, attribution: []const u8) void {
        const attribution_str = qtc.libqt_string{
            .len = attribution.len,
            .data = attribution.ptr,
        };
        qtc.QPlace_SetAttribution(@ptrCast(self), attribution_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QPlaceIcon {
        return qtc.QPlace_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` icon: QtC.QPlaceIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QPlace_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#content)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Content(self: ?*anyopaque, typeVal: i32, allocator: std.mem.Allocator) arraymap_i32_qtcqplacecontent {
        const _map: qtc.libqt_map = qtc.QPlace_Content(@ptrCast(self), @bitCast(typeVal));
        var _ret: arraymap_i32_qtcqplacecontent = .empty;
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
            _ret.put(allocator, _key, @ptrCast(_value)) catch @panic("qplace.Content: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    /// ` content: arraymap_i32_qtcqplacecontent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetContent(self: ?*anyopaque, typeVal: i32, content: arraymap_i32_qtcqplacecontent, allocator: std.mem.Allocator) void {
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
            content_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const content_map = qtc.libqt_map{
            .len = content_count,
            .keys = @ptrCast(content_keys.ptr),
            .values = @ptrCast(content_values.ptr),
        };
        qtc.QPlace_SetContent(@ptrCast(self), @bitCast(typeVal), content_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#insertContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    /// ` content: arraymap_i32_qtcqplacecontent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InsertContent(self: ?*anyopaque, typeVal: i32, content: arraymap_i32_qtcqplacecontent, allocator: std.mem.Allocator) void {
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
            content_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const content_map = qtc.libqt_map{
            .len = content_count,
            .keys = @ptrCast(content_keys.ptr),
            .values = @ptrCast(content_values.ptr),
        };
        qtc.QPlace_InsertContent(@ptrCast(self), @bitCast(typeVal), content_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#totalContentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    pub fn TotalContentCount(self: ?*anyopaque, typeVal: i32) i32 {
        return qtc.QPlace_TotalContentCount(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setTotalContentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    /// ` total: i32 `
    ///
    pub fn SetTotalContentCount(self: ?*anyopaque, typeVal: i32, total: i32) void {
        qtc.QPlace_SetTotalContentCount(@ptrCast(self), @bitCast(typeVal), @bitCast(total));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplace.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QPlace_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#placeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PlaceId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_PlaceId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplace.PlaceId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setPlaceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn SetPlaceId(self: ?*anyopaque, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPlace_SetPlaceId(@ptrCast(self), identifier_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryPhone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrimaryPhone(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_PrimaryPhone(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplace.PrimaryPhone: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryFax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrimaryFax(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_PrimaryFax(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplace.PrimaryFax: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryEmail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrimaryEmail(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_PrimaryEmail(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplace.PrimaryEmail: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryWebsite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    pub fn PrimaryWebsite(self: ?*anyopaque) QtC.QUrl {
        return qtc.QPlace_PrimaryWebsite(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#detailsFetched)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    pub fn DetailsFetched(self: ?*anyopaque) bool {
        return qtc.QPlace_DetailsFetched(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setDetailsFetched)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` fetched: bool `
    ///
    pub fn SetDetailsFetched(self: ?*anyopaque, fetched: bool) void {
        qtc.QPlace_SetDetailsFetched(@ptrCast(self), fetched);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#extendedAttributeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtendedAttributeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QPlace_ExtendedAttributeTypes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QPlace `
    ///
    /// ` attributeType: []const u8 `
    ///
    pub fn ExtendedAttribute(self: ?*anyopaque, attributeType: []const u8) QtC.QPlaceAttribute {
        const attributeType_str = qtc.libqt_string{
            .len = attributeType.len,
            .data = attributeType.ptr,
        };
        return qtc.QPlace_ExtendedAttribute(@ptrCast(self), attributeType_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setExtendedAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` attributeType: []const u8 `
    ///
    /// ` attribute: QtC.QPlaceAttribute `
    ///
    pub fn SetExtendedAttribute(self: ?*anyopaque, attributeType: []const u8, attribute: ?*anyopaque) void {
        const attributeType_str = qtc.libqt_string{
            .len = attributeType.len,
            .data = attributeType.ptr,
        };
        qtc.QPlace_SetExtendedAttribute(@ptrCast(self), attributeType_str, @ptrCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#removeExtendedAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` attributeType: []const u8 `
    ///
    pub fn RemoveExtendedAttribute(self: ?*anyopaque, attributeType: []const u8) void {
        const attributeType_str = qtc.libqt_string{
            .len = attributeType.len,
            .data = attributeType.ptr,
        };
        qtc.QPlace_RemoveExtendedAttribute(@ptrCast(self), attributeType_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#contactTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContactTypes(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QPlace_ContactTypes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QPlace `
    ///
    /// ` contactType: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContactDetails(self: ?*anyopaque, contactType: []const u8, allocator: std.mem.Allocator) []QtC.QPlaceContactDetail {
        const contactType_str = qtc.libqt_string{
            .len = contactType.len,
            .data = contactType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlace_ContactDetails(@ptrCast(self), contactType_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPlaceContactDetail, _arr.len) catch @panic("qplace.ContactDetails: Memory allocation failed");
        const _data: [*]QtC.QPlaceContactDetail = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setContactDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` contactType: []const u8 `
    ///
    /// ` details: []QtC.QPlaceContactDetail `
    ///
    pub fn SetContactDetails(self: ?*anyopaque, contactType: []const u8, details: []QtC.QPlaceContactDetail) void {
        const contactType_str = qtc.libqt_string{
            .len = contactType.len,
            .data = contactType.ptr,
        };
        const details_list = qtc.libqt_list{
            .len = details.len,
            .data = @ptrCast(details.ptr),
        };
        qtc.QPlace_SetContactDetails(@ptrCast(self), contactType_str, details_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#appendContactDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` contactType: []const u8 `
    ///
    /// ` detail: QtC.QPlaceContactDetail `
    ///
    pub fn AppendContactDetail(self: ?*anyopaque, contactType: []const u8, detail: ?*anyopaque) void {
        const contactType_str = qtc.libqt_string{
            .len = contactType.len,
            .data = contactType.ptr,
        };
        qtc.QPlace_AppendContactDetail(@ptrCast(self), contactType_str, @ptrCast(detail));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#removeContactDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` contactType: []const u8 `
    ///
    pub fn RemoveContactDetails(self: ?*anyopaque, contactType: []const u8) void {
        const contactType_str = qtc.libqt_string{
            .len = contactType.len,
            .data = contactType.ptr,
        };
        qtc.QPlace_RemoveContactDetails(@ptrCast(self), contactType_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#visibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ## Returns:
    ///
    /// ` qlocation_enums.Visibility `
    ///
    pub fn Visibility(self: ?*anyopaque) i32 {
        return qtc.QPlace_Visibility(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setVisibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    /// ` visibility: qlocation_enums.Visibility `
    ///
    pub fn SetVisibility(self: ?*anyopaque, visibility: i32) void {
        qtc.QPlace_SetVisibility(@ptrCast(self), @bitCast(visibility));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlace `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QPlace_IsEmpty(@ptrCast(self));
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
    /// ` self: QtC.QPlace `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QPlace_Delete(@ptrCast(self));
    }
};
