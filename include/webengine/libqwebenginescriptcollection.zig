const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qwebenginescriptcollection.html
pub const qwebenginescriptcollection = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#isEmpty)
    ///
    /// ``` self: QtC.QWebEngineScriptCollection ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QWebEngineScriptCollection_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#count)
    ///
    /// ``` self: QtC.QWebEngineScriptCollection ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QWebEngineScriptCollection_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#contains)
    ///
    /// ``` self: QtC.QWebEngineScriptCollection, value: QtC.QWebEngineScript ```
    pub fn Contains(self: ?*anyopaque, value: ?*anyopaque) bool {
        return qtc.QWebEngineScriptCollection_Contains(@ptrCast(self), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#find)
    ///
    /// ``` self: QtC.QWebEngineScriptCollection, name: []const u8, allocator: std.mem.Allocator ```
    pub fn Find(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []QtC.QWebEngineScript {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QWebEngineScriptCollection_Find(@ptrCast(self), name_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWebEngineScript, _arr.len) catch @panic("qwebenginescriptcollection.Find: Memory allocation failed");
        const _data: [*]QtC.QWebEngineScript = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#insert)
    ///
    /// ``` self: QtC.QWebEngineScriptCollection, param1: QtC.QWebEngineScript ```
    pub fn Insert(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWebEngineScriptCollection_Insert(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#insert)
    ///
    /// ``` self: QtC.QWebEngineScriptCollection, list: []QtC.QWebEngineScript ```
    pub fn Insert2(self: ?*anyopaque, list: []QtC.QWebEngineScript) void {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        qtc.QWebEngineScriptCollection_Insert2(@ptrCast(self), list_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#remove)
    ///
    /// ``` self: QtC.QWebEngineScriptCollection, param1: QtC.QWebEngineScript ```
    pub fn Remove(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWebEngineScriptCollection_Remove(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#clear)
    ///
    /// ``` self: QtC.QWebEngineScriptCollection ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QWebEngineScriptCollection_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#toList)
    ///
    /// ``` self: QtC.QWebEngineScriptCollection, allocator: std.mem.Allocator ```
    pub fn ToList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QWebEngineScript {
        const _arr: qtc.libqt_list = qtc.QWebEngineScriptCollection_ToList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWebEngineScript, _arr.len) catch @panic("qwebenginescriptcollection.ToList: Memory allocation failed");
        const _data: [*]QtC.QWebEngineScript = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#dtor.QWebEngineScriptCollection)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWebEngineScriptCollection ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineScriptCollection_Delete(@ptrCast(self));
    }
};
