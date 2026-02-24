const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const set_constu8 = std.StringHashMapUnmanaged(void);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html)
pub const qdesignerpromotioninterface = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#promotedClasses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPromotionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PromotedClasses(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QDesignerPromotionInterface__PromotedClass {
        const _arr: qtc.libqt_list = qtc.QDesignerPromotionInterface_PromotedClasses(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QDesignerPromotionInterface__PromotedClass, _arr.len) catch @panic("qdesignerpromotioninterface.PromotedClasses: Memory allocation failed");
        const _data: [*]QtC.QDesignerPromotionInterface__PromotedClass = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#referencedPromotedClassNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPromotionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReferencedPromotedClassNames(self: ?*anyopaque, allocator: std.mem.Allocator) set_constu8 {
        const _set: qtc.libqt_list = qtc.QDesignerPromotionInterface_ReferencedPromotedClassNames(@ptrCast(self));
        var _ret: set_constu8 = .empty;
        const _data: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i| {
            _ret.put(allocator, _data[i].data[0.._data[i].len], {}) catch @panic("qdesignerpromotioninterface.ReferencedPromotedClassNames: Set insertion failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#promotionBaseClasses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPromotionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PromotionBaseClasses(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QDesignerWidgetDataBaseItemInterface {
        const _arr: qtc.libqt_list = qtc.QDesignerPromotionInterface_PromotionBaseClasses(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QDesignerWidgetDataBaseItemInterface, _arr.len) catch @panic("qdesignerpromotioninterface.PromotionBaseClasses: Memory allocation failed");
        const _data: [*]QtC.QDesignerWidgetDataBaseItemInterface = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#dtor.QDesignerPromotionInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerPromotionInterface `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QDesignerPromotionInterface_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html)
pub const qdesignerpromotioninterface__promotedclass = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#baseItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPromotionInterface__PromotedClass `
    ///
    pub fn BaseItem(self: ?*anyopaque) QtC.QDesignerWidgetDataBaseItemInterface {
        return qtc.QDesignerPromotionInterface__PromotedClass_BaseItem(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#baseItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPromotionInterface__PromotedClass `
    ///
    /// ` baseItem: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn SetBaseItem(self: ?*anyopaque, baseItem: ?*anyopaque) void {
        qtc.QDesignerPromotionInterface__PromotedClass_SetBaseItem(@ptrCast(self), @ptrCast(baseItem));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#promotedItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPromotionInterface__PromotedClass `
    ///
    pub fn PromotedItem(self: ?*anyopaque) QtC.QDesignerWidgetDataBaseItemInterface {
        return qtc.QDesignerPromotionInterface__PromotedClass_PromotedItem(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#promotedItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerPromotionInterface__PromotedClass `
    ///
    /// ` promotedItem: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn SetPromotedItem(self: ?*anyopaque, promotedItem: ?*anyopaque) void {
        qtc.QDesignerPromotionInterface__PromotedClass_SetPromotedItem(@ptrCast(self), @ptrCast(promotedItem));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerPromotionInterface__PromotedClass `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QDesignerPromotionInterface__PromotedClass_Delete(@ptrCast(self));
    }
};
