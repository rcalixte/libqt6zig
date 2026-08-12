const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QWebEngineScript = @import("libqt6").QWebEngineScript;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html)
pub const QWebEngineScriptCollection = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineScriptCollection,

    pub const _is_QWebEngineScriptCollection = {};

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScriptCollection `
    ///
    pub fn isEmpty(self: QWebEngineScriptCollection) bool {
        return qtc.QWebEngineScriptCollection_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScriptCollection `
    ///
    pub fn count(self: QWebEngineScriptCollection) i32 {
        return qtc.QWebEngineScriptCollection_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScriptCollection `
    ///
    /// ` value: QWebEngineScript `
    ///
    pub fn contains(self: QWebEngineScriptCollection, value: anytype) bool {
        comptime _ = @TypeOf(value)._is_QWebEngineScript;
        return qtc.QWebEngineScriptCollection_Contains(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `find` instead
    ///
    pub const Find = find;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScriptCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn find(self: QWebEngineScriptCollection, allocator: std.mem.Allocator, name: []const u8) []QWebEngineScript {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QWebEngineScriptCollection_Find(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWebEngineScript, _arr.len) catch @panic("QWebEngineScriptCollection.find: Memory allocation failed");
        const _data_val: [*]QtC.QWebEngineScript = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScriptCollection `
    ///
    /// ` param1: QWebEngineScript `
    ///
    pub fn insert(self: QWebEngineScriptCollection, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWebEngineScript;
        qtc.QWebEngineScriptCollection_Insert(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `insert2` instead
    ///
    pub const Insert2 = insert2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScriptCollection `
    ///
    /// ` list: []QWebEngineScript `
    ///
    pub fn insert2(self: QWebEngineScriptCollection, list: []QWebEngineScript) void {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        qtc.QWebEngineScriptCollection_Insert2(@ptrCast(self.ptr), list_list);
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScriptCollection `
    ///
    /// ` param1: QWebEngineScript `
    ///
    pub fn remove(self: QWebEngineScriptCollection, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWebEngineScript;
        return qtc.QWebEngineScriptCollection_Remove(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScriptCollection `
    ///
    pub fn clear(self: QWebEngineScriptCollection) void {
        qtc.QWebEngineScriptCollection_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toList` instead
    ///
    pub const ToList = toList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#toList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScriptCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toList(self: QWebEngineScriptCollection, allocator: std.mem.Allocator) []QWebEngineScript {
        const _arr: qtc.libqt_list = qtc.QWebEngineScriptCollection_ToList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWebEngineScript, _arr.len) catch @panic("QWebEngineScriptCollection.toList: Memory allocation failed");
        const _data_val: [*]QtC.QWebEngineScript = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#dtor.QWebEngineScriptCollection)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineScriptCollection `
    ///
    pub fn delete(self: QWebEngineScriptCollection) void {
        qtc.QWebEngineScriptCollection_Delete(@ptrCast(self.ptr));
    }
};
