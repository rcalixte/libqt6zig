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

    /// ### DEPRECATED: Use `promotedClasses` instead
    ///
    pub const PromotedClasses = promotedClasses;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#promotedClasses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPromotionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn promotedClasses(self: QDesignerPromotionInterface, allocator: std.mem.Allocator) []QDesignerPromotionInterface__PromotedClass {
        const _arr: qtc.libqt_list = qtc.QDesignerPromotionInterface_PromotedClasses(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDesignerPromotionInterface__PromotedClass, _arr.len) catch @panic("QDesignerPromotionInterface.promotedClasses: Memory allocation failed");
        const _data_val: [*]QtC.QDesignerPromotionInterface__PromotedClass = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `referencedPromotedClassNames` instead
    ///
    pub const ReferencedPromotedClassNames = referencedPromotedClassNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#referencedPromotedClassNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPromotionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn referencedPromotedClassNames(self: QDesignerPromotionInterface, allocator: std.mem.Allocator) Set_constu8 {
        const _set: qtc.libqt_list = qtc.QDesignerPromotionInterface_ReferencedPromotedClassNames(@ptrCast(self.ptr));
        var _ret: Set_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_set.len)) catch @panic("QDesignerPromotionInterface.referencedPromotedClassNames: Total capacity allocation failed");
        const _data_val: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.putAssumeCapacity(_data_val[i].data[0.._data_val[i].len], {});
        return _ret;
    }

    /// ### DEPRECATED: Use `promotionBaseClasses` instead
    ///
    pub const PromotionBaseClasses = promotionBaseClasses;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#promotionBaseClasses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPromotionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn promotionBaseClasses(self: QDesignerPromotionInterface, allocator: std.mem.Allocator) []QDesignerWidgetDataBaseItemInterface {
        const _arr: qtc.libqt_list = qtc.QDesignerPromotionInterface_PromotionBaseClasses(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDesignerWidgetDataBaseItemInterface, _arr.len) catch @panic("QDesignerPromotionInterface.promotionBaseClasses: Memory allocation failed");
        const _data_val: [*]QtC.QDesignerWidgetDataBaseItemInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#dtor.QDesignerPromotionInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerPromotionInterface `
    ///
    pub fn delete(self: QDesignerPromotionInterface) void {
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

    /// ### DEPRECATED: Use `baseItem` instead
    ///
    pub const BaseItem = baseItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#baseItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPromotionInterface__PromotedClass `
    ///
    pub fn baseItem(self: QDesignerPromotionInterface__PromotedClass) QDesignerWidgetDataBaseItemInterface {
        return .{ .ptr = qtc.QDesignerPromotionInterface__PromotedClass_BaseItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBaseItem` instead
    ///
    pub const SetBaseItem = setBaseItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#baseItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPromotionInterface__PromotedClass `
    ///
    /// ` _baseItem: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn setBaseItem(self: QDesignerPromotionInterface__PromotedClass, _baseItem: anytype) void {
        comptime _ = @TypeOf(_baseItem)._is_QDesignerWidgetDataBaseItemInterface;
        qtc.QDesignerPromotionInterface__PromotedClass_SetBaseItem(@ptrCast(self.ptr), @ptrCast(_baseItem.ptr));
    }

    /// ### DEPRECATED: Use `promotedItem` instead
    ///
    pub const PromotedItem = promotedItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#promotedItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPromotionInterface__PromotedClass `
    ///
    pub fn promotedItem(self: QDesignerPromotionInterface__PromotedClass) QDesignerWidgetDataBaseItemInterface {
        return .{ .ptr = qtc.QDesignerPromotionInterface__PromotedClass_PromotedItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPromotedItem` instead
    ///
    pub const SetPromotedItem = setPromotedItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#promotedItem-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerPromotionInterface__PromotedClass `
    ///
    /// ` _promotedItem: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn setPromotedItem(self: QDesignerPromotionInterface__PromotedClass, _promotedItem: anytype) void {
        comptime _ = @TypeOf(_promotedItem)._is_QDesignerWidgetDataBaseItemInterface;
        qtc.QDesignerPromotionInterface__PromotedClass_SetPromotedItem(@ptrCast(self.ptr), @ptrCast(_promotedItem.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerPromotionInterface__PromotedClass `
    ///
    pub fn delete(self: QDesignerPromotionInterface__PromotedClass) void {
        qtc.QDesignerPromotionInterface__PromotedClass_Delete(@ptrCast(self.ptr));
    }
};
