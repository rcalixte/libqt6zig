const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;

/// ### [Upstream resources](https://api.kde.org/klocalimagecacheimplementation.html)
pub const KLocalImageCacheImplementation = extern struct {
    /// ### [Upstream resources](https://api.kde.org/klocalimagecacheimplementation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KLocalImageCacheImplementation,

    pub const _is_KLocalImageCacheImplementation = {};

    /// ### DEPRECATED: Use `lastModifiedTime` instead
    ///
    pub const LastModifiedTime = lastModifiedTime;

    /// ### [Upstream resources](https://api.kde.org/klocalimagecacheimplementation.html#lastModifiedTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalImageCacheImplementation `
    ///
    pub fn lastModifiedTime(self: KLocalImageCacheImplementation) QDateTime {
        return .{ .ptr = qtc.KLocalImageCacheImplementation_LastModifiedTime(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pixmapCaching` instead
    ///
    pub const PixmapCaching = pixmapCaching;

    /// ### [Upstream resources](https://api.kde.org/klocalimagecacheimplementation.html#pixmapCaching)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalImageCacheImplementation `
    ///
    pub fn pixmapCaching(self: KLocalImageCacheImplementation) bool {
        return qtc.KLocalImageCacheImplementation_PixmapCaching(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPixmapCaching` instead
    ///
    pub const SetPixmapCaching = setPixmapCaching;

    /// ### [Upstream resources](https://api.kde.org/klocalimagecacheimplementation.html#setPixmapCaching)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalImageCacheImplementation `
    ///
    /// ` enable: bool `
    ///
    pub fn setPixmapCaching(self: KLocalImageCacheImplementation, enable: bool) void {
        qtc.KLocalImageCacheImplementation_SetPixmapCaching(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `pixmapCacheLimit` instead
    ///
    pub const PixmapCacheLimit = pixmapCacheLimit;

    /// ### [Upstream resources](https://api.kde.org/klocalimagecacheimplementation.html#pixmapCacheLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalImageCacheImplementation `
    ///
    pub fn pixmapCacheLimit(self: KLocalImageCacheImplementation) i32 {
        return qtc.KLocalImageCacheImplementation_PixmapCacheLimit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPixmapCacheLimit` instead
    ///
    pub const SetPixmapCacheLimit = setPixmapCacheLimit;

    /// ### [Upstream resources](https://api.kde.org/klocalimagecacheimplementation.html#setPixmapCacheLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalImageCacheImplementation `
    ///
    /// ` size: i32 `
    ///
    pub fn setPixmapCacheLimit(self: KLocalImageCacheImplementation, size: i32) void {
        qtc.KLocalImageCacheImplementation_SetPixmapCacheLimit(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/klocalimagecacheimplementation.html#dtor.KLocalImageCacheImplementation)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KLocalImageCacheImplementation `
    ///
    pub fn delete(self: KLocalImageCacheImplementation) void {
        qtc.KLocalImageCacheImplementation_Delete(@ptrCast(self.ptr));
    }
};
