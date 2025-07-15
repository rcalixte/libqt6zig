const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qpixmapcache.html
pub const qpixmapcache = struct {
    /// New constructs a new QPixmapCache object.
    ///
    /// ``` other: QtC.QPixmapCache ```
    pub fn New(other: ?*anyopaque) QtC.QPixmapCache {
        return qtc.QPixmapCache_new(@ptrCast(other));
    }

    /// New2 constructs a new QPixmapCache object and invalidates the source QPixmapCache object.
    ///
    /// ``` other: QtC.QPixmapCache ```
    pub fn New2(other: ?*anyopaque) QtC.QPixmapCache {
        return qtc.QPixmapCache_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QPixmapCache, other: QtC.QPixmapCache ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPixmapCache_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QPixmapCache, other: QtC.QPixmapCache ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPixmapCache_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#cacheLimit)
    ///
    ///
    pub fn CacheLimit() i32 {
        return qtc.QPixmapCache_CacheLimit();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#setCacheLimit)
    ///
    /// ``` cacheLimit: i32 ```
    pub fn SetCacheLimit(cacheLimit: i32) void {
        qtc.QPixmapCache_SetCacheLimit(@intCast(cacheLimit));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#find)
    ///
    /// ``` key: []const u8, pixmap: QtC.QPixmap ```
    pub fn Find(key: []const u8, pixmap: ?*anyopaque) bool {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QPixmapCache_Find(key_str, @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#find)
    ///
    /// ``` key: QtC.QPixmapCache__Key, pixmap: QtC.QPixmap ```
    pub fn Find2(key: ?*anyopaque, pixmap: ?*anyopaque) bool {
        return qtc.QPixmapCache_Find2(@ptrCast(key), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#insert)
    ///
    /// ``` key: []const u8, pixmap: QtC.QPixmap ```
    pub fn Insert(key: []const u8, pixmap: ?*anyopaque) bool {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QPixmapCache_Insert(key_str, @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#insert)
    ///
    /// ``` pixmap: QtC.QPixmap ```
    pub fn Insert2(pixmap: ?*anyopaque) QtC.QPixmapCache__Key {
        return qtc.QPixmapCache_Insert2(@ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#replace)
    ///
    /// ``` key: QtC.QPixmapCache__Key, pixmap: QtC.QPixmap ```
    pub fn Replace(key: ?*anyopaque, pixmap: ?*anyopaque) bool {
        return qtc.QPixmapCache_Replace(@ptrCast(key), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#remove)
    ///
    /// ``` key: []const u8 ```
    pub fn Remove(key: []const u8) void {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QPixmapCache_Remove(key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#remove)
    ///
    /// ``` key: QtC.QPixmapCache__Key ```
    pub fn Remove2(key: ?*anyopaque) void {
        qtc.QPixmapCache_Remove2(@ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#clear)
    ///
    ///
    pub fn Clear() void {
        qtc.QPixmapCache_Clear();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#dtor.QPixmapCache)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPixmapCache ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPixmapCache_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpixmapcache-key.html
pub const qpixmapcache__key = struct {
    /// New constructs a new QPixmapCache::Key object.
    ///
    ///
    pub fn New() QtC.QPixmapCache__Key {
        return qtc.QPixmapCache__Key_new();
    }

    /// New2 constructs a new QPixmapCache::Key object.
    ///
    /// ``` other: QtC.QPixmapCache__Key ```
    pub fn New2(other: ?*anyopaque) QtC.QPixmapCache__Key {
        return qtc.QPixmapCache__Key_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache__key.html#operator==)
    ///
    /// ``` self: QtC.QPixmapCache__Key, key: QtC.QPixmapCache__Key ```
    pub fn OperatorEqual(self: ?*anyopaque, key: ?*anyopaque) bool {
        return qtc.QPixmapCache__Key_OperatorEqual(@ptrCast(self), @ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache__key.html#operator!=)
    ///
    /// ``` self: QtC.QPixmapCache__Key, key: QtC.QPixmapCache__Key ```
    pub fn OperatorNotEqual(self: ?*anyopaque, key: ?*anyopaque) bool {
        return qtc.QPixmapCache__Key_OperatorNotEqual(@ptrCast(self), @ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache__key.html#operator=)
    ///
    /// ``` self: QtC.QPixmapCache__Key, other: QtC.QPixmapCache__Key ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPixmapCache__Key_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache__key.html#swap)
    ///
    /// ``` self: QtC.QPixmapCache__Key, other: QtC.QPixmapCache__Key ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPixmapCache__Key_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache__key.html#isValid)
    ///
    /// ``` self: QtC.QPixmapCache__Key ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QPixmapCache__Key_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPixmapCache__Key ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPixmapCache__Key_Delete(@ptrCast(self));
    }
};
