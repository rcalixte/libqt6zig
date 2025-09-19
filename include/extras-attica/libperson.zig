const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// https://api.kde.org/attica-person.html
pub const attica__person = struct {
    /// New constructs a new Attica::Person object.
    ///
    ///
    pub fn New() QtC.Attica__Person {
        return qtc.Attica__Person_new();
    }

    /// New2 constructs a new Attica::Person object.
    ///
    /// ``` other: QtC.Attica__Person ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__Person {
        return qtc.Attica__Person_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__Person, other: QtC.Attica__Person ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Person_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#setId)
    ///
    /// ``` self: QtC.Attica__Person, id: []const u8 ```
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Person_SetId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#id)
    ///
    /// ``` self: QtC.Attica__Person, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Person_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::person.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#setFirstName)
    ///
    /// ``` self: QtC.Attica__Person, firstName: []const u8 ```
    pub fn SetFirstName(self: ?*anyopaque, firstName: []const u8) void {
        const firstName_str = qtc.libqt_string{
            .len = firstName.len,
            .data = firstName.ptr,
        };
        qtc.Attica__Person_SetFirstName(@ptrCast(self), firstName_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#firstName)
    ///
    /// ``` self: QtC.Attica__Person, allocator: std.mem.Allocator ```
    pub fn FirstName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Person_FirstName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::person.FirstName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#setLastName)
    ///
    /// ``` self: QtC.Attica__Person, lastName: []const u8 ```
    pub fn SetLastName(self: ?*anyopaque, lastName: []const u8) void {
        const lastName_str = qtc.libqt_string{
            .len = lastName.len,
            .data = lastName.ptr,
        };
        qtc.Attica__Person_SetLastName(@ptrCast(self), lastName_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#lastName)
    ///
    /// ``` self: QtC.Attica__Person, allocator: std.mem.Allocator ```
    pub fn LastName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Person_LastName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::person.LastName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#setBirthday)
    ///
    /// ``` self: QtC.Attica__Person, birthday: QtC.QDate ```
    pub fn SetBirthday(self: ?*anyopaque, birthday: ?*anyopaque) void {
        qtc.Attica__Person_SetBirthday(@ptrCast(self), @ptrCast(birthday));
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#birthday)
    ///
    /// ``` self: QtC.Attica__Person ```
    pub fn Birthday(self: ?*anyopaque) QtC.QDate {
        return qtc.Attica__Person_Birthday(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#setCountry)
    ///
    /// ``` self: QtC.Attica__Person, country: []const u8 ```
    pub fn SetCountry(self: ?*anyopaque, country: []const u8) void {
        const country_str = qtc.libqt_string{
            .len = country.len,
            .data = country.ptr,
        };
        qtc.Attica__Person_SetCountry(@ptrCast(self), country_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#country)
    ///
    /// ``` self: QtC.Attica__Person, allocator: std.mem.Allocator ```
    pub fn Country(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Person_Country(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::person.Country: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#setLatitude)
    ///
    /// ``` self: QtC.Attica__Person, latitude: f64 ```
    pub fn SetLatitude(self: ?*anyopaque, latitude: f64) void {
        qtc.Attica__Person_SetLatitude(@ptrCast(self), @floatCast(latitude));
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#latitude)
    ///
    /// ``` self: QtC.Attica__Person ```
    pub fn Latitude(self: ?*anyopaque) f64 {
        return qtc.Attica__Person_Latitude(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#setLongitude)
    ///
    /// ``` self: QtC.Attica__Person, longitude: f64 ```
    pub fn SetLongitude(self: ?*anyopaque, longitude: f64) void {
        qtc.Attica__Person_SetLongitude(@ptrCast(self), @floatCast(longitude));
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#longitude)
    ///
    /// ``` self: QtC.Attica__Person ```
    pub fn Longitude(self: ?*anyopaque) f64 {
        return qtc.Attica__Person_Longitude(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#setAvatarUrl)
    ///
    /// ``` self: QtC.Attica__Person, avatarUrl: QtC.QUrl ```
    pub fn SetAvatarUrl(self: ?*anyopaque, avatarUrl: ?*anyopaque) void {
        qtc.Attica__Person_SetAvatarUrl(@ptrCast(self), @ptrCast(avatarUrl));
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#avatarUrl)
    ///
    /// ``` self: QtC.Attica__Person ```
    pub fn AvatarUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.Attica__Person_AvatarUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#setHomepage)
    ///
    /// ``` self: QtC.Attica__Person, homepage: []const u8 ```
    pub fn SetHomepage(self: ?*anyopaque, homepage: []const u8) void {
        const homepage_str = qtc.libqt_string{
            .len = homepage.len,
            .data = homepage.ptr,
        };
        qtc.Attica__Person_SetHomepage(@ptrCast(self), homepage_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#homepage)
    ///
    /// ``` self: QtC.Attica__Person, allocator: std.mem.Allocator ```
    pub fn Homepage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Person_Homepage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::person.Homepage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#setCity)
    ///
    /// ``` self: QtC.Attica__Person, city: []const u8 ```
    pub fn SetCity(self: ?*anyopaque, city: []const u8) void {
        const city_str = qtc.libqt_string{
            .len = city.len,
            .data = city.ptr,
        };
        qtc.Attica__Person_SetCity(@ptrCast(self), city_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#city)
    ///
    /// ``` self: QtC.Attica__Person, allocator: std.mem.Allocator ```
    pub fn City(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Person_City(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::person.City: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#addExtendedAttribute)
    ///
    /// ``` self: QtC.Attica__Person, key: []const u8, value: []const u8 ```
    pub fn AddExtendedAttribute(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__Person_AddExtendedAttribute(@ptrCast(self), key_str, value_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#extendedAttribute)
    ///
    /// ``` self: QtC.Attica__Person, key: []const u8, allocator: std.mem.Allocator ```
    pub fn ExtendedAttribute(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.Attica__Person_ExtendedAttribute(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::person.ExtendedAttribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#extendedAttributes)
    ///
    /// ``` self: QtC.Attica__Person, allocator: std.mem.Allocator ```
    pub fn ExtendedAttributes(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Attica__Person_ExtendedAttributes(@ptrCast(self));
        var _ret: map_constu8_constu8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]const u8 = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("attica::person.ExtendedAttributes: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-person.html#isValid)
    ///
    /// ``` self: QtC.Attica__Person ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Person_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__Person ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Person_Delete(@ptrCast(self));
    }
};
