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

    /// New constructs a new QGeoPositionInfo object.
    ///
    pub fn New() QGeoPositionInfo {
        return .{ .ptr = qtc.QGeoPositionInfo_new() };
    }

    /// New2 constructs a new QGeoPositionInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    /// ` updateTime: QDateTime `
    ///
    pub fn New2(coordinate: anytype, updateTime: anytype) QGeoPositionInfo {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        comptime _ = @TypeOf(updateTime)._is_QDateTime;
        return .{ .ptr = qtc.QGeoPositionInfo_new2(@ptrCast(coordinate.ptr), @ptrCast(updateTime.ptr)) };
    }

    /// New3 constructs a new QGeoPositionInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoPositionInfo `
    ///
    pub fn New3(other: anytype) QGeoPositionInfo {
        comptime _ = @TypeOf(other)._is_QGeoPositionInfo;
        return .{ .ptr = qtc.QGeoPositionInfo_new3(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    /// ` other: QGeoPositionInfo `
    ///
    pub fn OperatorAssign(self: QGeoPositionInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoPositionInfo;
        qtc.QGeoPositionInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    /// ` other: QGeoPositionInfo `
    ///
    pub fn Swap(self: QGeoPositionInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoPositionInfo;
        qtc.QGeoPositionInfo_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    pub fn IsValid(self: QGeoPositionInfo) bool {
        return qtc.QGeoPositionInfo_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    /// ` timestamp: QDateTime `
    ///
    pub fn SetTimestamp(self: QGeoPositionInfo, timestamp: anytype) void {
        comptime _ = @TypeOf(timestamp)._is_QDateTime;
        qtc.QGeoPositionInfo_SetTimestamp(@ptrCast(self.ptr), @ptrCast(timestamp.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    pub fn Timestamp(self: QGeoPositionInfo) QDateTime {
        return .{ .ptr = qtc.QGeoPositionInfo_Timestamp(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#setCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn SetCoordinate(self: QGeoPositionInfo, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoPositionInfo_SetCoordinate(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#coordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    pub fn Coordinate(self: QGeoPositionInfo) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoPositionInfo_Coordinate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    /// ` attribute: qgeopositioninfo_enums.Attribute `
    ///
    /// ` value: f64 `
    ///
    pub fn SetAttribute(self: QGeoPositionInfo, attribute: i32, value: f64) void {
        qtc.QGeoPositionInfo_SetAttribute(@ptrCast(self.ptr), @bitCast(attribute), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    /// ` attribute: qgeopositioninfo_enums.Attribute `
    ///
    pub fn Attribute(self: QGeoPositionInfo, attribute: i32) f64 {
        return qtc.QGeoPositionInfo_Attribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#removeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    /// ` attribute: qgeopositioninfo_enums.Attribute `
    ///
    pub fn RemoveAttribute(self: QGeoPositionInfo, attribute: i32) void {
        qtc.QGeoPositionInfo_RemoveAttribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    /// ` attribute: qgeopositioninfo_enums.Attribute `
    ///
    pub fn HasAttribute(self: QGeoPositionInfo, attribute: i32) bool {
        return qtc.QGeoPositionInfo_HasAttribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfo `
    ///
    pub fn Detach(self: QGeoPositionInfo) void {
        qtc.QGeoPositionInfo_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#dtor.QGeoPositionInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoPositionInfo `
    ///
    pub fn Delete(self: QGeoPositionInfo) void {
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
