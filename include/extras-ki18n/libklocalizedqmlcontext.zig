const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/klocalizedqmlcontext.html
pub const klocalizedqmlcontext = struct {
    /// New constructs a new KLocalizedQmlContext object.
    ///
    ///
    pub fn New() QtC.KLocalizedQmlContext {
        return qtc.KLocalizedQmlContext_new();
    }

    /// New2 constructs a new KLocalizedQmlContext object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.KLocalizedQmlContext {
        return qtc.KLocalizedQmlContext_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KLocalizedQmlContext_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KLocalizedQmlContext, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KLocalizedQmlContext_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KLocalizedQmlContext, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KLocalizedQmlContext_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, callback: *const fn (self: QtC.KLocalizedQmlContext, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KLocalizedQmlContext_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KLocalizedQmlContext, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KLocalizedQmlContext_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KLocalizedQmlContext_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#translationDomain)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, allocator: std.mem.Allocator ```
    pub fn TranslationDomain(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KLocalizedQmlContext_TranslationDomain(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.TranslationDomain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#setTranslationDomain)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8 ```
    pub fn SetTranslationDomain(self: ?*anyopaque, domain: []const u8) void {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        qtc.KLocalizedQmlContext_SetTranslationDomain(@ptrCast(self), domain_str);
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, allocator: std.mem.Allocator ```
    pub fn I18n(self: ?*anyopaque, message: []const u8, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18n(@ptrCast(self), message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18n: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, allocator: std.mem.Allocator ```
    pub fn I18nc(self: ?*anyopaque, context: []const u8, message: []const u8, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nc(@ptrCast(self), context_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator ```
    pub fn I18np(self: ?*anyopaque, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18np(@ptrCast(self), singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18np: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ncp(@ptrCast(self), context_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ncp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, allocator: std.mem.Allocator ```
    pub fn I18nd(self: ?*anyopaque, domain: []const u8, message: []const u8, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nd(@ptrCast(self), domain_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nd: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndc(@ptrCast(self), domain_str, context_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndp(@ptrCast(self), domain_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndcp(@ptrCast(self), domain_str, context_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndcp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, allocator: std.mem.Allocator ```
    pub fn Xi18n(self: ?*anyopaque, message: []const u8, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18n(@ptrCast(self), message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18n: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, allocator: std.mem.Allocator ```
    pub fn Xi18nc(self: ?*anyopaque, context: []const u8, message: []const u8, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nc(@ptrCast(self), context_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator ```
    pub fn Xi18np(self: ?*anyopaque, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18np(@ptrCast(self), singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18np: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ncp(@ptrCast(self), context_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ncp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, allocator: std.mem.Allocator ```
    pub fn Xi18nd(self: ?*anyopaque, domain: []const u8, message: []const u8, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nd(@ptrCast(self), domain_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nd: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndc(@ptrCast(self), domain_str, context_str, message_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndp(@ptrCast(self), domain_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndcp(@ptrCast(self), domain_str, context_str, singular_str, plural_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndcp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#translationDomainChanged)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, translationDomain: []const u8 ```
    pub fn TranslationDomainChanged(self: ?*anyopaque, translationDomain: []const u8) void {
        const translationDomain_str = qtc.libqt_string{
            .len = translationDomain.len,
            .data = translationDomain.ptr,
        };
        qtc.KLocalizedQmlContext_TranslationDomainChanged(@ptrCast(self), translationDomain_str);
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#translationDomainChanged)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, callback: *const fn (self: QtC.KLocalizedQmlContext, translationDomain: [*:0]const u8) callconv(.c) void ```
    pub fn OnTranslationDomainChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KLocalizedQmlContext_Connect_TranslationDomainChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KLocalizedQmlContext_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KLocalizedQmlContext_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n2(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18n2(@ptrCast(self), message_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18n2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n3(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18n3(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18n3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n4(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18n4(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18n4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n5(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18n5(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18n5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n6(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18n6(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18n6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n7(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18n7(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18n7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n8(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18n8(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18n8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n9(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18n9(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18n9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n10(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18n10(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18n10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18n11(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18n11(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18n11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc3(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nc3(@ptrCast(self), context_str, message_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nc3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc4(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nc4(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nc4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc5(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nc5(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nc5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc6(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nc6(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nc6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc7(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nc7(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nc7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc8(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nc8(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nc8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc9(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nc9(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nc9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc10(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nc10(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nc10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc11(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nc11(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nc11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nc12(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nc12(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nc12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np3(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18np3(@ptrCast(self), singular_str, plural_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18np3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np4(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18np4(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18np4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np5(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18np5(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18np5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np6(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18np6(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18np6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np7(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18np7(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18np7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np8(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18np8(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18np8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np9(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18np9(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18np9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np10(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18np10(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18np10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np11(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18np11(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18np11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18np12(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18np12(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18np12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ncp4(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ncp4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ncp5(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ncp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ncp6(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ncp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ncp7(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ncp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ncp8(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ncp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ncp9(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ncp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ncp10(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ncp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ncp11(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ncp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ncp12(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ncp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ncp13(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ncp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd3(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nd3(@ptrCast(self), domain_str, message_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nd3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd4(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nd4(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nd4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd5(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nd5(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nd5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd6(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nd6(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nd6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd7(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nd7(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nd7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd8(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nd8(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nd8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd9(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nd9(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nd9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd10(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nd10(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nd10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd11(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nd11(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nd11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn I18nd12(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_I18nd12(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18nd12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndc4(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndc4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndc5(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndc5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndc6(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndc6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndc7(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndc7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndc8(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndc8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndc9(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndc9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndc10(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndc10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndc11(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndc11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndc12(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndc12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndc13(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndc13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndp4(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndp4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndp5(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndp6(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndp7(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndp8(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndp9(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndp10(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndp11(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndp12(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndp13(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndcp5(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndcp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndcp6(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndcp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndcp7(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndcp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndcp8(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndcp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndcp9(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndcp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndcp10(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndcp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndcp11(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndcp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndcp12(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndcp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndcp13(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndcp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#i18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_I18ndcp14(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.I18ndcp14: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n2(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18n2(@ptrCast(self), message_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18n2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n3(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18n3(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18n3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n4(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18n4(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18n4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n5(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18n5(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18n5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n6(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18n6(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18n6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n7(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18n7(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18n7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n8(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18n8(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18n8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n9(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18n9(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18n9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n10(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18n10(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18n10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18n)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18n11(self: ?*anyopaque, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18n11(@ptrCast(self), message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18n11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc3(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nc3(@ptrCast(self), context_str, message_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nc3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc4(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nc4(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nc4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc5(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nc5(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nc5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc6(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nc6(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nc6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc7(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nc7(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nc7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc8(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nc8(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nc8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc9(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nc9(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nc9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc10(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nc10(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nc10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc11(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nc11(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nc11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nc12(self: ?*anyopaque, context: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nc12(@ptrCast(self), context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nc12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np3(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18np3(@ptrCast(self), singular_str, plural_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18np3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np4(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18np4(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18np4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np5(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18np5(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18np5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np6(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18np6(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18np6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np7(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18np7(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18np7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np8(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18np8(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18np8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np9(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18np9(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18np9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np10(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18np10(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18np10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np11(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18np11(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18np11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18np)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18np12(self: ?*anyopaque, singular: []const u8, plural: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const singular_str = qtc.libqt_string{
            .len = singular.len,
            .data = singular.ptr,
        };
        const plural_str = qtc.libqt_string{
            .len = plural.len,
            .data = plural.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18np12(@ptrCast(self), singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18np12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ncp4(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ncp4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ncp5(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ncp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ncp6(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ncp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ncp7(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ncp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ncp8(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ncp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ncp9(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ncp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ncp10(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ncp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ncp11(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ncp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ncp12(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ncp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ncp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ncp13(@ptrCast(self), context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ncp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd3(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nd3(@ptrCast(self), domain_str, message_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nd3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd4(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nd4(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nd4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd5(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nd5(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nd5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd6(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nd6(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nd6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd7(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nd7(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nd7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd8(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nd8(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nd8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd9(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nd9(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nd9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd10(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nd10(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nd10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd11(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nd11(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nd11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18nd)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn Xi18nd12(self: ?*anyopaque, domain: []const u8, message: []const u8, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: ?*anyopaque, param9: ?*anyopaque, param10: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const _str = qtc.KLocalizedQmlContext_Xi18nd12(@ptrCast(self), domain_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18nd12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndc4(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndc4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndc5(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndc5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndc6(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndc6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndc7(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndc7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndc8(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndc8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndc9(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndc9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndc10(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndc10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndc11(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndc11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndc12(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndc12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndc)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, message: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndc13(@ptrCast(self), domain_str, context_str, message_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndc13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndp4(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndp4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndp5(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndp6(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndp7(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndp8(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndp9(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndp10(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndp11(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndp12(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndp13(@ptrCast(self), domain_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndcp5(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndcp5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndcp6(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndcp6: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndcp7(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndcp7: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndcp8(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndcp8: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndcp9(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndcp9: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndcp10(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndcp10: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndcp11(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndcp11: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndcp12(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndcp12: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndcp13(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndcp13: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#xi18ndcp)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, domain: []const u8, context: []const u8, singular: []const u8, plural: []const u8, param1: QtC.QVariant, param2: QtC.QVariant, param3: QtC.QVariant, param4: QtC.QVariant, param5: QtC.QVariant, param6: QtC.QVariant, param7: QtC.QVariant, param8: QtC.QVariant, param9: QtC.QVariant, param10: QtC.QVariant, allocator: std.mem.Allocator ```
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
        const _str = qtc.KLocalizedQmlContext_Xi18ndcp14(@ptrCast(self), domain_str, context_str, singular_str, plural_str, @ptrCast(param1), @ptrCast(param2), @ptrCast(param3), @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), @ptrCast(param8), @ptrCast(param9), @ptrCast(param10));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.Xi18ndcp14: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, callback: *const fn (self: QtC.KLocalizedQmlContext, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QObject_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KLocalizedQmlContext, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedqmlcontext.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, name: []const u8 ```
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
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("klocalizedqmlcontext.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, obj: QtC.QObject ```
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
    /// ``` self: QtC.KLocalizedQmlContext, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("klocalizedqmlcontext.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("klocalizedqmlcontext.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, callback: *const fn (self: QtC.KLocalizedQmlContext) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KLocalizedQmlContext, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KLocalizedQmlContext, callback: *const fn (self: QtC.KLocalizedQmlContext, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KLocalizedQmlContext_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KLocalizedQmlContext_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, callback: *const fn (self: QtC.KLocalizedQmlContext, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KLocalizedQmlContext_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLocalizedQmlContext_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLocalizedQmlContext_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, callback: *const fn (self: QtC.KLocalizedQmlContext, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KLocalizedQmlContext_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLocalizedQmlContext_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLocalizedQmlContext_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, callback: *const fn (self: QtC.KLocalizedQmlContext, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KLocalizedQmlContext_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLocalizedQmlContext_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLocalizedQmlContext_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, callback: *const fn (self: QtC.KLocalizedQmlContext, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KLocalizedQmlContext_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KLocalizedQmlContext_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KLocalizedQmlContext_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, callback: *const fn (self: QtC.KLocalizedQmlContext, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KLocalizedQmlContext_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KLocalizedQmlContext_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KLocalizedQmlContext_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, callback: *const fn (self: QtC.KLocalizedQmlContext, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KLocalizedQmlContext_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KLocalizedQmlContext_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KLocalizedQmlContext_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KLocalizedQmlContext_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KLocalizedQmlContext_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KLocalizedQmlContext_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KLocalizedQmlContext_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KLocalizedQmlContext_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KLocalizedQmlContext_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, callback: *const fn (self: QtC.KLocalizedQmlContext, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KLocalizedQmlContext_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KLocalizedQmlContext_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KLocalizedQmlContext_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLocalizedQmlContext, callback: *const fn (self: QtC.KLocalizedQmlContext, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KLocalizedQmlContext_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KLocalizedQmlContext, callback: *const fn (self: QtC.KLocalizedQmlContext, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/klocalizedqmlcontext.html#dtor.KLocalizedQmlContext)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KLocalizedQmlContext ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KLocalizedQmlContext_Delete(@ptrCast(self));
    }
};
