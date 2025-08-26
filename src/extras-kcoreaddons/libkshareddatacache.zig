const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kshareddatacache_enums = enums;

/// https://api-staging.kde.org/kshareddatacache.html
pub const kshareddatacache = struct {
    /// New constructs a new KSharedDataCache object.
    ///
    /// ``` cacheName: []const u8, defaultCacheSize: u32 ```
    pub fn New(cacheName: []const u8, defaultCacheSize: u32) QtC.KSharedDataCache {
        const cacheName_str = qtc.libqt_string{
            .len = cacheName.len,
            .data = cacheName.ptr,
        };

        return qtc.KSharedDataCache_new(cacheName_str, @intCast(defaultCacheSize));
    }

    /// New2 constructs a new KSharedDataCache object.
    ///
    /// ``` cacheName: []const u8, defaultCacheSize: u32, expectedItemSize: u32 ```
    pub fn New2(cacheName: []const u8, defaultCacheSize: u32, expectedItemSize: u32) QtC.KSharedDataCache {
        const cacheName_str = qtc.libqt_string{
            .len = cacheName.len,
            .data = cacheName.ptr,
        };

        return qtc.KSharedDataCache_new2(cacheName_str, @intCast(defaultCacheSize), @intCast(expectedItemSize));
    }

    /// [Qt documentation](https://api-staging.kde.org/kshareddatacache.html#evictionPolicy)
    ///
    /// ``` self: QtC.KSharedDataCache ```
    ///
    /// Returns: ``` kshareddatacache_enums.EvictionPolicy ```
    pub fn EvictionPolicy(self: ?*anyopaque) i32 {
        return qtc.KSharedDataCache_EvictionPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kshareddatacache.html#setEvictionPolicy)
    ///
    /// ``` self: QtC.KSharedDataCache, newPolicy: kshareddatacache_enums.EvictionPolicy ```
    pub fn SetEvictionPolicy(self: ?*anyopaque, newPolicy: i32) void {
        qtc.KSharedDataCache_SetEvictionPolicy(@ptrCast(self), @intCast(newPolicy));
    }

    /// [Qt documentation](https://api-staging.kde.org/kshareddatacache.html#insert)
    ///
    /// ``` self: QtC.KSharedDataCache, key: []const u8, data: []u8 ```
    pub fn Insert(self: ?*anyopaque, key: []const u8, data: []u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KSharedDataCache_Insert(@ptrCast(self), key_str, data_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kshareddatacache.html#clear)
    ///
    /// ``` self: QtC.KSharedDataCache ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.KSharedDataCache_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kshareddatacache.html#deleteCache)
    ///
    /// ``` cacheName: []const u8 ```
    pub fn DeleteCache(cacheName: []const u8) void {
        const cacheName_str = qtc.libqt_string{
            .len = cacheName.len,
            .data = cacheName.ptr,
        };
        qtc.KSharedDataCache_DeleteCache(cacheName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kshareddatacache.html#contains)
    ///
    /// ``` self: QtC.KSharedDataCache, key: []const u8 ```
    pub fn Contains(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KSharedDataCache_Contains(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kshareddatacache.html#totalSize)
    ///
    /// ``` self: QtC.KSharedDataCache ```
    pub fn TotalSize(self: ?*anyopaque) u32 {
        return qtc.KSharedDataCache_TotalSize(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kshareddatacache.html#freeSize)
    ///
    /// ``` self: QtC.KSharedDataCache ```
    pub fn FreeSize(self: ?*anyopaque) u32 {
        return qtc.KSharedDataCache_FreeSize(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kshareddatacache.html#timestamp)
    ///
    /// ``` self: QtC.KSharedDataCache ```
    pub fn Timestamp(self: ?*anyopaque) u32 {
        return qtc.KSharedDataCache_Timestamp(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kshareddatacache.html#setTimestamp)
    ///
    /// ``` self: QtC.KSharedDataCache, newTimestamp: u32 ```
    pub fn SetTimestamp(self: ?*anyopaque, newTimestamp: u32) void {
        qtc.KSharedDataCache_SetTimestamp(@ptrCast(self), @intCast(newTimestamp));
    }

    /// [Qt documentation](https://api-staging.kde.org/kshareddatacache.html#dtor.KSharedDataCache)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KSharedDataCache ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KSharedDataCache_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/kshareddatacache.html#types
pub const enums = struct {
    pub const EvictionPolicy = enum {
        pub const NoEvictionPreference: i32 = 0;
        pub const EvictLeastRecentlyUsed: i32 = 1;
        pub const EvictLeastOftenUsed: i32 = 2;
        pub const EvictOldest: i32 = 3;
    };
};
