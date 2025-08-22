const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api-staging.kde.org/klocalizedcontext.html
pub const klocalizedcontext = struct {
    /// New constructs a new KLocalizedContext object.
    ///
    ///
    pub fn New() QtC.KLocalizedContext {
        return qtc.KLocalizedContext_new();
    }

    /// New2 constructs a new KLocalizedContext object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.KLocalizedContext {
        return qtc.KLocalizedContext_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KLocalizedContext_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KLocalizedContext, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KLocalizedContext_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KLocalizedContext, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KLocalizedContext_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KLocalizedContext, slot: fn (self: QtC.KLocalizedContext, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KLocalizedContext_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KLocalizedContext, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KLocalizedContext_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KLocalizedContext_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#translationDomain)
    ///
    /// ``` self: QtC.KLocalizedContext, allocator: std.mem.Allocator ```
    pub fn TranslationDomain(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KLocalizedContext_TranslationDomain(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.TranslationDomain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#setTranslationDomain)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8 ```
    pub fn SetTranslationDomain(self: ?*anyopaque, domain: []const u8) void {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        qtc.KLocalizedContext_SetTranslationDomain(@ptrCast(self), domain_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, allocator: std.mem.Allocator ```
    pub fn I18n(self: ?*anyopaque, message: []const u8, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18n(@ptrCast(self), message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, allocator: std.mem.Allocator ```
    pub fn I18nc(self: ?*anyopaque, context: []const u8, message: []const u8, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nc(@ptrCast(self), context_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator ```
    pub fn I18np(self: ?*anyopaque, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_I18np(@ptrCast(self), singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator ```
    pub fn I18ncp(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ncp(@ptrCast(self), context_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, allocator: std.mem.Allocator ```
    pub fn I18nd(self: ?*anyopaque, domain: []const u8, message: []const u8, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nd(@ptrCast(self), domain_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, allocator: std.mem.Allocator ```
    pub fn I18ndc(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndc(@ptrCast(self), domain_str, context_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator ```
    pub fn I18ndp(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndp(@ptrCast(self), domain_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator ```
    pub fn I18ndcp(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndcp(@ptrCast(self), domain_str, context_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, allocator: std.mem.Allocator ```
    pub fn Xi18n(self: ?*anyopaque, message: []const u8, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18n(@ptrCast(self), message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, allocator: std.mem.Allocator ```
    pub fn Xi18nc(self: ?*anyopaque, context: []const u8, message: []const u8, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nc(@ptrCast(self), context_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator ```
    pub fn Xi18np(self: ?*anyopaque, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18np(@ptrCast(self), singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator ```
    pub fn Xi18ncp(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ncp(@ptrCast(self), context_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, allocator: std.mem.Allocator ```
    pub fn Xi18nd(self: ?*anyopaque, domain: []const u8, message: []const u8, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nd(@ptrCast(self), domain_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, allocator: std.mem.Allocator ```
    pub fn Xi18ndc(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndc(@ptrCast(self), domain_str, context_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator ```
    pub fn Xi18ndp(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndp(@ptrCast(self), domain_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator ```
    pub fn Xi18ndcp(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndcp(@ptrCast(self), domain_str, context_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#translationDomainChanged)
    ///
    /// ``` self: QtC.KLocalizedContext, translationDomain: []const u8 ```
    pub fn TranslationDomainChanged(self: ?*anyopaque, translationDomain: []const u8) void {
        const translationDomain_str = qtc.libqt_string{
            .len = translationDomain.len,
            .data = translationDomain.ptr,
        };
        qtc.KLocalizedContext_TranslationDomainChanged(@ptrCast(self), translationDomain_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#translationDomainChanged)
    ///
    /// ``` self: QtC.KLocalizedContext, slot: fn (self: QtC.KLocalizedContext, translationDomain: [*:0]const u8) callconv(.c) void ```
    pub fn OnTranslationDomainChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KLocalizedContext_Connect_TranslationDomainChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KLocalizedContext_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KLocalizedContext_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n2(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18n2(@ptrCast(self), message_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n3(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18n3(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n4(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18n4(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n5(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18n5(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n6(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18n6(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n7(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18n7(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n8(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18n8(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n9(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18n9(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n10(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18n10(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n11(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18n11(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18n11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc3(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nc3(@ptrCast(self), context_str, message_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc4(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nc4(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc5(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nc5(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc6(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nc6(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc7(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nc7(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc8(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nc8(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc9(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nc9(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc10(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nc10(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc11(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nc11(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc12(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nc12(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nc12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np3(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_I18np3(@ptrCast(self), singular_str, plural_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np4(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_I18np4(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np5(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_I18np5(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np6(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_I18np6(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np7(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_I18np7(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np8(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_I18np8(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np9(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_I18np9(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np10(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_I18np10(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np11(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_I18np11(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np12(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_I18np12(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18np12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ncp4(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ncp4(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ncp5(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ncp5(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ncp6(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ncp6(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ncp7(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ncp7(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ncp8(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ncp8(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ncp9(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ncp9(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ncp10(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ncp10(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ncp11(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ncp11(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ncp12(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ncp12(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ncp13(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ncp13(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ncp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd3(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nd3(@ptrCast(self), domain_str, message_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd4(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nd4(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd5(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nd5(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd6(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nd6(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd7(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nd7(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd8(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nd8(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd9(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nd9(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd10(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nd10(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd11(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nd11(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd12(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_I18nd12(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18nd12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndc4(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndc4(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndc5(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndc5(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndc6(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndc6(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndc7(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndc7(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndc8(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndc8(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndc9(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndc9(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndc10(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndc10(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndc11(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndc11(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndc12(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndc12(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndc13(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndc13(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndc13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndp4(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndp4(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndp5(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndp5(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndp6(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndp6(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndp7(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndp7(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndp8(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndp8(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndp9(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndp9(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndp10(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndp10(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndp11(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndp11(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndp12(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndp12(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndp13(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndp13(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndcp5(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndcp5(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndcp6(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndcp6(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndcp7(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndcp7(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndcp8(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndcp8(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndcp9(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndcp9(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndcp10(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndcp10(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndcp11(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndcp11(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndcp12(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndcp12(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndcp13(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndcp13(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18ndcp14(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_I18ndcp14(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.I18ndcp14: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n2(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18n2(@ptrCast(self), message_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n3(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18n3(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n4(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18n4(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n5(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18n5(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n6(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18n6(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n7(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18n7(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n8(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18n8(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n9(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18n9(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n10(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18n10(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n11(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18n11(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18n11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc3(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nc3(@ptrCast(self), context_str, message_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc4(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nc4(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc5(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nc5(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc6(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nc6(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc7(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nc7(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc8(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nc8(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc9(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nc9(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc10(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nc10(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc11(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nc11(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc12(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nc12(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nc12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np3(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18np3(@ptrCast(self), singular_str, plural_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np4(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18np4(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np5(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18np5(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np6(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18np6(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np7(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18np7(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np8(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18np8(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np9(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18np9(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np10(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18np10(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np11(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18np11(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np12(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18np12(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18np12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ncp4(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ncp4(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ncp5(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ncp5(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ncp6(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ncp6(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ncp7(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ncp7(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ncp8(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ncp8(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ncp9(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ncp9(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ncp10(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ncp10(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ncp11(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ncp11(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ncp12(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ncp12(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ncp13(self: ?*anyopaque, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ncp13(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ncp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd3(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nd3(@ptrCast(self), domain_str, message_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd4(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nd4(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd5(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nd5(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd6(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nd6(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd7(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nd7(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd8(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nd8(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd9(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nd9(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd10(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nd10(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd11(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nd11(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd12(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedContext_Xi18nd12(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18nd12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndc4(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndc4(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndc5(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndc5(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndc6(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndc6(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndc7(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndc7(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndc8(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndc8(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndc9(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndc9(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndc10(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndc10(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndc11(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndc11(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndc12(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndc12(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndc13(self: ?*anyopaque, domain: []const u8, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndc13(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndc13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndp4(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndp4(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndp5(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndp5(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndp6(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndp6(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndp7(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndp7(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndp8(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndp8(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndp9(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndp9(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndp10(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndp10(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndp11(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndp11(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndp12(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndp12(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndp13(self: ?*anyopaque, domain: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndp13(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndcp5(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndcp5(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndcp6(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndcp6(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndcp7(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndcp7(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndcp8(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndcp8(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndcp9(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndcp9(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndcp10(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndcp10(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndcp11(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndcp11(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndcp12(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndcp12(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndcp13(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndcp13(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18ndcp14(self: ?*anyopaque, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
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
        const _str = qtc.KLocalizedContext_Xi18ndcp14(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.Xi18ndcp14: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KLocalizedContext, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedcontext.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KLocalizedContext, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KLocalizedContext, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KLocalizedContext, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KLocalizedContext, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KLocalizedContext, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KLocalizedContext, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KLocalizedContext, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("klocalizedcontext.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KLocalizedContext, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KLocalizedContext, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KLocalizedContext, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KLocalizedContext, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KLocalizedContext, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KLocalizedContext, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KLocalizedContext, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KLocalizedContext, slot: fn (self: QtC.KLocalizedContext) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KLocalizedContext, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KLocalizedContext, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KLocalizedContext, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KLocalizedContext, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KLocalizedContext, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KLocalizedContext, slot: fn (self: QtC.KLocalizedContext, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KLocalizedContext_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KLocalizedContext_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, slot: fn (self: QtC.KLocalizedContext, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KLocalizedContext_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KLocalizedContext_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KLocalizedContext_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, slot: fn (self: QtC.KLocalizedContext, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KLocalizedContext_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLocalizedContext_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLocalizedContext_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, slot: fn (self: QtC.KLocalizedContext, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KLocalizedContext_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLocalizedContext_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLocalizedContext_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, slot: fn (self: QtC.KLocalizedContext, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KLocalizedContext_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLocalizedContext_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLocalizedContext_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, slot: fn (self: QtC.KLocalizedContext, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KLocalizedContext_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KLocalizedContext_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KLocalizedContext_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, slot: fn (self: QtC.KLocalizedContext, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KLocalizedContext_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KLocalizedContext_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KLocalizedContext_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, slot: fn (self: QtC.KLocalizedContext, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KLocalizedContext_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KLocalizedContext_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KLocalizedContext_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KLocalizedContext_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KLocalizedContext_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KLocalizedContext_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KLocalizedContext_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KLocalizedContext_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KLocalizedContext_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, slot: fn (self: QtC.KLocalizedContext, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KLocalizedContext_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KLocalizedContext_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KLocalizedContext_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedContext, slot: fn (self: QtC.KLocalizedContext, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KLocalizedContext_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KLocalizedContext, slot: fn (self: QtC.KLocalizedContext, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/klocalizedcontext.html#dtor.KLocalizedContext)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KLocalizedContext ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KLocalizedContext_Delete(@ptrCast(self));
    }
};
