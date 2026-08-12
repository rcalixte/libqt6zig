const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kshareddatacache_enums = enums;

/// ### [Upstream resources](https://api.kde.org/kshareddatacache.html)
pub const KSharedDataCache = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kshareddatacache.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSharedDataCache,

    pub const _is_KSharedDataCache = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KSharedDataCache object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` cacheName: []const u8 `
    ///
    /// ` defaultCacheSize: u32 `
    ///
    pub fn new(cacheName: []const u8, defaultCacheSize: u32) KSharedDataCache {
        const cacheName_str = qtc.libqt_string{
            .len = cacheName.len,
            .data = cacheName.ptr,
        };
        return .{ .ptr = qtc.KSharedDataCache_new(cacheName_str, @bitCast(defaultCacheSize)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KSharedDataCache object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` cacheName: []const u8 `
    ///
    /// ` defaultCacheSize: u32 `
    ///
    /// ` expectedItemSize: u32 `
    ///
    pub fn new2(cacheName: []const u8, defaultCacheSize: u32, expectedItemSize: u32) KSharedDataCache {
        const cacheName_str = qtc.libqt_string{
            .len = cacheName.len,
            .data = cacheName.ptr,
        };
        return .{ .ptr = qtc.KSharedDataCache_new2(cacheName_str, @bitCast(defaultCacheSize), @bitCast(expectedItemSize)) };
    }

    /// ### DEPRECATED: Use `evictionPolicy` instead
    ///
    pub const EvictionPolicy = evictionPolicy;

    /// ### [Upstream resources](https://api.kde.org/kshareddatacache.html#evictionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedDataCache `
    ///
    /// ## Returns:
    ///
    /// ` kshareddatacache_enums.EvictionPolicy `
    ///
    pub fn evictionPolicy(self: KSharedDataCache) i32 {
        return qtc.KSharedDataCache_EvictionPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEvictionPolicy` instead
    ///
    pub const SetEvictionPolicy = setEvictionPolicy;

    /// ### [Upstream resources](https://api.kde.org/kshareddatacache.html#setEvictionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedDataCache `
    ///
    /// ` newPolicy: kshareddatacache_enums.EvictionPolicy `
    ///
    pub fn setEvictionPolicy(self: KSharedDataCache, newPolicy: i32) void {
        qtc.KSharedDataCache_SetEvictionPolicy(@ptrCast(self.ptr), @bitCast(newPolicy));
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://api.kde.org/kshareddatacache.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedDataCache `
    ///
    /// ` key: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    pub fn insert(self: KSharedDataCache, key: []const u8, data: []u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KSharedDataCache_Insert(@ptrCast(self.ptr), key_str, data_str);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://api.kde.org/kshareddatacache.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedDataCache `
    ///
    pub fn clear(self: KSharedDataCache) void {
        qtc.KSharedDataCache_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `deleteCache` instead
    ///
    pub const DeleteCache = deleteCache;

    /// ### [Upstream resources](https://api.kde.org/kshareddatacache.html#deleteCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` cacheName: []const u8 `
    ///
    pub fn deleteCache(cacheName: []const u8) void {
        const cacheName_str = qtc.libqt_string{
            .len = cacheName.len,
            .data = cacheName.ptr,
        };
        qtc.KSharedDataCache_DeleteCache(cacheName_str);
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://api.kde.org/kshareddatacache.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedDataCache `
    ///
    /// ` key: []const u8 `
    ///
    pub fn contains(self: KSharedDataCache, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KSharedDataCache_Contains(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `totalSize` instead
    ///
    pub const TotalSize = totalSize;

    /// ### [Upstream resources](https://api.kde.org/kshareddatacache.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedDataCache `
    ///
    pub fn totalSize(self: KSharedDataCache) u32 {
        return qtc.KSharedDataCache_TotalSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `freeSize` instead
    ///
    pub const FreeSize = freeSize;

    /// ### [Upstream resources](https://api.kde.org/kshareddatacache.html#freeSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedDataCache `
    ///
    pub fn freeSize(self: KSharedDataCache) u32 {
        return qtc.KSharedDataCache_FreeSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// ### [Upstream resources](https://api.kde.org/kshareddatacache.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedDataCache `
    ///
    pub fn timestamp(self: KSharedDataCache) u32 {
        return qtc.KSharedDataCache_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// ### [Upstream resources](https://api.kde.org/kshareddatacache.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSharedDataCache `
    ///
    /// ` newTimestamp: u32 `
    ///
    pub fn setTimestamp(self: KSharedDataCache, newTimestamp: u32) void {
        qtc.KSharedDataCache_SetTimestamp(@ptrCast(self.ptr), @bitCast(newTimestamp));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kshareddatacache.html#dtor.KSharedDataCache)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KSharedDataCache `
    ///
    pub fn delete(self: KSharedDataCache) void {
        qtc.KSharedDataCache_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kshareddatacache.html#public-types)
pub const enums = struct {
    pub const EvictionPolicy = enum(i32) {
        pub const NoEvictionPreference: i32 = 0;
        pub const EvictLeastRecentlyUsed: i32 = 1;
        pub const EvictLeastOftenUsed: i32 = 2;
        pub const EvictOldest: i32 = 3;
    };
};
