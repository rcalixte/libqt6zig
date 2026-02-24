const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qsizepolicy_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html)
pub const qsizepolicy = struct {
    /// New constructs a new QSizePolicy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QSizePolicy `
    ///
    pub fn New(other: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QSizePolicy_new(@ptrCast(other));
    }

    /// New2 constructs a new QSizePolicy object and invalidates the source QSizePolicy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QSizePolicy `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QSizePolicy_new2(@ptrCast(other));
    }

    /// New3 constructs a new QSizePolicy object.
    ///
    pub fn New3() QtC.QSizePolicy {
        return qtc.QSizePolicy_new3();
    }

    /// New4 constructs a new QSizePolicy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn New4(horizontal: i32, vertical: i32) QtC.QSizePolicy {
        return qtc.QSizePolicy_new4(@bitCast(horizontal), @bitCast(vertical));
    }

    /// New5 constructs a new QSizePolicy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QSizePolicy `
    ///
    pub fn New5(param1: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QSizePolicy_new5(@ptrCast(param1));
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
    pub fn New6(horizontal: i32, vertical: i32, typeVal: i32) QtC.QSizePolicy {
        return qtc.QSizePolicy_new6(@bitCast(horizontal), @bitCast(vertical), @bitCast(typeVal));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    /// ` other: QtC.QSizePolicy `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSizePolicy_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    /// ` other: QtC.QSizePolicy `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSizePolicy_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#horizontalPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    /// ## Returns:
    ///
    /// ` qsizepolicy_enums.Policy `
    ///
    pub fn HorizontalPolicy(self: ?*anyopaque) i32 {
        return qtc.QSizePolicy_HorizontalPolicy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#verticalPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    /// ## Returns:
    ///
    /// ` qsizepolicy_enums.Policy `
    ///
    pub fn VerticalPolicy(self: ?*anyopaque) i32 {
        return qtc.QSizePolicy_VerticalPolicy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#controlType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    /// ## Returns:
    ///
    /// ` qsizepolicy_enums.ControlType `
    ///
    pub fn ControlType(self: ?*anyopaque) i32 {
        return qtc.QSizePolicy_ControlType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setHorizontalPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    /// ` d: qsizepolicy_enums.Policy `
    ///
    pub fn SetHorizontalPolicy(self: ?*anyopaque, d: i32) void {
        qtc.QSizePolicy_SetHorizontalPolicy(@ptrCast(self), @bitCast(d));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setVerticalPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    /// ` d: qsizepolicy_enums.Policy `
    ///
    pub fn SetVerticalPolicy(self: ?*anyopaque, d: i32) void {
        qtc.QSizePolicy_SetVerticalPolicy(@ptrCast(self), @bitCast(d));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setControlType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    /// ` typeVal: qsizepolicy_enums.ControlType `
    ///
    pub fn SetControlType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QSizePolicy_SetControlType(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#expandingDirections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn ExpandingDirections(self: ?*anyopaque) i32 {
        return qtc.QSizePolicy_ExpandingDirections(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    /// ` b: bool `
    ///
    pub fn SetHeightForWidth(self: ?*anyopaque, b: bool) void {
        qtc.QSizePolicy_SetHeightForWidth(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QSizePolicy_HasHeightForWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setWidthForHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    /// ` b: bool `
    ///
    pub fn SetWidthForHeight(self: ?*anyopaque, b: bool) void {
        qtc.QSizePolicy_SetWidthForHeight(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#hasWidthForHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    pub fn HasWidthForHeight(self: ?*anyopaque) bool {
        return qtc.QSizePolicy_HasWidthForHeight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    /// ` s: QtC.QSizePolicy `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, s: ?*anyopaque) bool {
        return qtc.QSizePolicy_OperatorEqual(@ptrCast(self), @ptrCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    /// ` s: QtC.QSizePolicy `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, s: ?*anyopaque) bool {
        return qtc.QSizePolicy_OperatorNotEqual(@ptrCast(self), @ptrCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QSizePolicy_ToQVariant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#horizontalStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    pub fn HorizontalStretch(self: ?*anyopaque) i32 {
        return qtc.QSizePolicy_HorizontalStretch(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#verticalStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    pub fn VerticalStretch(self: ?*anyopaque) i32 {
        return qtc.QSizePolicy_VerticalStretch(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setHorizontalStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    /// ` stretchFactor: i32 `
    ///
    pub fn SetHorizontalStretch(self: ?*anyopaque, stretchFactor: i32) void {
        qtc.QSizePolicy_SetHorizontalStretch(@ptrCast(self), @bitCast(stretchFactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setVerticalStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    /// ` stretchFactor: i32 `
    ///
    pub fn SetVerticalStretch(self: ?*anyopaque, stretchFactor: i32) void {
        qtc.QSizePolicy_SetVerticalStretch(@ptrCast(self), @bitCast(stretchFactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#retainSizeWhenHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    pub fn RetainSizeWhenHidden(self: ?*anyopaque) bool {
        return qtc.QSizePolicy_RetainSizeWhenHidden(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#setRetainSizeWhenHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    /// ` retainSize: bool `
    ///
    pub fn SetRetainSizeWhenHidden(self: ?*anyopaque, retainSize: bool) void {
        qtc.QSizePolicy_SetRetainSizeWhenHidden(@ptrCast(self), retainSize);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#transpose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    pub fn Transpose(self: ?*anyopaque) void {
        qtc.QSizePolicy_Transpose(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizepolicy.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizePolicy `
    ///
    pub fn Transposed(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QSizePolicy_Transposed(@ptrCast(self));
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
    /// ` self: QtC.QSizePolicy `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QSizePolicy_Delete(@ptrCast(self));
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
