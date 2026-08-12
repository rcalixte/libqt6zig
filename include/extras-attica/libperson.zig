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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Person object in C++ memory
    ///
    pub fn new() Attica__Person {
        return .{ .ptr = qtc.Attica__Person_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Person object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Person `
    ///
    pub fn new2(other: anytype) Attica__Person {
        comptime _ = @TypeOf(other)._is_Attica__Person;
        return .{ .ptr = qtc.Attica__Person_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` other: Attica__Person `
    ///
    pub fn operatorAssign(self: Attica__Person, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Person;
        qtc.Attica__Person_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__Person, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__Person_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__Person, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Person_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Person.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFirstName` instead
    ///
    pub const SetFirstName = setFirstName;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setFirstName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` _firstName: []const u8 `
    ///
    pub fn setFirstName(self: Attica__Person, _firstName: []const u8) void {
        const firstName_str = qtc.libqt_string{
            .len = _firstName.len,
            .data = _firstName.ptr,
        };
        qtc.Attica__Person_SetFirstName(@ptrCast(self.ptr), firstName_str);
    }

    /// ### DEPRECATED: Use `firstName` instead
    ///
    pub const FirstName = firstName;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#firstName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn firstName(self: Attica__Person, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Person_FirstName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Person.firstName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLastName` instead
    ///
    pub const SetLastName = setLastName;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setLastName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` _lastName: []const u8 `
    ///
    pub fn setLastName(self: Attica__Person, _lastName: []const u8) void {
        const lastName_str = qtc.libqt_string{
            .len = _lastName.len,
            .data = _lastName.ptr,
        };
        qtc.Attica__Person_SetLastName(@ptrCast(self.ptr), lastName_str);
    }

    /// ### DEPRECATED: Use `lastName` instead
    ///
    pub const LastName = lastName;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#lastName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn lastName(self: Attica__Person, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Person_LastName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Person.lastName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setBirthday` instead
    ///
    pub const SetBirthday = setBirthday;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setBirthday)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` _birthday: QDate `
    ///
    pub fn setBirthday(self: Attica__Person, _birthday: anytype) void {
        comptime _ = @TypeOf(_birthday)._is_QDate;
        qtc.Attica__Person_SetBirthday(@ptrCast(self.ptr), @ptrCast(_birthday.ptr));
    }

    /// ### DEPRECATED: Use `birthday` instead
    ///
    pub const Birthday = birthday;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#birthday)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    pub fn birthday(self: Attica__Person) QDate {
        return .{ .ptr = qtc.Attica__Person_Birthday(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCountry` instead
    ///
    pub const SetCountry = setCountry;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setCountry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` _country: []const u8 `
    ///
    pub fn setCountry(self: Attica__Person, _country: []const u8) void {
        const country_str = qtc.libqt_string{
            .len = _country.len,
            .data = _country.ptr,
        };
        qtc.Attica__Person_SetCountry(@ptrCast(self.ptr), country_str);
    }

    /// ### DEPRECATED: Use `country` instead
    ///
    pub const Country = country;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn country(self: Attica__Person, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Person_Country(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Person.country: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLatitude` instead
    ///
    pub const SetLatitude = setLatitude;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setLatitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` _latitude: f64 `
    ///
    pub fn setLatitude(self: Attica__Person, _latitude: f64) void {
        qtc.Attica__Person_SetLatitude(@ptrCast(self.ptr), @bitCast(_latitude));
    }

    /// ### DEPRECATED: Use `latitude` instead
    ///
    pub const Latitude = latitude;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#latitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    pub fn latitude(self: Attica__Person) f64 {
        return qtc.Attica__Person_Latitude(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLongitude` instead
    ///
    pub const SetLongitude = setLongitude;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setLongitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` _longitude: f64 `
    ///
    pub fn setLongitude(self: Attica__Person, _longitude: f64) void {
        qtc.Attica__Person_SetLongitude(@ptrCast(self.ptr), @bitCast(_longitude));
    }

    /// ### DEPRECATED: Use `longitude` instead
    ///
    pub const Longitude = longitude;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#longitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    pub fn longitude(self: Attica__Person) f64 {
        return qtc.Attica__Person_Longitude(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAvatarUrl` instead
    ///
    pub const SetAvatarUrl = setAvatarUrl;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setAvatarUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` _avatarUrl: QUrl `
    ///
    pub fn setAvatarUrl(self: Attica__Person, _avatarUrl: anytype) void {
        comptime _ = @TypeOf(_avatarUrl)._is_QUrl;
        qtc.Attica__Person_SetAvatarUrl(@ptrCast(self.ptr), @ptrCast(_avatarUrl.ptr));
    }

    /// ### DEPRECATED: Use `avatarUrl` instead
    ///
    pub const AvatarUrl = avatarUrl;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#avatarUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    pub fn avatarUrl(self: Attica__Person) QUrl {
        return .{ .ptr = qtc.Attica__Person_AvatarUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHomepage` instead
    ///
    pub const SetHomepage = setHomepage;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setHomepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` _homepage: []const u8 `
    ///
    pub fn setHomepage(self: Attica__Person, _homepage: []const u8) void {
        const homepage_str = qtc.libqt_string{
            .len = _homepage.len,
            .data = _homepage.ptr,
        };
        qtc.Attica__Person_SetHomepage(@ptrCast(self.ptr), homepage_str);
    }

    /// ### DEPRECATED: Use `homepage` instead
    ///
    pub const Homepage = homepage;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#homepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn homepage(self: Attica__Person, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Person_Homepage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Person.homepage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCity` instead
    ///
    pub const SetCity = setCity;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#setCity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` _city: []const u8 `
    ///
    pub fn setCity(self: Attica__Person, _city: []const u8) void {
        const city_str = qtc.libqt_string{
            .len = _city.len,
            .data = _city.ptr,
        };
        qtc.Attica__Person_SetCity(@ptrCast(self.ptr), city_str);
    }

    /// ### DEPRECATED: Use `city` instead
    ///
    pub const City = city;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#city)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn city(self: Attica__Person, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Person_City(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Person.city: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addExtendedAttribute` instead
    ///
    pub const AddExtendedAttribute = addExtendedAttribute;

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
    pub fn addExtendedAttribute(self: Attica__Person, key: []const u8, value: []const u8) void {
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

    /// ### DEPRECATED: Use `extendedAttribute` instead
    ///
    pub const ExtendedAttribute = extendedAttribute;

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
    pub fn extendedAttribute(self: Attica__Person, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.Attica__Person_ExtendedAttribute(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Person.extendedAttribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `extendedAttributes` instead
    ///
    pub const ExtendedAttributes = extendedAttributes;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn extendedAttributes(self: Attica__Person, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Attica__Person_ExtendedAttributes(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("Attica__Person.extendedAttributes: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("Attica__Person.extendedAttributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("Attica__Person.extendedAttributes: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-person.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Person `
    ///
    pub fn isValid(self: Attica__Person) bool {
        return qtc.Attica__Person_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Person `
    ///
    pub fn delete(self: Attica__Person) void {
        qtc.Attica__Person_Delete(@ptrCast(self.ptr));
    }
};
