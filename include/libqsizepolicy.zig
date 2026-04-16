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

    /// New constructs a new QSizePolicy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSizePolicy `
    ///
    pub fn New(other: anytype) QSizePolicy {
        comptime _ = @TypeOf(other)._is_QSizePolicy;
        return .{ .ptr = qtc.QSizePolicy_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QSizePolicy object and invalidates the source QSizePolicy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSizePolicy `
    ///
    pub fn New2(other: anytype) QSizePolicy {
        comptime _ = @TypeOf(other)._is_QSizePolicy;
        return .{ .ptr = qtc.QSizePolicy_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QSizePolicy object.
    ///
    pub fn New3() QSizePolicy {
        return .{ .ptr = qtc.QSizePolicy_new3() };
    }

    /// New4 constructs a new QSizePolicy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn New4(horizontal: i32, vertical: i32) QSizePolicy {
        return .{ .ptr = qtc.QSizePolicy_new4(@bitCast(horizontal), @bitCast(vertical)) };
    }

    /// New5 constructs a new QSizePolicy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSizePolicy `
    ///
    pub fn New5(param1: anytype) QSizePolicy {
        comptime _ = @TypeOf(param1)._is_QSizePolicy;
        return .{ .ptr = qtc.QSizePolicy_new5(@ptrCast(param1.ptr)) };
    }

    /// New6 constructs a new QSizePolicy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    /// ` typeVal: qsizepolicy_enums.ControlType `
    ///
    pub fn New6(horizontal: i32, vertical: i32, typeVal: i32) QSizePolicy {
        return .{ .ptr = qtc.QSizePolicy_new6(@bitCast(horizontal), @bitCast(vertical), @bitCast(typeVal)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` other: QSizePolicy `
    ///
    pub fn CopyAssign(self: QSizePolicy, other: QSizePolicy) void {
        qtc.QSizePolicy_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` other: QSizePolicy `
    ///
    pub fn MoveAssign(self: QSizePolicy, other: QSizePolicy) void {
        qtc.QSizePolicy_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

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
    pub fn HorizontalPolicy(self: QSizePolicy) i32 {
        return qtc.QSizePolicy_HorizontalPolicy(@ptrCast(self.ptr));
    }

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
    pub fn VerticalPolicy(self: QSizePolicy) i32 {
        return qtc.QSizePolicy_VerticalPolicy(@ptrCast(self.ptr));
    }

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
    pub fn ControlType(self: QSizePolicy) i32 {
        return qtc.QSizePolicy_ControlType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setHorizontalPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` d: qsizepolicy_enums.Policy `
    ///
    pub fn SetHorizontalPolicy(self: QSizePolicy, d: i32) void {
        qtc.QSizePolicy_SetHorizontalPolicy(@ptrCast(self.ptr), @bitCast(d));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setVerticalPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` d: qsizepolicy_enums.Policy `
    ///
    pub fn SetVerticalPolicy(self: QSizePolicy, d: i32) void {
        qtc.QSizePolicy_SetVerticalPolicy(@ptrCast(self.ptr), @bitCast(d));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setControlType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` typeVal: qsizepolicy_enums.ControlType `
    ///
    pub fn SetControlType(self: QSizePolicy, typeVal: i32) void {
        qtc.QSizePolicy_SetControlType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn ExpandingDirections(self: QSizePolicy) i32 {
        return qtc.QSizePolicy_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` b: bool `
    ///
    pub fn SetHeightForWidth(self: QSizePolicy, b: bool) void {
        qtc.QSizePolicy_SetHeightForWidth(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn HasHeightForWidth(self: QSizePolicy) bool {
        return qtc.QSizePolicy_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setWidthForHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` b: bool `
    ///
    pub fn SetWidthForHeight(self: QSizePolicy, b: bool) void {
        qtc.QSizePolicy_SetWidthForHeight(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#hasWidthForHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn HasWidthForHeight(self: QSizePolicy) bool {
        return qtc.QSizePolicy_HasWidthForHeight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` s: QSizePolicy `
    ///
    pub fn OperatorEqual(self: QSizePolicy, s: anytype) bool {
        comptime _ = @TypeOf(s)._is_QSizePolicy;
        return qtc.QSizePolicy_OperatorEqual(@ptrCast(self.ptr), @ptrCast(s.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` s: QSizePolicy `
    ///
    pub fn OperatorNotEqual(self: QSizePolicy, s: anytype) bool {
        comptime _ = @TypeOf(s)._is_QSizePolicy;
        return qtc.QSizePolicy_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(s.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn ToQVariant(self: QSizePolicy) QVariant {
        return .{ .ptr = qtc.QSizePolicy_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#horizontalStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn HorizontalStretch(self: QSizePolicy) i32 {
        return qtc.QSizePolicy_HorizontalStretch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#verticalStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn VerticalStretch(self: QSizePolicy) i32 {
        return qtc.QSizePolicy_VerticalStretch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setHorizontalStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` stretchFactor: i32 `
    ///
    pub fn SetHorizontalStretch(self: QSizePolicy, stretchFactor: i32) void {
        qtc.QSizePolicy_SetHorizontalStretch(@ptrCast(self.ptr), @bitCast(stretchFactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setVerticalStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` stretchFactor: i32 `
    ///
    pub fn SetVerticalStretch(self: QSizePolicy, stretchFactor: i32) void {
        qtc.QSizePolicy_SetVerticalStretch(@ptrCast(self.ptr), @bitCast(stretchFactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#retainSizeWhenHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn RetainSizeWhenHidden(self: QSizePolicy) bool {
        return qtc.QSizePolicy_RetainSizeWhenHidden(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setRetainSizeWhenHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    /// ` retainSize: bool `
    ///
    pub fn SetRetainSizeWhenHidden(self: QSizePolicy, retainSize: bool) void {
        qtc.QSizePolicy_SetRetainSizeWhenHidden(@ptrCast(self.ptr), retainSize);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#transpose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn Transpose(self: QSizePolicy) void {
        qtc.QSizePolicy_Transpose(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn Transposed(self: QSizePolicy) QSizePolicy {
        return .{ .ptr = qtc.QSizePolicy_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#dtor.QSizePolicy)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSizePolicy `
    ///
    pub fn Delete(self: QSizePolicy) void {
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
