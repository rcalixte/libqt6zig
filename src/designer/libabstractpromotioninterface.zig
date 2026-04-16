const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDesignerWidgetDataBaseItemInterface = @import("libqt6").QDesignerWidgetDataBaseItemInterface;
const std = @import("std");
const Set_constu8 = std.StringHashMapUnmanaged(void);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html)
pub const QDesignerPromotionInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerPromotionInterface,

    pub const _is_QDesignerPromotionInterface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#promotedClasses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPromotionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PromotedClasses(self: QDesignerPromotionInterface, allocator: std.mem.Allocator) []QDesignerPromotionInterface__PromotedClass {
        const _arr: qtc.libqt_list = qtc.QDesignerPromotionInterface_PromotedClasses(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDesignerPromotionInterface__PromotedClass, _arr.len) catch @panic("qdesignerpromotioninterface.PromotedClasses: Memory allocation failed");
        const _data: [*]QtC.QDesignerPromotionInterface__PromotedClass = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#referencedPromotedClassNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPromotionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReferencedPromotedClassNames(self: QDesignerPromotionInterface, allocator: std.mem.Allocator) Set_constu8 {
        const _set: qtc.libqt_list = qtc.QDesignerPromotionInterface_ReferencedPromotedClassNames(@ptrCast(self.ptr));
        var _ret: Set_constu8 = .empty;
        const _data: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.put(allocator, _data[i].data[0.._data[i].len], {}) catch @panic("qdesignerpromotioninterface.ReferencedPromotedClassNames: Set insertion failed");
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#promotionBaseClasses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPromotionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PromotionBaseClasses(self: QDesignerPromotionInterface, allocator: std.mem.Allocator) []QDesignerWidgetDataBaseItemInterface {
        const _arr: qtc.libqt_list = qtc.QDesignerPromotionInterface_PromotionBaseClasses(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDesignerWidgetDataBaseItemInterface, _arr.len) catch @panic("qdesignerpromotioninterface.PromotionBaseClasses: Memory allocation failed");
        const _data: [*]QtC.QDesignerWidgetDataBaseItemInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    /// ` self: QDesignerPromotionInterface `
    ///
    pub fn Delete(self: QDesignerPromotionInterface) void {
        qtc.QDesignerPromotionInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html)
pub const QDesignerPromotionInterface__PromotedClass = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerPromotionInterface__PromotedClass,

    pub const _is_QDesignerPromotionInterface__PromotedClass = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#baseItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPromotionInterface__PromotedClass `
    ///
    pub fn BaseItem(self: QDesignerPromotionInterface__PromotedClass) QDesignerWidgetDataBaseItemInterface {
        return .{ .ptr = qtc.QDesignerPromotionInterface__PromotedClass_BaseItem(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#baseItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPromotionInterface__PromotedClass `
    ///
    /// ` baseItem: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn SetBaseItem(self: QDesignerPromotionInterface__PromotedClass, baseItem: anytype) void {
        comptime _ = @TypeOf(baseItem)._is_QDesignerWidgetDataBaseItemInterface;
        qtc.QDesignerPromotionInterface__PromotedClass_SetBaseItem(@ptrCast(self.ptr), @ptrCast(baseItem.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#promotedItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPromotionInterface__PromotedClass `
    ///
    pub fn PromotedItem(self: QDesignerPromotionInterface__PromotedClass) QDesignerWidgetDataBaseItemInterface {
        return .{ .ptr = qtc.QDesignerPromotionInterface__PromotedClass_PromotedItem(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#promotedItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPromotionInterface__PromotedClass `
    ///
    /// ` promotedItem: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn SetPromotedItem(self: QDesignerPromotionInterface__PromotedClass, promotedItem: anytype) void {
        comptime _ = @TypeOf(promotedItem)._is_QDesignerWidgetDataBaseItemInterface;
        qtc.QDesignerPromotionInterface__PromotedClass_SetPromotedItem(@ptrCast(self.ptr), @ptrCast(promotedItem.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerPromotionInterface__PromotedClass `
    ///
    pub fn Delete(self: QDesignerPromotionInterface__PromotedClass) void {
        qtc.QDesignerPromotionInterface__PromotedClass_Delete(@ptrCast(self.ptr));
    }
};
