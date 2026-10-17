const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html)
pub const QBarDataItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBarDataItem,

    pub const _is_QBarDataItem = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBarDataItem object in C++ memory
    ///
    pub fn new() QBarDataItem {
        return .{ .ptr = qtc.QBarDataItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBarDataItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _value: f32 `
    ///
    pub fn new2(_value: f32) QBarDataItem {
        return .{ .ptr = qtc.QBarDataItem_new2(@bitCast(_value)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QBarDataItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _value: f32 `
    ///
    /// ` angle: f32 `
    ///
    pub fn new3(_value: f32, angle: f32) QBarDataItem {
        return .{ .ptr = qtc.QBarDataItem_new3(@bitCast(_value), @bitCast(angle)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QBarDataItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBarDataItem `
    ///
    pub fn new4(other: anytype) QBarDataItem {
        comptime _ = @TypeOf(other)._is_QBarDataItem;
        return .{ .ptr = qtc.QBarDataItem_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataItem `
    ///
    /// ` other: QBarDataItem `
    ///
    pub fn operatorAssign(self: QBarDataItem, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBarDataItem;
        qtc.QBarDataItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataItem `
    ///
    /// ` val: f32 `
    ///
    pub fn setValue(self: QBarDataItem, val: f32) void {
        qtc.QBarDataItem_SetValue(@ptrCast(self.ptr), @bitCast(val));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataItem `
    ///
    pub fn value(self: QBarDataItem) f32 {
        return qtc.QBarDataItem_Value(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRotation` instead
    ///
    pub const SetRotation = setRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataItem `
    ///
    /// ` angle: f32 `
    ///
    pub fn setRotation(self: QBarDataItem, angle: f32) void {
        qtc.QBarDataItem_SetRotation(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataItem `
    ///
    pub fn rotation(self: QBarDataItem) f32 {
        return qtc.QBarDataItem_Rotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html#dtor.QBarDataItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBarDataItem `
    ///
    pub fn delete(self: QBarDataItem) void {
        qtc.QBarDataItem_Delete(@ptrCast(self.ptr));
    }
};
