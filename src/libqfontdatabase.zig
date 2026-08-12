const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QFont = @import("libqt6").QFont;
const QFontInfo = @import("libqt6").QFontInfo;
const qchar_enums = @import("libqchar.zig").enums;
const qfontdatabase_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html)
pub const QFontDatabase = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFontDatabase,

    pub const _is_QFontDatabase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFontDatabase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QFontDatabase `
    ///
    pub fn new(other: anytype) QFontDatabase {
        comptime _ = @TypeOf(other)._is_QFontDatabase;
        return .{ .ptr = qtc.QFontDatabase_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QFontDatabase object and invalidate the source QFontDatabase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QFontDatabase `
    ///
    pub fn new2(other: anytype) QFontDatabase {
        comptime _ = @TypeOf(other)._is_QFontDatabase;
        return .{ .ptr = qtc.QFontDatabase_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QFontDatabase object in C++ memory
    ///
    pub fn new3() QFontDatabase {
        return .{ .ptr = qtc.QFontDatabase_new3() };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QFontDatabase `
    ///
    /// ` other: QFontDatabase `
    ///
    pub fn copyAssign(self: QFontDatabase, other: QFontDatabase) void {
        qtc.QFontDatabase_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QFontDatabase `
    ///
    /// ` other: QFontDatabase `
    ///
    pub fn moveAssign(self: QFontDatabase, other: QFontDatabase) void {
        qtc.QFontDatabase_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `standardSizes` instead
    ///
    pub const StandardSizes = standardSizes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#standardSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn standardSizes(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QFontDatabase_StandardSizes();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QFontDatabase.standardSizes: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `writingSystems` instead
    ///
    pub const WritingSystems = writingSystems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#writingSystems)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qfontdatabase_enums.WritingSystem `
    ///
    pub fn writingSystems(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QFontDatabase_WritingSystems();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QFontDatabase.writingSystems: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `writingSystems2` instead
    ///
    pub const WritingSystems2 = writingSystems2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#writingSystems)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` family: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` []qfontdatabase_enums.WritingSystem `
    ///
    pub fn writingSystems2(allocator: std.mem.Allocator, family: []const u8) []i32 {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QFontDatabase_WritingSystems2(family_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QFontDatabase.writingSystems2: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `families` instead
    ///
    pub const Families = families;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#families)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn families(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFontDatabase_Families();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QFontDatabase.families: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QFontDatabase.families: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `styles` instead
    ///
    pub const Styles = styles;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#styles)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` family: []const u8 `
    ///
    pub fn styles(allocator: std.mem.Allocator, family: []const u8) []const []const u8 {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QFontDatabase_Styles(family_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QFontDatabase.styles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QFontDatabase.styles: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `pointSizes` instead
    ///
    pub const PointSizes = pointSizes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#pointSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` family: []const u8 `
    ///
    pub fn pointSizes(allocator: std.mem.Allocator, family: []const u8) []i32 {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QFontDatabase_PointSizes(family_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QFontDatabase.pointSizes: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `smoothSizes` instead
    ///
    pub const SmoothSizes = smoothSizes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#smoothSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` family: []const u8 `
    ///
    /// ` style: []const u8 `
    ///
    pub fn smoothSizes(allocator: std.mem.Allocator, family: []const u8, style: []const u8) []i32 {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QFontDatabase_SmoothSizes(family_str, style_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QFontDatabase.smoothSizes: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `styleString` instead
    ///
    pub const StyleString = styleString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#styleString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _font: QFont `
    ///
    pub fn styleString(allocator: std.mem.Allocator, _font: anytype) []const u8 {
        comptime _ = @TypeOf(_font)._is_QFont;
        var _str = qtc.QFontDatabase_StyleString(@ptrCast(_font.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFontDatabase.styleString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `styleString2` instead
    ///
    pub const StyleString2 = styleString2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#styleString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fontInfo: QFontInfo `
    ///
    pub fn styleString2(allocator: std.mem.Allocator, fontInfo: anytype) []const u8 {
        comptime _ = @TypeOf(fontInfo)._is_QFontInfo;
        var _str = qtc.QFontDatabase_StyleString2(@ptrCast(fontInfo.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFontDatabase.styleString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    /// ` style: []const u8 `
    ///
    /// ` pointSize: i32 `
    ///
    pub fn font(family: []const u8, style: []const u8, pointSize: i32) QFont {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return .{ .ptr = qtc.QFontDatabase_Font(family_str, style_str, @bitCast(pointSize)) };
    }

    /// ### DEPRECATED: Use `isBitmapScalable` instead
    ///
    pub const IsBitmapScalable = isBitmapScalable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#isBitmapScalable)
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    pub fn isBitmapScalable(family: []const u8) bool {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        return qtc.QFontDatabase_IsBitmapScalable(family_str);
    }

    /// ### DEPRECATED: Use `isSmoothlyScalable` instead
    ///
    pub const IsSmoothlyScalable = isSmoothlyScalable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#isSmoothlyScalable)
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    pub fn isSmoothlyScalable(family: []const u8) bool {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        return qtc.QFontDatabase_IsSmoothlyScalable(family_str);
    }

    /// ### DEPRECATED: Use `isScalable` instead
    ///
    pub const IsScalable = isScalable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#isScalable)
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    pub fn isScalable(family: []const u8) bool {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        return qtc.QFontDatabase_IsScalable(family_str);
    }

    /// ### DEPRECATED: Use `isFixedPitch` instead
    ///
    pub const IsFixedPitch = isFixedPitch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#isFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    pub fn isFixedPitch(family: []const u8) bool {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        return qtc.QFontDatabase_IsFixedPitch(family_str);
    }

    /// ### DEPRECATED: Use `italic` instead
    ///
    pub const Italic = italic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#italic)
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    /// ` style: []const u8 `
    ///
    pub fn italic(family: []const u8, style: []const u8) bool {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return qtc.QFontDatabase_Italic(family_str, style_str);
    }

    /// ### DEPRECATED: Use `bold` instead
    ///
    pub const Bold = bold;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#bold)
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    /// ` style: []const u8 `
    ///
    pub fn bold(family: []const u8, style: []const u8) bool {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return qtc.QFontDatabase_Bold(family_str, style_str);
    }

    /// ### DEPRECATED: Use `weight` instead
    ///
    pub const Weight = weight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#weight)
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    /// ` style: []const u8 `
    ///
    pub fn weight(family: []const u8, style: []const u8) i32 {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return qtc.QFontDatabase_Weight(family_str, style_str);
    }

    /// ### DEPRECATED: Use `hasFamily` instead
    ///
    pub const HasFamily = hasFamily;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#hasFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    pub fn hasFamily(family: []const u8) bool {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        return qtc.QFontDatabase_HasFamily(family_str);
    }

    /// ### DEPRECATED: Use `isPrivateFamily` instead
    ///
    pub const IsPrivateFamily = isPrivateFamily;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#isPrivateFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    pub fn isPrivateFamily(family: []const u8) bool {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        return qtc.QFontDatabase_IsPrivateFamily(family_str);
    }

    /// ### DEPRECATED: Use `writingSystemName` instead
    ///
    pub const WritingSystemName = writingSystemName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#writingSystemName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` writingSystem: qfontdatabase_enums.WritingSystem `
    ///
    pub fn writingSystemName(allocator: std.mem.Allocator, writingSystem: i32) []const u8 {
        var _str = qtc.QFontDatabase_WritingSystemName(@bitCast(writingSystem));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFontDatabase.writingSystemName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `writingSystemSample` instead
    ///
    pub const WritingSystemSample = writingSystemSample;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#writingSystemSample)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` writingSystem: qfontdatabase_enums.WritingSystem `
    ///
    pub fn writingSystemSample(allocator: std.mem.Allocator, writingSystem: i32) []const u8 {
        var _str = qtc.QFontDatabase_WritingSystemSample(@bitCast(writingSystem));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFontDatabase.writingSystemSample: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addApplicationFont` instead
    ///
    pub const AddApplicationFont = addApplicationFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#addApplicationFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn addApplicationFont(fileName: []const u8) i32 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QFontDatabase_AddApplicationFont(fileName_str);
    }

    /// ### DEPRECATED: Use `addApplicationFontFromData` instead
    ///
    pub const AddApplicationFontFromData = addApplicationFontFromData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#addApplicationFontFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` fontData: []u8 `
    ///
    pub fn addApplicationFontFromData(fontData: []u8) i32 {
        const fontData_str = qtc.libqt_string{
            .len = fontData.len,
            .data = fontData.ptr,
        };
        return qtc.QFontDatabase_AddApplicationFontFromData(fontData_str);
    }

    /// ### DEPRECATED: Use `applicationFontFamilies` instead
    ///
    pub const ApplicationFontFamilies = applicationFontFamilies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#applicationFontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` id: i32 `
    ///
    pub fn applicationFontFamilies(allocator: std.mem.Allocator, id: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFontDatabase_ApplicationFontFamilies(@bitCast(id));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QFontDatabase.applicationFontFamilies: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QFontDatabase.applicationFontFamilies: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `removeApplicationFont` instead
    ///
    pub const RemoveApplicationFont = removeApplicationFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#removeApplicationFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: i32 `
    ///
    pub fn removeApplicationFont(id: i32) bool {
        return qtc.QFontDatabase_RemoveApplicationFont(@bitCast(id));
    }

    /// ### DEPRECATED: Use `removeAllApplicationFonts` instead
    ///
    pub const RemoveAllApplicationFonts = removeAllApplicationFonts;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#removeAllApplicationFonts)
    ///
    pub fn removeAllApplicationFonts() bool {
        return qtc.QFontDatabase_RemoveAllApplicationFonts();
    }

    /// ### DEPRECATED: Use `addApplicationFallbackFontFamily` instead
    ///
    pub const AddApplicationFallbackFontFamily = addApplicationFallbackFontFamily;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#addApplicationFallbackFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` script: qchar_enums.Script `
    ///
    /// ` familyName: []const u8 `
    ///
    pub fn addApplicationFallbackFontFamily(script: i32, familyName: []const u8) void {
        const familyName_str = qtc.libqt_string{
            .len = familyName.len,
            .data = familyName.ptr,
        };
        qtc.QFontDatabase_AddApplicationFallbackFontFamily(@bitCast(script), familyName_str);
    }

    /// ### DEPRECATED: Use `removeApplicationFallbackFontFamily` instead
    ///
    pub const RemoveApplicationFallbackFontFamily = removeApplicationFallbackFontFamily;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#removeApplicationFallbackFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` script: qchar_enums.Script `
    ///
    /// ` familyName: []const u8 `
    ///
    pub fn removeApplicationFallbackFontFamily(script: i32, familyName: []const u8) bool {
        const familyName_str = qtc.libqt_string{
            .len = familyName.len,
            .data = familyName.ptr,
        };
        return qtc.QFontDatabase_RemoveApplicationFallbackFontFamily(@bitCast(script), familyName_str);
    }

    /// ### DEPRECATED: Use `setApplicationFallbackFontFamilies` instead
    ///
    pub const SetApplicationFallbackFontFamilies = setApplicationFallbackFontFamilies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#setApplicationFallbackFontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: qchar_enums.Script `
    ///
    /// ` familyNames: []const []const u8 `
    ///
    pub fn setApplicationFallbackFontFamilies(allocator: std.mem.Allocator, param1: i32, familyNames: []const []const u8) void {
        const familyNames_arr = allocator.alloc(qtc.libqt_string, familyNames.len) catch @panic("QFontDatabase.setApplicationFallbackFontFamilies: Memory allocation failed");
        defer allocator.free(familyNames_arr);
        for (familyNames, 0..familyNames.len) |str_item, i|
            familyNames_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const familyNames_list = qtc.libqt_list{
            .len = familyNames.len,
            .data = familyNames_arr.ptr,
        };
        qtc.QFontDatabase_SetApplicationFallbackFontFamilies(@bitCast(param1), familyNames_list);
    }

    /// ### DEPRECATED: Use `applicationFallbackFontFamilies` instead
    ///
    pub const ApplicationFallbackFontFamilies = applicationFallbackFontFamilies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#applicationFallbackFontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` script: qchar_enums.Script `
    ///
    pub fn applicationFallbackFontFamilies(allocator: std.mem.Allocator, script: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFontDatabase_ApplicationFallbackFontFamilies(@bitCast(script));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QFontDatabase.applicationFallbackFontFamilies: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QFontDatabase.applicationFallbackFontFamilies: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `systemFont` instead
    ///
    pub const SystemFont = systemFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#systemFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qfontdatabase_enums.SystemFont `
    ///
    pub fn systemFont(typeVal: i32) QFont {
        return .{ .ptr = qtc.QFontDatabase_SystemFont(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `families1` instead
    ///
    pub const Families1 = families1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#families)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` writingSystem: qfontdatabase_enums.WritingSystem `
    ///
    pub fn families1(allocator: std.mem.Allocator, writingSystem: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QFontDatabase_Families1(@bitCast(writingSystem));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QFontDatabase.families1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QFontDatabase.families1: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `pointSizes2` instead
    ///
    pub const PointSizes2 = pointSizes2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#pointSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` family: []const u8 `
    ///
    /// ` style: []const u8 `
    ///
    pub fn pointSizes2(allocator: std.mem.Allocator, family: []const u8, style: []const u8) []i32 {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QFontDatabase_PointSizes2(family_str, style_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QFontDatabase.pointSizes2: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isBitmapScalable2` instead
    ///
    pub const IsBitmapScalable2 = isBitmapScalable2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#isBitmapScalable)
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    /// ` style: []const u8 `
    ///
    pub fn isBitmapScalable2(family: []const u8, style: []const u8) bool {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return qtc.QFontDatabase_IsBitmapScalable2(family_str, style_str);
    }

    /// ### DEPRECATED: Use `isSmoothlyScalable2` instead
    ///
    pub const IsSmoothlyScalable2 = isSmoothlyScalable2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#isSmoothlyScalable)
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    /// ` style: []const u8 `
    ///
    pub fn isSmoothlyScalable2(family: []const u8, style: []const u8) bool {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return qtc.QFontDatabase_IsSmoothlyScalable2(family_str, style_str);
    }

    /// ### DEPRECATED: Use `isScalable2` instead
    ///
    pub const IsScalable2 = isScalable2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#isScalable)
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    /// ` style: []const u8 `
    ///
    pub fn isScalable2(family: []const u8, style: []const u8) bool {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return qtc.QFontDatabase_IsScalable2(family_str, style_str);
    }

    /// ### DEPRECATED: Use `isFixedPitch2` instead
    ///
    pub const IsFixedPitch2 = isFixedPitch2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#isFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` family: []const u8 `
    ///
    /// ` style: []const u8 `
    ///
    pub fn isFixedPitch2(family: []const u8, style: []const u8) bool {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return qtc.QFontDatabase_IsFixedPitch2(family_str, style_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#dtor.QFontDatabase)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFontDatabase `
    ///
    pub fn delete(self: QFontDatabase) void {
        qtc.QFontDatabase_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfontdatabase.html#public-types)
pub const enums = struct {
    pub const WritingSystem = enum(i32) {
        pub const Any: i32 = 0;
        pub const Latin: i32 = 1;
        pub const Greek: i32 = 2;
        pub const Cyrillic: i32 = 3;
        pub const Armenian: i32 = 4;
        pub const Hebrew: i32 = 5;
        pub const Arabic: i32 = 6;
        pub const Syriac: i32 = 7;
        pub const Thaana: i32 = 8;
        pub const Devanagari: i32 = 9;
        pub const Bengali: i32 = 10;
        pub const Gurmukhi: i32 = 11;
        pub const Gujarati: i32 = 12;
        pub const Oriya: i32 = 13;
        pub const Tamil: i32 = 14;
        pub const Telugu: i32 = 15;
        pub const Kannada: i32 = 16;
        pub const Malayalam: i32 = 17;
        pub const Sinhala: i32 = 18;
        pub const Thai: i32 = 19;
        pub const Lao: i32 = 20;
        pub const Tibetan: i32 = 21;
        pub const Myanmar: i32 = 22;
        pub const Georgian: i32 = 23;
        pub const Khmer: i32 = 24;
        pub const SimplifiedChinese: i32 = 25;
        pub const TraditionalChinese: i32 = 26;
        pub const Japanese: i32 = 27;
        pub const Korean: i32 = 28;
        pub const Vietnamese: i32 = 29;
        pub const Symbol: i32 = 30;
        pub const Other: i32 = 30;
        pub const Ogham: i32 = 31;
        pub const Runic: i32 = 32;
        pub const Nko: i32 = 33;
        pub const WritingSystemsCount: i32 = 34;
    };

    pub const SystemFont = enum(i32) {
        pub const GeneralFont: i32 = 0;
        pub const FixedFont: i32 = 1;
        pub const TitleFont: i32 = 2;
        pub const SmallestReadableFont: i32 = 3;
    };
};
