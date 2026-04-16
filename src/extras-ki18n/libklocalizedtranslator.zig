const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QLocale = @import("libqt6").QLocale;
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

/// ### [Upstream resources](https://api.kde.org/klocalizedtranslator.html)
pub const KLocalizedTranslator = extern struct {
    /// ### [Upstream resources](https://api.kde.org/klocalizedtranslator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KLocalizedTranslator,

    pub const _is_KLocalizedTranslator = {};
    pub const _is_QTranslator = {};
    pub const _is_QObject = {};

    /// New constructs a new KLocalizedTranslator object.
    ///
    pub fn New() KLocalizedTranslator {
        return .{ .ptr = qtc.KLocalizedTranslator_new() };
    }

    /// New2 constructs a new KLocalizedTranslator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KLocalizedTranslator {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KLocalizedTranslator_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    pub fn MetaObject(self: KLocalizedTranslator) QMetaObject {
        return .{ .ptr = qtc.KLocalizedTranslator_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KLocalizedTranslator, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KLocalizedTranslator_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KLocalizedTranslator `
    ///
    pub fn SuperMetaObject(self: KLocalizedTranslator) QMetaObject {
        return .{ .ptr = qtc.KLocalizedTranslator_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KLocalizedTranslator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KLocalizedTranslator_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` callback: *const fn (self: KLocalizedTranslator, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KLocalizedTranslator, callback: *const fn (KLocalizedTranslator, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KLocalizedTranslator_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KLocalizedTranslator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KLocalizedTranslator_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KLocalizedTranslator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KLocalizedTranslator_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` callback: *const fn (self: KLocalizedTranslator, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KLocalizedTranslator, callback: *const fn (KLocalizedTranslator, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KLocalizedTranslator_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KLocalizedTranslator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KLocalizedTranslator_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedtranslator.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedtranslator.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: [:0]const u8 `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Translate(self: KLocalizedTranslator, allocator: std.mem.Allocator, context: [:0]const u8, sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const context_Cstring = context.ptr;
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.KLocalizedTranslator_Translate(@ptrCast(self.ptr), context_Cstring, sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedtranslator.Translate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedtranslator.html#translate)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` callback: *const fn (self: KLocalizedTranslator, context: [*:0]const u8, sourceText: [*:0]const u8, disambiguation: [*:0]const u8, n: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnTranslate(self: KLocalizedTranslator, callback: *const fn (KLocalizedTranslator, [*:0]const u8, [*:0]const u8, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.KLocalizedTranslator_OnTranslate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTranslate` instead
    ///
    pub const QBaseTranslate = SuperTranslate;

    /// ### [Upstream resources](https://api.kde.org/klocalizedtranslator.html#translate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: [:0]const u8 `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn SuperTranslate(self: KLocalizedTranslator, allocator: std.mem.Allocator, context: [:0]const u8, sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const context_Cstring = context.ptr;
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.KLocalizedTranslator_SuperTranslate(@ptrCast(self.ptr), context_Cstring, sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedtranslator.Translate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedtranslator.html#setTranslationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` translationDomain: []const u8 `
    ///
    pub fn SetTranslationDomain(self: KLocalizedTranslator, translationDomain: []const u8) void {
        const translationDomain_str = qtc.libqt_string{
            .len = translationDomain.len,
            .data = translationDomain.ptr,
        };
        qtc.KLocalizedTranslator_SetTranslationDomain(@ptrCast(self.ptr), translationDomain_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedtranslator.html#addContextToMonitor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` context: []const u8 `
    ///
    pub fn AddContextToMonitor(self: KLocalizedTranslator, context: []const u8) void {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        qtc.KLocalizedTranslator_AddContextToMonitor(@ptrCast(self.ptr), context_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klocalizedtranslator.html#removeContextToMonitor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` context: []const u8 `
    ///
    pub fn RemoveContextToMonitor(self: KLocalizedTranslator, context: []const u8) void {
        const context_str = qtc.libqt_string{
            .len = context.len,
            .data = context.ptr,
        };
        qtc.KLocalizedTranslator_RemoveContextToMonitor(@ptrCast(self.ptr), context_str);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedtranslator.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedtranslator.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTranslator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#language)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Language(self: KLocalizedTranslator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTranslator_Language(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedtranslator.Language: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTranslator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilePath(self: KLocalizedTranslator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTranslator_FilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedtranslator.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTranslator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn Load(self: KLocalizedTranslator, filename: []const u8) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.QTranslator_Load(@ptrCast(self.ptr), filename_str);
    }

    /// Inherited from QTranslator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` locale: QLocale `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn Load2(self: KLocalizedTranslator, locale: anytype, filename: []const u8) bool {
        comptime _ = @TypeOf(locale)._is_QLocale;
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.QTranslator_Load2(@ptrCast(self.ptr), @ptrCast(locale.ptr), filename_str);
    }

    /// Inherited from QTranslator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` data: *const u8 `
    ///
    /// ` lenVal: i32 `
    ///
    pub fn Load3(self: KLocalizedTranslator, data: *const u8, lenVal: i32) bool {
        return qtc.QTranslator_Load3(@ptrCast(self.ptr), @ptrCast(data), @bitCast(lenVal));
    }

    /// Inherited from QTranslator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` filename: []const u8 `
    ///
    /// ` directory: []const u8 `
    ///
    pub fn Load22(self: KLocalizedTranslator, filename: []const u8, directory: []const u8) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        return qtc.QTranslator_Load22(@ptrCast(self.ptr), filename_str, directory_str);
    }

    /// Inherited from QTranslator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` filename: []const u8 `
    ///
    /// ` directory: []const u8 `
    ///
    /// ` search_delimiters: []const u8 `
    ///
    pub fn Load32(self: KLocalizedTranslator, filename: []const u8, directory: []const u8, search_delimiters: []const u8) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        const search_delimiters_str = qtc.libqt_string{
            .len = search_delimiters.len,
            .data = search_delimiters.ptr,
        };
        return qtc.QTranslator_Load32(@ptrCast(self.ptr), filename_str, directory_str, search_delimiters_str);
    }

    /// Inherited from QTranslator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` filename: []const u8 `
    ///
    /// ` directory: []const u8 `
    ///
    /// ` search_delimiters: []const u8 `
    ///
    /// ` suffix: []const u8 `
    ///
    pub fn Load4(self: KLocalizedTranslator, filename: []const u8, directory: []const u8, search_delimiters: []const u8, suffix: []const u8) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        const search_delimiters_str = qtc.libqt_string{
            .len = search_delimiters.len,
            .data = search_delimiters.ptr,
        };
        const suffix_str = qtc.libqt_string{
            .len = suffix.len,
            .data = suffix.ptr,
        };
        return qtc.QTranslator_Load4(@ptrCast(self.ptr), filename_str, directory_str, search_delimiters_str, suffix_str);
    }

    /// Inherited from QTranslator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` locale: QLocale `
    ///
    /// ` filename: []const u8 `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn Load33(self: KLocalizedTranslator, locale: anytype, filename: []const u8, prefix: []const u8) bool {
        comptime _ = @TypeOf(locale)._is_QLocale;
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QTranslator_Load33(@ptrCast(self.ptr), @ptrCast(locale.ptr), filename_str, prefix_str);
    }

    /// Inherited from QTranslator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` locale: QLocale `
    ///
    /// ` filename: []const u8 `
    ///
    /// ` prefix: []const u8 `
    ///
    /// ` directory: []const u8 `
    ///
    pub fn Load42(self: KLocalizedTranslator, locale: anytype, filename: []const u8, prefix: []const u8, directory: []const u8) bool {
        comptime _ = @TypeOf(locale)._is_QLocale;
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        return qtc.QTranslator_Load42(@ptrCast(self.ptr), @ptrCast(locale.ptr), filename_str, prefix_str, directory_str);
    }

    /// Inherited from QTranslator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` locale: QLocale `
    ///
    /// ` filename: []const u8 `
    ///
    /// ` prefix: []const u8 `
    ///
    /// ` directory: []const u8 `
    ///
    /// ` suffix: []const u8 `
    ///
    pub fn Load5(self: KLocalizedTranslator, locale: anytype, filename: []const u8, prefix: []const u8, directory: []const u8, suffix: []const u8) bool {
        comptime _ = @TypeOf(locale)._is_QLocale;
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        const suffix_str = qtc.libqt_string{
            .len = suffix.len,
            .data = suffix.ptr,
        };
        return qtc.QTranslator_Load5(@ptrCast(self.ptr), @ptrCast(locale.ptr), filename_str, prefix_str, directory_str, suffix_str);
    }

    /// Inherited from QTranslator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` data: *const u8 `
    ///
    /// ` lenVal: i32 `
    ///
    /// ` directory: []const u8 `
    ///
    pub fn Load34(self: KLocalizedTranslator, data: *const u8, lenVal: i32, directory: []const u8) bool {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        return qtc.QTranslator_Load34(@ptrCast(self.ptr), @ptrCast(data), @bitCast(lenVal), directory_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KLocalizedTranslator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klocalizedtranslator.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KLocalizedTranslator, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    pub fn IsWidgetType(self: KLocalizedTranslator) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    pub fn IsWindowType(self: KLocalizedTranslator) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    pub fn IsQuickItemType(self: KLocalizedTranslator) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    pub fn SignalsBlocked(self: KLocalizedTranslator) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KLocalizedTranslator, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    pub fn Thread(self: KLocalizedTranslator) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KLocalizedTranslator, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KLocalizedTranslator, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KLocalizedTranslator, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KLocalizedTranslator, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KLocalizedTranslator, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KLocalizedTranslator, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("klocalizedtranslator.Children: Memory allocation failed");
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KLocalizedTranslator, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KLocalizedTranslator, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KLocalizedTranslator, obj: anytype) void {
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KLocalizedTranslator, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KLocalizedTranslator `
    ///
    pub fn Disconnect3(self: KLocalizedTranslator) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KLocalizedTranslator, receiver: anytype) bool {
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
    /// ` self: KLocalizedTranslator `
    ///
    pub fn DumpObjectTree(self: KLocalizedTranslator) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    pub fn DumpObjectInfo(self: KLocalizedTranslator) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KLocalizedTranslator, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KLocalizedTranslator, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KLocalizedTranslator, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("klocalizedtranslator.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("klocalizedtranslator.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KLocalizedTranslator `
    ///
    pub fn BindingStorage(self: KLocalizedTranslator) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    pub fn BindingStorage2(self: KLocalizedTranslator) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    pub fn Destroyed(self: KLocalizedTranslator) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` callback: *const fn (self: KLocalizedTranslator) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KLocalizedTranslator, callback: *const fn (KLocalizedTranslator) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    pub fn Parent(self: KLocalizedTranslator) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KLocalizedTranslator, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    pub fn DeleteLater(self: KLocalizedTranslator) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KLocalizedTranslator, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KLocalizedTranslator, time: i64, timerType: i32) i32 {
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KLocalizedTranslator, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KLocalizedTranslator, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KLocalizedTranslator, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KLocalizedTranslator, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KLocalizedTranslator, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KLocalizedTranslator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` callback: *const fn (self: KLocalizedTranslator, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KLocalizedTranslator, callback: *const fn (KLocalizedTranslator, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTranslator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    pub fn IsEmpty(self: KLocalizedTranslator) bool {
        return qtc.KLocalizedTranslator_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsEmpty` instead
    ///
    pub const QBaseIsEmpty = SuperIsEmpty;

    /// Inherited from QTranslator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    pub fn SuperIsEmpty(self: KLocalizedTranslator) bool {
        return qtc.KLocalizedTranslator_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QTranslator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: KLocalizedTranslator, callback: *const fn () callconv(.c) bool) void {
        qtc.KLocalizedTranslator_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KLocalizedTranslator, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KLocalizedTranslator_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KLocalizedTranslator, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KLocalizedTranslator_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator`
    ///
    /// ` callback: *const fn (self: KLocalizedTranslator, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KLocalizedTranslator, callback: *const fn (KLocalizedTranslator, QEvent) callconv(.c) bool) void {
        qtc.KLocalizedTranslator_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KLocalizedTranslator, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KLocalizedTranslator_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KLocalizedTranslator, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KLocalizedTranslator_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator`
    ///
    /// ` callback: *const fn (self: KLocalizedTranslator, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KLocalizedTranslator, callback: *const fn (KLocalizedTranslator, QObject, QEvent) callconv(.c) bool) void {
        qtc.KLocalizedTranslator_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KLocalizedTranslator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KLocalizedTranslator_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KLocalizedTranslator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KLocalizedTranslator_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator`
    ///
    /// ` callback: *const fn (self: KLocalizedTranslator, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KLocalizedTranslator, callback: *const fn (KLocalizedTranslator, QTimerEvent) callconv(.c) void) void {
        qtc.KLocalizedTranslator_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KLocalizedTranslator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KLocalizedTranslator_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KLocalizedTranslator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KLocalizedTranslator_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator`
    ///
    /// ` callback: *const fn (self: KLocalizedTranslator, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KLocalizedTranslator, callback: *const fn (KLocalizedTranslator, QChildEvent) callconv(.c) void) void {
        qtc.KLocalizedTranslator_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KLocalizedTranslator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KLocalizedTranslator_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KLocalizedTranslator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KLocalizedTranslator_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator`
    ///
    /// ` callback: *const fn (self: KLocalizedTranslator, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KLocalizedTranslator, callback: *const fn (KLocalizedTranslator, QEvent) callconv(.c) void) void {
        qtc.KLocalizedTranslator_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KLocalizedTranslator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KLocalizedTranslator_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KLocalizedTranslator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KLocalizedTranslator_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator`
    ///
    /// ` callback: *const fn (self: KLocalizedTranslator, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KLocalizedTranslator, callback: *const fn (KLocalizedTranslator, QMetaMethod) callconv(.c) void) void {
        qtc.KLocalizedTranslator_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KLocalizedTranslator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KLocalizedTranslator_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KLocalizedTranslator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KLocalizedTranslator_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator`
    ///
    /// ` callback: *const fn (self: KLocalizedTranslator, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KLocalizedTranslator, callback: *const fn (KLocalizedTranslator, QMetaMethod) callconv(.c) void) void {
        qtc.KLocalizedTranslator_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    pub fn Sender(self: KLocalizedTranslator) QObject {
        return .{ .ptr = qtc.KLocalizedTranslator_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KLocalizedTranslator `
    ///
    pub fn SuperSender(self: KLocalizedTranslator) QObject {
        return .{ .ptr = qtc.KLocalizedTranslator_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KLocalizedTranslator, callback: *const fn () callconv(.c) QObject) void {
        qtc.KLocalizedTranslator_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    pub fn SenderSignalIndex(self: KLocalizedTranslator) i32 {
        return qtc.KLocalizedTranslator_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KLocalizedTranslator `
    ///
    pub fn SuperSenderSignalIndex(self: KLocalizedTranslator) i32 {
        return qtc.KLocalizedTranslator_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KLocalizedTranslator, callback: *const fn () callconv(.c) i32) void {
        qtc.KLocalizedTranslator_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KLocalizedTranslator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KLocalizedTranslator_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KLocalizedTranslator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KLocalizedTranslator_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator`
    ///
    /// ` callback: *const fn (self: KLocalizedTranslator, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KLocalizedTranslator, callback: *const fn (KLocalizedTranslator, [*:0]const u8) callconv(.c) i32) void {
        qtc.KLocalizedTranslator_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KLocalizedTranslator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KLocalizedTranslator_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KLocalizedTranslator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KLocalizedTranslator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KLocalizedTranslator_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator`
    ///
    /// ` callback: *const fn (self: KLocalizedTranslator, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KLocalizedTranslator, callback: *const fn (KLocalizedTranslator, QMetaMethod) callconv(.c) bool) void {
        qtc.KLocalizedTranslator_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KLocalizedTranslator `
    ///
    /// ` callback: *const fn (self: KLocalizedTranslator, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KLocalizedTranslator, callback: *const fn (KLocalizedTranslator, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/klocalizedtranslator.html#dtor.KLocalizedTranslator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KLocalizedTranslator `
    ///
    pub fn Delete(self: KLocalizedTranslator) void {
        qtc.KLocalizedTranslator_Delete(@ptrCast(self.ptr));
    }
};
