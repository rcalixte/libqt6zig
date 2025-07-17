const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qtreewidgetitemiterator.html
pub const qtreewidgetitemiterator = struct {
    /// New constructs a new QTreeWidgetItemIterator object.
    ///
    /// ``` it: QtC.QTreeWidgetItemIterator ```
    pub fn New(it: ?*anyopaque) QtC.QTreeWidgetItemIterator {
        return qtc.QTreeWidgetItemIterator_new(@ptrCast(it));
    }

    /// New2 constructs a new QTreeWidgetItemIterator object.
    ///
    /// ``` widget: QtC.QTreeWidget ```
    pub fn New2(widget: ?*anyopaque) QtC.QTreeWidgetItemIterator {
        return qtc.QTreeWidgetItemIterator_new2(@ptrCast(widget));
    }

    /// New3 constructs a new QTreeWidgetItemIterator object.
    ///
    /// ``` item: QtC.QTreeWidgetItem ```
    pub fn New3(item: ?*anyopaque) QtC.QTreeWidgetItemIterator {
        return qtc.QTreeWidgetItemIterator_new3(@ptrCast(item));
    }

    /// New4 constructs a new QTreeWidgetItemIterator object.
    ///
    /// ``` widget: QtC.QTreeWidget, flags: i32 ```
    pub fn New4(widget: ?*anyopaque, flags: i64) QtC.QTreeWidgetItemIterator {
        return qtc.QTreeWidgetItemIterator_new4(@ptrCast(widget), @intCast(flags));
    }

    /// New5 constructs a new QTreeWidgetItemIterator object.
    ///
    /// ``` item: QtC.QTreeWidgetItem, flags: i32 ```
    pub fn New5(item: ?*anyopaque, flags: i64) QtC.QTreeWidgetItemIterator {
        return qtc.QTreeWidgetItemIterator_new5(@ptrCast(item), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-eq)
    ///
    /// ``` self: QtC.QTreeWidgetItemIterator, it: QtC.QTreeWidgetItemIterator ```
    pub fn OperatorAssign(self: ?*anyopaque, it: ?*anyopaque) void {
        qtc.QTreeWidgetItemIterator_OperatorAssign(@ptrCast(self), @ptrCast(it));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-2b-2b)
    ///
    /// ``` self: QtC.QTreeWidgetItemIterator ```
    pub fn OperatorPlusPlus(self: ?*anyopaque) QtC.QTreeWidgetItemIterator {
        return qtc.QTreeWidgetItemIterator_OperatorPlusPlus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-2b-2b)
    ///
    /// ``` self: QtC.QTreeWidgetItemIterator, param1: i32 ```
    pub fn OperatorPlusPlus2(self: ?*anyopaque, param1: i32) QtC.QTreeWidgetItemIterator {
        return qtc.QTreeWidgetItemIterator_OperatorPlusPlus2(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-2b-eq)
    ///
    /// ``` self: QtC.QTreeWidgetItemIterator, n: i32 ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, n: i32) QtC.QTreeWidgetItemIterator {
        return qtc.QTreeWidgetItemIterator_OperatorPlusAssign(@ptrCast(self), @intCast(n));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator--)
    ///
    /// ``` self: QtC.QTreeWidgetItemIterator ```
    pub fn OperatorMinusMinus(self: ?*anyopaque) QtC.QTreeWidgetItemIterator {
        return qtc.QTreeWidgetItemIterator_OperatorMinusMinus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator--)
    ///
    /// ``` self: QtC.QTreeWidgetItemIterator, param1: i32 ```
    pub fn OperatorMinusMinus2(self: ?*anyopaque, param1: i32) QtC.QTreeWidgetItemIterator {
        return qtc.QTreeWidgetItemIterator_OperatorMinusMinus2(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator--eq)
    ///
    /// ``` self: QtC.QTreeWidgetItemIterator, n: i32 ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, n: i32) QtC.QTreeWidgetItemIterator {
        return qtc.QTreeWidgetItemIterator_OperatorMinusAssign(@ptrCast(self), @intCast(n));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-2a)
    ///
    /// ``` self: QtC.QTreeWidgetItemIterator ```
    pub fn OperatorMultiply(self: ?*anyopaque) QtC.QTreeWidgetItem {
        return qtc.QTreeWidgetItemIterator_OperatorMultiply(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#dtor.QTreeWidgetItemIterator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTreeWidgetItemIterator ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTreeWidgetItemIterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#types
pub const enums = struct {
    pub const IteratorFlag = enum {
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
