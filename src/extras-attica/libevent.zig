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

    /// New constructs a new Attica::Event object.
    ///
    pub fn New() Attica__Event {
        return .{ .ptr = qtc.Attica__Event_new() };
    }

    /// New2 constructs a new Attica::Event object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Event `
    ///
    pub fn New2(other: anytype) Attica__Event {
        comptime _ = @TypeOf(other)._is_Attica__Event;
        return .{ .ptr = qtc.Attica__Event_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` other: Attica__Event `
    ///
    pub fn OperatorAssign(self: Attica__Event, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Event;
        qtc.Attica__Event_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__Event, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Event_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__Event, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Event_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__event.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: Attica__Event, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Event_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__Event, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Event_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__event.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetDescription(self: Attica__Event, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Attica__Event_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: Attica__Event, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Event_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__event.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` user: []const u8 `
    ///
    pub fn SetUser(self: Attica__Event, user: []const u8) void {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        qtc.Attica__Event_SetUser(@ptrCast(self.ptr), user_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn User(self: Attica__Event, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Event_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__event.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setStartDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` startDate: QDate `
    ///
    pub fn SetStartDate(self: Attica__Event, startDate: anytype) void {
        comptime _ = @TypeOf(startDate)._is_QDate;
        qtc.Attica__Event_SetStartDate(@ptrCast(self.ptr), @ptrCast(startDate.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#startDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    pub fn StartDate(self: Attica__Event) QDate {
        return .{ .ptr = qtc.Attica__Event_StartDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setEndDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` endDate: QDate `
    ///
    pub fn SetEndDate(self: Attica__Event, endDate: anytype) void {
        comptime _ = @TypeOf(endDate)._is_QDate;
        qtc.Attica__Event_SetEndDate(@ptrCast(self.ptr), @ptrCast(endDate.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#endDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    pub fn EndDate(self: Attica__Event) QDate {
        return .{ .ptr = qtc.Attica__Event_EndDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setLatitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` latitude: f64 `
    ///
    pub fn SetLatitude(self: Attica__Event, latitude: f64) void {
        qtc.Attica__Event_SetLatitude(@ptrCast(self.ptr), @bitCast(latitude));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#latitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    pub fn Latitude(self: Attica__Event) f64 {
        return qtc.Attica__Event_Latitude(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setLongitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` longitude: f64 `
    ///
    pub fn SetLongitude(self: Attica__Event, longitude: f64) void {
        qtc.Attica__Event_SetLongitude(@ptrCast(self.ptr), @bitCast(longitude));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#longitude)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    pub fn Longitude(self: Attica__Event) f64 {
        return qtc.Attica__Event_Longitude(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setHomepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` homepage: QUrl `
    ///
    pub fn SetHomepage(self: Attica__Event, homepage: anytype) void {
        comptime _ = @TypeOf(homepage)._is_QUrl;
        qtc.Attica__Event_SetHomepage(@ptrCast(self.ptr), @ptrCast(homepage.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#homepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    pub fn Homepage(self: Attica__Event) QUrl {
        return .{ .ptr = qtc.Attica__Event_Homepage(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setCountry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` country: []const u8 `
    ///
    pub fn SetCountry(self: Attica__Event, country: []const u8) void {
        const country_str = qtc.libqt_string{
            .len = country.len,
            .data = country.ptr,
        };
        qtc.Attica__Event_SetCountry(@ptrCast(self.ptr), country_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Country(self: Attica__Event, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Event_Country(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__event.Country: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#setCity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` city: []const u8 `
    ///
    pub fn SetCity(self: Attica__Event, city: []const u8) void {
        const city_str = qtc.libqt_string{
            .len = city.len,
            .data = city.ptr,
        };
        qtc.Attica__Event_SetCity(@ptrCast(self.ptr), city_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#city)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn City(self: Attica__Event, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Event_City(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__event.City: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn AddExtendedAttribute(self: Attica__Event, key: []const u8, value: []const u8) void {
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
    pub fn ExtendedAttribute(self: Attica__Event, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.Attica__Event_ExtendedAttribute(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__event.ExtendedAttribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtendedAttributes(self: Attica__Event, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Attica__Event_ExtendedAttributes(@ptrCast(self.ptr));
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("attica__event.ExtendedAttributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("attica__event.ExtendedAttributes: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("attica__event.ExtendedAttributes: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-event.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Event `
    ///
    pub fn IsValid(self: Attica__Event) bool {
        return qtc.Attica__Event_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Event `
    ///
    pub fn Delete(self: Attica__Event) void {
        qtc.Attica__Event_Delete(@ptrCast(self.ptr));
    }
};
