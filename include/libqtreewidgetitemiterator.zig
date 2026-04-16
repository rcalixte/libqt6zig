const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QTreeWidget = @import("libqt6").QTreeWidget;
const QTreeWidgetItem = @import("libqt6").QTreeWidgetItem;
const qtreewidgetitemiterator_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html)
pub const QTreeWidgetItemIterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTreeWidgetItemIterator,

    pub const _is_QTreeWidgetItemIterator = {};

    /// New constructs a new QTreeWidgetItemIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` it: QTreeWidgetItemIterator `
    ///
    pub fn New(it: anytype) QTreeWidgetItemIterator {
        comptime _ = @TypeOf(it)._is_QTreeWidgetItemIterator;
        return .{ .ptr = qtc.QTreeWidgetItemIterator_new(@ptrCast(it.ptr)) };
    }

    /// New2 constructs a new QTreeWidgetItemIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QTreeWidget `
    ///
    pub fn New2(widget: anytype) QTreeWidgetItemIterator {
        comptime _ = @TypeOf(widget)._is_QTreeWidget;
        return .{ .ptr = qtc.QTreeWidgetItemIterator_new2(@ptrCast(widget.ptr)) };
    }

    /// New3 constructs a new QTreeWidgetItemIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn New3(item: anytype) QTreeWidgetItemIterator {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItemIterator_new3(@ptrCast(item.ptr)) };
    }

    /// New4 constructs a new QTreeWidgetItemIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QTreeWidget `
    ///
    /// ` flags: flag of qtreewidgetitemiterator_enums.IteratorFlag `
    ///
    pub fn New4(widget: anytype, flags: i32) QTreeWidgetItemIterator {
        comptime _ = @TypeOf(widget)._is_QTreeWidget;
        return .{ .ptr = qtc.QTreeWidgetItemIterator_new4(@ptrCast(widget.ptr), @bitCast(flags)) };
    }

    /// New5 constructs a new QTreeWidgetItemIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` flags: flag of qtreewidgetitemiterator_enums.IteratorFlag `
    ///
    pub fn New5(item: anytype, flags: i32) QTreeWidgetItemIterator {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItemIterator_new5(@ptrCast(item.ptr), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    /// ` it: QTreeWidgetItemIterator `
    ///
    pub fn OperatorAssign(self: QTreeWidgetItemIterator, it: anytype) void {
        comptime _ = @TypeOf(it)._is_QTreeWidgetItemIterator;
        qtc.QTreeWidgetItemIterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(it.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    pub fn OperatorPlusPlus(self: QTreeWidgetItemIterator) QTreeWidgetItemIterator {
        return .{ .ptr = qtc.QTreeWidgetItemIterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorPlusPlus2(self: QTreeWidgetItemIterator, param1: i32) QTreeWidgetItemIterator {
        return .{ .ptr = qtc.QTreeWidgetItemIterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    /// ` n: i32 `
    ///
    pub fn OperatorPlusAssign(self: QTreeWidgetItemIterator, n: i32) QTreeWidgetItemIterator {
        return .{ .ptr = qtc.QTreeWidgetItemIterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(n)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    pub fn OperatorMinusMinus(self: QTreeWidgetItemIterator) QTreeWidgetItemIterator {
        return .{ .ptr = qtc.QTreeWidgetItemIterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorMinusMinus2(self: QTreeWidgetItemIterator, param1: i32) QTreeWidgetItemIterator {
        return .{ .ptr = qtc.QTreeWidgetItemIterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    /// ` n: i32 `
    ///
    pub fn OperatorMinusAssign(self: QTreeWidgetItemIterator, n: i32) QTreeWidgetItemIterator {
        return .{ .ptr = qtc.QTreeWidgetItemIterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(n)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    pub fn OperatorMultiply(self: QTreeWidgetItemIterator) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidgetItemIterator_OperatorMultiply(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#dtor.QTreeWidgetItemIterator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    pub fn Delete(self: QTreeWidgetItemIterator) void {
        qtc.QTreeWidgetItemIterator_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#public-types)
pub const enums = struct {
    pub const IteratorFlag = enum(i32) {
        pub const All: i32 = 0;
        pub const Hidden: i32 = 1;
        pub const NotHidden: i32 = 2;
        pub const Selected: i32 = 4;
        pub const Unselected: i32 = 8;
        pub const Selectable: i32 = 16;
        pub const NotSelectable: i32 = 32;
        pub const DragEnabled: i32 = 64;
        pub const DragDisabled: i32 = 128;
        pub const DropEnabled: i32 = 256;
        pub const DropDisabled: i32 = 512;
        pub const HasChildren: i32 = 1024;
        pub const NoChildren: i32 = 2048;
        pub const Checked: i32 = 4096;
        pub const NotChecked: i32 = 8192;
        pub const Enabled: i32 = 16384;
        pub const Disabled: i32 = 32768;
        pub const Editable: i32 = 65536;
        pub const NotEditable: i32 = 131072;
        pub const UserFlag: i32 = 16777216;
    };
};
