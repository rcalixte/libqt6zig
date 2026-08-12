const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPixmap = @import("libqt6").QPixmap;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html)
pub const QPixmapCache = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPixmapCache,

    pub const _is_QPixmapCache = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPixmapCache object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPixmapCache `
    ///
    pub fn new(other: anytype) QPixmapCache {
        comptime _ = @TypeOf(other)._is_QPixmapCache;
        return .{ .ptr = qtc.QPixmapCache_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPixmapCache object and invalidate the source QPixmapCache object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPixmapCache `
    ///
    pub fn new2(other: anytype) QPixmapCache {
        comptime _ = @TypeOf(other)._is_QPixmapCache;
        return .{ .ptr = qtc.QPixmapCache_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixmapCache `
    ///
    /// ` other: QPixmapCache `
    ///
    pub fn copyAssign(self: QPixmapCache, other: QPixmapCache) void {
        qtc.QPixmapCache_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixmapCache `
    ///
    /// ` other: QPixmapCache `
    ///
    pub fn moveAssign(self: QPixmapCache, other: QPixmapCache) void {
        qtc.QPixmapCache_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `cacheLimit` instead
    ///
    pub const CacheLimit = cacheLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#cacheLimit)
    ///
    pub fn cacheLimit() i32 {
        return qtc.QPixmapCache_CacheLimit();
    }

    /// ### DEPRECATED: Use `setCacheLimit` instead
    ///
    pub const SetCacheLimit = setCacheLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#setCacheLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` _cacheLimit: i32 `
    ///
    pub fn setCacheLimit(_cacheLimit: i32) void {
        qtc.QPixmapCache_SetCacheLimit(@bitCast(_cacheLimit));
    }

    /// ### DEPRECATED: Use `find` instead
    ///
    pub const Find = find;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn find(key: []const u8, pixmap: anytype) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return qtc.QPixmapCache_Find(key_str, @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `find2` instead
    ///
    pub const Find2 = find2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QPixmapCache__Key `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn find2(key: anytype, pixmap: anytype) bool {
        comptime _ = @TypeOf(key)._is_QPixmapCache__Key;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return qtc.QPixmapCache_Find2(@ptrCast(key.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn insert(key: []const u8, pixmap: anytype) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return qtc.QPixmapCache_Insert(key_str, @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `insert2` instead
    ///
    pub const Insert2 = insert2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn insert2(pixmap: anytype) QPixmapCache__Key {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QPixmapCache_Insert2(@ptrCast(pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `replace` instead
    ///
    pub const Replace = replace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QPixmapCache__Key `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn replace(key: anytype, pixmap: anytype) bool {
        comptime _ = @TypeOf(key)._is_QPixmapCache__Key;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return qtc.QPixmapCache_Replace(@ptrCast(key.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    pub fn remove(key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QPixmapCache_Remove(key_str);
    }

    /// ### DEPRECATED: Use `remove2` instead
    ///
    pub const Remove2 = remove2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QPixmapCache__Key `
    ///
    pub fn remove2(key: anytype) void {
        comptime _ = @TypeOf(key)._is_QPixmapCache__Key;
        qtc.QPixmapCache_Remove2(@ptrCast(key.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#clear)
    ///
    pub fn clear() void {
        qtc.QPixmapCache_Clear();
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#dtor.QPixmapCache)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPixmapCache `
    ///
    pub fn delete(self: QPixmapCache) void {
        qtc.QPixmapCache_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache-key.html)
pub const QPixmapCache__Key = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache-key.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPixmapCache__Key,

    pub const _is_QPixmapCache__Key = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPixmapCache::Key object in C++ memory
    ///
    pub fn new() QPixmapCache__Key {
        return .{ .ptr = qtc.QPixmapCache__Key_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPixmapCache::Key object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPixmapCache__Key `
    ///
    pub fn new2(other: anytype) QPixmapCache__Key {
        comptime _ = @TypeOf(other)._is_QPixmapCache__Key;
        return .{ .ptr = qtc.QPixmapCache__Key_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache-key.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmapCache__Key `
    ///
    /// ` key: QPixmapCache__Key `
    ///
    pub fn operatorEqual(self: QPixmapCache__Key, key: anytype) bool {
        comptime _ = @TypeOf(key)._is_QPixmapCache__Key;
        return qtc.QPixmapCache__Key_OperatorEqual(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache-key.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmapCache__Key `
    ///
    /// ` key: QPixmapCache__Key `
    ///
    pub fn operatorNotEqual(self: QPixmapCache__Key, key: anytype) bool {
        comptime _ = @TypeOf(key)._is_QPixmapCache__Key;
        return qtc.QPixmapCache__Key_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache-key.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmapCache__Key `
    ///
    /// ` other: QPixmapCache__Key `
    ///
    pub fn operatorAssign(self: QPixmapCache__Key, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPixmapCache__Key;
        qtc.QPixmapCache__Key_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache-key.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmapCache__Key `
    ///
    /// ` other: QPixmapCache__Key `
    ///
    pub fn swap(self: QPixmapCache__Key, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPixmapCache__Key;
        qtc.QPixmapCache__Key_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache-key.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmapCache__Key `
    ///
    pub fn isValid(self: QPixmapCache__Key) bool {
        return qtc.QPixmapCache__Key_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPixmapCache__Key `
    ///
    pub fn delete(self: QPixmapCache__Key) void {
        qtc.QPixmapCache__Key_Delete(@ptrCast(self.ptr));
    }
};
