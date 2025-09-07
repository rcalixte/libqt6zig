const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/klocalimagecacheimplementation.html
pub const klocalimagecacheimplementation = struct {
    /// [Qt documentation](https://api.kde.org/klocalimagecacheimplementation.html#lastModifiedTime)
    ///
    /// ``` self: QtC.KLocalImageCacheImplementation ```
    pub fn LastModifiedTime(self: ?*anyopaque) QtC.QDateTime {
        return qtc.KLocalImageCacheImplementation_LastModifiedTime(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/klocalimagecacheimplementation.html#pixmapCaching)
    ///
    /// ``` self: QtC.KLocalImageCacheImplementation ```
    pub fn PixmapCaching(self: ?*anyopaque) bool {
        return qtc.KLocalImageCacheImplementation_PixmapCaching(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/klocalimagecacheimplementation.html#setPixmapCaching)
    ///
    /// ``` self: QtC.KLocalImageCacheImplementation, enable: bool ```
    pub fn SetPixmapCaching(self: ?*anyopaque, enable: bool) void {
        qtc.KLocalImageCacheImplementation_SetPixmapCaching(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://api.kde.org/klocalimagecacheimplementation.html#pixmapCacheLimit)
    ///
    /// ``` self: QtC.KLocalImageCacheImplementation ```
    pub fn PixmapCacheLimit(self: ?*anyopaque) i32 {
        return qtc.KLocalImageCacheImplementation_PixmapCacheLimit(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/klocalimagecacheimplementation.html#setPixmapCacheLimit)
    ///
    /// ``` self: QtC.KLocalImageCacheImplementation, size: i32 ```
    pub fn SetPixmapCacheLimit(self: ?*anyopaque, size: i32) void {
        qtc.KLocalImageCacheImplementation_SetPixmapCacheLimit(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://api.kde.org/klocalimagecacheimplementation.html#dtor.KLocalImageCacheImplementation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KLocalImageCacheImplementation ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KLocalImageCacheImplementation_Delete(@ptrCast(self));
    }
};
