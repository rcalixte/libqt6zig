const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QRectF = @import("libqt6").QRectF;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qsgtexture_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html)
pub const QSGTexture = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGTexture,

    pub const _is_QSGTexture = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGTexture object in C++ memory
    ///
    pub fn new() QSGTexture {
        return .{ .ptr = qtc.QSGTexture_new() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn metaObject(self: QSGTexture) QMetaObject {
        return .{ .ptr = qtc.QSGTexture_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QSGTexture, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSGTexture_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn superMetaObject(self: QSGTexture) QMetaObject {
        return .{ .ptr = qtc.QSGTexture_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QSGTexture, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSGTexture_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture `
    ///
    /// ` callback: *const fn (self: QSGTexture, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QSGTexture, callback: *const fn (QSGTexture, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSGTexture_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QSGTexture, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSGTexture_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QSGTexture, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSGTexture_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture `
    ///
    /// ` callback: *const fn (self: QSGTexture, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QSGTexture, callback: *const fn (QSGTexture, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSGTexture_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QSGTexture, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSGTexture_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QSGTexture_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSGTexture.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `comparisonKey` instead
    ///
    pub const ComparisonKey = comparisonKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#comparisonKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn comparisonKey(self: QSGTexture) i64 {
        return qtc.QSGTexture_ComparisonKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onComparisonKey` instead
    ///
    pub const OnComparisonKey = onComparisonKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#comparisonKey)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onComparisonKey(self: QSGTexture, callback: *const fn () callconv(.c) i64) void {
        qtc.QSGTexture_OnComparisonKey(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superComparisonKey` instead
    ///
    pub const SuperComparisonKey = superComparisonKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#comparisonKey)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn superComparisonKey(self: QSGTexture) i64 {
        return qtc.QSGTexture_SuperComparisonKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textureSize` instead
    ///
    pub const TextureSize = textureSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#textureSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn textureSize(self: QSGTexture) QSize {
        return .{ .ptr = qtc.QSGTexture_TextureSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onTextureSize` instead
    ///
    pub const OnTextureSize = onTextureSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#textureSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onTextureSize(self: QSGTexture, callback: *const fn () callconv(.c) QSize) void {
        qtc.QSGTexture_OnTextureSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTextureSize` instead
    ///
    pub const SuperTextureSize = superTextureSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#textureSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn superTextureSize(self: QSGTexture) QSize {
        return .{ .ptr = qtc.QSGTexture_SuperTextureSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasAlphaChannel` instead
    ///
    pub const HasAlphaChannel = hasAlphaChannel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasAlphaChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn hasAlphaChannel(self: QSGTexture) bool {
        return qtc.QSGTexture_HasAlphaChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasAlphaChannel` instead
    ///
    pub const OnHasAlphaChannel = onHasAlphaChannel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasAlphaChannel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasAlphaChannel(self: QSGTexture, callback: *const fn () callconv(.c) bool) void {
        qtc.QSGTexture_OnHasAlphaChannel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasAlphaChannel` instead
    ///
    pub const SuperHasAlphaChannel = superHasAlphaChannel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasAlphaChannel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn superHasAlphaChannel(self: QSGTexture) bool {
        return qtc.QSGTexture_SuperHasAlphaChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasMipmaps` instead
    ///
    pub const HasMipmaps = hasMipmaps;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasMipmaps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn hasMipmaps(self: QSGTexture) bool {
        return qtc.QSGTexture_HasMipmaps(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasMipmaps` instead
    ///
    pub const OnHasMipmaps = onHasMipmaps;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasMipmaps)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasMipmaps(self: QSGTexture, callback: *const fn () callconv(.c) bool) void {
        qtc.QSGTexture_OnHasMipmaps(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasMipmaps` instead
    ///
    pub const SuperHasMipmaps = superHasMipmaps;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasMipmaps)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn superHasMipmaps(self: QSGTexture) bool {
        return qtc.QSGTexture_SuperHasMipmaps(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `normalizedTextureSubRect` instead
    ///
    pub const NormalizedTextureSubRect = normalizedTextureSubRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#normalizedTextureSubRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn normalizedTextureSubRect(self: QSGTexture) QRectF {
        return .{ .ptr = qtc.QSGTexture_NormalizedTextureSubRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onNormalizedTextureSubRect` instead
    ///
    pub const OnNormalizedTextureSubRect = onNormalizedTextureSubRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#normalizedTextureSubRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture `
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onNormalizedTextureSubRect(self: QSGTexture, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QSGTexture_OnNormalizedTextureSubRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superNormalizedTextureSubRect` instead
    ///
    pub const SuperNormalizedTextureSubRect = superNormalizedTextureSubRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#normalizedTextureSubRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn superNormalizedTextureSubRect(self: QSGTexture) QRectF {
        return .{ .ptr = qtc.QSGTexture_SuperNormalizedTextureSubRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isAtlasTexture` instead
    ///
    pub const IsAtlasTexture = isAtlasTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#isAtlasTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn isAtlasTexture(self: QSGTexture) bool {
        return qtc.QSGTexture_IsAtlasTexture(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsAtlasTexture` instead
    ///
    pub const OnIsAtlasTexture = onIsAtlasTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#isAtlasTexture)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsAtlasTexture(self: QSGTexture, callback: *const fn () callconv(.c) bool) void {
        qtc.QSGTexture_OnIsAtlasTexture(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsAtlasTexture` instead
    ///
    pub const SuperIsAtlasTexture = superIsAtlasTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#isAtlasTexture)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn superIsAtlasTexture(self: QSGTexture) bool {
        return qtc.QSGTexture_SuperIsAtlasTexture(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMipmapFiltering` instead
    ///
    pub const SetMipmapFiltering = setMipmapFiltering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setMipmapFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` filter: qsgtexture_enums.Filtering `
    ///
    pub fn setMipmapFiltering(self: QSGTexture, filter: i32) void {
        qtc.QSGTexture_SetMipmapFiltering(@ptrCast(self.ptr), @bitCast(filter));
    }

    /// ### DEPRECATED: Use `mipmapFiltering` instead
    ///
    pub const MipmapFiltering = mipmapFiltering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#mipmapFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.Filtering `
    ///
    pub fn mipmapFiltering(self: QSGTexture) i32 {
        return qtc.QSGTexture_MipmapFiltering(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFiltering` instead
    ///
    pub const SetFiltering = setFiltering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` filter: qsgtexture_enums.Filtering `
    ///
    pub fn setFiltering(self: QSGTexture, filter: i32) void {
        qtc.QSGTexture_SetFiltering(@ptrCast(self.ptr), @bitCast(filter));
    }

    /// ### DEPRECATED: Use `filtering` instead
    ///
    pub const Filtering = filtering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#filtering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.Filtering `
    ///
    pub fn filtering(self: QSGTexture) i32 {
        return qtc.QSGTexture_Filtering(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnisotropyLevel` instead
    ///
    pub const SetAnisotropyLevel = setAnisotropyLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setAnisotropyLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` level: qsgtexture_enums.AnisotropyLevel `
    ///
    pub fn setAnisotropyLevel(self: QSGTexture, level: i32) void {
        qtc.QSGTexture_SetAnisotropyLevel(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `anisotropyLevel` instead
    ///
    pub const AnisotropyLevel = anisotropyLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#anisotropyLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.AnisotropyLevel `
    ///
    pub fn anisotropyLevel(self: QSGTexture) i32 {
        return qtc.QSGTexture_AnisotropyLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontalWrapMode` instead
    ///
    pub const SetHorizontalWrapMode = setHorizontalWrapMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setHorizontalWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` hwrap: qsgtexture_enums.WrapMode `
    ///
    pub fn setHorizontalWrapMode(self: QSGTexture, hwrap: i32) void {
        qtc.QSGTexture_SetHorizontalWrapMode(@ptrCast(self.ptr), @bitCast(hwrap));
    }

    /// ### DEPRECATED: Use `horizontalWrapMode` instead
    ///
    pub const HorizontalWrapMode = horizontalWrapMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#horizontalWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.WrapMode `
    ///
    pub fn horizontalWrapMode(self: QSGTexture) i32 {
        return qtc.QSGTexture_HorizontalWrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerticalWrapMode` instead
    ///
    pub const SetVerticalWrapMode = setVerticalWrapMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setVerticalWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` vwrap: qsgtexture_enums.WrapMode `
    ///
    pub fn setVerticalWrapMode(self: QSGTexture, vwrap: i32) void {
        qtc.QSGTexture_SetVerticalWrapMode(@ptrCast(self.ptr), @bitCast(vwrap));
    }

    /// ### DEPRECATED: Use `verticalWrapMode` instead
    ///
    pub const VerticalWrapMode = verticalWrapMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#verticalWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.WrapMode `
    ///
    pub fn verticalWrapMode(self: QSGTexture) i32 {
        return qtc.QSGTexture_VerticalWrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `convertToNormalizedSourceRect` instead
    ///
    pub const ConvertToNormalizedSourceRect = convertToNormalizedSourceRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#convertToNormalizedSourceRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` rect: QRectF `
    ///
    pub fn convertToNormalizedSourceRect(self: QSGTexture, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QSGTexture_ConvertToNormalizedSourceRect(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `resolveInterface` instead
    ///
    pub const ResolveInterface = resolveInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#resolveInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn resolveInterface(self: QSGTexture, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QSGTexture_ResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// ### DEPRECATED: Use `onResolveInterface` instead
    ///
    pub const OnResolveInterface = onResolveInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#resolveInterface)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture `
    ///
    /// ` callback: *const fn (self: QSGTexture, name: [*:0]const u8, revision: i32) callconv(.c) ?*anyopaque `
    ///
    pub fn onResolveInterface(self: QSGTexture, callback: *const fn (QSGTexture, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QSGTexture_OnResolveInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResolveInterface` instead
    ///
    pub const SuperResolveInterface = superResolveInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#resolveInterface)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn superResolveInterface(self: QSGTexture, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QSGTexture_SuperResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QSGTexture_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSGTexture.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QSGTexture_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSGTexture.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QSGTexture, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSGTexture.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QSGTexture, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn isWidgetType(self: QSGTexture) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn isWindowType(self: QSGTexture) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn isQuickItemType(self: QSGTexture) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn signalsBlocked(self: QSGTexture) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QSGTexture, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn thread(self: QSGTexture) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QSGTexture, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QSGTexture, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QSGTexture, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QSGTexture, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QSGTexture, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QSGTexture, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QSGTexture.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QSGTexture, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QSGTexture, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QSGTexture, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QSGTexture, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn disconnect3(self: QSGTexture) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QSGTexture, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn dumpObjectTree(self: QSGTexture) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn dumpObjectInfo(self: QSGTexture) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QSGTexture, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QSGTexture, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QSGTexture, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QSGTexture.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSGTexture.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn bindingStorage(self: QSGTexture) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn bindingStorage2(self: QSGTexture) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn destroyed(self: QSGTexture) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture `
    ///
    /// ` callback: *const fn (self: QSGTexture) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QSGTexture, callback: *const fn (QSGTexture) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn parent(self: QSGTexture) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QSGTexture, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn deleteLater(self: QSGTexture) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QSGTexture, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QSGTexture, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QSGTexture, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QSGTexture, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QSGTexture, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QSGTexture, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QSGTexture, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QSGTexture, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture `
    ///
    /// ` callback: *const fn (self: QSGTexture, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QSGTexture, callback: *const fn (QSGTexture, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QSGTexture, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSGTexture_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QSGTexture, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSGTexture_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture`
    ///
    /// ` callback: *const fn (self: QSGTexture, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QSGTexture, callback: *const fn (QSGTexture, QEvent) callconv(.c) bool) void {
        qtc.QSGTexture_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QSGTexture, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSGTexture_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QSGTexture, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSGTexture_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture`
    ///
    /// ` callback: *const fn (self: QSGTexture, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QSGTexture, callback: *const fn (QSGTexture, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSGTexture_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QSGTexture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSGTexture_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QSGTexture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSGTexture_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture`
    ///
    /// ` callback: *const fn (self: QSGTexture, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QSGTexture, callback: *const fn (QSGTexture, QTimerEvent) callconv(.c) void) void {
        qtc.QSGTexture_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QSGTexture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSGTexture_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QSGTexture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSGTexture_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture`
    ///
    /// ` callback: *const fn (self: QSGTexture, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QSGTexture, callback: *const fn (QSGTexture, QChildEvent) callconv(.c) void) void {
        qtc.QSGTexture_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QSGTexture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSGTexture_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QSGTexture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSGTexture_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture`
    ///
    /// ` callback: *const fn (self: QSGTexture, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QSGTexture, callback: *const fn (QSGTexture, QEvent) callconv(.c) void) void {
        qtc.QSGTexture_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QSGTexture, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSGTexture_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QSGTexture, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSGTexture_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture`
    ///
    /// ` callback: *const fn (self: QSGTexture, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QSGTexture, callback: *const fn (QSGTexture, QMetaMethod) callconv(.c) void) void {
        qtc.QSGTexture_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QSGTexture, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSGTexture_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QSGTexture, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSGTexture_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture`
    ///
    /// ` callback: *const fn (self: QSGTexture, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QSGTexture, callback: *const fn (QSGTexture, QMetaMethod) callconv(.c) void) void {
        qtc.QSGTexture_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn sender(self: QSGTexture) QObject {
        return .{ .ptr = qtc.QSGTexture_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn superSender(self: QSGTexture) QObject {
        return .{ .ptr = qtc.QSGTexture_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QSGTexture, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSGTexture_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn senderSignalIndex(self: QSGTexture) i32 {
        return qtc.QSGTexture_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    pub fn superSenderSignalIndex(self: QSGTexture) i32 {
        return qtc.QSGTexture_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QSGTexture, callback: *const fn () callconv(.c) i32) void {
        qtc.QSGTexture_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QSGTexture, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSGTexture_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QSGTexture, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSGTexture_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture`
    ///
    /// ` callback: *const fn (self: QSGTexture, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QSGTexture, callback: *const fn (QSGTexture, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSGTexture_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QSGTexture, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSGTexture_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTexture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QSGTexture, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSGTexture_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture`
    ///
    /// ` callback: *const fn (self: QSGTexture, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QSGTexture, callback: *const fn (QSGTexture, QMetaMethod) callconv(.c) bool) void {
        qtc.QSGTexture_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTexture `
    ///
    /// ` callback: *const fn (self: QSGTexture, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QSGTexture, callback: *const fn (QSGTexture, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#dtor.QSGTexture)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGTexture `
    ///
    pub fn delete(self: QSGTexture) void {
        qtc.QSGTexture_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgdynamictexture.html)
pub const QSGDynamicTexture = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgdynamictexture.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGDynamicTexture,

    pub const _is_QSGDynamicTexture = {};
    pub const _is_QSGTexture = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGDynamicTexture object in C++ memory
    ///
    pub fn new() QSGDynamicTexture {
        return .{ .ptr = qtc.QSGDynamicTexture_new() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn metaObject(self: QSGDynamicTexture) QMetaObject {
        return .{ .ptr = qtc.QSGDynamicTexture_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QSGDynamicTexture, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSGDynamicTexture_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn superMetaObject(self: QSGDynamicTexture) QMetaObject {
        return .{ .ptr = qtc.QSGDynamicTexture_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QSGDynamicTexture, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSGDynamicTexture_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` callback: *const fn (self: QSGDynamicTexture, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QSGDynamicTexture, callback: *const fn (QSGDynamicTexture, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSGDynamicTexture_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QSGDynamicTexture, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSGDynamicTexture_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QSGDynamicTexture, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSGDynamicTexture_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` callback: *const fn (self: QSGDynamicTexture, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QSGDynamicTexture, callback: *const fn (QSGDynamicTexture, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSGDynamicTexture_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QSGDynamicTexture, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSGDynamicTexture_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QSGDynamicTexture_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSGDynamicTexture.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `updateTexture` instead
    ///
    pub const UpdateTexture = updateTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgdynamictexture.html#updateTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn updateTexture(self: QSGDynamicTexture) bool {
        return qtc.QSGDynamicTexture_UpdateTexture(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateTexture` instead
    ///
    pub const OnUpdateTexture = onUpdateTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgdynamictexture.html#updateTexture)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onUpdateTexture(self: QSGDynamicTexture, callback: *const fn () callconv(.c) bool) void {
        qtc.QSGDynamicTexture_OnUpdateTexture(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateTexture` instead
    ///
    pub const SuperUpdateTexture = superUpdateTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgdynamictexture.html#updateTexture)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn superUpdateTexture(self: QSGDynamicTexture) bool {
        return qtc.QSGDynamicTexture_SuperUpdateTexture(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QSGDynamicTexture_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSGDynamicTexture.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QSGDynamicTexture_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSGDynamicTexture.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMipmapFiltering` instead
    ///
    pub const SetMipmapFiltering = setMipmapFiltering;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setMipmapFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` filter: qsgtexture_enums.Filtering `
    ///
    pub fn setMipmapFiltering(self: QSGDynamicTexture, filter: i32) void {
        qtc.QSGTexture_SetMipmapFiltering(@ptrCast(self.ptr), @bitCast(filter));
    }

    /// ### DEPRECATED: Use `mipmapFiltering` instead
    ///
    pub const MipmapFiltering = mipmapFiltering;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#mipmapFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.Filtering `
    ///
    pub fn mipmapFiltering(self: QSGDynamicTexture) i32 {
        return qtc.QSGTexture_MipmapFiltering(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFiltering` instead
    ///
    pub const SetFiltering = setFiltering;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` filter: qsgtexture_enums.Filtering `
    ///
    pub fn setFiltering(self: QSGDynamicTexture, filter: i32) void {
        qtc.QSGTexture_SetFiltering(@ptrCast(self.ptr), @bitCast(filter));
    }

    /// ### DEPRECATED: Use `filtering` instead
    ///
    pub const Filtering = filtering;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#filtering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.Filtering `
    ///
    pub fn filtering(self: QSGDynamicTexture) i32 {
        return qtc.QSGTexture_Filtering(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnisotropyLevel` instead
    ///
    pub const SetAnisotropyLevel = setAnisotropyLevel;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setAnisotropyLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` level: qsgtexture_enums.AnisotropyLevel `
    ///
    pub fn setAnisotropyLevel(self: QSGDynamicTexture, level: i32) void {
        qtc.QSGTexture_SetAnisotropyLevel(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `anisotropyLevel` instead
    ///
    pub const AnisotropyLevel = anisotropyLevel;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#anisotropyLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.AnisotropyLevel `
    ///
    pub fn anisotropyLevel(self: QSGDynamicTexture) i32 {
        return qtc.QSGTexture_AnisotropyLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontalWrapMode` instead
    ///
    pub const SetHorizontalWrapMode = setHorizontalWrapMode;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setHorizontalWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` hwrap: qsgtexture_enums.WrapMode `
    ///
    pub fn setHorizontalWrapMode(self: QSGDynamicTexture, hwrap: i32) void {
        qtc.QSGTexture_SetHorizontalWrapMode(@ptrCast(self.ptr), @bitCast(hwrap));
    }

    /// ### DEPRECATED: Use `horizontalWrapMode` instead
    ///
    pub const HorizontalWrapMode = horizontalWrapMode;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#horizontalWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.WrapMode `
    ///
    pub fn horizontalWrapMode(self: QSGDynamicTexture) i32 {
        return qtc.QSGTexture_HorizontalWrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerticalWrapMode` instead
    ///
    pub const SetVerticalWrapMode = setVerticalWrapMode;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setVerticalWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` vwrap: qsgtexture_enums.WrapMode `
    ///
    pub fn setVerticalWrapMode(self: QSGDynamicTexture, vwrap: i32) void {
        qtc.QSGTexture_SetVerticalWrapMode(@ptrCast(self.ptr), @bitCast(vwrap));
    }

    /// ### DEPRECATED: Use `verticalWrapMode` instead
    ///
    pub const VerticalWrapMode = verticalWrapMode;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#verticalWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.WrapMode `
    ///
    pub fn verticalWrapMode(self: QSGDynamicTexture) i32 {
        return qtc.QSGTexture_VerticalWrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `convertToNormalizedSourceRect` instead
    ///
    pub const ConvertToNormalizedSourceRect = convertToNormalizedSourceRect;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#convertToNormalizedSourceRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` rect: QRectF `
    ///
    pub fn convertToNormalizedSourceRect(self: QSGDynamicTexture, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QSGTexture_ConvertToNormalizedSourceRect(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QSGDynamicTexture, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSGDynamicTexture.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QSGDynamicTexture, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn isWidgetType(self: QSGDynamicTexture) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn isWindowType(self: QSGDynamicTexture) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn isQuickItemType(self: QSGDynamicTexture) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn signalsBlocked(self: QSGDynamicTexture) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QSGDynamicTexture, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn thread(self: QSGDynamicTexture) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QSGDynamicTexture, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QSGDynamicTexture, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QSGDynamicTexture, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QSGDynamicTexture, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QSGDynamicTexture, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QSGDynamicTexture, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QSGDynamicTexture.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QSGDynamicTexture, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QSGDynamicTexture, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QSGDynamicTexture, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QSGDynamicTexture, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn disconnect3(self: QSGDynamicTexture) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QSGDynamicTexture, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn dumpObjectTree(self: QSGDynamicTexture) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn dumpObjectInfo(self: QSGDynamicTexture) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QSGDynamicTexture, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QSGDynamicTexture, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QSGDynamicTexture, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QSGDynamicTexture.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSGDynamicTexture.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn bindingStorage(self: QSGDynamicTexture) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn bindingStorage2(self: QSGDynamicTexture) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn destroyed(self: QSGDynamicTexture) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` callback: *const fn (self: QSGDynamicTexture) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QSGDynamicTexture, callback: *const fn (QSGDynamicTexture) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn parent(self: QSGDynamicTexture) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QSGDynamicTexture, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn deleteLater(self: QSGDynamicTexture) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QSGDynamicTexture, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QSGDynamicTexture, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QSGDynamicTexture, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QSGDynamicTexture, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QSGDynamicTexture, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QSGDynamicTexture, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QSGDynamicTexture, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QSGDynamicTexture, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` callback: *const fn (self: QSGDynamicTexture, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QSGDynamicTexture, callback: *const fn (QSGDynamicTexture, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `comparisonKey` instead
    ///
    pub const ComparisonKey = comparisonKey;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#comparisonKey)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn comparisonKey(self: QSGDynamicTexture) i64 {
        return qtc.QSGDynamicTexture_ComparisonKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superComparisonKey` instead
    ///
    pub const SuperComparisonKey = superComparisonKey;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#comparisonKey)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn superComparisonKey(self: QSGDynamicTexture) i64 {
        return qtc.QSGDynamicTexture_SuperComparisonKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onComparisonKey` instead
    ///
    pub const OnComparisonKey = onComparisonKey;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#comparisonKey)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onComparisonKey(self: QSGDynamicTexture, callback: *const fn () callconv(.c) i64) void {
        qtc.QSGDynamicTexture_OnComparisonKey(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textureSize` instead
    ///
    pub const TextureSize = textureSize;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#textureSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn textureSize(self: QSGDynamicTexture) QSize {
        return .{ .ptr = qtc.QSGDynamicTexture_TextureSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superTextureSize` instead
    ///
    pub const SuperTextureSize = superTextureSize;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#textureSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn superTextureSize(self: QSGDynamicTexture) QSize {
        return .{ .ptr = qtc.QSGDynamicTexture_SuperTextureSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onTextureSize` instead
    ///
    pub const OnTextureSize = onTextureSize;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#textureSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onTextureSize(self: QSGDynamicTexture, callback: *const fn () callconv(.c) QSize) void {
        qtc.QSGDynamicTexture_OnTextureSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasAlphaChannel` instead
    ///
    pub const HasAlphaChannel = hasAlphaChannel;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasAlphaChannel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn hasAlphaChannel(self: QSGDynamicTexture) bool {
        return qtc.QSGDynamicTexture_HasAlphaChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHasAlphaChannel` instead
    ///
    pub const SuperHasAlphaChannel = superHasAlphaChannel;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasAlphaChannel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn superHasAlphaChannel(self: QSGDynamicTexture) bool {
        return qtc.QSGDynamicTexture_SuperHasAlphaChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasAlphaChannel` instead
    ///
    pub const OnHasAlphaChannel = onHasAlphaChannel;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasAlphaChannel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasAlphaChannel(self: QSGDynamicTexture, callback: *const fn () callconv(.c) bool) void {
        qtc.QSGDynamicTexture_OnHasAlphaChannel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasMipmaps` instead
    ///
    pub const HasMipmaps = hasMipmaps;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasMipmaps)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn hasMipmaps(self: QSGDynamicTexture) bool {
        return qtc.QSGDynamicTexture_HasMipmaps(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHasMipmaps` instead
    ///
    pub const SuperHasMipmaps = superHasMipmaps;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasMipmaps)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn superHasMipmaps(self: QSGDynamicTexture) bool {
        return qtc.QSGDynamicTexture_SuperHasMipmaps(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasMipmaps` instead
    ///
    pub const OnHasMipmaps = onHasMipmaps;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasMipmaps)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasMipmaps(self: QSGDynamicTexture, callback: *const fn () callconv(.c) bool) void {
        qtc.QSGDynamicTexture_OnHasMipmaps(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `normalizedTextureSubRect` instead
    ///
    pub const NormalizedTextureSubRect = normalizedTextureSubRect;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#normalizedTextureSubRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn normalizedTextureSubRect(self: QSGDynamicTexture) QRectF {
        return .{ .ptr = qtc.QSGDynamicTexture_NormalizedTextureSubRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superNormalizedTextureSubRect` instead
    ///
    pub const SuperNormalizedTextureSubRect = superNormalizedTextureSubRect;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#normalizedTextureSubRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn superNormalizedTextureSubRect(self: QSGDynamicTexture) QRectF {
        return .{ .ptr = qtc.QSGDynamicTexture_SuperNormalizedTextureSubRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onNormalizedTextureSubRect` instead
    ///
    pub const OnNormalizedTextureSubRect = onNormalizedTextureSubRect;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#normalizedTextureSubRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onNormalizedTextureSubRect(self: QSGDynamicTexture, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QSGDynamicTexture_OnNormalizedTextureSubRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isAtlasTexture` instead
    ///
    pub const IsAtlasTexture = isAtlasTexture;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#isAtlasTexture)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn isAtlasTexture(self: QSGDynamicTexture) bool {
        return qtc.QSGDynamicTexture_IsAtlasTexture(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsAtlasTexture` instead
    ///
    pub const SuperIsAtlasTexture = superIsAtlasTexture;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#isAtlasTexture)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn superIsAtlasTexture(self: QSGDynamicTexture) bool {
        return qtc.QSGDynamicTexture_SuperIsAtlasTexture(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsAtlasTexture` instead
    ///
    pub const OnIsAtlasTexture = onIsAtlasTexture;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#isAtlasTexture)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsAtlasTexture(self: QSGDynamicTexture, callback: *const fn () callconv(.c) bool) void {
        qtc.QSGDynamicTexture_OnIsAtlasTexture(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QSGDynamicTexture, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSGDynamicTexture_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QSGDynamicTexture, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSGDynamicTexture_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn (self: QSGDynamicTexture, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QSGDynamicTexture, callback: *const fn (QSGDynamicTexture, QEvent) callconv(.c) bool) void {
        qtc.QSGDynamicTexture_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QSGDynamicTexture, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSGDynamicTexture_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QSGDynamicTexture, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSGDynamicTexture_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn (self: QSGDynamicTexture, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QSGDynamicTexture, callback: *const fn (QSGDynamicTexture, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSGDynamicTexture_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QSGDynamicTexture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSGDynamicTexture_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QSGDynamicTexture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSGDynamicTexture_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn (self: QSGDynamicTexture, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QSGDynamicTexture, callback: *const fn (QSGDynamicTexture, QTimerEvent) callconv(.c) void) void {
        qtc.QSGDynamicTexture_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QSGDynamicTexture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSGDynamicTexture_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QSGDynamicTexture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSGDynamicTexture_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn (self: QSGDynamicTexture, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QSGDynamicTexture, callback: *const fn (QSGDynamicTexture, QChildEvent) callconv(.c) void) void {
        qtc.QSGDynamicTexture_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QSGDynamicTexture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSGDynamicTexture_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QSGDynamicTexture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSGDynamicTexture_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn (self: QSGDynamicTexture, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QSGDynamicTexture, callback: *const fn (QSGDynamicTexture, QEvent) callconv(.c) void) void {
        qtc.QSGDynamicTexture_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QSGDynamicTexture, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSGDynamicTexture_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QSGDynamicTexture, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSGDynamicTexture_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn (self: QSGDynamicTexture, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QSGDynamicTexture, callback: *const fn (QSGDynamicTexture, QMetaMethod) callconv(.c) void) void {
        qtc.QSGDynamicTexture_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QSGDynamicTexture, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSGDynamicTexture_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QSGDynamicTexture, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSGDynamicTexture_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn (self: QSGDynamicTexture, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QSGDynamicTexture, callback: *const fn (QSGDynamicTexture, QMetaMethod) callconv(.c) void) void {
        qtc.QSGDynamicTexture_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resolveInterface` instead
    ///
    pub const ResolveInterface = resolveInterface;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#resolveInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn resolveInterface(self: QSGDynamicTexture, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QSGDynamicTexture_ResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// ### DEPRECATED: Use `superResolveInterface` instead
    ///
    pub const SuperResolveInterface = superResolveInterface;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#resolveInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn superResolveInterface(self: QSGDynamicTexture, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QSGDynamicTexture_SuperResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// ### DEPRECATED: Use `onResolveInterface` instead
    ///
    pub const OnResolveInterface = onResolveInterface;

    /// Inherited from QSGTexture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#resolveInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn (self: QSGDynamicTexture, name: [*:0]const u8, revision: i32) callconv(.c) ?*anyopaque `
    ///
    pub fn onResolveInterface(self: QSGDynamicTexture, callback: *const fn (QSGDynamicTexture, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QSGDynamicTexture_OnResolveInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn sender(self: QSGDynamicTexture) QObject {
        return .{ .ptr = qtc.QSGDynamicTexture_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn superSender(self: QSGDynamicTexture) QObject {
        return .{ .ptr = qtc.QSGDynamicTexture_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QSGDynamicTexture, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSGDynamicTexture_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn senderSignalIndex(self: QSGDynamicTexture) i32 {
        return qtc.QSGDynamicTexture_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn superSenderSignalIndex(self: QSGDynamicTexture) i32 {
        return qtc.QSGDynamicTexture_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QSGDynamicTexture, callback: *const fn () callconv(.c) i32) void {
        qtc.QSGDynamicTexture_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QSGDynamicTexture, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSGDynamicTexture_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QSGDynamicTexture, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSGDynamicTexture_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn (self: QSGDynamicTexture, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QSGDynamicTexture, callback: *const fn (QSGDynamicTexture, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSGDynamicTexture_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QSGDynamicTexture, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSGDynamicTexture_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QSGDynamicTexture, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSGDynamicTexture_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture`
    ///
    /// ` callback: *const fn (self: QSGDynamicTexture, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QSGDynamicTexture, callback: *const fn (QSGDynamicTexture, QMetaMethod) callconv(.c) bool) void {
        qtc.QSGDynamicTexture_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGDynamicTexture `
    ///
    /// ` callback: *const fn (self: QSGDynamicTexture, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QSGDynamicTexture, callback: *const fn (QSGDynamicTexture, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgdynamictexture.html#dtor.QSGDynamicTexture)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGDynamicTexture `
    ///
    pub fn delete(self: QSGDynamicTexture) void {
        qtc.QSGDynamicTexture_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#public-types)
pub const enums = struct {
    pub const WrapMode = enum {
        pub const Repeat: i32 = 0;
        pub const ClampToEdge: i32 = 1;
        pub const MirroredRepeat: i32 = 2;
    };

    pub const Filtering = enum {
        pub const None: i32 = 0;
        pub const Nearest: i32 = 1;
        pub const Linear: i32 = 2;
    };

    pub const AnisotropyLevel = enum {
        pub const AnisotropyNone: i32 = 0;
        pub const Anisotropy2x: i32 = 1;
        pub const Anisotropy4x: i32 = 2;
        pub const Anisotropy8x: i32 = 3;
        pub const Anisotropy16x: i32 = 4;
    };
};
