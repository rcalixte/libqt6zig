const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPoint = @import("libqt6").QPoint;
const QWidget = @import("libqt6").QWidget;
const abstractdnditem_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html)
pub const QDesignerDnDItemInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerDnDItemInterface,

    pub const _is_QDesignerDnDItemInterface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerDnDItemInterface `
    ///
    pub fn Widget(self: QDesignerDnDItemInterface) QWidget {
        return .{ .ptr = qtc.QDesignerDnDItemInterface_Widget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#decoration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerDnDItemInterface `
    ///
    pub fn Decoration(self: QDesignerDnDItemInterface) QWidget {
        return .{ .ptr = qtc.QDesignerDnDItemInterface_Decoration(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#hotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerDnDItemInterface `
    ///
    pub fn HotSpot(self: QDesignerDnDItemInterface) QPoint {
        return .{ .ptr = qtc.QDesignerDnDItemInterface_HotSpot(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerDnDItemInterface `
    ///
    /// ## Returns:
    ///
    /// ` abstractdnditem_enums.DropType `
    ///
    pub fn Type(self: QDesignerDnDItemInterface) i32 {
        return qtc.QDesignerDnDItemInterface_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerDnDItemInterface `
    ///
    pub fn Source(self: QDesignerDnDItemInterface) QWidget {
        return .{ .ptr = qtc.QDesignerDnDItemInterface_Source(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#dtor.QDesignerDnDItemInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerDnDItemInterface `
    ///
    pub fn Delete(self: QDesignerDnDItemInterface) void {
        qtc.QDesignerDnDItemInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/abstractdnditem.html#public-types)
pub const enums = struct {
    pub const DropType = enum(i32) {
        pub const MoveDrop: i32 = 0;
        pub const CopyDrop: i32 = 1;
    };
};
