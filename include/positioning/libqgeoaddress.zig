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

    /// New constructs a new QGeoAddress object.
    ///
    pub fn New() QGeoAddress {
        return .{ .ptr = qtc.QGeoAddress_new() };
    }

    /// New2 constructs a new QGeoAddress object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoAddress `
    ///
    pub fn New2(other: anytype) QGeoAddress {
        comptime _ = @TypeOf(other)._is_QGeoAddress;
        return .{ .ptr = qtc.QGeoAddress_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` other: QGeoAddress `
    ///
    pub fn OperatorAssign(self: QGeoAddress, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoAddress;
        qtc.QGeoAddress_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` other: QGeoAddress `
    ///
    pub fn Swap(self: QGeoAddress, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoAddress;
        qtc.QGeoAddress_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QGeoAddress, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QGeoAddress_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Country(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_Country(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.Country: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setCountry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` country: []const u8 `
    ///
    pub fn SetCountry(self: QGeoAddress, country: []const u8) void {
        const country_str = qtc.libqt_string{
            .len = country.len,
            .data = country.ptr,
        };
        qtc.QGeoAddress_SetCountry(@ptrCast(self.ptr), country_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#countryCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CountryCode(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_CountryCode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.CountryCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setCountryCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` countryCode: []const u8 `
    ///
    pub fn SetCountryCode(self: QGeoAddress, countryCode: []const u8) void {
        const countryCode_str = qtc.libqt_string{
            .len = countryCode.len,
            .data = countryCode.ptr,
        };
        qtc.QGeoAddress_SetCountryCode(@ptrCast(self.ptr), countryCode_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn State(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_State(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.State: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` state: []const u8 `
    ///
    pub fn SetState(self: QGeoAddress, state: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        qtc.QGeoAddress_SetState(@ptrCast(self.ptr), state_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#county)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn County(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_County(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.County: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setCounty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` county: []const u8 `
    ///
    pub fn SetCounty(self: QGeoAddress, county: []const u8) void {
        const county_str = qtc.libqt_string{
            .len = county.len,
            .data = county.ptr,
        };
        qtc.QGeoAddress_SetCounty(@ptrCast(self.ptr), county_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#city)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn City(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_City(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.City: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setCity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` city: []const u8 `
    ///
    pub fn SetCity(self: QGeoAddress, city: []const u8) void {
        const city_str = qtc.libqt_string{
            .len = city.len,
            .data = city.ptr,
        };
        qtc.QGeoAddress_SetCity(@ptrCast(self.ptr), city_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#district)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn District(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_District(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.District: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setDistrict)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` district: []const u8 `
    ///
    pub fn SetDistrict(self: QGeoAddress, district: []const u8) void {
        const district_str = qtc.libqt_string{
            .len = district.len,
            .data = district.ptr,
        };
        qtc.QGeoAddress_SetDistrict(@ptrCast(self.ptr), district_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#postalCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PostalCode(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_PostalCode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.PostalCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setPostalCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` postalCode: []const u8 `
    ///
    pub fn SetPostalCode(self: QGeoAddress, postalCode: []const u8) void {
        const postalCode_str = qtc.libqt_string{
            .len = postalCode.len,
            .data = postalCode.ptr,
        };
        qtc.QGeoAddress_SetPostalCode(@ptrCast(self.ptr), postalCode_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#street)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Street(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_Street(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.Street: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setStreet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` street: []const u8 `
    ///
    pub fn SetStreet(self: QGeoAddress, street: []const u8) void {
        const street_str = qtc.libqt_string{
            .len = street.len,
            .data = street.ptr,
        };
        qtc.QGeoAddress_SetStreet(@ptrCast(self.ptr), street_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#streetNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StreetNumber(self: QGeoAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAddress_StreetNumber(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoaddress.StreetNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setStreetNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    /// ` streetNumber: []const u8 `
    ///
    pub fn SetStreetNumber(self: QGeoAddress, streetNumber: []const u8) void {
        const streetNumber_str = qtc.libqt_string{
            .len = streetNumber.len,
            .data = streetNumber.ptr,
        };
        qtc.QGeoAddress_SetStreetNumber(@ptrCast(self.ptr), streetNumber_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    pub fn IsEmpty(self: QGeoAddress) bool {
        return qtc.QGeoAddress_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    pub fn Clear(self: QGeoAddress) void {
        qtc.QGeoAddress_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#isTextGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAddress `
    ///
    pub fn IsTextGenerated(self: QGeoAddress) bool {
        return qtc.QGeoAddress_IsTextGenerated(@ptrCast(self.ptr));
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
    /// ` self: QGeoAddress `
    ///
    pub fn Delete(self: QGeoAddress) void {
        qtc.QGeoAddress_Delete(@ptrCast(self.ptr));
    }
};
