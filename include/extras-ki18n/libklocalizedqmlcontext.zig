const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QQmlEngine = @import("libqt6").QQmlEngine;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html)
pub const KLocalizedQmlContext = extern struct {
    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KLocalizedQmlContext,

    pub const _is_KLocalizedQmlContext = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KLocalizedQmlContext object in C++ memory
    ///
    pub fn new() KLocalizedQmlContext {
        return .{ .ptr = qtc.KLocalizedQmlContext_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KLocalizedQmlContext object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KLocalizedQmlContext {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KLocalizedQmlContext_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn metaObject(self: KLocalizedQmlContext) QMetaObject {
        return .{ .ptr = qtc.KLocalizedQmlContext_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KLocalizedQmlContext, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KLocalizedQmlContext_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn superMetaObject(self: KLocalizedQmlContext) QMetaObject {
        return .{ .ptr = qtc.KLocalizedQmlContext_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KLocalizedQmlContext, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KLocalizedQmlContext_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` callback: *const fn (self: KLocalizedQmlContext, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KLocalizedQmlContext, callback: *const fn (KLocalizedQmlContext, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KLocalizedQmlContext_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KLocalizedQmlContext, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KLocalizedQmlContext_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KLocalizedQmlContext, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KLocalizedQmlContext_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` callback: *const fn (self: KLocalizedQmlContext, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KLocalizedQmlContext, callback: *const fn (KLocalizedQmlContext, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KLocalizedQmlContext_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KLocalizedQmlContext, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KLocalizedQmlContext_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.KLocalizedQmlContext_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `translationDomain` instead
    ///
    pub const TranslationDomain = translationDomain;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#translationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn translationDomain(self: KLocalizedQmlContext, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KLocalizedQmlContext_TranslationDomain(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.translationDomain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTranslationDomain` instead
    ///
    pub const SetTranslationDomain = setTranslationDomain;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#setTranslationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` domain: []const u8 `
    ///
    pub fn setTranslationDomain(self: KLocalizedQmlContext, domain: []const u8) void {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        qtc.KLocalizedQmlContext_SetTranslationDomain(@ptrCast(self.ptr), domain_str);
    }

    /// ### DEPRECATED: Use `i18n` instead
    ///
    pub const I18n = i18n;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    pub fn i18n(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        var _str = qtc.KLocalizedQmlContext_I18n(@ptrCast(self.ptr), message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18n: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nc` instead
    ///
    pub const I18nc = i18nc;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    pub fn i18nc(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        var _str = qtc.KLocalizedQmlContext_I18nc(@ptrCast(self.ptr), context_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18np` instead
    ///
    pub const I18np = i18np;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    pub fn i18np(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        var _str = qtc.KLocalizedQmlContext_I18np(@ptrCast(self.ptr), singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18np: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ncp` instead
    ///
    pub const I18ncp = i18ncp;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    pub fn i18ncp(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ncp(@ptrCast(self.ptr), context_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ncp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nd` instead
    ///
    pub const I18nd = i18nd;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    pub fn i18nd(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        var _str = qtc.KLocalizedQmlContext_I18nd(@ptrCast(self.ptr), domain_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nd: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndc` instead
    ///
    pub const I18ndc = i18ndc;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    pub fn i18ndc(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndc(@ptrCast(self.ptr), domain_str, context_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndp` instead
    ///
    pub const I18ndp = i18ndp;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    pub fn i18ndp(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndp(@ptrCast(self.ptr), domain_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndcp` instead
    ///
    pub const I18ndcp = i18ndcp;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndcp(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndcp(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndcp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18n` instead
    ///
    pub const Xi18n = xi18n;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    pub fn xi18n(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        var _str = qtc.KLocalizedQmlContext_Xi18n(@ptrCast(self.ptr), message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18n: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nc` instead
    ///
    pub const Xi18nc = xi18nc;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    pub fn xi18nc(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        var _str = qtc.KLocalizedQmlContext_Xi18nc(@ptrCast(self.ptr), context_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18np` instead
    ///
    pub const Xi18np = xi18np;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    pub fn xi18np(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        var _str = qtc.KLocalizedQmlContext_Xi18np(@ptrCast(self.ptr), singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18np: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ncp` instead
    ///
    pub const Xi18ncp = xi18ncp;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    pub fn xi18ncp(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ncp(@ptrCast(self.ptr), context_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ncp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nd` instead
    ///
    pub const Xi18nd = xi18nd;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    pub fn xi18nd(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        var _str = qtc.KLocalizedQmlContext_Xi18nd(@ptrCast(self.ptr), domain_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nd: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndc` instead
    ///
    pub const Xi18ndc = xi18ndc;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    pub fn xi18ndc(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndc(@ptrCast(self.ptr), domain_str, context_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndp` instead
    ///
    pub const Xi18ndp = xi18ndp;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    pub fn xi18ndp(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndp(@ptrCast(self.ptr), domain_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndcp` instead
    ///
    pub const Xi18ndcp = xi18ndcp;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndcp(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndcp(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndcp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `translationDomainChanged` instead
    ///
    pub const TranslationDomainChanged = translationDomainChanged;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#translationDomainChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` _translationDomain: []const u8 `
    ///
    pub fn translationDomainChanged(self: KLocalizedQmlContext, _translationDomain: []const u8) void {
        const translationDomain_str = qtc.libqt_string{
            .len = _translationDomain.len,
            .data = _translationDomain.ptr,
        };
        qtc.KLocalizedQmlContext_TranslationDomainChanged(@ptrCast(self.ptr), translationDomain_str);
    }

    /// ### DEPRECATED: Use `onTranslationDomainChanged` instead
    ///
    pub const OnTranslationDomainChanged = onTranslationDomainChanged;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#translationDomainChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` callback: *const fn (self: KLocalizedQmlContext, translationDomain: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTranslationDomainChanged(self: KLocalizedQmlContext, callback: *const fn (KLocalizedQmlContext, [*:0]const u8) callconv(.c) void) void {
        qtc.KLocalizedQmlContext_Connect_TranslationDomainChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        var _str = qtc.KLocalizedQmlContext_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.tr2: Memory allocation failed");
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
        var _str = qtc.KLocalizedQmlContext_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18n2` instead
    ///
    pub const I18n2 = i18n2;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn i18n2(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedQmlContext_I18n2(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18n2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18n3` instead
    ///
    pub const I18n3 = i18n3;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn i18n3(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedQmlContext_I18n3(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18n3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18n4` instead
    ///
    pub const I18n4 = i18n4;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18n4(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedQmlContext_I18n4(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18n4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18n5` instead
    ///
    pub const I18n5 = i18n5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18n5(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedQmlContext_I18n5(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18n5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18n6` instead
    ///
    pub const I18n6 = i18n6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18n6(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedQmlContext_I18n6(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18n6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18n7` instead
    ///
    pub const I18n7 = i18n7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18n7(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18n7(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18n7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18n8` instead
    ///
    pub const I18n8 = i18n8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18n8(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18n8(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18n8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18n9` instead
    ///
    pub const I18n9 = i18n9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18n9(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18n9(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18n9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18n10` instead
    ///
    pub const I18n10 = i18n10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18n10(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18n10(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18n10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18n11` instead
    ///
    pub const I18n11 = i18n11;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18n11(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18n11(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18n11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nc3` instead
    ///
    pub const I18nc3 = i18nc3;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn i18nc3(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedQmlContext_I18nc3(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nc3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nc4` instead
    ///
    pub const I18nc4 = i18nc4;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nc4(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nc4(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nc4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nc5` instead
    ///
    pub const I18nc5 = i18nc5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nc5(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nc5(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nc5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nc6` instead
    ///
    pub const I18nc6 = i18nc6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nc6(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nc6(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nc6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nc7` instead
    ///
    pub const I18nc7 = i18nc7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nc7(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nc7(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nc7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nc8` instead
    ///
    pub const I18nc8 = i18nc8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nc8(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nc8(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nc8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nc9` instead
    ///
    pub const I18nc9 = i18nc9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nc9(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nc9(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nc9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nc10` instead
    ///
    pub const I18nc10 = i18nc10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nc10(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nc10(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nc10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nc11` instead
    ///
    pub const I18nc11 = i18nc11;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nc11(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nc11(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nc11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nc12` instead
    ///
    pub const I18nc12 = i18nc12;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nc12(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nc12(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nc12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18np3` instead
    ///
    pub const I18np3 = i18np3;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn i18np3(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedQmlContext_I18np3(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18np3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18np4` instead
    ///
    pub const I18np4 = i18np4;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18np4(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18np4(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18np4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18np5` instead
    ///
    pub const I18np5 = i18np5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18np5(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18np5(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18np5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18np6` instead
    ///
    pub const I18np6 = i18np6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18np6(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18np6(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18np6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18np7` instead
    ///
    pub const I18np7 = i18np7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18np7(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18np7(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18np7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18np8` instead
    ///
    pub const I18np8 = i18np8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18np8(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18np8(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18np8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18np9` instead
    ///
    pub const I18np9 = i18np9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18np9(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18np9(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18np9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18np10` instead
    ///
    pub const I18np10 = i18np10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18np10(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18np10(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18np10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18np11` instead
    ///
    pub const I18np11 = i18np11;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18np11(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18np11(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18np11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18np12` instead
    ///
    pub const I18np12 = i18np12;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18np12(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18np12(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18np12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ncp4` instead
    ///
    pub const I18ncp4 = i18ncp4;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ncp4(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ncp4(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ncp4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ncp5` instead
    ///
    pub const I18ncp5 = i18ncp5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ncp5(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ncp5(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ncp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ncp6` instead
    ///
    pub const I18ncp6 = i18ncp6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ncp6(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ncp6(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ncp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ncp7` instead
    ///
    pub const I18ncp7 = i18ncp7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ncp7(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ncp7(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ncp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ncp8` instead
    ///
    pub const I18ncp8 = i18ncp8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ncp8(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ncp8(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ncp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ncp9` instead
    ///
    pub const I18ncp9 = i18ncp9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ncp9(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ncp9(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ncp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ncp10` instead
    ///
    pub const I18ncp10 = i18ncp10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ncp10(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ncp10(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ncp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ncp11` instead
    ///
    pub const I18ncp11 = i18ncp11;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ncp11(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ncp11(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ncp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ncp12` instead
    ///
    pub const I18ncp12 = i18ncp12;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ncp12(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ncp12(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ncp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ncp13` instead
    ///
    pub const I18ncp13 = i18ncp13;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ncp13(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ncp13(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ncp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nd3` instead
    ///
    pub const I18nd3 = i18nd3;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn i18nd3(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedQmlContext_I18nd3(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nd3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nd4` instead
    ///
    pub const I18nd4 = i18nd4;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nd4(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nd4(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nd4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nd5` instead
    ///
    pub const I18nd5 = i18nd5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nd5(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nd5(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nd5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nd6` instead
    ///
    pub const I18nd6 = i18nd6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nd6(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nd6(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nd6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nd7` instead
    ///
    pub const I18nd7 = i18nd7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nd7(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nd7(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nd7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nd8` instead
    ///
    pub const I18nd8 = i18nd8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nd8(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nd8(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nd8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nd9` instead
    ///
    pub const I18nd9 = i18nd9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nd9(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nd9(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nd9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nd10` instead
    ///
    pub const I18nd10 = i18nd10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nd10(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nd10(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nd10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nd11` instead
    ///
    pub const I18nd11 = i18nd11;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nd11(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nd11(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nd11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18nd12` instead
    ///
    pub const I18nd12 = i18nd12;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18nd12(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18nd12(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18nd12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndc4` instead
    ///
    pub const I18ndc4 = i18ndc4;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndc4(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndc4(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndc4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndc5` instead
    ///
    pub const I18ndc5 = i18ndc5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndc5(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndc5(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndc5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndc6` instead
    ///
    pub const I18ndc6 = i18ndc6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndc6(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndc6(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndc6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndc7` instead
    ///
    pub const I18ndc7 = i18ndc7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndc7(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndc7(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndc7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndc8` instead
    ///
    pub const I18ndc8 = i18ndc8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndc8(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndc8(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndc8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndc9` instead
    ///
    pub const I18ndc9 = i18ndc9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndc9(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndc9(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndc9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndc10` instead
    ///
    pub const I18ndc10 = i18ndc10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndc10(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndc10(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndc10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndc11` instead
    ///
    pub const I18ndc11 = i18ndc11;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndc11(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndc11(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndc11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndc12` instead
    ///
    pub const I18ndc12 = i18ndc12;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndc12(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndc12(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndc12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndc13` instead
    ///
    pub const I18ndc13 = i18ndc13;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndc13(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndc13(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndc13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndp4` instead
    ///
    pub const I18ndp4 = i18ndp4;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndp4(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndp4(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndp4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndp5` instead
    ///
    pub const I18ndp5 = i18ndp5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndp5(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndp5(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndp6` instead
    ///
    pub const I18ndp6 = i18ndp6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndp6(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndp6(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndp7` instead
    ///
    pub const I18ndp7 = i18ndp7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndp7(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndp7(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndp8` instead
    ///
    pub const I18ndp8 = i18ndp8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndp8(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndp8(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndp9` instead
    ///
    pub const I18ndp9 = i18ndp9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndp9(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndp9(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndp10` instead
    ///
    pub const I18ndp10 = i18ndp10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndp10(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndp10(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndp11` instead
    ///
    pub const I18ndp11 = i18ndp11;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndp11(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndp11(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndp12` instead
    ///
    pub const I18ndp12 = i18ndp12;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndp12(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndp12(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndp13` instead
    ///
    pub const I18ndp13 = i18ndp13;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndp13(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndp13(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndcp5` instead
    ///
    pub const I18ndcp5 = i18ndcp5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndcp5(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndcp5(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndcp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndcp6` instead
    ///
    pub const I18ndcp6 = i18ndcp6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndcp6(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndcp6(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndcp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndcp7` instead
    ///
    pub const I18ndcp7 = i18ndcp7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndcp7(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndcp7(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndcp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndcp8` instead
    ///
    pub const I18ndcp8 = i18ndcp8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndcp8(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndcp8(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndcp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndcp9` instead
    ///
    pub const I18ndcp9 = i18ndcp9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndcp9(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndcp9(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndcp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndcp10` instead
    ///
    pub const I18ndcp10 = i18ndcp10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndcp10(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndcp10(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndcp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndcp11` instead
    ///
    pub const I18ndcp11 = i18ndcp11;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndcp11(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndcp11(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndcp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndcp12` instead
    ///
    pub const I18ndcp12 = i18ndcp12;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndcp12(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndcp12(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndcp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndcp13` instead
    ///
    pub const I18ndcp13 = i18ndcp13;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndcp13(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndcp13(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndcp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `i18ndcp14` instead
    ///
    pub const I18ndcp14 = i18ndcp14;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn i18ndcp14(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_I18ndcp14(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.i18ndcp14: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18n2` instead
    ///
    pub const Xi18n2 = xi18n2;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn xi18n2(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedQmlContext_Xi18n2(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18n2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18n3` instead
    ///
    pub const Xi18n3 = xi18n3;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    /// ` param2: QVariant `
    ///
    pub fn xi18n3(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        var _str = qtc.KLocalizedQmlContext_Xi18n3(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18n3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18n4` instead
    ///
    pub const Xi18n4 = xi18n4;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18n4(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        var _str = qtc.KLocalizedQmlContext_Xi18n4(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18n4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18n5` instead
    ///
    pub const Xi18n5 = xi18n5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18n5(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        var _str = qtc.KLocalizedQmlContext_Xi18n5(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18n5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18n6` instead
    ///
    pub const Xi18n6 = xi18n6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18n6(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        comptime _ = @TypeOf(param2)._is_QVariant;
        comptime _ = @TypeOf(param3)._is_QVariant;
        comptime _ = @TypeOf(param4)._is_QVariant;
        comptime _ = @TypeOf(param5)._is_QVariant;
        var _str = qtc.KLocalizedQmlContext_Xi18n6(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18n6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18n7` instead
    ///
    pub const Xi18n7 = xi18n7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18n7(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18n7(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18n7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18n8` instead
    ///
    pub const Xi18n8 = xi18n8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18n8(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18n8(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18n8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18n9` instead
    ///
    pub const Xi18n9 = xi18n9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18n9(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18n9(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18n9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18n10` instead
    ///
    pub const Xi18n10 = xi18n10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18n10(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18n10(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18n10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18n11` instead
    ///
    pub const Xi18n11 = xi18n11;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18n11(self: KLocalizedQmlContext, allocator: std.mem.Allocator, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18n11(@ptrCast(self.ptr), message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18n11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nc3` instead
    ///
    pub const Xi18nc3 = xi18nc3;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn xi18nc3(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedQmlContext_Xi18nc3(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nc3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nc4` instead
    ///
    pub const Xi18nc4 = xi18nc4;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nc4(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nc4(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nc4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nc5` instead
    ///
    pub const Xi18nc5 = xi18nc5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nc5(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nc5(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nc5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nc6` instead
    ///
    pub const Xi18nc6 = xi18nc6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nc6(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nc6(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nc6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nc7` instead
    ///
    pub const Xi18nc7 = xi18nc7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nc7(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nc7(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nc7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nc8` instead
    ///
    pub const Xi18nc8 = xi18nc8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nc8(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nc8(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nc8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nc9` instead
    ///
    pub const Xi18nc9 = xi18nc9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nc9(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nc9(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nc9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nc10` instead
    ///
    pub const Xi18nc10 = xi18nc10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nc10(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nc10(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nc10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nc11` instead
    ///
    pub const Xi18nc11 = xi18nc11;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nc11(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nc11(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nc11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nc12` instead
    ///
    pub const Xi18nc12 = xi18nc12;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nc12(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nc12(@ptrCast(self.ptr), context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nc12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18np3` instead
    ///
    pub const Xi18np3 = xi18np3;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` singular: []const u8 `
    ///
    /// ` plural: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn xi18np3(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedQmlContext_Xi18np3(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18np3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18np4` instead
    ///
    pub const Xi18np4 = xi18np4;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18np4(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18np4(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18np4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18np5` instead
    ///
    pub const Xi18np5 = xi18np5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18np5(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18np5(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18np5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18np6` instead
    ///
    pub const Xi18np6 = xi18np6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18np6(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18np6(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18np6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18np7` instead
    ///
    pub const Xi18np7 = xi18np7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18np7(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18np7(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18np7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18np8` instead
    ///
    pub const Xi18np8 = xi18np8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18np8(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18np8(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18np8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18np9` instead
    ///
    pub const Xi18np9 = xi18np9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18np9(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18np9(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18np9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18np10` instead
    ///
    pub const Xi18np10 = xi18np10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18np10(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18np10(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18np10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18np11` instead
    ///
    pub const Xi18np11 = xi18np11;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18np11(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18np11(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18np11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18np12` instead
    ///
    pub const Xi18np12 = xi18np12;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18np12(self: KLocalizedQmlContext, allocator: std.mem.Allocator, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18np12(@ptrCast(self.ptr), singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18np12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ncp4` instead
    ///
    pub const Xi18ncp4 = xi18ncp4;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ncp4(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ncp4(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ncp4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ncp5` instead
    ///
    pub const Xi18ncp5 = xi18ncp5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ncp5(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ncp5(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ncp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ncp6` instead
    ///
    pub const Xi18ncp6 = xi18ncp6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ncp6(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ncp6(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ncp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ncp7` instead
    ///
    pub const Xi18ncp7 = xi18ncp7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ncp7(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ncp7(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ncp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ncp8` instead
    ///
    pub const Xi18ncp8 = xi18ncp8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ncp8(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ncp8(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ncp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ncp9` instead
    ///
    pub const Xi18ncp9 = xi18ncp9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ncp9(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ncp9(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ncp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ncp10` instead
    ///
    pub const Xi18ncp10 = xi18ncp10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ncp10(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ncp10(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ncp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ncp11` instead
    ///
    pub const Xi18ncp11 = xi18ncp11;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ncp11(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ncp11(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ncp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ncp12` instead
    ///
    pub const Xi18ncp12 = xi18ncp12;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ncp12(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ncp12(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ncp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ncp13` instead
    ///
    pub const Xi18ncp13 = xi18ncp13;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ncp13(self: KLocalizedQmlContext, allocator: std.mem.Allocator, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ncp13(@ptrCast(self.ptr), context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ncp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nd3` instead
    ///
    pub const Xi18nd3 = xi18nd3;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    /// ` param1: QVariant `
    ///
    pub fn xi18nd3(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(param1)._is_QVariant;
        var _str = qtc.KLocalizedQmlContext_Xi18nd3(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nd3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nd4` instead
    ///
    pub const Xi18nd4 = xi18nd4;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nd4(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nd4(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nd4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nd5` instead
    ///
    pub const Xi18nd5 = xi18nd5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nd5(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nd5(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nd5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nd6` instead
    ///
    pub const Xi18nd6 = xi18nd6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nd6(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nd6(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nd6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nd7` instead
    ///
    pub const Xi18nd7 = xi18nd7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nd7(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nd7(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nd7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nd8` instead
    ///
    pub const Xi18nd8 = xi18nd8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nd8(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nd8(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nd8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nd9` instead
    ///
    pub const Xi18nd9 = xi18nd9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nd9(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nd9(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nd9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nd10` instead
    ///
    pub const Xi18nd10 = xi18nd10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nd10(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nd10(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nd10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nd11` instead
    ///
    pub const Xi18nd11 = xi18nd11;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nd11(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nd11(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nd11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18nd12` instead
    ///
    pub const Xi18nd12 = xi18nd12;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18nd12(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18nd12(@ptrCast(self.ptr), domain_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18nd12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndc4` instead
    ///
    pub const Xi18ndc4 = xi18ndc4;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndc4(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndc4(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndc4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndc5` instead
    ///
    pub const Xi18ndc5 = xi18ndc5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndc5(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndc5(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndc5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndc6` instead
    ///
    pub const Xi18ndc6 = xi18ndc6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndc6(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndc6(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndc6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndc7` instead
    ///
    pub const Xi18ndc7 = xi18ndc7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndc7(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndc7(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndc7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndc8` instead
    ///
    pub const Xi18ndc8 = xi18ndc8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndc8(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndc8(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndc8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndc9` instead
    ///
    pub const Xi18ndc9 = xi18ndc9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndc9(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndc9(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndc9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndc10` instead
    ///
    pub const Xi18ndc10 = xi18ndc10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndc10(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndc10(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndc10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndc11` instead
    ///
    pub const Xi18ndc11 = xi18ndc11;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndc11(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndc11(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndc11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndc12` instead
    ///
    pub const Xi18ndc12 = xi18ndc12;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndc12(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndc12(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndc12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndc13` instead
    ///
    pub const Xi18ndc13 = xi18ndc13;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndc13(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, message: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndc13(@ptrCast(self.ptr), domain_str, context_str, message_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndc13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndp4` instead
    ///
    pub const Xi18ndp4 = xi18ndp4;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndp4(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndp4(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndp4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndp5` instead
    ///
    pub const Xi18ndp5 = xi18ndp5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndp5(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndp5(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndp6` instead
    ///
    pub const Xi18ndp6 = xi18ndp6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndp6(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndp6(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndp7` instead
    ///
    pub const Xi18ndp7 = xi18ndp7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndp7(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndp7(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndp8` instead
    ///
    pub const Xi18ndp8 = xi18ndp8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndp8(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndp8(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndp9` instead
    ///
    pub const Xi18ndp9 = xi18ndp9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndp9(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndp9(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndp10` instead
    ///
    pub const Xi18ndp10 = xi18ndp10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndp10(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndp10(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndp11` instead
    ///
    pub const Xi18ndp11 = xi18ndp11;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndp11(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndp11(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndp12` instead
    ///
    pub const Xi18ndp12 = xi18ndp12;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndp12(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndp12(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndp13` instead
    ///
    pub const Xi18ndp13 = xi18ndp13;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndp13(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndp13(@ptrCast(self.ptr), domain_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndcp5` instead
    ///
    pub const Xi18ndcp5 = xi18ndcp5;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndcp5(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndcp5(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndcp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndcp6` instead
    ///
    pub const Xi18ndcp6 = xi18ndcp6;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndcp6(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndcp6(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndcp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndcp7` instead
    ///
    pub const Xi18ndcp7 = xi18ndcp7;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndcp7(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndcp7(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndcp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndcp8` instead
    ///
    pub const Xi18ndcp8 = xi18ndcp8;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndcp8(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndcp8(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndcp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndcp9` instead
    ///
    pub const Xi18ndcp9 = xi18ndcp9;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndcp9(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndcp9(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndcp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndcp10` instead
    ///
    pub const Xi18ndcp10 = xi18ndcp10;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndcp10(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndcp10(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndcp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndcp11` instead
    ///
    pub const Xi18ndcp11 = xi18ndcp11;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndcp11(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndcp11(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndcp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndcp12` instead
    ///
    pub const Xi18ndcp12 = xi18ndcp12;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndcp12(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndcp12(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndcp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndcp13` instead
    ///
    pub const Xi18ndcp13 = xi18ndcp13;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndcp13(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndcp13(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndcp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xi18ndcp14` instead
    ///
    pub const Xi18ndcp14 = xi18ndcp14;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
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
    pub fn xi18ndcp14(self: KLocalizedQmlContext, allocator: std.mem.Allocator, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: anytype, param2: anytype, param3: anytype, param4: anytype, param5: anytype, param6: anytype, param7: anytype, param8: anytype, param9: anytype, param10: anytype) []const u8 {
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
        var _str = qtc.KLocalizedQmlContext_Xi18ndcp14(@ptrCast(self.ptr), domain_str, context_str, singular_str, plural_str, @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), @ptrCast(param8.ptr), @ptrCast(param9.ptr), @ptrCast(param10.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.xi18ndcp14: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KLocalizedQmlContext, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` callback: *const fn (self: KLocalizedQmlContext, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KLocalizedQmlContext, callback: *const fn (KLocalizedQmlContext, QObject, QEvent) callconv(.c) bool) void {
        qtc.QObject_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KLocalizedQmlContext, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KLocalizedQmlContext, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLocalizedQmlContext.objectName: Memory allocation failed");
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KLocalizedQmlContext, name: []const u8) void {
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn isWidgetType(self: KLocalizedQmlContext) bool {
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn isWindowType(self: KLocalizedQmlContext) bool {
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn isQuickItemType(self: KLocalizedQmlContext) bool {
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn signalsBlocked(self: KLocalizedQmlContext) bool {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KLocalizedQmlContext, b: bool) bool {
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn thread(self: KLocalizedQmlContext) QThread {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KLocalizedQmlContext, _thread: anytype) bool {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KLocalizedQmlContext, interval: i32) i32 {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KLocalizedQmlContext, time: i64) i32 {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KLocalizedQmlContext, id: i32) void {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KLocalizedQmlContext, id: i32) void {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KLocalizedQmlContext, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KLocalizedQmlContext.children: Memory allocation failed");
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KLocalizedQmlContext, _parent: anytype) void {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KLocalizedQmlContext, filterObj: anytype) void {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KLocalizedQmlContext, obj: anytype) void {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KLocalizedQmlContext, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn disconnect3(self: KLocalizedQmlContext) bool {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KLocalizedQmlContext, receiver: anytype) bool {
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn dumpObjectTree(self: KLocalizedQmlContext) void {
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn dumpObjectInfo(self: KLocalizedQmlContext) void {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KLocalizedQmlContext, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KLocalizedQmlContext, name: [:0]const u8) QVariant {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KLocalizedQmlContext, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KLocalizedQmlContext.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KLocalizedQmlContext.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn bindingStorage(self: KLocalizedQmlContext) QBindingStorage {
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn bindingStorage2(self: KLocalizedQmlContext) QBindingStorage {
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn destroyed(self: KLocalizedQmlContext) void {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` callback: *const fn (self: KLocalizedQmlContext) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KLocalizedQmlContext, callback: *const fn (KLocalizedQmlContext) callconv(.c) void) void {
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn parent(self: KLocalizedQmlContext) QObject {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KLocalizedQmlContext, classname: [:0]const u8) bool {
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn deleteLater(self: KLocalizedQmlContext) void {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KLocalizedQmlContext, interval: i32, timerType: i32) i32 {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KLocalizedQmlContext, time: i64, timerType: i32) i32 {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KLocalizedQmlContext, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KLocalizedQmlContext, signal: [:0]const u8) bool {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KLocalizedQmlContext, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KLocalizedQmlContext, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KLocalizedQmlContext, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KLocalizedQmlContext, param1: anytype) void {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` callback: *const fn (self: KLocalizedQmlContext, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KLocalizedQmlContext, callback: *const fn (KLocalizedQmlContext, QObject) callconv(.c) void) void {
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KLocalizedQmlContext, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KLocalizedQmlContext_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KLocalizedQmlContext, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KLocalizedQmlContext_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KLocalizedQmlContext`
    ///
    /// ` callback: *const fn (self: KLocalizedQmlContext, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KLocalizedQmlContext, callback: *const fn (KLocalizedQmlContext, QEvent) callconv(.c) bool) void {
        qtc.KLocalizedQmlContext_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KLocalizedQmlContext, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KLocalizedQmlContext_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KLocalizedQmlContext, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KLocalizedQmlContext_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KLocalizedQmlContext`
    ///
    /// ` callback: *const fn (self: KLocalizedQmlContext, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KLocalizedQmlContext, callback: *const fn (KLocalizedQmlContext, QTimerEvent) callconv(.c) void) void {
        qtc.KLocalizedQmlContext_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KLocalizedQmlContext, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KLocalizedQmlContext_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KLocalizedQmlContext, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KLocalizedQmlContext_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KLocalizedQmlContext`
    ///
    /// ` callback: *const fn (self: KLocalizedQmlContext, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KLocalizedQmlContext, callback: *const fn (KLocalizedQmlContext, QChildEvent) callconv(.c) void) void {
        qtc.KLocalizedQmlContext_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KLocalizedQmlContext, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KLocalizedQmlContext_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KLocalizedQmlContext, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KLocalizedQmlContext_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KLocalizedQmlContext`
    ///
    /// ` callback: *const fn (self: KLocalizedQmlContext, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KLocalizedQmlContext, callback: *const fn (KLocalizedQmlContext, QEvent) callconv(.c) void) void {
        qtc.KLocalizedQmlContext_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KLocalizedQmlContext, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KLocalizedQmlContext_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KLocalizedQmlContext, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KLocalizedQmlContext_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KLocalizedQmlContext`
    ///
    /// ` callback: *const fn (self: KLocalizedQmlContext, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KLocalizedQmlContext, callback: *const fn (KLocalizedQmlContext, QMetaMethod) callconv(.c) void) void {
        qtc.KLocalizedQmlContext_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KLocalizedQmlContext, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KLocalizedQmlContext_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KLocalizedQmlContext, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KLocalizedQmlContext_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KLocalizedQmlContext`
    ///
    /// ` callback: *const fn (self: KLocalizedQmlContext, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KLocalizedQmlContext, callback: *const fn (KLocalizedQmlContext, QMetaMethod) callconv(.c) void) void {
        qtc.KLocalizedQmlContext_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn sender(self: KLocalizedQmlContext) QObject {
        return .{ .ptr = qtc.KLocalizedQmlContext_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn superSender(self: KLocalizedQmlContext) QObject {
        return .{ .ptr = qtc.KLocalizedQmlContext_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KLocalizedQmlContext`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KLocalizedQmlContext, callback: *const fn () callconv(.c) QObject) void {
        qtc.KLocalizedQmlContext_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn senderSignalIndex(self: KLocalizedQmlContext) i32 {
        return qtc.KLocalizedQmlContext_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn superSenderSignalIndex(self: KLocalizedQmlContext) i32 {
        return qtc.KLocalizedQmlContext_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KLocalizedQmlContext`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KLocalizedQmlContext, callback: *const fn () callconv(.c) i32) void {
        qtc.KLocalizedQmlContext_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KLocalizedQmlContext, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KLocalizedQmlContext_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KLocalizedQmlContext, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KLocalizedQmlContext_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KLocalizedQmlContext`
    ///
    /// ` callback: *const fn (self: KLocalizedQmlContext, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KLocalizedQmlContext, callback: *const fn (KLocalizedQmlContext, [*:0]const u8) callconv(.c) i32) void {
        qtc.KLocalizedQmlContext_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KLocalizedQmlContext, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KLocalizedQmlContext_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KLocalizedQmlContext, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KLocalizedQmlContext_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KLocalizedQmlContext`
    ///
    /// ` callback: *const fn (self: KLocalizedQmlContext, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KLocalizedQmlContext, callback: *const fn (KLocalizedQmlContext, QMetaMethod) callconv(.c) bool) void {
        qtc.KLocalizedQmlContext_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KLocalizedQmlContext `
    ///
    /// ` callback: *const fn (self: KLocalizedQmlContext, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KLocalizedQmlContext, callback: *const fn (KLocalizedQmlContext, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/klocalizedqmlcontext.html#dtor.KLocalizedQmlContext)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KLocalizedQmlContext `
    ///
    pub fn delete(self: KLocalizedQmlContext) void {
        qtc.KLocalizedQmlContext_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/klocalization.html)
pub const KLocalization = extern struct {
    /// ### [Upstream resources](https://api.kde.org/klocalization.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KLocalization,

    pub const _is_KLocalization = {};

    /// ### DEPRECATED: Use `setupLocalizedContext` instead
    ///
    pub const SetupLocalizedContext = setupLocalizedContext;

    /// ### [Upstream resources](https://api.kde.org/klocalization.html#setupLocalizedContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` engine: QQmlEngine `
    ///
    pub fn setupLocalizedContext(engine: anytype) KLocalizedQmlContext {
        comptime _ = @TypeOf(engine)._is_QQmlEngine;
        return .{ .ptr = qtc.KLocalization_SetupLocalizedContext(@ptrCast(engine.ptr)) };
    }
};
