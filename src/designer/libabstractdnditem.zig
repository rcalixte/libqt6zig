const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const abstractdnditem_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html)
pub const qdesignerdnditeminterface = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerDnDItemInterface `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QDesignerDnDItemInterface_Widget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#decoration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerDnDItemInterface `
    ///
    pub fn Decoration(self: ?*anyopaque) QtC.QWidget {
        return qtc.QDesignerDnDItemInterface_Decoration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#hotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerDnDItemInterface `
    ///
    pub fn HotSpot(self: ?*anyopaque) QtC.QPoint {
        return qtc.QDesignerDnDItemInterface_HotSpot(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerDnDItemInterface `
    ///
    /// ## Returns:
    ///
    /// ` abstractdnditem_enums.DropType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QDesignerDnDItemInterface_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerDnDItemInterface `
    ///
    pub fn Source(self: ?*anyopaque) QtC.QWidget {
        return qtc.QDesignerDnDItemInterface_Source(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#dtor.QDesignerDnDItemInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerDnDItemInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesignerDnDItemInterface_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/abstractdnditem.html#public-types)
pub const enums = struct {
    pub const DropType = enum(i32) {
        pub const MoveDrop: i32 = 0;
        pub const CopyDrop: i32 = 1;
    };
};
