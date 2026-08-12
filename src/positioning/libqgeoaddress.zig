const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html)
pub const QGeoAddress = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoAddress,

    pub const _is_QGeoAddress = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoAddress object in C++ memory
    ///
    pub fn new() QGeoAddress {
        return .{ .ptr = qtc.QGeoAddress_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoAddress object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoAddress `
    ///
    pub fn new2(other: anytype) QGeoAddress {
        comptime _ = @TypeOf(other)._is_QGeoAddress;
        return .{ .ptr = qtc.QGeoAddress_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` other: QGeoAddress `
    ///
    pub fn operatorAssign(self: QGeoAddress, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoAddress;
        qtc.QGeoAddress_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` other: QGeoAddress `
    ///
    pub fn swap(self: QGeoAddress, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoAddress;
        qtc.QGeoAddress_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAddress.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QGeoAddress, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QGeoAddress_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `country` instead
    ///
    pub const Country = country;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn country(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_Country(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAddress.country: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCountry` instead
    ///
    pub const SetCountry = setCountry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setCountry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` _country: []const u8 `
    ///
    pub fn setCountry(self: QGeoAddress, _country: []const u8) void {
        const country_str = qtc.libqt_string{
            .len = _country.len,
            .data = _country.ptr,
        };
        qtc.QGeoAddress_SetCountry(@ptrCast(self.ptr), country_str);
    }

    /// ### DEPRECATED: Use `countryCode` instead
    ///
    pub const CountryCode = countryCode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#countryCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn countryCode(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_CountryCode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAddress.countryCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCountryCode` instead
    ///
    pub const SetCountryCode = setCountryCode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setCountryCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` _countryCode: []const u8 `
    ///
    pub fn setCountryCode(self: QGeoAddress, _countryCode: []const u8) void {
        const countryCode_str = qtc.libqt_string{
            .len = _countryCode.len,
            .data = _countryCode.ptr,
        };
        qtc.QGeoAddress_SetCountryCode(@ptrCast(self.ptr), countryCode_str);
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn state(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_State(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAddress.state: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` _state: []const u8 `
    ///
    pub fn setState(self: QGeoAddress, _state: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = _state.len,
            .data = _state.ptr,
        };
        qtc.QGeoAddress_SetState(@ptrCast(self.ptr), state_str);
    }

    /// ### DEPRECATED: Use `county` instead
    ///
    pub const County = county;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#county)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn county(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_County(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAddress.county: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCounty` instead
    ///
    pub const SetCounty = setCounty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setCounty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` _county: []const u8 `
    ///
    pub fn setCounty(self: QGeoAddress, _county: []const u8) void {
        const county_str = qtc.libqt_string{
            .len = _county.len,
            .data = _county.ptr,
        };
        qtc.QGeoAddress_SetCounty(@ptrCast(self.ptr), county_str);
    }

    /// ### DEPRECATED: Use `city` instead
    ///
    pub const City = city;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#city)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn city(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_City(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAddress.city: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCity` instead
    ///
    pub const SetCity = setCity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setCity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` _city: []const u8 `
    ///
    pub fn setCity(self: QGeoAddress, _city: []const u8) void {
        const city_str = qtc.libqt_string{
            .len = _city.len,
            .data = _city.ptr,
        };
        qtc.QGeoAddress_SetCity(@ptrCast(self.ptr), city_str);
    }

    /// ### DEPRECATED: Use `district` instead
    ///
    pub const District = district;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#district)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn district(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_District(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAddress.district: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDistrict` instead
    ///
    pub const SetDistrict = setDistrict;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setDistrict)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` _district: []const u8 `
    ///
    pub fn setDistrict(self: QGeoAddress, _district: []const u8) void {
        const district_str = qtc.libqt_string{
            .len = _district.len,
            .data = _district.ptr,
        };
        qtc.QGeoAddress_SetDistrict(@ptrCast(self.ptr), district_str);
    }

    /// ### DEPRECATED: Use `postalCode` instead
    ///
    pub const PostalCode = postalCode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#postalCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn postalCode(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_PostalCode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAddress.postalCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPostalCode` instead
    ///
    pub const SetPostalCode = setPostalCode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setPostalCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` _postalCode: []const u8 `
    ///
    pub fn setPostalCode(self: QGeoAddress, _postalCode: []const u8) void {
        const postalCode_str = qtc.libqt_string{
            .len = _postalCode.len,
            .data = _postalCode.ptr,
        };
        qtc.QGeoAddress_SetPostalCode(@ptrCast(self.ptr), postalCode_str);
    }

    /// ### DEPRECATED: Use `street` instead
    ///
    pub const Street = street;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#street)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn street(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_Street(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAddress.street: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStreet` instead
    ///
    pub const SetStreet = setStreet;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setStreet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` _street: []const u8 `
    ///
    pub fn setStreet(self: QGeoAddress, _street: []const u8) void {
        const street_str = qtc.libqt_string{
            .len = _street.len,
            .data = _street.ptr,
        };
        qtc.QGeoAddress_SetStreet(@ptrCast(self.ptr), street_str);
    }

    /// ### DEPRECATED: Use `streetNumber` instead
    ///
    pub const StreetNumber = streetNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#streetNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn streetNumber(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_StreetNumber(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAddress.streetNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStreetNumber` instead
    ///
    pub const SetStreetNumber = setStreetNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setStreetNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` _streetNumber: []const u8 `
    ///
    pub fn setStreetNumber(self: QGeoAddress, _streetNumber: []const u8) void {
        const streetNumber_str = qtc.libqt_string{
            .len = _streetNumber.len,
            .data = _streetNumber.ptr,
        };
        qtc.QGeoAddress_SetStreetNumber(@ptrCast(self.ptr), streetNumber_str);
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    pub fn isEmpty(self: QGeoAddress) bool {
        return qtc.QGeoAddress_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    pub fn clear(self: QGeoAddress) void {
        qtc.QGeoAddress_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTextGenerated` instead
    ///
    pub const IsTextGenerated = isTextGenerated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#isTextGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    pub fn isTextGenerated(self: QGeoAddress) bool {
        return qtc.QGeoAddress_IsTextGenerated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#dtor.QGeoAddress)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoAddress `
    ///
    pub fn delete(self: QGeoAddress) void {
        qtc.QGeoAddress_Delete(@ptrCast(self.ptr));
    }
};
