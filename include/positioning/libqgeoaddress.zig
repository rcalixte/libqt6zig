const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html)
pub const qgeoaddress = struct {
    /// New constructs a new QGeoAddress object.
    ///
    pub fn New() QtC.QGeoAddress {
        return qtc.QGeoAddress_new();
    }

    /// New2 constructs a new QGeoAddress object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoAddress `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QGeoAddress {
        return qtc.QGeoAddress_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` other: QtC.QGeoAddress `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoAddress_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` other: QtC.QGeoAddress `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoAddress_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QGeoAddress_SetText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Country(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_Country(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.Country: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setCountry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` country: []const u8 `
    ///
    pub fn SetCountry(self: ?*anyopaque, country: []const u8) void {
        const country_str = qtc.libqt_string{
            .len = country.len,
            .data = country.ptr,
        };
        qtc.QGeoAddress_SetCountry(@ptrCast(self), country_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#countryCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CountryCode(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_CountryCode(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.CountryCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setCountryCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` countryCode: []const u8 `
    ///
    pub fn SetCountryCode(self: ?*anyopaque, countryCode: []const u8) void {
        const countryCode_str = qtc.libqt_string{
            .len = countryCode.len,
            .data = countryCode.ptr,
        };
        qtc.QGeoAddress_SetCountryCode(@ptrCast(self), countryCode_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn State(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_State(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.State: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` state: []const u8 `
    ///
    pub fn SetState(self: ?*anyopaque, state: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        qtc.QGeoAddress_SetState(@ptrCast(self), state_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#county)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn County(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_County(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.County: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setCounty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` county: []const u8 `
    ///
    pub fn SetCounty(self: ?*anyopaque, county: []const u8) void {
        const county_str = qtc.libqt_string{
            .len = county.len,
            .data = county.ptr,
        };
        qtc.QGeoAddress_SetCounty(@ptrCast(self), county_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#city)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn City(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_City(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.City: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setCity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` city: []const u8 `
    ///
    pub fn SetCity(self: ?*anyopaque, city: []const u8) void {
        const city_str = qtc.libqt_string{
            .len = city.len,
            .data = city.ptr,
        };
        qtc.QGeoAddress_SetCity(@ptrCast(self), city_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#district)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn District(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_District(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.District: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setDistrict)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` district: []const u8 `
    ///
    pub fn SetDistrict(self: ?*anyopaque, district: []const u8) void {
        const district_str = qtc.libqt_string{
            .len = district.len,
            .data = district.ptr,
        };
        qtc.QGeoAddress_SetDistrict(@ptrCast(self), district_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#postalCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PostalCode(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_PostalCode(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.PostalCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setPostalCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` postalCode: []const u8 `
    ///
    pub fn SetPostalCode(self: ?*anyopaque, postalCode: []const u8) void {
        const postalCode_str = qtc.libqt_string{
            .len = postalCode.len,
            .data = postalCode.ptr,
        };
        qtc.QGeoAddress_SetPostalCode(@ptrCast(self), postalCode_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#street)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Street(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_Street(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.Street: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setStreet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` street: []const u8 `
    ///
    pub fn SetStreet(self: ?*anyopaque, street: []const u8) void {
        const street_str = qtc.libqt_string{
            .len = street.len,
            .data = street.ptr,
        };
        qtc.QGeoAddress_SetStreet(@ptrCast(self), street_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#streetNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StreetNumber(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_StreetNumber(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.StreetNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setStreetNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    /// ` streetNumber: []const u8 `
    ///
    pub fn SetStreetNumber(self: ?*anyopaque, streetNumber: []const u8) void {
        const streetNumber_str = qtc.libqt_string{
            .len = streetNumber.len,
            .data = streetNumber.ptr,
        };
        qtc.QGeoAddress_SetStreetNumber(@ptrCast(self), streetNumber_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QGeoAddress_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QGeoAddress_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#isTextGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    pub fn IsTextGenerated(self: ?*anyopaque) bool {
        return qtc.QGeoAddress_IsTextGenerated(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#dtor.QGeoAddress)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGeoAddress `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QGeoAddress_Delete(@ptrCast(self));
    }
};
