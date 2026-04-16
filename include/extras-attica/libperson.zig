const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDate = @import("libqt6").QDate;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://api.kde.org/attica-person.html)
pub const Attica__Person = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-person.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Person,

    pub const _is_Attica__Person = {};

    /// New constructs a new Attica::Person object.
    ///
    pub fn New() Attica__Person {
        return .{ .ptr = qtc.Attica__Person_new() };
    }

    /// New2 constructs a new Attica::Person object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Person `
    ///
    pub fn New2(other: anytype) Attica__Person {
        comptime _ = @TypeOf(other)._is_Attica__Person;
        return .{ .ptr = qtc.Attica__Person_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` other: Attica__Person `
    ///
    pub fn OperatorAssign(self: Attica__Person, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Person;
        qtc.Attica__Person_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__Person, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Person_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__Person, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Person_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__person.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setFirstName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` firstName: []const u8 `
    ///
    pub fn SetFirstName(self: Attica__Person, firstName: []const u8) void {
        const firstName_str = qtc.libqt_string{
            .len = firstName.len,
            .data = firstName.ptr,
        };
        qtc.Attica__Person_SetFirstName(@ptrCast(self.ptr), firstName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#firstName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FirstName(self: Attica__Person, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Person_FirstName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__person.FirstName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setLastName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` lastName: []const u8 `
    ///
    pub fn SetLastName(self: Attica__Person, lastName: []const u8) void {
        const lastName_str = qtc.libqt_string{
            .len = lastName.len,
            .data = lastName.ptr,
        };
        qtc.Attica__Person_SetLastName(@ptrCast(self.ptr), lastName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#lastName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LastName(self: Attica__Person, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Person_LastName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__person.LastName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setBirthday)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` birthday: QDate `
    ///
    pub fn SetBirthday(self: Attica__Person, birthday: anytype) void {
        comptime _ = @TypeOf(birthday)._is_QDate;
        qtc.Attica__Person_SetBirthday(@ptrCast(self.ptr), @ptrCast(birthday.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#birthday)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    pub fn Birthday(self: Attica__Person) QDate {
        return .{ .ptr = qtc.Attica__Person_Birthday(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setCountry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` country: []const u8 `
    ///
    pub fn SetCountry(self: Attica__Person, country: []const u8) void {
        const country_str = qtc.libqt_string{
            .len = country.len,
            .data = country.ptr,
        };
        qtc.Attica__Person_SetCountry(@ptrCast(self.ptr), country_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Country(self: Attica__Person, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Person_Country(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__person.Country: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setLatitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` latitude: f64 `
    ///
    pub fn SetLatitude(self: Attica__Person, latitude: f64) void {
        qtc.Attica__Person_SetLatitude(@ptrCast(self.ptr), @bitCast(latitude));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#latitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    pub fn Latitude(self: Attica__Person) f64 {
        return qtc.Attica__Person_Latitude(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setLongitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` longitude: f64 `
    ///
    pub fn SetLongitude(self: Attica__Person, longitude: f64) void {
        qtc.Attica__Person_SetLongitude(@ptrCast(self.ptr), @bitCast(longitude));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#longitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    pub fn Longitude(self: Attica__Person) f64 {
        return qtc.Attica__Person_Longitude(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setAvatarUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` avatarUrl: QUrl `
    ///
    pub fn SetAvatarUrl(self: Attica__Person, avatarUrl: anytype) void {
        comptime _ = @TypeOf(avatarUrl)._is_QUrl;
        qtc.Attica__Person_SetAvatarUrl(@ptrCast(self.ptr), @ptrCast(avatarUrl.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#avatarUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    pub fn AvatarUrl(self: Attica__Person) QUrl {
        return .{ .ptr = qtc.Attica__Person_AvatarUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setHomepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` homepage: []const u8 `
    ///
    pub fn SetHomepage(self: Attica__Person, homepage: []const u8) void {
        const homepage_str = qtc.libqt_string{
            .len = homepage.len,
            .data = homepage.ptr,
        };
        qtc.Attica__Person_SetHomepage(@ptrCast(self.ptr), homepage_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#homepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Homepage(self: Attica__Person, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Person_Homepage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__person.Homepage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setCity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` city: []const u8 `
    ///
    pub fn SetCity(self: Attica__Person, city: []const u8) void {
        const city_str = qtc.libqt_string{
            .len = city.len,
            .data = city.ptr,
        };
        qtc.Attica__Person_SetCity(@ptrCast(self.ptr), city_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#city)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn City(self: Attica__Person, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Person_City(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__person.City: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#addExtendedAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn AddExtendedAttribute(self: Attica__Person, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__Person_AddExtendedAttribute(@ptrCast(self.ptr), key_str, value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#extendedAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ExtendedAttribute(self: Attica__Person, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.Attica__Person_ExtendedAttribute(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__person.ExtendedAttribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtendedAttributes(self: Attica__Person, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Attica__Person_ExtendedAttributes(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("attica__person.ExtendedAttributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("attica__person.ExtendedAttributes: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("attica__person.ExtendedAttributes: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    pub fn IsValid(self: Attica__Person) bool {
        return qtc.Attica__Person_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Person `
    ///
    pub fn Delete(self: Attica__Person) void {
        qtc.Attica__Person_Delete(@ptrCast(self.ptr));
    }
};
