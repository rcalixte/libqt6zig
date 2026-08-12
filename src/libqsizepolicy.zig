const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qsizepolicy_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html)
pub const QSizePolicy = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSizePolicy,

    pub const _is_QSizePolicy = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSizePolicy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSizePolicy `
    ///
    pub fn new(other: anytype) QSizePolicy {
        comptime _ = @TypeOf(other)._is_QSizePolicy;
        return .{ .ptr = qtc.QSizePolicy_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSizePolicy object and invalidate the source QSizePolicy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSizePolicy `
    ///
    pub fn new2(other: anytype) QSizePolicy {
        comptime _ = @TypeOf(other)._is_QSizePolicy;
        return .{ .ptr = qtc.QSizePolicy_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSizePolicy object in C++ memory
    ///
    pub fn new3() QSizePolicy {
        return .{ .ptr = qtc.QSizePolicy_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSizePolicy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn new4(horizontal: i32, vertical: i32) QSizePolicy {
        return .{ .ptr = qtc.QSizePolicy_new4(@bitCast(horizontal), @bitCast(vertical)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QSizePolicy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSizePolicy `
    ///
    pub fn new5(param1: anytype) QSizePolicy {
        comptime _ = @TypeOf(param1)._is_QSizePolicy;
        return .{ .ptr = qtc.QSizePolicy_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QSizePolicy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    /// ` typeVal: qsizepolicy_enums.ControlType `
    ///
    pub fn new6(horizontal: i32, vertical: i32, typeVal: i32) QSizePolicy {
        return .{ .ptr = qtc.QSizePolicy_new6(@bitCast(horizontal), @bitCast(vertical), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` other: QSizePolicy `
    ///
    pub fn copyAssign(self: QSizePolicy, other: QSizePolicy) void {
        qtc.QSizePolicy_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` other: QSizePolicy `
    ///
    pub fn moveAssign(self: QSizePolicy, other: QSizePolicy) void {
        qtc.QSizePolicy_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `horizontalPolicy` instead
    ///
    pub const HorizontalPolicy = horizontalPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#horizontalPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ## Returns:
    ///
    /// ` qsizepolicy_enums.Policy `
    ///
    pub fn horizontalPolicy(self: QSizePolicy) i32 {
        return qtc.QSizePolicy_HorizontalPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `verticalPolicy` instead
    ///
    pub const VerticalPolicy = verticalPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#verticalPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ## Returns:
    ///
    /// ` qsizepolicy_enums.Policy `
    ///
    pub fn verticalPolicy(self: QSizePolicy) i32 {
        return qtc.QSizePolicy_VerticalPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `controlType` instead
    ///
    pub const ControlType = controlType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#controlType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ## Returns:
    ///
    /// ` qsizepolicy_enums.ControlType `
    ///
    pub fn controlType(self: QSizePolicy) i32 {
        return qtc.QSizePolicy_ControlType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontalPolicy` instead
    ///
    pub const SetHorizontalPolicy = setHorizontalPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setHorizontalPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` d: qsizepolicy_enums.Policy `
    ///
    pub fn setHorizontalPolicy(self: QSizePolicy, d: i32) void {
        qtc.QSizePolicy_SetHorizontalPolicy(@ptrCast(self.ptr), @bitCast(d));
    }

    /// ### DEPRECATED: Use `setVerticalPolicy` instead
    ///
    pub const SetVerticalPolicy = setVerticalPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setVerticalPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` d: qsizepolicy_enums.Policy `
    ///
    pub fn setVerticalPolicy(self: QSizePolicy, d: i32) void {
        qtc.QSizePolicy_SetVerticalPolicy(@ptrCast(self.ptr), @bitCast(d));
    }

    /// ### DEPRECATED: Use `setControlType` instead
    ///
    pub const SetControlType = setControlType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setControlType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` typeVal: qsizepolicy_enums.ControlType `
    ///
    pub fn setControlType(self: QSizePolicy, typeVal: i32) void {
        qtc.QSizePolicy_SetControlType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `expandingDirections` instead
    ///
    pub const ExpandingDirections = expandingDirections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#expandingDirections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn expandingDirections(self: QSizePolicy) i32 {
        return qtc.QSizePolicy_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHeightForWidth` instead
    ///
    pub const SetHeightForWidth = setHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` b: bool `
    ///
    pub fn setHeightForWidth(self: QSizePolicy, b: bool) void {
        qtc.QSizePolicy_SetHeightForWidth(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `hasHeightForWidth` instead
    ///
    pub const HasHeightForWidth = hasHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn hasHeightForWidth(self: QSizePolicy) bool {
        return qtc.QSizePolicy_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWidthForHeight` instead
    ///
    pub const SetWidthForHeight = setWidthForHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setWidthForHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` b: bool `
    ///
    pub fn setWidthForHeight(self: QSizePolicy, b: bool) void {
        qtc.QSizePolicy_SetWidthForHeight(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `hasWidthForHeight` instead
    ///
    pub const HasWidthForHeight = hasWidthForHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#hasWidthForHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn hasWidthForHeight(self: QSizePolicy) bool {
        return qtc.QSizePolicy_HasWidthForHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` s: QSizePolicy `
    ///
    pub fn operatorEqual(self: QSizePolicy, s: anytype) bool {
        comptime _ = @TypeOf(s)._is_QSizePolicy;
        return qtc.QSizePolicy_OperatorEqual(@ptrCast(self.ptr), @ptrCast(s.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` s: QSizePolicy `
    ///
    pub fn operatorNotEqual(self: QSizePolicy, s: anytype) bool {
        comptime _ = @TypeOf(s)._is_QSizePolicy;
        return qtc.QSizePolicy_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(s.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn toQVariant(self: QSizePolicy) QVariant {
        return .{ .ptr = qtc.QSizePolicy_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `horizontalStretch` instead
    ///
    pub const HorizontalStretch = horizontalStretch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#horizontalStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn horizontalStretch(self: QSizePolicy) i32 {
        return qtc.QSizePolicy_HorizontalStretch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `verticalStretch` instead
    ///
    pub const VerticalStretch = verticalStretch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#verticalStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn verticalStretch(self: QSizePolicy) i32 {
        return qtc.QSizePolicy_VerticalStretch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontalStretch` instead
    ///
    pub const SetHorizontalStretch = setHorizontalStretch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setHorizontalStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` stretchFactor: i32 `
    ///
    pub fn setHorizontalStretch(self: QSizePolicy, stretchFactor: i32) void {
        qtc.QSizePolicy_SetHorizontalStretch(@ptrCast(self.ptr), @bitCast(stretchFactor));
    }

    /// ### DEPRECATED: Use `setVerticalStretch` instead
    ///
    pub const SetVerticalStretch = setVerticalStretch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setVerticalStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` stretchFactor: i32 `
    ///
    pub fn setVerticalStretch(self: QSizePolicy, stretchFactor: i32) void {
        qtc.QSizePolicy_SetVerticalStretch(@ptrCast(self.ptr), @bitCast(stretchFactor));
    }

    /// ### DEPRECATED: Use `retainSizeWhenHidden` instead
    ///
    pub const RetainSizeWhenHidden = retainSizeWhenHidden;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#retainSizeWhenHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn retainSizeWhenHidden(self: QSizePolicy) bool {
        return qtc.QSizePolicy_RetainSizeWhenHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRetainSizeWhenHidden` instead
    ///
    pub const SetRetainSizeWhenHidden = setRetainSizeWhenHidden;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setRetainSizeWhenHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` retainSize: bool `
    ///
    pub fn setRetainSizeWhenHidden(self: QSizePolicy, retainSize: bool) void {
        qtc.QSizePolicy_SetRetainSizeWhenHidden(@ptrCast(self.ptr), retainSize);
    }

    /// ### DEPRECATED: Use `transpose` instead
    ///
    pub const Transpose = transpose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#transpose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn transpose(self: QSizePolicy) void {
        qtc.QSizePolicy_Transpose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `transposed` instead
    ///
    pub const Transposed = transposed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn transposed(self: QSizePolicy) QSizePolicy {
        return .{ .ptr = qtc.QSizePolicy_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#dtor.QSizePolicy)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn delete(self: QSizePolicy) void {
        qtc.QSizePolicy_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#public-types)
pub const enums = struct {
    pub const PolicyFlag = enum(i32) {
        pub const GrowFlag: i32 = 1;
        pub const ExpandFlag: i32 = 2;
        pub const ShrinkFlag: i32 = 4;
        pub const IgnoreFlag: i32 = 8;
    };

    pub const Policy = enum(i32) {
        pub const Fixed: i32 = 0;
        pub const Minimum: i32 = 1;
        pub const Maximum: i32 = 4;
        pub const Preferred: i32 = 5;
        pub const MinimumExpanding: i32 = 3;
        pub const Expanding: i32 = 7;
        pub const Ignored: i32 = 13;
    };

    pub const ControlType = enum(i32) {
        pub const DefaultType: i32 = 1;
        pub const ButtonBox: i32 = 2;
        pub const CheckBox: i32 = 4;
        pub const ComboBox: i32 = 8;
        pub const Frame: i32 = 16;
        pub const GroupBox: i32 = 32;
        pub const Label: i32 = 64;
        pub const Line: i32 = 128;
        pub const LineEdit: i32 = 256;
        pub const PushButton: i32 = 512;
        pub const RadioButton: i32 = 1024;
        pub const Slider: i32 = 2048;
        pub const SpinBox: i32 = 4096;
        pub const TabWidget: i32 = 8192;
        pub const ToolButton: i32 = 16384;
    };
};
