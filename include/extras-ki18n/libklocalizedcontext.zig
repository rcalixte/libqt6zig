const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html)
pub const KLocalizedContext = extern struct {
    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KLocalizedContext,

    pub const _is_KLocalizedContext = {};
    pub const _is_QObject = {};

    /// New constructs a new KLocalizedContext object.
    ///
    pub fn New() KLocalizedContext {
        return .{ .ptr = qtc.KLocalizedContext_new() };
    }

    /// New2 constructs a new KLocalizedContext object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KLocalizedContext {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KLocalizedContext_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn MetaObject(self: KLocalizedContext) QMetaObject {
        return .{ .ptr = qtc.KLocalizedContext_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KLocalizedContext, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KLocalizedContext_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn SuperMetaObject(self: KLocalizedContext) QMetaObject {
        return .{ .ptr = qtc.KLocalizedContext_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KLocalizedContext, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KLocalizedContext_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` callback: *const fn (self: KLocalizedContext, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KLocalizedContext, callback: *const fn (KLocalizedContext, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KLocalizedContext_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KLocalizedContext, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KLocalizedContext_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KLocalizedContext, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KLocalizedContext_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` callback: *const fn (self: KLocalizedContext, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KLocalizedContext, callback: *const fn (KLocalizedContext, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KLocalizedContext_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KLocalizedContext, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KLocalizedContext_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#translationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TranslationDomain(self: KLocalizedContext, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KLocalizedContext_TranslationDomain(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.TranslationDomain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#setTranslationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` domain: []const u8 `
    ///
    pub fn SetTranslationDomain(self: KLocalizedContext, domain: []const u8) void {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        qtc.KLocalizedContext_SetTranslationDomain(@ptrCast(self.ptr), domain_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    pub fn I18n(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        var _str = qtc.KLocalizedContext_I18n(@ptrCast(self.ptr), message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    pub fn I18nc(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        var _str = qtc.KLocalizedContext_I18nc(@ptrCast(self.ptr), context_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    pub fn I18np(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        var _str = qtc.KLocalizedContext_I18np(@ptrCast(self.ptr), singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    pub fn I18ncp(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        var _str = qtc.KLocalizedContext_I18ncp(@ptrCast(self.ptr), context_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    pub fn I18nd(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        var _str = qtc.KLocalizedContext_I18nd(@ptrCast(self.ptr), domain_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    pub fn I18ndc(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        var _str = qtc.KLocalizedContext_I18ndc(@ptrCast(self.ptr), domain_str, context_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    pub fn I18ndp(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        var _str = qtc.KLocalizedContext_I18ndp(@ptrCast(self.ptr), domain_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    pub fn I18ndcp(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        var _str = qtc.KLocalizedContext_I18ndcp(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    pub fn Xi18n(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        var _str = qtc.KLocalizedContext_Xi18n(@ptrCast(self.ptr), message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    pub fn Xi18nc(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        var _str = qtc.KLocalizedContext_Xi18nc(@ptrCast(self.ptr), context_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    pub fn Xi18np(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        var _str = qtc.KLocalizedContext_Xi18np(@ptrCast(self.ptr), singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    pub fn Xi18ncp(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        var _str = qtc.KLocalizedContext_Xi18ncp(@ptrCast(self.ptr), context_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    pub fn Xi18nd(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        var _str = qtc.KLocalizedContext_Xi18nd(@ptrCast(self.ptr), domain_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    pub fn Xi18ndc(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        var _str = qtc.KLocalizedContext_Xi18ndc(@ptrCast(self.ptr), domain_str, context_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    pub fn Xi18ndp(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        var _str = qtc.KLocalizedContext_Xi18ndp(@ptrCast(self.ptr), domain_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    pub fn Xi18ndcp(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        var _str = qtc.KLocalizedContext_Xi18ndcp(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#translationDomainChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` translationDomain: []const u8 `
    ///
    pub fn TranslationDomainChanged(self: KLocalizedContext, translationDomain: []const u8) void {
        const translationDomain_str = qtc.libqt_string{
            .len = translationDomain.len,
            .data = translationDomain.ptr,
        };
        qtc.KLocalizedContext_TranslationDomainChanged(@ptrCast(self.ptr), translationDomain_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#translationDomainChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` callback: *const fn (self: KLocalizedContext, translationDomain: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTranslationDomainChanged(self: KLocalizedContext, callback: *const fn (KLocalizedContext, [*:0]const u8) callconv(.c) void) void {
        qtc.KLocalizedContext_Connect_TranslationDomainChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn I18n2(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18n2(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn I18n3(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18n3(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    pub fn I18n4(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18n4(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    pub fn I18n5(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18n5(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    pub fn I18n6(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18n6(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    pub fn I18n7(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18n7(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    pub fn I18n8(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18n8(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    pub fn I18n9(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18n9(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    pub fn I18n10(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18n10(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    /// ` param10: QVariant `
    ///
    pub fn I18n11(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        comptime _ = @TypeOf(param10)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18n11(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn I18nc3(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nc3(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn I18nc4(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nc4(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    pub fn I18nc5(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nc5(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    pub fn I18nc6(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nc6(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    pub fn I18nc7(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nc7(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    pub fn I18nc8(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nc8(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    pub fn I18nc9(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nc9(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    pub fn I18nc10(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nc10(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    pub fn I18nc11(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nc11(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    /// ` param10: QVariant `
    ///
    pub fn I18nc12(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        comptime _ = @TypeOf(param10)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nc12(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn I18np3(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18np3(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn I18np4(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18np4(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    pub fn I18np5(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18np5(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    pub fn I18np6(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18np6(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    pub fn I18np7(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18np7(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    pub fn I18np8(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18np8(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    pub fn I18np9(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18np9(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    pub fn I18np10(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18np10(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    pub fn I18np11(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18np11(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    /// ` param10: QVariant `
    ///
    pub fn I18np12(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        comptime _ = @TypeOf(param10)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18np12(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn I18ncp4(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ncp4(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn I18ncp5(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ncp5(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    pub fn I18ncp6(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ncp6(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    pub fn I18ncp7(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ncp7(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    pub fn I18ncp8(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ncp8(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    pub fn I18ncp9(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ncp9(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    pub fn I18ncp10(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ncp10(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    pub fn I18ncp11(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ncp11(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    pub fn I18ncp12(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ncp12(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    /// ` param10: QVariant `
    ///
    pub fn I18ncp13(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        comptime _ = @TypeOf(param10)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ncp13(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn I18nd3(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nd3(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn I18nd4(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nd4(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    pub fn I18nd5(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nd5(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    pub fn I18nd6(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nd6(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    pub fn I18nd7(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nd7(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    pub fn I18nd8(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nd8(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    pub fn I18nd9(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nd9(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    pub fn I18nd10(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nd10(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    pub fn I18nd11(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nd11(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    /// ` param10: QVariant `
    ///
    pub fn I18nd12(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        comptime _ = @TypeOf(param10)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18nd12(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn I18ndc4(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndc4(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn I18ndc5(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndc5(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    pub fn I18ndc6(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndc6(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    pub fn I18ndc7(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndc7(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    pub fn I18ndc8(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndc8(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    pub fn I18ndc9(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndc9(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    pub fn I18ndc10(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndc10(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    pub fn I18ndc11(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndc11(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    pub fn I18ndc12(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndc12(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    /// ` param10: QVariant `
    ///
    pub fn I18ndc13(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        comptime _ = @TypeOf(param10)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndc13(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn I18ndp4(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndp4(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn I18ndp5(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndp5(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    pub fn I18ndp6(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndp6(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    pub fn I18ndp7(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndp7(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    pub fn I18ndp8(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndp8(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    pub fn I18ndp9(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndp9(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    pub fn I18ndp10(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndp10(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    pub fn I18ndp11(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndp11(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    pub fn I18ndp12(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndp12(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    /// ` param10: QVariant `
    ///
    pub fn I18ndp13(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        comptime _ = @TypeOf(param10)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndp13(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn I18ndcp5(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndcp5(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn I18ndcp6(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndcp6(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    pub fn I18ndcp7(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndcp7(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    pub fn I18ndcp8(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndcp8(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    pub fn I18ndcp9(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndcp9(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    pub fn I18ndcp10(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndcp10(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    pub fn I18ndcp11(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndcp11(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    pub fn I18ndcp12(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndcp12(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    pub fn I18ndcp13(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndcp13(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    /// ` param10: QVariant `
    ///
    pub fn I18ndcp14(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        comptime _ = @TypeOf(param10)._is_QVariant;
        var _str = qtc.KLocalizedContext_I18ndcp14(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp14: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn Xi18n2(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18n2(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn Xi18n3(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18n3(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    pub fn Xi18n4(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18n4(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    pub fn Xi18n5(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18n5(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    pub fn Xi18n6(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18n6(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    pub fn Xi18n7(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18n7(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    pub fn Xi18n8(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18n8(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    pub fn Xi18n9(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18n9(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    pub fn Xi18n10(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18n10(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    /// ` param10: QVariant `
    ///
    pub fn Xi18n11(self: KLocalizedContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        comptime _ = @TypeOf(param10)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18n11(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn Xi18nc3(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nc3(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn Xi18nc4(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nc4(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    pub fn Xi18nc5(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nc5(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    pub fn Xi18nc6(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nc6(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    pub fn Xi18nc7(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nc7(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    pub fn Xi18nc8(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nc8(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    pub fn Xi18nc9(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nc9(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    pub fn Xi18nc10(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nc10(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    pub fn Xi18nc11(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nc11(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    /// ` param10: QVariant `
    ///
    pub fn Xi18nc12(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        comptime _ = @TypeOf(param10)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nc12(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn Xi18np3(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18np3(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn Xi18np4(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18np4(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    pub fn Xi18np5(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18np5(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    pub fn Xi18np6(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18np6(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    pub fn Xi18np7(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18np7(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    pub fn Xi18np8(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18np8(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    pub fn Xi18np9(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18np9(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    pub fn Xi18np10(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18np10(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    pub fn Xi18np11(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18np11(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    /// ` param10: QVariant `
    ///
    pub fn Xi18np12(self: KLocalizedContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        comptime _ = @TypeOf(param10)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18np12(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn Xi18ncp4(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ncp4(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn Xi18ncp5(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ncp5(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    pub fn Xi18ncp6(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ncp6(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    pub fn Xi18ncp7(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ncp7(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    pub fn Xi18ncp8(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ncp8(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    pub fn Xi18ncp9(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ncp9(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    pub fn Xi18ncp10(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ncp10(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    pub fn Xi18ncp11(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ncp11(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    pub fn Xi18ncp12(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ncp12(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    /// ` param10: QVariant `
    ///
    pub fn Xi18ncp13(self: KLocalizedContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        comptime _ = @TypeOf(param10)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ncp13(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn Xi18nd3(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nd3(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn Xi18nd4(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nd4(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    pub fn Xi18nd5(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nd5(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    pub fn Xi18nd6(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nd6(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    pub fn Xi18nd7(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nd7(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    pub fn Xi18nd8(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nd8(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    pub fn Xi18nd9(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nd9(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    pub fn Xi18nd10(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nd10(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    pub fn Xi18nd11(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nd11(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    /// ` param10: QVariant `
    ///
    pub fn Xi18nd12(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        comptime _ = @TypeOf(param10)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18nd12(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn Xi18ndc4(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndc4(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn Xi18ndc5(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndc5(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    pub fn Xi18ndc6(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndc6(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    pub fn Xi18ndc7(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndc7(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    pub fn Xi18ndc8(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndc8(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    pub fn Xi18ndc9(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndc9(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    pub fn Xi18ndc10(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndc10(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    pub fn Xi18ndc11(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndc11(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    pub fn Xi18ndc12(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndc12(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    /// ` param10: QVariant `
    ///
    pub fn Xi18ndc13(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        comptime _ = @TypeOf(param10)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndc13(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn Xi18ndp4(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndp4(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn Xi18ndp5(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndp5(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    pub fn Xi18ndp6(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndp6(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    pub fn Xi18ndp7(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndp7(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    pub fn Xi18ndp8(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndp8(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    pub fn Xi18ndp9(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndp9(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    pub fn Xi18ndp10(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndp10(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    pub fn Xi18ndp11(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndp11(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    pub fn Xi18ndp12(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndp12(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    /// ` param10: QVariant `
    ///
    pub fn Xi18ndp13(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        comptime _ = @TypeOf(param10)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndp13(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn Xi18ndcp5(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndcp5(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn Xi18ndcp6(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndcp6(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    pub fn Xi18ndcp7(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndcp7(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    pub fn Xi18ndcp8(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndcp8(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    pub fn Xi18ndcp9(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndcp9(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    pub fn Xi18ndcp10(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndcp10(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    pub fn Xi18ndcp11(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndcp11(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    pub fn Xi18ndcp12(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndcp12(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    pub fn Xi18ndcp13(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndcp13(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    /// ` param3: QVariant `
    ///
    /// ` param4: QVariant `
    ///
    /// ` param5: QVariant `
    ///
    /// ` param6: QVariant `
    ///
    /// ` param7: QVariant `
    ///
    /// ` param8: QVariant `
    ///
    /// ` param9: QVariant `
    ///
    /// ` param10: QVariant `
    ///
    pub fn Xi18ndcp14(self: KLocalizedContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        comptime _ = @TypeOf(param6)._is_QVariant;
        comptime _ = @TypeOf(param7)._is_QVariant;
        comptime _ = @TypeOf(param8)._is_QVariant;
        comptime _ = @TypeOf(param9)._is_QVariant;
        comptime _ = @TypeOf(param10)._is_QVariant;
        var _str = qtc.KLocalizedContext_Xi18ndcp14(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp14: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KLocalizedContext, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KLocalizedContext, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn IsWidgetType(self: KLocalizedContext) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn IsWindowType(self: KLocalizedContext) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn IsQuickItemType(self: KLocalizedContext) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn SignalsBlocked(self: KLocalizedContext) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KLocalizedContext, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn Thread(self: KLocalizedContext) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KLocalizedContext, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KLocalizedContext, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KLocalizedContext, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KLocalizedContext, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KLocalizedContext, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KLocalizedContext, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("klocalizedcontext.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KLocalizedContext, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KLocalizedContext, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KLocalizedContext, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KLocalizedContext, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn Disconnect3(self: KLocalizedContext) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KLocalizedContext, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn DumpObjectTree(self: KLocalizedContext) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn DumpObjectInfo(self: KLocalizedContext) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KLocalizedContext, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KLocalizedContext, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KLocalizedContext, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("klocalizedcontext.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("klocalizedcontext.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn BindingStorage(self: KLocalizedContext) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn BindingStorage2(self: KLocalizedContext) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn Destroyed(self: KLocalizedContext) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` callback: *const fn (self: KLocalizedContext) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KLocalizedContext, callback: *const fn (KLocalizedContext) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn Parent(self: KLocalizedContext) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KLocalizedContext, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn DeleteLater(self: KLocalizedContext) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KLocalizedContext, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KLocalizedContext, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KLocalizedContext, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KLocalizedContext, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KLocalizedContext, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KLocalizedContext, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KLocalizedContext, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KLocalizedContext, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` callback: *const fn (self: KLocalizedContext, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KLocalizedContext, callback: *const fn (KLocalizedContext, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KLocalizedContext, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KLocalizedContext_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KLocalizedContext, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KLocalizedContext_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext`
    ///
    /// ` callback: *const fn (self: KLocalizedContext, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KLocalizedContext, callback: *const fn (KLocalizedContext, QEvent) callconv(.c) bool) void {
        qtc.KLocalizedContext_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KLocalizedContext, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KLocalizedContext_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KLocalizedContext, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KLocalizedContext_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext`
    ///
    /// ` callback: *const fn (self: KLocalizedContext, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KLocalizedContext, callback: *const fn (KLocalizedContext, QObject, QEvent) callconv(.c) bool) void {
        qtc.KLocalizedContext_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KLocalizedContext, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KLocalizedContext_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KLocalizedContext, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KLocalizedContext_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext`
    ///
    /// ` callback: *const fn (self: KLocalizedContext, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KLocalizedContext, callback: *const fn (KLocalizedContext, QTimerEvent) callconv(.c) void) void {
        qtc.KLocalizedContext_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KLocalizedContext, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KLocalizedContext_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KLocalizedContext, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KLocalizedContext_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext`
    ///
    /// ` callback: *const fn (self: KLocalizedContext, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KLocalizedContext, callback: *const fn (KLocalizedContext, QChildEvent) callconv(.c) void) void {
        qtc.KLocalizedContext_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KLocalizedContext, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KLocalizedContext_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KLocalizedContext, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KLocalizedContext_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext`
    ///
    /// ` callback: *const fn (self: KLocalizedContext, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KLocalizedContext, callback: *const fn (KLocalizedContext, QEvent) callconv(.c) void) void {
        qtc.KLocalizedContext_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KLocalizedContext, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KLocalizedContext_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KLocalizedContext, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KLocalizedContext_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext`
    ///
    /// ` callback: *const fn (self: KLocalizedContext, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KLocalizedContext, callback: *const fn (KLocalizedContext, QMetaMethod) callconv(.c) void) void {
        qtc.KLocalizedContext_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KLocalizedContext, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KLocalizedContext_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KLocalizedContext, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KLocalizedContext_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext`
    ///
    /// ` callback: *const fn (self: KLocalizedContext, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KLocalizedContext, callback: *const fn (KLocalizedContext, QMetaMethod) callconv(.c) void) void {
        qtc.KLocalizedContext_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn Sender(self: KLocalizedContext) QObject {
        return .{ .ptr = qtc.KLocalizedContext_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn SuperSender(self: KLocalizedContext) QObject {
        return .{ .ptr = qtc.KLocalizedContext_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KLocalizedContext, callback: *const fn () callconv(.c) QObject) void {
        qtc.KLocalizedContext_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn SenderSignalIndex(self: KLocalizedContext) i32 {
        return qtc.KLocalizedContext_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn SuperSenderSignalIndex(self: KLocalizedContext) i32 {
        return qtc.KLocalizedContext_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KLocalizedContext, callback: *const fn () callconv(.c) i32) void {
        qtc.KLocalizedContext_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KLocalizedContext, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KLocalizedContext_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KLocalizedContext, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KLocalizedContext_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext`
    ///
    /// ` callback: *const fn (self: KLocalizedContext, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KLocalizedContext, callback: *const fn (KLocalizedContext, [*:0]const u8) callconv(.c) i32) void {
        qtc.KLocalizedContext_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KLocalizedContext, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KLocalizedContext_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KLocalizedContext, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KLocalizedContext_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext`
    ///
    /// ` callback: *const fn (self: KLocalizedContext, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KLocalizedContext, callback: *const fn (KLocalizedContext, QMetaMethod) callconv(.c) bool) void {
        qtc.KLocalizedContext_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedContext `
    ///
    /// ` callback: *const fn (self: KLocalizedContext, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KLocalizedContext, callback: *const fn (KLocalizedContext, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/klocalizedcontext.html#dtor.KLocalizedContext)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KLocalizedContext `
    ///
    pub fn Delete(self: KLocalizedContext) void {
        qtc.KLocalizedContext_Delete(@ptrCast(self.ptr));
    }
};
