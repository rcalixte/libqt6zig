const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QJSValue = @import("libqt6").QJSValue;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalueiterator.html)
pub const QJSValueIterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalueiterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJSValueIterator,

    pub const _is_QJSValueIterator = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJSValueIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _value: QJSValue `
    ///
    pub fn new(_value: anytype) QJSValueIterator {
        comptime _ = @TypeOf(_value)._is_QJSValue;
        return .{ .ptr = qtc.QJSValueIterator_new(@ptrCast(_value.ptr)) };
    }

    /// ### DEPRECATED: Use `hasNext` instead
    ///
    pub const HasNext = hasNext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalueiterator.html#hasNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValueIterator `
    ///
    pub fn hasNext(self: QJSValueIterator) bool {
        return qtc.QJSValueIterator_HasNext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `next` instead
    ///
    pub const Next = next;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalueiterator.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValueIterator `
    ///
    pub fn next(self: QJSValueIterator) bool {
        return qtc.QJSValueIterator_Next(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalueiterator.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValueIterator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QJSValueIterator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJSValueIterator_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJSValueIterator.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalueiterator.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValueIterator `
    ///
    pub fn value(self: QJSValueIterator) QJSValue {
        return .{ .ptr = qtc.QJSValueIterator_Value(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalueiterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValueIterator `
    ///
    /// ` _value: QJSValue `
    ///
    pub fn operatorAssign(self: QJSValueIterator, _value: anytype) void {
        comptime _ = @TypeOf(_value)._is_QJSValue;
        qtc.QJSValueIterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalueiterator.html#dtor.QJSValueIterator)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJSValueIterator `
    ///
    pub fn delete(self: QJSValueIterator) void {
        qtc.QJSValueIterator_Delete(@ptrCast(self.ptr));
    }
};
