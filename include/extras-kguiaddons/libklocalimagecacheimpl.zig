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

    /// ### [Upstream resources](https://api.kde.org/klocalimagecacheimplementation.html#lastModifiedTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalImageCacheImplementation `
    ///
    pub fn LastModifiedTime(self: KLocalImageCacheImplementation) QDateTime {
        return .{ .ptr = qtc.KLocalImageCacheImplementation_LastModifiedTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klocalimagecacheimplementation.html#pixmapCaching)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalImageCacheImplementation `
    ///
    pub fn PixmapCaching(self: KLocalImageCacheImplementation) bool {
        return qtc.KLocalImageCacheImplementation_PixmapCaching(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klocalimagecacheimplementation.html#setPixmapCaching)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalImageCacheImplementation `
    ///
    /// ` enable: bool `
    ///
    pub fn SetPixmapCaching(self: KLocalImageCacheImplementation, enable: bool) void {
        qtc.KLocalImageCacheImplementation_SetPixmapCaching(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/klocalimagecacheimplementation.html#pixmapCacheLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalImageCacheImplementation `
    ///
    pub fn PixmapCacheLimit(self: KLocalImageCacheImplementation) i32 {
        return qtc.KLocalImageCacheImplementation_PixmapCacheLimit(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klocalimagecacheimplementation.html#setPixmapCacheLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalImageCacheImplementation `
    ///
    /// ` size: i32 `
    ///
    pub fn SetPixmapCacheLimit(self: KLocalImageCacheImplementation, size: i32) void {
        qtc.KLocalImageCacheImplementation_SetPixmapCacheLimit(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/klocalimagecacheimplementation.html#dtor.KLocalImageCacheImplementation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KLocalImageCacheImplementation `
    ///
    pub fn Delete(self: KLocalImageCacheImplementation) void {
        qtc.KLocalImageCacheImplementation_Delete(@ptrCast(self.ptr));
    }
};
