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

    /// New constructs a new QPixmapCache object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPixmapCache `
    ///
    pub fn New(other: anytype) QPixmapCache {
        comptime _ = @TypeOf(other)._is_QPixmapCache;
        return .{ .ptr = qtc.QPixmapCache_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QPixmapCache object and invalidates the source QPixmapCache object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPixmapCache `
    ///
    pub fn New2(other: anytype) QPixmapCache {
        comptime _ = @TypeOf(other)._is_QPixmapCache;
        return .{ .ptr = qtc.QPixmapCache_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixmapCache `
    ///
    /// ` other: QPixmapCache `
    ///
    pub fn CopyAssign(self: QPixmapCache, other: QPixmapCache) void {
        qtc.QPixmapCache_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixmapCache `
    ///
    /// ` other: QPixmapCache `
    ///
    pub fn MoveAssign(self: QPixmapCache, other: QPixmapCache) void {
        qtc.QPixmapCache_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#cacheLimit)
    ///
    pub fn CacheLimit() i32 {
        return qtc.QPixmapCache_CacheLimit();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#setCacheLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` cacheLimit: i32 `
    ///
    pub fn SetCacheLimit(cacheLimit: i32) void {
        qtc.QPixmapCache_SetCacheLimit(@bitCast(cacheLimit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn Find(key: []const u8, pixmap: anytype) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return qtc.QPixmapCache_Find(key_str, @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QPixmapCache__Key `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn Find2(key: anytype, pixmap: anytype) bool {
        comptime _ = @TypeOf(key)._is_QPixmapCache__Key;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return qtc.QPixmapCache_Find2(@ptrCast(key.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn Insert(key: []const u8, pixmap: anytype) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return qtc.QPixmapCache_Insert(key_str, @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn Insert2(pixmap: anytype) QPixmapCache__Key {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QPixmapCache_Insert2(@ptrCast(pixmap.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QPixmapCache__Key `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn Replace(key: anytype, pixmap: anytype) bool {
        comptime _ = @TypeOf(key)._is_QPixmapCache__Key;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return qtc.QPixmapCache_Replace(@ptrCast(key.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    pub fn Remove(key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QPixmapCache_Remove(key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QPixmapCache__Key `
    ///
    pub fn Remove2(key: anytype) void {
        comptime _ = @TypeOf(key)._is_QPixmapCache__Key;
        qtc.QPixmapCache_Remove2(@ptrCast(key.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#clear)
    ///
    pub fn Clear() void {
        qtc.QPixmapCache_Clear();
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache.html#dtor.QPixmapCache)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPixmapCache `
    ///
    pub fn Delete(self: QPixmapCache) void {
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

    /// New constructs a new QPixmapCache::Key object.
    ///
    pub fn New() QPixmapCache__Key {
        return .{ .ptr = qtc.QPixmapCache__Key_new() };
    }

    /// New2 constructs a new QPixmapCache::Key object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPixmapCache__Key `
    ///
    pub fn New2(other: anytype) QPixmapCache__Key {
        comptime _ = @TypeOf(other)._is_QPixmapCache__Key;
        return .{ .ptr = qtc.QPixmapCache__Key_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache-key.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmapCache__Key `
    ///
    /// ` key: QPixmapCache__Key `
    ///
    pub fn OperatorEqual(self: QPixmapCache__Key, key: anytype) bool {
        comptime _ = @TypeOf(key)._is_QPixmapCache__Key;
        return qtc.QPixmapCache__Key_OperatorEqual(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache-key.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmapCache__Key `
    ///
    /// ` key: QPixmapCache__Key `
    ///
    pub fn OperatorNotEqual(self: QPixmapCache__Key, key: anytype) bool {
        comptime _ = @TypeOf(key)._is_QPixmapCache__Key;
        return qtc.QPixmapCache__Key_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache-key.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmapCache__Key `
    ///
    /// ` other: QPixmapCache__Key `
    ///
    pub fn OperatorAssign(self: QPixmapCache__Key, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPixmapCache__Key;
        qtc.QPixmapCache__Key_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache-key.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmapCache__Key `
    ///
    /// ` other: QPixmapCache__Key `
    ///
    pub fn Swap(self: QPixmapCache__Key, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPixmapCache__Key;
        qtc.QPixmapCache__Key_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmapcache-key.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmapCache__Key `
    ///
    pub fn IsValid(self: QPixmapCache__Key) bool {
        return qtc.QPixmapCache__Key_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPixmapCache__Key `
    ///
    pub fn Delete(self: QPixmapCache__Key) void {
        qtc.QPixmapCache__Key_Delete(@ptrCast(self.ptr));
    }
};
