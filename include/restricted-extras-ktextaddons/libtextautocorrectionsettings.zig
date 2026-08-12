const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfig = @import("libqt6").KConfig;
const KConfigSkeletonItem = @import("libqt6").KConfigSkeletonItem;
const KConfigSkeleton__ItemColor = @import("libqt6").KConfigSkeleton__ItemColor;
const KConfigSkeleton__ItemFont = @import("libqt6").KConfigSkeleton__ItemFont;
const KCoreConfigSkeleton__ItemBool = @import("libqt6").KCoreConfigSkeleton__ItemBool;
const KCoreConfigSkeleton__ItemDateTime = @import("libqt6").KCoreConfigSkeleton__ItemDateTime;
const KCoreConfigSkeleton__ItemDouble = @import("libqt6").KCoreConfigSkeleton__ItemDouble;
const KCoreConfigSkeleton__ItemInt = @import("libqt6").KCoreConfigSkeleton__ItemInt;
const KCoreConfigSkeleton__ItemIntList = @import("libqt6").KCoreConfigSkeleton__ItemIntList;
const KCoreConfigSkeleton__ItemLongLong = @import("libqt6").KCoreConfigSkeleton__ItemLongLong;
const KCoreConfigSkeleton__ItemPassword = @import("libqt6").KCoreConfigSkeleton__ItemPassword;
const KCoreConfigSkeleton__ItemPath = @import("libqt6").KCoreConfigSkeleton__ItemPath;
const KCoreConfigSkeleton__ItemPoint = @import("libqt6").KCoreConfigSkeleton__ItemPoint;
const KCoreConfigSkeleton__ItemPointF = @import("libqt6").KCoreConfigSkeleton__ItemPointF;
const KCoreConfigSkeleton__ItemProperty = @import("libqt6").KCoreConfigSkeleton__ItemProperty;
const KCoreConfigSkeleton__ItemRect = @import("libqt6").KCoreConfigSkeleton__ItemRect;
const KCoreConfigSkeleton__ItemRectF = @import("libqt6").KCoreConfigSkeleton__ItemRectF;
const KCoreConfigSkeleton__ItemSize = @import("libqt6").KCoreConfigSkeleton__ItemSize;
const KCoreConfigSkeleton__ItemSizeF = @import("libqt6").KCoreConfigSkeleton__ItemSizeF;
const KCoreConfigSkeleton__ItemString = @import("libqt6").KCoreConfigSkeleton__ItemString;
const KCoreConfigSkeleton__ItemStringList = @import("libqt6").KCoreConfigSkeleton__ItemStringList;
const KCoreConfigSkeleton__ItemUInt = @import("libqt6").KCoreConfigSkeleton__ItemUInt;
const KCoreConfigSkeleton__ItemULongLong = @import("libqt6").KCoreConfigSkeleton__ItemULongLong;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QColor = @import("libqt6").QColor;
const QDateTime = @import("libqt6").QDateTime;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettings.html)
pub const TextAutoCorrectionCore__TextAutoCorrectionSettings = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettings.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextAutoCorrectionCore__TextAutoCorrectionSettings,

    pub const _is_TextAutoCorrectionCore__TextAutoCorrectionSettings = {};
    pub const _is_TextAutoCorrectionCore__TextAutoCorrectionSettingsBase = {};
    pub const _is_KConfigSkeleton = {};
    pub const _is_KCoreConfigSkeleton = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn metaObject(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) QMetaObject {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettings_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettings_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettings_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

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
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `self0` instead
    ///
    pub const Self = self0;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettings.html)
    ///
    pub fn self0() TextAutoCorrectionCore__TextAutoCorrectionSettings {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettings_Self() };
    }

    /// ### DEPRECATED: Use `requestSync` instead
    ///
    pub const RequestSync = requestSync;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn requestSync(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) void {
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettings_RequestSync(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: bool `
    ///
    pub fn setEnabled(v: bool) void {
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetEnabled(v);
    }

    /// ### DEPRECATED: Use `enabled` instead
    ///
    pub const Enabled = enabled;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn enabled() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_Enabled();
    }

    /// ### DEPRECATED: Use `isEnabledImmutable` instead
    ///
    pub const IsEnabledImmutable = isEnabledImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isEnabledImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsEnabledImmutable();
    }

    /// ### DEPRECATED: Use `enabledItem` instead
    ///
    pub const EnabledItem = enabledItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn enabledItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemBool {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_EnabledItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUppercaseFirstCharOfSentence` instead
    ///
    pub const SetUppercaseFirstCharOfSentence = setUppercaseFirstCharOfSentence;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: bool `
    ///
    pub fn setUppercaseFirstCharOfSentence(v: bool) void {
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetUppercaseFirstCharOfSentence(v);
    }

    /// ### DEPRECATED: Use `uppercaseFirstCharOfSentence` instead
    ///
    pub const UppercaseFirstCharOfSentence = uppercaseFirstCharOfSentence;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn uppercaseFirstCharOfSentence() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_UppercaseFirstCharOfSentence();
    }

    /// ### DEPRECATED: Use `isUppercaseFirstCharOfSentenceImmutable` instead
    ///
    pub const IsUppercaseFirstCharOfSentenceImmutable = isUppercaseFirstCharOfSentenceImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isUppercaseFirstCharOfSentenceImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsUppercaseFirstCharOfSentenceImmutable();
    }

    /// ### DEPRECATED: Use `uppercaseFirstCharOfSentenceItem` instead
    ///
    pub const UppercaseFirstCharOfSentenceItem = uppercaseFirstCharOfSentenceItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn uppercaseFirstCharOfSentenceItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemBool {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_UppercaseFirstCharOfSentenceItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFixTwoUppercaseChars` instead
    ///
    pub const SetFixTwoUppercaseChars = setFixTwoUppercaseChars;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: bool `
    ///
    pub fn setFixTwoUppercaseChars(v: bool) void {
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetFixTwoUppercaseChars(v);
    }

    /// ### DEPRECATED: Use `fixTwoUppercaseChars` instead
    ///
    pub const FixTwoUppercaseChars = fixTwoUppercaseChars;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn fixTwoUppercaseChars() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_FixTwoUppercaseChars();
    }

    /// ### DEPRECATED: Use `isFixTwoUppercaseCharsImmutable` instead
    ///
    pub const IsFixTwoUppercaseCharsImmutable = isFixTwoUppercaseCharsImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isFixTwoUppercaseCharsImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsFixTwoUppercaseCharsImmutable();
    }

    /// ### DEPRECATED: Use `fixTwoUppercaseCharsItem` instead
    ///
    pub const FixTwoUppercaseCharsItem = fixTwoUppercaseCharsItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn fixTwoUppercaseCharsItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemBool {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_FixTwoUppercaseCharsItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSingleSpaces` instead
    ///
    pub const SetSingleSpaces = setSingleSpaces;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: bool `
    ///
    pub fn setSingleSpaces(v: bool) void {
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetSingleSpaces(v);
    }

    /// ### DEPRECATED: Use `singleSpaces` instead
    ///
    pub const SingleSpaces = singleSpaces;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn singleSpaces() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SingleSpaces();
    }

    /// ### DEPRECATED: Use `isSingleSpacesImmutable` instead
    ///
    pub const IsSingleSpacesImmutable = isSingleSpacesImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isSingleSpacesImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsSingleSpacesImmutable();
    }

    /// ### DEPRECATED: Use `singleSpacesItem` instead
    ///
    pub const SingleSpacesItem = singleSpacesItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn singleSpacesItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemBool {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SingleSpacesItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAutoFractions` instead
    ///
    pub const SetAutoFractions = setAutoFractions;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: bool `
    ///
    pub fn setAutoFractions(v: bool) void {
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetAutoFractions(v);
    }

    /// ### DEPRECATED: Use `autoFractions` instead
    ///
    pub const AutoFractions = autoFractions;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn autoFractions() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AutoFractions();
    }

    /// ### DEPRECATED: Use `isAutoFractionsImmutable` instead
    ///
    pub const IsAutoFractionsImmutable = isAutoFractionsImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isAutoFractionsImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsAutoFractionsImmutable();
    }

    /// ### DEPRECATED: Use `autoFractionsItem` instead
    ///
    pub const AutoFractionsItem = autoFractionsItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn autoFractionsItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemBool {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AutoFractionsItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCapitalizeWeekDays` instead
    ///
    pub const SetCapitalizeWeekDays = setCapitalizeWeekDays;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: bool `
    ///
    pub fn setCapitalizeWeekDays(v: bool) void {
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetCapitalizeWeekDays(v);
    }

    /// ### DEPRECATED: Use `capitalizeWeekDays` instead
    ///
    pub const CapitalizeWeekDays = capitalizeWeekDays;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn capitalizeWeekDays() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_CapitalizeWeekDays();
    }

    /// ### DEPRECATED: Use `isCapitalizeWeekDaysImmutable` instead
    ///
    pub const IsCapitalizeWeekDaysImmutable = isCapitalizeWeekDaysImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isCapitalizeWeekDaysImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsCapitalizeWeekDaysImmutable();
    }

    /// ### DEPRECATED: Use `capitalizeWeekDaysItem` instead
    ///
    pub const CapitalizeWeekDaysItem = capitalizeWeekDaysItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn capitalizeWeekDaysItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemBool {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_CapitalizeWeekDaysItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAdvancedAutocorrect` instead
    ///
    pub const SetAdvancedAutocorrect = setAdvancedAutocorrect;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: bool `
    ///
    pub fn setAdvancedAutocorrect(v: bool) void {
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetAdvancedAutocorrect(v);
    }

    /// ### DEPRECATED: Use `advancedAutocorrect` instead
    ///
    pub const AdvancedAutocorrect = advancedAutocorrect;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn advancedAutocorrect() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AdvancedAutocorrect();
    }

    /// ### DEPRECATED: Use `isAdvancedAutocorrectImmutable` instead
    ///
    pub const IsAdvancedAutocorrectImmutable = isAdvancedAutocorrectImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isAdvancedAutocorrectImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsAdvancedAutocorrectImmutable();
    }

    /// ### DEPRECATED: Use `advancedAutocorrectItem` instead
    ///
    pub const AdvancedAutocorrectItem = advancedAutocorrectItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn advancedAutocorrectItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemBool {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AdvancedAutocorrectItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setReplaceDoubleQuotes` instead
    ///
    pub const SetReplaceDoubleQuotes = setReplaceDoubleQuotes;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: bool `
    ///
    pub fn setReplaceDoubleQuotes(v: bool) void {
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetReplaceDoubleQuotes(v);
    }

    /// ### DEPRECATED: Use `replaceDoubleQuotes` instead
    ///
    pub const ReplaceDoubleQuotes = replaceDoubleQuotes;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn replaceDoubleQuotes() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_ReplaceDoubleQuotes();
    }

    /// ### DEPRECATED: Use `isReplaceDoubleQuotesImmutable` instead
    ///
    pub const IsReplaceDoubleQuotesImmutable = isReplaceDoubleQuotesImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isReplaceDoubleQuotesImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsReplaceDoubleQuotesImmutable();
    }

    /// ### DEPRECATED: Use `replaceDoubleQuotesItem` instead
    ///
    pub const ReplaceDoubleQuotesItem = replaceDoubleQuotesItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn replaceDoubleQuotesItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemBool {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_ReplaceDoubleQuotesItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setReplaceSingleQuotes` instead
    ///
    pub const SetReplaceSingleQuotes = setReplaceSingleQuotes;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: bool `
    ///
    pub fn setReplaceSingleQuotes(v: bool) void {
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetReplaceSingleQuotes(v);
    }

    /// ### DEPRECATED: Use `replaceSingleQuotes` instead
    ///
    pub const ReplaceSingleQuotes = replaceSingleQuotes;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn replaceSingleQuotes() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_ReplaceSingleQuotes();
    }

    /// ### DEPRECATED: Use `isReplaceSingleQuotesImmutable` instead
    ///
    pub const IsReplaceSingleQuotesImmutable = isReplaceSingleQuotesImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isReplaceSingleQuotesImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsReplaceSingleQuotesImmutable();
    }

    /// ### DEPRECATED: Use `replaceSingleQuotesItem` instead
    ///
    pub const ReplaceSingleQuotesItem = replaceSingleQuotesItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn replaceSingleQuotesItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemBool {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_ReplaceSingleQuotesItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAutoFormatUrl` instead
    ///
    pub const SetAutoFormatUrl = setAutoFormatUrl;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: bool `
    ///
    pub fn setAutoFormatUrl(v: bool) void {
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetAutoFormatUrl(v);
    }

    /// ### DEPRECATED: Use `autoFormatUrl` instead
    ///
    pub const AutoFormatUrl = autoFormatUrl;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn autoFormatUrl() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AutoFormatUrl();
    }

    /// ### DEPRECATED: Use `isAutoFormatUrlImmutable` instead
    ///
    pub const IsAutoFormatUrlImmutable = isAutoFormatUrlImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isAutoFormatUrlImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsAutoFormatUrlImmutable();
    }

    /// ### DEPRECATED: Use `autoFormatUrlItem` instead
    ///
    pub const AutoFormatUrlItem = autoFormatUrlItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn autoFormatUrlItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemBool {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AutoFormatUrlItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAutoBoldUnderline` instead
    ///
    pub const SetAutoBoldUnderline = setAutoBoldUnderline;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: bool `
    ///
    pub fn setAutoBoldUnderline(v: bool) void {
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetAutoBoldUnderline(v);
    }

    /// ### DEPRECATED: Use `autoBoldUnderline` instead
    ///
    pub const AutoBoldUnderline = autoBoldUnderline;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn autoBoldUnderline() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AutoBoldUnderline();
    }

    /// ### DEPRECATED: Use `isAutoBoldUnderlineImmutable` instead
    ///
    pub const IsAutoBoldUnderlineImmutable = isAutoBoldUnderlineImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isAutoBoldUnderlineImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsAutoBoldUnderlineImmutable();
    }

    /// ### DEPRECATED: Use `autoBoldUnderlineItem` instead
    ///
    pub const AutoBoldUnderlineItem = autoBoldUnderlineItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn autoBoldUnderlineItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemBool {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AutoBoldUnderlineItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSuperScript` instead
    ///
    pub const SetSuperScript = setSuperScript;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: bool `
    ///
    pub fn setSuperScript(v: bool) void {
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetSuperScript(v);
    }

    /// ### DEPRECATED: Use `superScript` instead
    ///
    pub const SuperScript = superScript;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn superScript() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SuperScript();
    }

    /// ### DEPRECATED: Use `isSuperScriptImmutable` instead
    ///
    pub const IsSuperScriptImmutable = isSuperScriptImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isSuperScriptImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsSuperScriptImmutable();
    }

    /// ### DEPRECATED: Use `superScriptItem` instead
    ///
    pub const SuperScriptItem = superScriptItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn superScriptItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemBool {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SuperScriptItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAddNonBreakingSpaceInFrench` instead
    ///
    pub const SetAddNonBreakingSpaceInFrench = setAddNonBreakingSpaceInFrench;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: bool `
    ///
    pub fn setAddNonBreakingSpaceInFrench(v: bool) void {
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetAddNonBreakingSpaceInFrench(v);
    }

    /// ### DEPRECATED: Use `addNonBreakingSpaceInFrench` instead
    ///
    pub const AddNonBreakingSpaceInFrench = addNonBreakingSpaceInFrench;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn addNonBreakingSpaceInFrench() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AddNonBreakingSpaceInFrench();
    }

    /// ### DEPRECATED: Use `isAddNonBreakingSpaceInFrenchImmutable` instead
    ///
    pub const IsAddNonBreakingSpaceInFrenchImmutable = isAddNonBreakingSpaceInFrenchImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isAddNonBreakingSpaceInFrenchImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsAddNonBreakingSpaceInFrenchImmutable();
    }

    /// ### DEPRECATED: Use `addNonBreakingSpaceInFrenchItem` instead
    ///
    pub const AddNonBreakingSpaceInFrenchItem = addNonBreakingSpaceInFrenchItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn addNonBreakingSpaceInFrenchItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemBool {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AddNonBreakingSpaceInFrenchItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setReplaceDoubleQuotesByFrenchQuotes` instead
    ///
    pub const SetReplaceDoubleQuotesByFrenchQuotes = setReplaceDoubleQuotesByFrenchQuotes;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: bool `
    ///
    pub fn setReplaceDoubleQuotesByFrenchQuotes(v: bool) void {
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetReplaceDoubleQuotesByFrenchQuotes(v);
    }

    /// ### DEPRECATED: Use `replaceDoubleQuotesByFrenchQuotes` instead
    ///
    pub const ReplaceDoubleQuotesByFrenchQuotes = replaceDoubleQuotesByFrenchQuotes;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn replaceDoubleQuotesByFrenchQuotes() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_ReplaceDoubleQuotesByFrenchQuotes();
    }

    /// ### DEPRECATED: Use `isReplaceDoubleQuotesByFrenchQuotesImmutable` instead
    ///
    pub const IsReplaceDoubleQuotesByFrenchQuotesImmutable = isReplaceDoubleQuotesByFrenchQuotesImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isReplaceDoubleQuotesByFrenchQuotesImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsReplaceDoubleQuotesByFrenchQuotesImmutable();
    }

    /// ### DEPRECATED: Use `replaceDoubleQuotesByFrenchQuotesItem` instead
    ///
    pub const ReplaceDoubleQuotesByFrenchQuotesItem = replaceDoubleQuotesByFrenchQuotesItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn replaceDoubleQuotesByFrenchQuotesItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemBool {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_ReplaceDoubleQuotesByFrenchQuotesItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTypographicSingleQuotes` instead
    ///
    pub const SetTypographicSingleQuotes = setTypographicSingleQuotes;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: []const u8 `
    ///
    pub fn setTypographicSingleQuotes(v: []const u8) void {
        const v_str = qtc.libqt_string{
            .len = v.len,
            .data = v.ptr,
        };
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetTypographicSingleQuotes(v_str);
    }

    /// ### DEPRECATED: Use `typographicSingleQuotes` instead
    ///
    pub const TypographicSingleQuotes = typographicSingleQuotes;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn typographicSingleQuotes(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_TypographicSingleQuotes();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.typographicSingleQuotes: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isTypographicSingleQuotesImmutable` instead
    ///
    pub const IsTypographicSingleQuotesImmutable = isTypographicSingleQuotesImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isTypographicSingleQuotesImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsTypographicSingleQuotesImmutable();
    }

    /// ### DEPRECATED: Use `typographicSingleQuotesItem` instead
    ///
    pub const TypographicSingleQuotesItem = typographicSingleQuotesItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn typographicSingleQuotesItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemString {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_TypographicSingleQuotesItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTypographicDoubleQuotes` instead
    ///
    pub const SetTypographicDoubleQuotes = setTypographicDoubleQuotes;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: []const u8 `
    ///
    pub fn setTypographicDoubleQuotes(v: []const u8) void {
        const v_str = qtc.libqt_string{
            .len = v.len,
            .data = v.ptr,
        };
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetTypographicDoubleQuotes(v_str);
    }

    /// ### DEPRECATED: Use `typographicDoubleQuotes` instead
    ///
    pub const TypographicDoubleQuotes = typographicDoubleQuotes;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn typographicDoubleQuotes(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_TypographicDoubleQuotes();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.typographicDoubleQuotes: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isTypographicDoubleQuotesImmutable` instead
    ///
    pub const IsTypographicDoubleQuotesImmutable = isTypographicDoubleQuotesImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isTypographicDoubleQuotesImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsTypographicDoubleQuotesImmutable();
    }

    /// ### DEPRECATED: Use `typographicDoubleQuotesItem` instead
    ///
    pub const TypographicDoubleQuotesItem = typographicDoubleQuotesItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn typographicDoubleQuotesItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemString {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_TypographicDoubleQuotesItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCustomWritablePath` instead
    ///
    pub const SetCustomWritablePath = setCustomWritablePath;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: []const u8 `
    ///
    pub fn setCustomWritablePath(v: []const u8) void {
        const v_str = qtc.libqt_string{
            .len = v.len,
            .data = v.ptr,
        };
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetCustomWritablePath(v_str);
    }

    /// ### DEPRECATED: Use `customWritablePath` instead
    ///
    pub const CustomWritablePath = customWritablePath;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn customWritablePath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_CustomWritablePath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.customWritablePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isCustomWritablePathImmutable` instead
    ///
    pub const IsCustomWritablePathImmutable = isCustomWritablePathImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isCustomWritablePathImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsCustomWritablePathImmutable();
    }

    /// ### DEPRECATED: Use `customWritablePathItem` instead
    ///
    pub const CustomWritablePathItem = customWritablePathItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn customWritablePathItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemString {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_CustomWritablePathItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCustomSystemPath` instead
    ///
    pub const SetCustomSystemPath = setCustomSystemPath;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: []const u8 `
    ///
    pub fn setCustomSystemPath(v: []const u8) void {
        const v_str = qtc.libqt_string{
            .len = v.len,
            .data = v.ptr,
        };
        qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetCustomSystemPath(v_str);
    }

    /// ### DEPRECATED: Use `customSystemPath` instead
    ///
    pub const CustomSystemPath = customSystemPath;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn customSystemPath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_CustomSystemPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.customSystemPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isCustomSystemPathImmutable` instead
    ///
    pub const IsCustomSystemPathImmutable = isCustomSystemPathImmutable;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    pub fn isCustomSystemPathImmutable() bool {
        return qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsCustomSystemPathImmutable();
    }

    /// ### DEPRECATED: Use `customSystemPathItem` instead
    ///
    pub const CustomSystemPathItem = customSystemPathItem;

    /// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn customSystemPathItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KCoreConfigSkeleton__ItemString {
        return .{ .ptr = qtc.TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_CustomSystemPathItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemColor` instead
    ///
    pub const AddItemColor = addItemColor;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QColor `
    ///
    pub fn addItemColor(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype) KConfigSkeleton__ItemColor {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QColor;
        return .{ .ptr = qtc.KConfigSkeleton_AddItemColor(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemFont` instead
    ///
    pub const AddItemFont = addItemFont;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QFont `
    ///
    pub fn addItemFont(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype) KConfigSkeleton__ItemFont {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QFont;
        return .{ .ptr = qtc.KConfigSkeleton_AddItemFont(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemColor3` instead
    ///
    pub const AddItemColor3 = addItemColor3;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QColor `
    ///
    /// ` defaultValue: QColor `
    ///
    pub fn addItemColor3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype) KConfigSkeleton__ItemColor {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QColor;
        comptime _ = @TypeOf(defaultValue)._is_QColor;
        return .{ .ptr = qtc.KConfigSkeleton_AddItemColor3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemColor4` instead
    ///
    pub const AddItemColor4 = addItemColor4;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QColor `
    ///
    /// ` defaultValue: QColor `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemColor4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KConfigSkeleton__ItemColor {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QColor;
        comptime _ = @TypeOf(defaultValue)._is_QColor;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KConfigSkeleton_AddItemColor4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemFont3` instead
    ///
    pub const AddItemFont3 = addItemFont3;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QFont `
    ///
    /// ` defaultValue: QFont `
    ///
    pub fn addItemFont3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype) KConfigSkeleton__ItemFont {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QFont;
        comptime _ = @TypeOf(defaultValue)._is_QFont;
        return .{ .ptr = qtc.KConfigSkeleton_AddItemFont3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemFont4` instead
    ///
    pub const AddItemFont4 = addItemFont4;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QFont `
    ///
    /// ` defaultValue: QFont `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemFont4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KConfigSkeleton__ItemFont {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QFont;
        comptime _ = @TypeOf(defaultValue)._is_QFont;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KConfigSkeleton_AddItemFont4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `setDefaults` instead
    ///
    pub const SetDefaults = setDefaults;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn setDefaults(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) void {
        qtc.KCoreConfigSkeleton_SetDefaults(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `load` instead
    ///
    pub const Load = load;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn load(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) void {
        qtc.KCoreConfigSkeleton_Load(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn read(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) void {
        qtc.KCoreConfigSkeleton_Read(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDefaults` instead
    ///
    pub const IsDefaults = isDefaults;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn isDefaults(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) bool {
        return qtc.KCoreConfigSkeleton_IsDefaults(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSaveNeeded` instead
    ///
    pub const IsSaveNeeded = isSaveNeeded;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isSaveNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn isSaveNeeded(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) bool {
        return qtc.KCoreConfigSkeleton_IsSaveNeeded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentGroup` instead
    ///
    pub const SetCurrentGroup = setCurrentGroup;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setCurrentGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` group: []const u8 `
    ///
    pub fn setCurrentGroup(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KCoreConfigSkeleton_SetCurrentGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### DEPRECATED: Use `currentGroup` instead
    ///
    pub const CurrentGroup = currentGroup;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#currentGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentGroup(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCoreConfigSkeleton_CurrentGroup(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.currentGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addItem` instead
    ///
    pub const AddItem = addItem;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` item: KConfigSkeletonItem `
    ///
    pub fn addItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KConfigSkeletonItem;
        qtc.KCoreConfigSkeleton_AddItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `addItemString` instead
    ///
    pub const AddItemString = addItemString;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn addItemString(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemString {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemString(@ptrCast(self.ptr), name_str, reference_str) };
    }

    /// ### DEPRECATED: Use `addItemPassword` instead
    ///
    pub const AddItemPassword = addItemPassword;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn addItemPassword(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemPassword {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPassword(@ptrCast(self.ptr), name_str, reference_str) };
    }

    /// ### DEPRECATED: Use `addItemPath` instead
    ///
    pub const AddItemPath = addItemPath;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn addItemPath(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemPath {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPath(@ptrCast(self.ptr), name_str, reference_str) };
    }

    /// ### DEPRECATED: Use `addItemProperty` instead
    ///
    pub const AddItemProperty = addItemProperty;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    pub fn addItemProperty(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QVariant;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemProperty(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemBool` instead
    ///
    pub const AddItemBool = addItemBool;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    pub fn addItemBool(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *bool) KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemBool(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemInt` instead
    ///
    pub const AddItemInt = addItemInt;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    pub fn addItemInt(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *i32) KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemInt(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemUInt` instead
    ///
    pub const AddItemUInt = addItemUInt;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    pub fn addItemUInt(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *u32) KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemUInt(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemLongLong` instead
    ///
    pub const AddItemLongLong = addItemLongLong;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    pub fn addItemLongLong(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *i64) KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemLongLong(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemULongLong` instead
    ///
    pub const AddItemULongLong = addItemULongLong;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    pub fn addItemULongLong(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *u64) KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemULongLong(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemDouble` instead
    ///
    pub const AddItemDouble = addItemDouble;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    pub fn addItemDouble(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *f64) KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDouble(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemRect` instead
    ///
    pub const AddItemRect = addItemRect;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    pub fn addItemRect(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRect;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRect(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemRectF` instead
    ///
    pub const AddItemRectF = addItemRectF;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    pub fn addItemRectF(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRectF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRectF(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemPoint` instead
    ///
    pub const AddItemPoint = addItemPoint;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    pub fn addItemPoint(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPoint;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPoint(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemPointF` instead
    ///
    pub const AddItemPointF = addItemPointF;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    pub fn addItemPointF(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPointF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPointF(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemSize` instead
    ///
    pub const AddItemSize = addItemSize;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    pub fn addItemSize(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSize;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSize(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemSizeF` instead
    ///
    pub const AddItemSizeF = addItemSizeF;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    pub fn addItemSizeF(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSizeF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSizeF(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemDateTime` instead
    ///
    pub const AddItemDateTime = addItemDateTime;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    pub fn addItemDateTime(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QDateTime;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDateTime(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemStringList` instead
    ///
    pub const AddItemStringList = addItemStringList;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    pub fn addItemStringList(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, allocator: std.mem.Allocator, name: []const u8, reference: []const []const u8) KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.addItemStringList: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |str_item, i|
            reference_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemStringList(@ptrCast(self.ptr), name_str, reference_list) };
    }

    /// ### DEPRECATED: Use `addItemIntList` instead
    ///
    pub const AddItemIntList = addItemIntList;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    pub fn addItemIntList(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: []i32) KCoreConfigSkeleton__ItemIntList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemIntList(@ptrCast(self.ptr), name_str, reference_list) };
    }

    /// ### DEPRECATED: Use `config` instead
    ///
    pub const Config = config;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn config(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KConfig {
        return .{ .ptr = qtc.KCoreConfigSkeleton_Config(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `config2` instead
    ///
    pub const Config2 = config2;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn config2(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) KConfig {
        return .{ .ptr = qtc.KCoreConfigSkeleton_Config2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `items` instead
    ///
    pub const Items = items;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn items(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, allocator: std.mem.Allocator) []KConfigSkeletonItem {
        const _arr: qtc.libqt_list = qtc.KCoreConfigSkeleton_Items(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KConfigSkeletonItem, _arr.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.items: Memory allocation failed");
        const _data_val: [*]QtC.KConfigSkeletonItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `removeItem` instead
    ///
    pub const RemoveItem = removeItem;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    pub fn removeItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KCoreConfigSkeleton_RemoveItem(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `clearItems` instead
    ///
    pub const ClearItems = clearItems;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#clearItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn clearItems(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) void {
        qtc.KCoreConfigSkeleton_ClearItems(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImmutable` instead
    ///
    pub const IsImmutable = isImmutable;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    pub fn isImmutable(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_IsImmutable(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `findItem` instead
    ///
    pub const FindItem = findItem;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#findItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    pub fn findItem(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8) KConfigSkeletonItem {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_FindItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `useDefaults` instead
    ///
    pub const UseDefaults = useDefaults;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn useDefaults(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, b: bool) bool {
        return qtc.KCoreConfigSkeleton_UseDefaults(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn save(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) bool {
        return qtc.KCoreConfigSkeleton_Save(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `configChanged` instead
    ///
    pub const ConfigChanged = configChanged;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn configChanged(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) void {
        qtc.KCoreConfigSkeleton_ConfigChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onConfigChanged` instead
    ///
    pub const OnConfigChanged = onConfigChanged;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionCore__TextAutoCorrectionSettings) callconv(.c) void `
    ///
    pub fn onConfigChanged(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, callback: *const fn (TextAutoCorrectionCore__TextAutoCorrectionSettings) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_Connect_ConfigChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addItem2` instead
    ///
    pub const AddItem2 = addItem2;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` item: KConfigSkeletonItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn addItem2(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, item: anytype, name: []const u8) void {
        comptime _ = @TypeOf(item)._is_KConfigSkeletonItem;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KCoreConfigSkeleton_AddItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), name_str);
    }

    /// ### DEPRECATED: Use `addItemString3` instead
    ///
    pub const AddItemString3 = addItemString3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn addItemString3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemString {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemString3(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str) };
    }

    /// ### DEPRECATED: Use `addItemString4` instead
    ///
    pub const AddItemString4 = addItemString4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemString4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) KCoreConfigSkeleton__ItemString {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemString4(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str, key_str) };
    }

    /// ### DEPRECATED: Use `addItemPassword3` instead
    ///
    pub const AddItemPassword3 = addItemPassword3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn addItemPassword3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemPassword {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPassword3(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str) };
    }

    /// ### DEPRECATED: Use `addItemPassword4` instead
    ///
    pub const AddItemPassword4 = addItemPassword4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemPassword4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) KCoreConfigSkeleton__ItemPassword {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPassword4(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str, key_str) };
    }

    /// ### DEPRECATED: Use `addItemPath3` instead
    ///
    pub const AddItemPath3 = addItemPath3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn addItemPath3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemPath {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPath3(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str) };
    }

    /// ### DEPRECATED: Use `addItemPath4` instead
    ///
    pub const AddItemPath4 = addItemPath4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemPath4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) KCoreConfigSkeleton__ItemPath {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPath4(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str, key_str) };
    }

    /// ### DEPRECATED: Use `addItemProperty3` instead
    ///
    pub const AddItemProperty3 = addItemProperty3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    /// ` defaultValue: QVariant `
    ///
    pub fn addItemProperty3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QVariant;
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemProperty3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemProperty4` instead
    ///
    pub const AddItemProperty4 = addItemProperty4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    /// ` defaultValue: QVariant `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemProperty4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QVariant;
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemProperty4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemBool3` instead
    ///
    pub const AddItemBool3 = addItemBool3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn addItemBool3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *bool, defaultValue: bool) KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemBool3(@ptrCast(self.ptr), name_str, @ptrCast(reference), defaultValue) };
    }

    /// ### DEPRECATED: Use `addItemBool4` instead
    ///
    pub const AddItemBool4 = addItemBool4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    /// ` defaultValue: bool `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemBool4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *bool, defaultValue: bool, key: []const u8) KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemBool4(@ptrCast(self.ptr), name_str, @ptrCast(reference), defaultValue, key_str) };
    }

    /// ### DEPRECATED: Use `addItemInt3` instead
    ///
    pub const AddItemInt3 = addItemInt3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn addItemInt3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *i32, defaultValue: i32) KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemInt3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `addItemInt4` instead
    ///
    pub const AddItemInt4 = addItemInt4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` defaultValue: i32 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemInt4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *i32, defaultValue: i32, key: []const u8) KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemInt4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### DEPRECATED: Use `addItemUInt3` instead
    ///
    pub const AddItemUInt3 = addItemUInt3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    /// ` defaultValue: u32 `
    ///
    pub fn addItemUInt3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *u32, defaultValue: u32) KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemUInt3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `addItemUInt4` instead
    ///
    pub const AddItemUInt4 = addItemUInt4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    /// ` defaultValue: u32 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemUInt4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *u32, defaultValue: u32, key: []const u8) KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemUInt4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### DEPRECATED: Use `addItemLongLong3` instead
    ///
    pub const AddItemLongLong3 = addItemLongLong3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn addItemLongLong3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *i64, defaultValue: i64) KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemLongLong3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `addItemLongLong4` instead
    ///
    pub const AddItemLongLong4 = addItemLongLong4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    /// ` defaultValue: i64 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemLongLong4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *i64, defaultValue: i64, key: []const u8) KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemLongLong4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### DEPRECATED: Use `addItemULongLong3` instead
    ///
    pub const AddItemULongLong3 = addItemULongLong3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    /// ` defaultValue: u64 `
    ///
    pub fn addItemULongLong3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *u64, defaultValue: u64) KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemULongLong3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `addItemULongLong4` instead
    ///
    pub const AddItemULongLong4 = addItemULongLong4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    /// ` defaultValue: u64 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemULongLong4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *u64, defaultValue: u64, key: []const u8) KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemULongLong4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### DEPRECATED: Use `addItemDouble3` instead
    ///
    pub const AddItemDouble3 = addItemDouble3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn addItemDouble3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *f64, defaultValue: f64) KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDouble3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `addItemDouble4` instead
    ///
    pub const AddItemDouble4 = addItemDouble4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    /// ` defaultValue: f64 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemDouble4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: *f64, defaultValue: f64, key: []const u8) KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDouble4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### DEPRECATED: Use `addItemRect3` instead
    ///
    pub const AddItemRect3 = addItemRect3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    /// ` defaultValue: QRect `
    ///
    pub fn addItemRect3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRect;
        comptime _ = @TypeOf(defaultValue)._is_QRect;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRect3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemRect4` instead
    ///
    pub const AddItemRect4 = addItemRect4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    /// ` defaultValue: QRect `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemRect4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRect;
        comptime _ = @TypeOf(defaultValue)._is_QRect;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRect4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemRectF3` instead
    ///
    pub const AddItemRectF3 = addItemRectF3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    /// ` defaultValue: QRectF `
    ///
    pub fn addItemRectF3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRectF;
        comptime _ = @TypeOf(defaultValue)._is_QRectF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRectF3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemRectF4` instead
    ///
    pub const AddItemRectF4 = addItemRectF4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    /// ` defaultValue: QRectF `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemRectF4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRectF;
        comptime _ = @TypeOf(defaultValue)._is_QRectF;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRectF4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemPoint3` instead
    ///
    pub const AddItemPoint3 = addItemPoint3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    /// ` defaultValue: QPoint `
    ///
    pub fn addItemPoint3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPoint;
        comptime _ = @TypeOf(defaultValue)._is_QPoint;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPoint3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemPoint4` instead
    ///
    pub const AddItemPoint4 = addItemPoint4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    /// ` defaultValue: QPoint `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemPoint4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPoint;
        comptime _ = @TypeOf(defaultValue)._is_QPoint;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPoint4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemPointF3` instead
    ///
    pub const AddItemPointF3 = addItemPointF3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    /// ` defaultValue: QPointF `
    ///
    pub fn addItemPointF3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPointF;
        comptime _ = @TypeOf(defaultValue)._is_QPointF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPointF3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemPointF4` instead
    ///
    pub const AddItemPointF4 = addItemPointF4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    /// ` defaultValue: QPointF `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemPointF4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPointF;
        comptime _ = @TypeOf(defaultValue)._is_QPointF;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPointF4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemSize3` instead
    ///
    pub const AddItemSize3 = addItemSize3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    /// ` defaultValue: QSize `
    ///
    pub fn addItemSize3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSize;
        comptime _ = @TypeOf(defaultValue)._is_QSize;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSize3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemSize4` instead
    ///
    pub const AddItemSize4 = addItemSize4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    /// ` defaultValue: QSize `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemSize4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSize;
        comptime _ = @TypeOf(defaultValue)._is_QSize;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSize4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemSizeF3` instead
    ///
    pub const AddItemSizeF3 = addItemSizeF3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    /// ` defaultValue: QSizeF `
    ///
    pub fn addItemSizeF3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSizeF;
        comptime _ = @TypeOf(defaultValue)._is_QSizeF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSizeF3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemSizeF4` instead
    ///
    pub const AddItemSizeF4 = addItemSizeF4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    /// ` defaultValue: QSizeF `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemSizeF4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSizeF;
        comptime _ = @TypeOf(defaultValue)._is_QSizeF;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSizeF4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemDateTime3` instead
    ///
    pub const AddItemDateTime3 = addItemDateTime3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    /// ` defaultValue: QDateTime `
    ///
    pub fn addItemDateTime3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QDateTime;
        comptime _ = @TypeOf(defaultValue)._is_QDateTime;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDateTime3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemDateTime4` instead
    ///
    pub const AddItemDateTime4 = addItemDateTime4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    /// ` defaultValue: QDateTime `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemDateTime4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QDateTime;
        comptime _ = @TypeOf(defaultValue)._is_QDateTime;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDateTime4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemStringList3` instead
    ///
    pub const AddItemStringList3 = addItemStringList3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    /// ` defaultValue: []const []const u8 `
    ///
    pub fn addItemStringList3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, allocator: std.mem.Allocator, name: []const u8, reference: []const []const u8, defaultValue: []const []const u8) KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.addItemStringList3: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |str_item, i|
            reference_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.addItemStringList3: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |str_item, i|
            defaultValue_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemStringList3(@ptrCast(self.ptr), name_str, reference_list, defaultValue_list) };
    }

    /// ### DEPRECATED: Use `addItemStringList4` instead
    ///
    pub const AddItemStringList4 = addItemStringList4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    /// ` defaultValue: []const []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemStringList4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, allocator: std.mem.Allocator, name: []const u8, reference: []const []const u8, defaultValue: []const []const u8, key: []const u8) KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.addItemStringList4: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |str_item, i|
            reference_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.addItemStringList4: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |str_item, i|
            defaultValue_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemStringList4(@ptrCast(self.ptr), name_str, reference_list, defaultValue_list, key_str) };
    }

    /// ### DEPRECATED: Use `addItemIntList3` instead
    ///
    pub const AddItemIntList3 = addItemIntList3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    /// ` defaultValue: []i32 `
    ///
    pub fn addItemIntList3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: []i32, defaultValue: []i32) KCoreConfigSkeleton__ItemIntList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemIntList3(@ptrCast(self.ptr), name_str, reference_list, defaultValue_list) };
    }

    /// ### DEPRECATED: Use `addItemIntList4` instead
    ///
    pub const AddItemIntList4 = addItemIntList4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    /// ` defaultValue: []i32 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemIntList4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8, reference: []i32, defaultValue: []i32, key: []const u8) KCoreConfigSkeleton__ItemIntList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemIntList4(@ptrCast(self.ptr), name_str, reference_list, defaultValue_list, key_str) };
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.objectName: Memory allocation failed");
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: []const u8) void {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn isWidgetType(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) bool {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn isWindowType(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) bool {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn isQuickItemType(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) bool {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn signalsBlocked(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) bool {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, b: bool) bool {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn thread(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) QThread {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, _thread: anytype) bool {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, interval: i32) i32 {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, time: i64) i32 {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, id: i32) void {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, id: i32) void {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.children: Memory allocation failed");
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, _parent: anytype) void {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, filterObj: anytype) void {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, obj: anytype) void {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn disconnect3(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) bool {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, receiver: anytype) bool {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn dumpObjectTree(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) void {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn dumpObjectInfo(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) void {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, name: [:0]const u8) QVariant {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextAutoCorrectionCore__TextAutoCorrectionSettings.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn bindingStorage(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) QBindingStorage {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn bindingStorage2(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) QBindingStorage {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn destroyed(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) void {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionCore__TextAutoCorrectionSettings) callconv(.c) void `
    ///
    pub fn onDestroyed(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, callback: *const fn (TextAutoCorrectionCore__TextAutoCorrectionSettings) callconv(.c) void) void {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn parent(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) QObject {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, classname: [:0]const u8) bool {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    pub fn deleteLater(self: TextAutoCorrectionCore__TextAutoCorrectionSettings) void {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, interval: i32, timerType: i32) i32 {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, time: i64, timerType: i32) i32 {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, signal: [:0]const u8) bool {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, param1: anytype) void {
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionCore__TextAutoCorrectionSettings, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, callback: *const fn (TextAutoCorrectionCore__TextAutoCorrectionSettings, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAutoCorrectionCore__TextAutoCorrectionSettings `
    ///
    /// ` callback: *const fn (self: TextAutoCorrectionCore__TextAutoCorrectionSettings, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: TextAutoCorrectionCore__TextAutoCorrectionSettings, callback: *const fn (TextAutoCorrectionCore__TextAutoCorrectionSettings, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};
