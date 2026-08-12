const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDate = @import("libqt6").QDate;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://api.kde.org/attica-event.html)
pub const Attica__Event = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-event.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Event,

    pub const _is_Attica__Event = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Event object in C++ memory
    ///
    pub fn new() Attica__Event {
        return .{ .ptr = qtc.Attica__Event_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Event object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Event `
    ///
    pub fn new2(other: anytype) Attica__Event {
        comptime _ = @TypeOf(other)._is_Attica__Event;
        return .{ .ptr = qtc.Attica__Event_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` other: Attica__Event `
    ///
    pub fn operatorAssign(self: Attica__Event, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Event;
        qtc.Attica__Event_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__Event, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__Event_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__Event, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Event_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Event.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__Event, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__Event_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__Event, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Event_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Event.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDescription` instead
    ///
    pub const SetDescription = setDescription;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn setDescription(self: Attica__Event, _description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        qtc.Attica__Event_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: Attica__Event, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Event_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Event.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUser` instead
    ///
    pub const SetUser = setUser;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` _user: []const u8 `
    ///
    pub fn setUser(self: Attica__Event, _user: []const u8) void {
        const user_str = qtc.libqt_string{
            .len = _user.len,
            .data = _user.ptr,
        };
        qtc.Attica__Event_SetUser(@ptrCast(self.ptr), user_str);
    }

    /// ### DEPRECATED: Use `user` instead
    ///
    pub const User = user;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn user(self: Attica__Event, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Event_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Event.user: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStartDate` instead
    ///
    pub const SetStartDate = setStartDate;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setStartDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` _startDate: QDate `
    ///
    pub fn setStartDate(self: Attica__Event, _startDate: anytype) void {
        comptime _ = @TypeOf(_startDate)._is_QDate;
        qtc.Attica__Event_SetStartDate(@ptrCast(self.ptr), @ptrCast(_startDate.ptr));
    }

    /// ### DEPRECATED: Use `startDate` instead
    ///
    pub const StartDate = startDate;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#startDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    pub fn startDate(self: Attica__Event) QDate {
        return .{ .ptr = qtc.Attica__Event_StartDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setEndDate` instead
    ///
    pub const SetEndDate = setEndDate;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setEndDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` _endDate: QDate `
    ///
    pub fn setEndDate(self: Attica__Event, _endDate: anytype) void {
        comptime _ = @TypeOf(_endDate)._is_QDate;
        qtc.Attica__Event_SetEndDate(@ptrCast(self.ptr), @ptrCast(_endDate.ptr));
    }

    /// ### DEPRECATED: Use `endDate` instead
    ///
    pub const EndDate = endDate;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#endDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    pub fn endDate(self: Attica__Event) QDate {
        return .{ .ptr = qtc.Attica__Event_EndDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLatitude` instead
    ///
    pub const SetLatitude = setLatitude;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setLatitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` _latitude: f64 `
    ///
    pub fn setLatitude(self: Attica__Event, _latitude: f64) void {
        qtc.Attica__Event_SetLatitude(@ptrCast(self.ptr), @bitCast(_latitude));
    }

    /// ### DEPRECATED: Use `latitude` instead
    ///
    pub const Latitude = latitude;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#latitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    pub fn latitude(self: Attica__Event) f64 {
        return qtc.Attica__Event_Latitude(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLongitude` instead
    ///
    pub const SetLongitude = setLongitude;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setLongitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` _longitude: f64 `
    ///
    pub fn setLongitude(self: Attica__Event, _longitude: f64) void {
        qtc.Attica__Event_SetLongitude(@ptrCast(self.ptr), @bitCast(_longitude));
    }

    /// ### DEPRECATED: Use `longitude` instead
    ///
    pub const Longitude = longitude;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#longitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    pub fn longitude(self: Attica__Event) f64 {
        return qtc.Attica__Event_Longitude(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHomepage` instead
    ///
    pub const SetHomepage = setHomepage;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setHomepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` _homepage: QUrl `
    ///
    pub fn setHomepage(self: Attica__Event, _homepage: anytype) void {
        comptime _ = @TypeOf(_homepage)._is_QUrl;
        qtc.Attica__Event_SetHomepage(@ptrCast(self.ptr), @ptrCast(_homepage.ptr));
    }

    /// ### DEPRECATED: Use `homepage` instead
    ///
    pub const Homepage = homepage;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#homepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    pub fn homepage(self: Attica__Event) QUrl {
        return .{ .ptr = qtc.Attica__Event_Homepage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCountry` instead
    ///
    pub const SetCountry = setCountry;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setCountry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` _country: []const u8 `
    ///
    pub fn setCountry(self: Attica__Event, _country: []const u8) void {
        const country_str = qtc.libqt_string{
            .len = _country.len,
            .data = _country.ptr,
        };
        qtc.Attica__Event_SetCountry(@ptrCast(self.ptr), country_str);
    }

    /// ### DEPRECATED: Use `country` instead
    ///
    pub const Country = country;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn country(self: Attica__Event, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Event_Country(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Event.country: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCity` instead
    ///
    pub const SetCity = setCity;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setCity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` _city: []const u8 `
    ///
    pub fn setCity(self: Attica__Event, _city: []const u8) void {
        const city_str = qtc.libqt_string{
            .len = _city.len,
            .data = _city.ptr,
        };
        qtc.Attica__Event_SetCity(@ptrCast(self.ptr), city_str);
    }

    /// ### DEPRECATED: Use `city` instead
    ///
    pub const City = city;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#city)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn city(self: Attica__Event, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Event_City(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Event.city: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addExtendedAttribute` instead
    ///
    pub const AddExtendedAttribute = addExtendedAttribute;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#addExtendedAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn addExtendedAttribute(self: Attica__Event, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__Event_AddExtendedAttribute(@ptrCast(self.ptr), key_str, value_str);
    }

    /// ### DEPRECATED: Use `extendedAttribute` instead
    ///
    pub const ExtendedAttribute = extendedAttribute;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#extendedAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn extendedAttribute(self: Attica__Event, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.Attica__Event_ExtendedAttribute(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Event.extendedAttribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `extendedAttributes` instead
    ///
    pub const ExtendedAttributes = extendedAttributes;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn extendedAttributes(self: Attica__Event, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Attica__Event_ExtendedAttributes(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("Attica__Event.extendedAttributes: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("Attica__Event.extendedAttributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("Attica__Event.extendedAttributes: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    pub fn isValid(self: Attica__Event) bool {
        return qtc.Attica__Event_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Event `
    ///
    pub fn delete(self: Attica__Event) void {
        qtc.Attica__Event_Delete(@ptrCast(self.ptr));
    }
};
