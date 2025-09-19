const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// https://api.kde.org/attica-event.html
pub const attica__event = struct {
    /// New constructs a new Attica::Event object.
    ///
    ///
    pub fn New() QtC.Attica__Event {
        return qtc.Attica__Event_new();
    }

    /// New2 constructs a new Attica::Event object.
    ///
    /// ``` other: QtC.Attica__Event ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__Event {
        return qtc.Attica__Event_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__Event, other: QtC.Attica__Event ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Event_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#setId)
    ///
    /// ``` self: QtC.Attica__Event, id: []const u8 ```
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Event_SetId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#id)
    ///
    /// ``` self: QtC.Attica__Event, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Event_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::event.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#setName)
    ///
    /// ``` self: QtC.Attica__Event, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Event_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#name)
    ///
    /// ``` self: QtC.Attica__Event, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Event_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::event.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#setDescription)
    ///
    /// ``` self: QtC.Attica__Event, description: []const u8 ```
    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Attica__Event_SetDescription(@ptrCast(self), description_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#description)
    ///
    /// ``` self: QtC.Attica__Event, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Event_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::event.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#setUser)
    ///
    /// ``` self: QtC.Attica__Event, user: []const u8 ```
    pub fn SetUser(self: ?*anyopaque, user: []const u8) void {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        qtc.Attica__Event_SetUser(@ptrCast(self), user_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#user)
    ///
    /// ``` self: QtC.Attica__Event, allocator: std.mem.Allocator ```
    pub fn User(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Event_User(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::event.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#setStartDate)
    ///
    /// ``` self: QtC.Attica__Event, startDate: QtC.QDate ```
    pub fn SetStartDate(self: ?*anyopaque, startDate: ?*anyopaque) void {
        qtc.Attica__Event_SetStartDate(@ptrCast(self), @ptrCast(startDate));
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#startDate)
    ///
    /// ``` self: QtC.Attica__Event ```
    pub fn StartDate(self: ?*anyopaque) QtC.QDate {
        return qtc.Attica__Event_StartDate(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#setEndDate)
    ///
    /// ``` self: QtC.Attica__Event, endDate: QtC.QDate ```
    pub fn SetEndDate(self: ?*anyopaque, endDate: ?*anyopaque) void {
        qtc.Attica__Event_SetEndDate(@ptrCast(self), @ptrCast(endDate));
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#endDate)
    ///
    /// ``` self: QtC.Attica__Event ```
    pub fn EndDate(self: ?*anyopaque) QtC.QDate {
        return qtc.Attica__Event_EndDate(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#setLatitude)
    ///
    /// ``` self: QtC.Attica__Event, latitude: f64 ```
    pub fn SetLatitude(self: ?*anyopaque, latitude: f64) void {
        qtc.Attica__Event_SetLatitude(@ptrCast(self), @floatCast(latitude));
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#latitude)
    ///
    /// ``` self: QtC.Attica__Event ```
    pub fn Latitude(self: ?*anyopaque) f64 {
        return qtc.Attica__Event_Latitude(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#setLongitude)
    ///
    /// ``` self: QtC.Attica__Event, longitude: f64 ```
    pub fn SetLongitude(self: ?*anyopaque, longitude: f64) void {
        qtc.Attica__Event_SetLongitude(@ptrCast(self), @floatCast(longitude));
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#longitude)
    ///
    /// ``` self: QtC.Attica__Event ```
    pub fn Longitude(self: ?*anyopaque) f64 {
        return qtc.Attica__Event_Longitude(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#setHomepage)
    ///
    /// ``` self: QtC.Attica__Event, homepage: QtC.QUrl ```
    pub fn SetHomepage(self: ?*anyopaque, homepage: ?*anyopaque) void {
        qtc.Attica__Event_SetHomepage(@ptrCast(self), @ptrCast(homepage));
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#homepage)
    ///
    /// ``` self: QtC.Attica__Event ```
    pub fn Homepage(self: ?*anyopaque) QtC.QUrl {
        return qtc.Attica__Event_Homepage(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#setCountry)
    ///
    /// ``` self: QtC.Attica__Event, country: []const u8 ```
    pub fn SetCountry(self: ?*anyopaque, country: []const u8) void {
        const country_str = qtc.libqt_string{
            .len = country.len,
            .data = country.ptr,
        };
        qtc.Attica__Event_SetCountry(@ptrCast(self), country_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#country)
    ///
    /// ``` self: QtC.Attica__Event, allocator: std.mem.Allocator ```
    pub fn Country(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Event_Country(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::event.Country: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#setCity)
    ///
    /// ``` self: QtC.Attica__Event, city: []const u8 ```
    pub fn SetCity(self: ?*anyopaque, city: []const u8) void {
        const city_str = qtc.libqt_string{
            .len = city.len,
            .data = city.ptr,
        };
        qtc.Attica__Event_SetCity(@ptrCast(self), city_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#city)
    ///
    /// ``` self: QtC.Attica__Event, allocator: std.mem.Allocator ```
    pub fn City(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Event_City(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::event.City: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#addExtendedAttribute)
    ///
    /// ``` self: QtC.Attica__Event, key: []const u8, value: []const u8 ```
    pub fn AddExtendedAttribute(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__Event_AddExtendedAttribute(@ptrCast(self), key_str, value_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#extendedAttribute)
    ///
    /// ``` self: QtC.Attica__Event, key: []const u8, allocator: std.mem.Allocator ```
    pub fn ExtendedAttribute(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.Attica__Event_ExtendedAttribute(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::event.ExtendedAttribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#extendedAttributes)
    ///
    /// ``` self: QtC.Attica__Event, allocator: std.mem.Allocator ```
    pub fn ExtendedAttributes(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Attica__Event_ExtendedAttributes(@ptrCast(self));
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
            _ret.put(allocator, _entry_slice, _value) catch @panic("attica::event.ExtendedAttributes: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-event.html#isValid)
    ///
    /// ``` self: QtC.Attica__Event ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Event_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__Event ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Event_Delete(@ptrCast(self));
    }
};
