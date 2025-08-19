const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qscrollerproperties_enums = enums;

/// https://doc.qt.io/qt-6/qscrollerproperties.html
pub const qscrollerproperties = struct {
    /// New constructs a new QScrollerProperties object.
    ///
    ///
    pub fn New() QtC.QScrollerProperties {
        return qtc.QScrollerProperties_new();
    }

    /// New2 constructs a new QScrollerProperties object.
    ///
    /// ``` sp: QtC.QScrollerProperties ```
    pub fn New2(sp: ?*anyopaque) QtC.QScrollerProperties {
        return qtc.QScrollerProperties_new2(@ptrCast(sp));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#operator-eq)
    ///
    /// ``` self: QtC.QScrollerProperties, sp: QtC.QScrollerProperties ```
    pub fn OperatorAssign(self: ?*anyopaque, sp: ?*anyopaque) void {
        qtc.QScrollerProperties_OperatorAssign(@ptrCast(self), @ptrCast(sp));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QScrollerProperties, sp: QtC.QScrollerProperties ```
    pub fn OperatorEqual(self: ?*anyopaque, sp: ?*anyopaque) bool {
        return qtc.QScrollerProperties_OperatorEqual(@ptrCast(self), @ptrCast(sp));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#operator-not-eq)
    ///
    /// ``` self: QtC.QScrollerProperties, sp: QtC.QScrollerProperties ```
    pub fn OperatorNotEqual(self: ?*anyopaque, sp: ?*anyopaque) bool {
        return qtc.QScrollerProperties_OperatorNotEqual(@ptrCast(self), @ptrCast(sp));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#setDefaultScrollerProperties)
    ///
    /// ``` sp: QtC.QScrollerProperties ```
    pub fn SetDefaultScrollerProperties(sp: ?*anyopaque) void {
        qtc.QScrollerProperties_SetDefaultScrollerProperties(@ptrCast(sp));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#unsetDefaultScrollerProperties)
    ///
    ///
    pub fn UnsetDefaultScrollerProperties() void {
        qtc.QScrollerProperties_UnsetDefaultScrollerProperties();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#scrollMetric)
    ///
    /// ``` self: QtC.QScrollerProperties, metric: qscrollerproperties_enums.ScrollMetric ```
    pub fn ScrollMetric(self: ?*anyopaque, metric: i32) QtC.QVariant {
        return qtc.QScrollerProperties_ScrollMetric(@ptrCast(self), @intCast(metric));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#setScrollMetric)
    ///
    /// ``` self: QtC.QScrollerProperties, metric: qscrollerproperties_enums.ScrollMetric, value: QtC.QVariant ```
    pub fn SetScrollMetric(self: ?*anyopaque, metric: i32, value: ?*anyopaque) void {
        qtc.QScrollerProperties_SetScrollMetric(@ptrCast(self), @intCast(metric), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscrollerproperties.html#dtor.QScrollerProperties)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QScrollerProperties ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScrollerProperties_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qscrollerproperties.html#types
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
