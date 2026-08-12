const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const QGeoCoordinate = @import("libqt6").QGeoCoordinate;
const qgeopositioninfo_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html)
pub const QGeoPositionInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoPositionInfo,

    pub const _is_QGeoPositionInfo = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoPositionInfo object in C++ memory
    ///
    pub fn new() QGeoPositionInfo {
        return .{ .ptr = qtc.QGeoPositionInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoPositionInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _coordinate: QGeoCoordinate `
    ///
    /// ` updateTime: QDateTime `
    ///
    pub fn new2(_coordinate: anytype, updateTime: anytype) QGeoPositionInfo {
        comptime _ = @TypeOf(_coordinate)._is_QGeoCoordinate;
        comptime _ = @TypeOf(updateTime)._is_QDateTime;
        return .{ .ptr = qtc.QGeoPositionInfo_new2(@ptrCast(_coordinate.ptr), @ptrCast(updateTime.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QGeoPositionInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoPositionInfo `
    ///
    pub fn new3(other: anytype) QGeoPositionInfo {
        comptime _ = @TypeOf(other)._is_QGeoPositionInfo;
        return .{ .ptr = qtc.QGeoPositionInfo_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    /// ` other: QGeoPositionInfo `
    ///
    pub fn operatorAssign(self: QGeoPositionInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoPositionInfo;
        qtc.QGeoPositionInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    /// ` other: QGeoPositionInfo `
    ///
    pub fn swap(self: QGeoPositionInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoPositionInfo;
        qtc.QGeoPositionInfo_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    pub fn isValid(self: QGeoPositionInfo) bool {
        return qtc.QGeoPositionInfo_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    /// ` _timestamp: QDateTime `
    ///
    pub fn setTimestamp(self: QGeoPositionInfo, _timestamp: anytype) void {
        comptime _ = @TypeOf(_timestamp)._is_QDateTime;
        qtc.QGeoPositionInfo_SetTimestamp(@ptrCast(self.ptr), @ptrCast(_timestamp.ptr));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    pub fn timestamp(self: QGeoPositionInfo) QDateTime {
        return .{ .ptr = qtc.QGeoPositionInfo_Timestamp(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCoordinate` instead
    ///
    pub const SetCoordinate = setCoordinate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#setCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    /// ` _coordinate: QGeoCoordinate `
    ///
    pub fn setCoordinate(self: QGeoPositionInfo, _coordinate: anytype) void {
        comptime _ = @TypeOf(_coordinate)._is_QGeoCoordinate;
        qtc.QGeoPositionInfo_SetCoordinate(@ptrCast(self.ptr), @ptrCast(_coordinate.ptr));
    }

    /// ### DEPRECATED: Use `coordinate` instead
    ///
    pub const Coordinate = coordinate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#coordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    pub fn coordinate(self: QGeoPositionInfo) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoPositionInfo_Coordinate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    /// ` _attribute: qgeopositioninfo_enums.Attribute `
    ///
    /// ` value: f64 `
    ///
    pub fn setAttribute(self: QGeoPositionInfo, _attribute: i32, value: f64) void {
        qtc.QGeoPositionInfo_SetAttribute(@ptrCast(self.ptr), @bitCast(_attribute), @bitCast(value));
    }

    /// ### DEPRECATED: Use `attribute` instead
    ///
    pub const Attribute = attribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    /// ` _attribute: qgeopositioninfo_enums.Attribute `
    ///
    pub fn attribute(self: QGeoPositionInfo, _attribute: i32) f64 {
        return qtc.QGeoPositionInfo_Attribute(@ptrCast(self.ptr), @bitCast(_attribute));
    }

    /// ### DEPRECATED: Use `removeAttribute` instead
    ///
    pub const RemoveAttribute = removeAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#removeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    /// ` _attribute: qgeopositioninfo_enums.Attribute `
    ///
    pub fn removeAttribute(self: QGeoPositionInfo, _attribute: i32) void {
        qtc.QGeoPositionInfo_RemoveAttribute(@ptrCast(self.ptr), @bitCast(_attribute));
    }

    /// ### DEPRECATED: Use `hasAttribute` instead
    ///
    pub const HasAttribute = hasAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    /// ` _attribute: qgeopositioninfo_enums.Attribute `
    ///
    pub fn hasAttribute(self: QGeoPositionInfo, _attribute: i32) bool {
        return qtc.QGeoPositionInfo_HasAttribute(@ptrCast(self.ptr), @bitCast(_attribute));
    }

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    pub fn detach(self: QGeoPositionInfo) void {
        qtc.QGeoPositionInfo_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#dtor.QGeoPositionInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoPositionInfo `
    ///
    pub fn delete(self: QGeoPositionInfo) void {
        qtc.QGeoPositionInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#public-types)
pub const enums = struct {
    pub const Attribute = enum(i32) {
        pub const Direction: i32 = 0;
        pub const GroundSpeed: i32 = 1;
        pub const VerticalSpeed: i32 = 2;
        pub const MagneticVariation: i32 = 3;
        pub const HorizontalAccuracy: i32 = 4;
        pub const VerticalAccuracy: i32 = 5;
        pub const DirectionAccuracy: i32 = 6;
    };
};
