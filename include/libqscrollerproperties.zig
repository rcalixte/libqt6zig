const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const qscrollerproperties_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollerproperties.html)
pub const QScrollerProperties = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollerproperties.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QScrollerProperties,

    pub const _is_QScrollerProperties = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QScrollerProperties object in C++ memory
    ///
    pub fn new() QScrollerProperties {
        return .{ .ptr = qtc.QScrollerProperties_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QScrollerProperties object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` sp: QScrollerProperties `
    ///
    pub fn new2(sp: anytype) QScrollerProperties {
        comptime _ = @TypeOf(sp)._is_QScrollerProperties;
        return .{ .ptr = qtc.QScrollerProperties_new2(@ptrCast(sp.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollerproperties.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollerProperties `
    ///
    /// ` sp: QScrollerProperties `
    ///
    pub fn operatorAssign(self: QScrollerProperties, sp: anytype) void {
        comptime _ = @TypeOf(sp)._is_QScrollerProperties;
        qtc.QScrollerProperties_OperatorAssign(@ptrCast(self.ptr), @ptrCast(sp.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollerproperties.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollerProperties `
    ///
    /// ` sp: QScrollerProperties `
    ///
    pub fn operatorEqual(self: QScrollerProperties, sp: anytype) bool {
        comptime _ = @TypeOf(sp)._is_QScrollerProperties;
        return qtc.QScrollerProperties_OperatorEqual(@ptrCast(self.ptr), @ptrCast(sp.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollerproperties.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollerProperties `
    ///
    /// ` sp: QScrollerProperties `
    ///
    pub fn operatorNotEqual(self: QScrollerProperties, sp: anytype) bool {
        comptime _ = @TypeOf(sp)._is_QScrollerProperties;
        return qtc.QScrollerProperties_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(sp.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultScrollerProperties` instead
    ///
    pub const SetDefaultScrollerProperties = setDefaultScrollerProperties;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollerproperties.html#setDefaultScrollerProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` sp: QScrollerProperties `
    ///
    pub fn setDefaultScrollerProperties(sp: anytype) void {
        comptime _ = @TypeOf(sp)._is_QScrollerProperties;
        qtc.QScrollerProperties_SetDefaultScrollerProperties(@ptrCast(sp.ptr));
    }

    /// ### DEPRECATED: Use `unsetDefaultScrollerProperties` instead
    ///
    pub const UnsetDefaultScrollerProperties = unsetDefaultScrollerProperties;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollerproperties.html#unsetDefaultScrollerProperties)
    ///
    pub fn unsetDefaultScrollerProperties() void {
        qtc.QScrollerProperties_UnsetDefaultScrollerProperties();
    }

    /// ### DEPRECATED: Use `scrollMetric` instead
    ///
    pub const ScrollMetric = scrollMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollerproperties.html#scrollMetric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollerProperties `
    ///
    /// ` metric: qscrollerproperties_enums.ScrollMetric `
    ///
    pub fn scrollMetric(self: QScrollerProperties, metric: i32) QVariant {
        return .{ .ptr = qtc.QScrollerProperties_ScrollMetric(@ptrCast(self.ptr), @bitCast(metric)) };
    }

    /// ### DEPRECATED: Use `setScrollMetric` instead
    ///
    pub const SetScrollMetric = setScrollMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollerproperties.html#setScrollMetric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollerProperties `
    ///
    /// ` metric: qscrollerproperties_enums.ScrollMetric `
    ///
    /// ` value: QVariant `
    ///
    pub fn setScrollMetric(self: QScrollerProperties, metric: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QScrollerProperties_SetScrollMetric(@ptrCast(self.ptr), @bitCast(metric), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollerproperties.html#dtor.QScrollerProperties)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QScrollerProperties `
    ///
    pub fn delete(self: QScrollerProperties) void {
        qtc.QScrollerProperties_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollerproperties.html#public-types)
pub const enums = struct {
    pub const OvershootPolicy = enum {
        pub const OvershootWhenScrollable: i32 = 0;
        pub const OvershootAlwaysOff: i32 = 1;
        pub const OvershootAlwaysOn: i32 = 2;
    };

    pub const FrameRates = enum {
        pub const Standard: i32 = 0;
        pub const Fps60: i32 = 1;
        pub const Fps30: i32 = 2;
        pub const Fps20: i32 = 3;
    };

    pub const ScrollMetric = enum {
        pub const MousePressEventDelay: i32 = 0;
        pub const DragStartDistance: i32 = 1;
        pub const DragVelocitySmoothingFactor: i32 = 2;
        pub const AxisLockThreshold: i32 = 3;
        pub const ScrollingCurve: i32 = 4;
        pub const DecelerationFactor: i32 = 5;
        pub const MinimumVelocity: i32 = 6;
        pub const MaximumVelocity: i32 = 7;
        pub const MaximumClickThroughVelocity: i32 = 8;
        pub const AcceleratingFlickMaximumTime: i32 = 9;
        pub const AcceleratingFlickSpeedupFactor: i32 = 10;
        pub const SnapPositionRatio: i32 = 11;
        pub const SnapTime: i32 = 12;
        pub const OvershootDragResistanceFactor: i32 = 13;
        pub const OvershootDragDistanceFactor: i32 = 14;
        pub const OvershootScrollDistanceFactor: i32 = 15;
        pub const OvershootScrollTime: i32 = 16;
        pub const HorizontalOvershootPolicy: i32 = 17;
        pub const VerticalOvershootPolicy: i32 = 18;
        pub const FrameRate: i32 = 19;
        pub const ScrollMetricCount: i32 = 20;
    };
};
