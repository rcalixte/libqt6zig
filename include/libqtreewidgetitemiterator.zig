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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTreeWidgetItemIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` it: QTreeWidgetItemIterator `
    ///
    pub fn new(it: anytype) QTreeWidgetItemIterator {
        comptime _ = @TypeOf(it)._is_QTreeWidgetItemIterator;
        return .{ .ptr = qtc.QTreeWidgetItemIterator_new(@ptrCast(it.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTreeWidgetItemIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QTreeWidget `
    ///
    pub fn new2(widget: anytype) QTreeWidgetItemIterator {
        comptime _ = @TypeOf(widget)._is_QTreeWidget;
        return .{ .ptr = qtc.QTreeWidgetItemIterator_new2(@ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTreeWidgetItemIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn new3(item: anytype) QTreeWidgetItemIterator {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItemIterator_new3(@ptrCast(item.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTreeWidgetItemIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QTreeWidget `
    ///
    /// ` flags: flag of qtreewidgetitemiterator_enums.IteratorFlag `
    ///
    pub fn new4(widget: anytype, flags: i32) QTreeWidgetItemIterator {
        comptime _ = @TypeOf(widget)._is_QTreeWidget;
        return .{ .ptr = qtc.QTreeWidgetItemIterator_new4(@ptrCast(widget.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QTreeWidgetItemIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` flags: flag of qtreewidgetitemiterator_enums.IteratorFlag `
    ///
    pub fn new5(item: anytype, flags: i32) QTreeWidgetItemIterator {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItemIterator_new5(@ptrCast(item.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    /// ` it: QTreeWidgetItemIterator `
    ///
    pub fn operatorAssign(self: QTreeWidgetItemIterator, it: anytype) void {
        comptime _ = @TypeOf(it)._is_QTreeWidgetItemIterator;
        qtc.QTreeWidgetItemIterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(it.ptr));
    }

    /// ### DEPRECATED: Use `operatorPlusPlus` instead
    ///
    pub const OperatorPlusPlus = operatorPlusPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    pub fn operatorPlusPlus(self: QTreeWidgetItemIterator) QTreeWidgetItemIterator {
        return .{ .ptr = qtc.QTreeWidgetItemIterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus2` instead
    ///
    pub const OperatorPlusPlus2 = operatorPlusPlus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorPlusPlus2(self: QTreeWidgetItemIterator, param1: i32) QTreeWidgetItemIterator {
        return .{ .ptr = qtc.QTreeWidgetItemIterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    /// ` n: i32 `
    ///
    pub fn operatorPlusAssign(self: QTreeWidgetItemIterator, n: i32) QTreeWidgetItemIterator {
        return .{ .ptr = qtc.QTreeWidgetItemIterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(n)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus` instead
    ///
    pub const OperatorMinusMinus = operatorMinusMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    pub fn operatorMinusMinus(self: QTreeWidgetItemIterator) QTreeWidgetItemIterator {
        return .{ .ptr = qtc.QTreeWidgetItemIterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus2` instead
    ///
    pub const OperatorMinusMinus2 = operatorMinusMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorMinusMinus2(self: QTreeWidgetItemIterator, param1: i32) QTreeWidgetItemIterator {
        return .{ .ptr = qtc.QTreeWidgetItemIterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    /// ` n: i32 `
    ///
    pub fn operatorMinusAssign(self: QTreeWidgetItemIterator, n: i32) QTreeWidgetItemIterator {
        return .{ .ptr = qtc.QTreeWidgetItemIterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(n)) };
    }

    /// ### DEPRECATED: Use `operatorMultiply` instead
    ///
    pub const OperatorMultiply = operatorMultiply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    pub fn operatorMultiply(self: QTreeWidgetItemIterator) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidgetItemIterator_OperatorMultiply(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#dtor.QTreeWidgetItemIterator)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTreeWidgetItemIterator `
    ///
    pub fn delete(self: QTreeWidgetItemIterator) void {
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
