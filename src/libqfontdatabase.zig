const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qchar_enums = @import("libqchar.zig").enums;
const qfontdatabase_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qfontdatabase.html
pub const qfontdatabase = struct {
    /// New constructs a new QFontDatabase object.
    ///
    /// ``` other: QtC.QFontDatabase ```
    pub fn New(other: ?*anyopaque) QtC.QFontDatabase {
        return qtc.QFontDatabase_new(@ptrCast(other));
    }

    /// New2 constructs a new QFontDatabase object and invalidates the source QFontDatabase object.
    ///
    /// ``` other: QtC.QFontDatabase ```
    pub fn New2(other: ?*anyopaque) QtC.QFontDatabase {
        return qtc.QFontDatabase_new2(@ptrCast(other));
    }

    /// New3 constructs a new QFontDatabase object.
    ///
    ///
    pub fn New3() QtC.QFontDatabase {
        return qtc.QFontDatabase_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QFontDatabase, other: QtC.QFontDatabase ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFontDatabase_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QFontDatabase, other: QtC.QFontDatabase ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFontDatabase_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#standardSizes)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn StandardSizes(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.struct_libqt_list = qtc.QFontDatabase_StandardSizes();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qfontdatabase.StandardSizes: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#writingSystems)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn WritingSystems(allocator: std.mem.Allocator) []i64 {
        const _arr: qtc.struct_libqt_list = qtc.QFontDatabase_WritingSystems();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(qfontdatabase_enums.WritingSystem, _arr.len) catch @panic("qfontdatabase.WritingSystems: Memory allocation failed");
        const _data: [*]qfontdatabase_enums.WritingSystem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#writingSystems)
    ///
    /// ``` family: []const u8, allocator: std.mem.Allocator ```
    pub fn WritingSystemsWithFamily(family: []const u8, allocator: std.mem.Allocator) []i64 {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const _arr: qtc.struct_libqt_list = qtc.QFontDatabase_WritingSystemsWithFamily(family_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(qfontdatabase_enums.WritingSystem, _arr.len) catch @panic("qfontdatabase.WritingSystemsWithFamily: Memory allocation failed");
        const _data: [*]qfontdatabase_enums.WritingSystem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#families)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Families(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QFontDatabase_Families();
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfontdatabase.Families: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfontdatabase.Families: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#styles)
    ///
    /// ``` family: []const u8, allocator: std.mem.Allocator ```
    pub fn Styles(family: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const _arr: qtc.struct_libqt_list = qtc.QFontDatabase_Styles(family_str);
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfontdatabase.Styles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfontdatabase.Styles: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#pointSizes)
    ///
    /// ``` family: []const u8, allocator: std.mem.Allocator ```
    pub fn PointSizes(family: []const u8, allocator: std.mem.Allocator) []i32 {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const _arr: qtc.struct_libqt_list = qtc.QFontDatabase_PointSizes(family_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qfontdatabase.PointSizes: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#smoothSizes)
    ///
    /// ``` family: []const u8, style: []const u8, allocator: std.mem.Allocator ```
    pub fn SmoothSizes(family: []const u8, style: []const u8, allocator: std.mem.Allocator) []i32 {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.struct_libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        const _arr: qtc.struct_libqt_list = qtc.QFontDatabase_SmoothSizes(family_str, style_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qfontdatabase.SmoothSizes: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#styleString)
    ///
    /// ``` font: QtC.QFont, allocator: std.mem.Allocator ```
    pub fn StyleString(font: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontDatabase_StyleString(@ptrCast(font));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontdatabase.StyleString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#styleString)
    ///
    /// ``` fontInfo: QtC.QFontInfo, allocator: std.mem.Allocator ```
    pub fn StyleStringWithFontInfo(fontInfo: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontDatabase_StyleStringWithFontInfo(@ptrCast(fontInfo));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontdatabase.StyleStringWithFontInfo: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#font)
    ///
    /// ``` family: []const u8, style: []const u8, pointSize: i32 ```
    pub fn Font(family: []const u8, style: []const u8, pointSize: i32) QtC.QFont {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.struct_libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return qtc.QFontDatabase_Font(family_str, style_str, @intCast(pointSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isBitmapScalable)
    ///
    /// ``` family: []const u8 ```
    pub fn IsBitmapScalable(family: []const u8) bool {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        return qtc.QFontDatabase_IsBitmapScalable(family_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isSmoothlyScalable)
    ///
    /// ``` family: []const u8 ```
    pub fn IsSmoothlyScalable(family: []const u8) bool {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        return qtc.QFontDatabase_IsSmoothlyScalable(family_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isScalable)
    ///
    /// ``` family: []const u8 ```
    pub fn IsScalable(family: []const u8) bool {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        return qtc.QFontDatabase_IsScalable(family_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isFixedPitch)
    ///
    /// ``` family: []const u8 ```
    pub fn IsFixedPitch(family: []const u8) bool {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        return qtc.QFontDatabase_IsFixedPitch(family_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#italic)
    ///
    /// ``` family: []const u8, style: []const u8 ```
    pub fn Italic(family: []const u8, style: []const u8) bool {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.struct_libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return qtc.QFontDatabase_Italic(family_str, style_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#bold)
    ///
    /// ``` family: []const u8, style: []const u8 ```
    pub fn Bold(family: []const u8, style: []const u8) bool {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.struct_libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return qtc.QFontDatabase_Bold(family_str, style_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#weight)
    ///
    /// ``` family: []const u8, style: []const u8 ```
    pub fn Weight(family: []const u8, style: []const u8) i32 {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.struct_libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return qtc.QFontDatabase_Weight(family_str, style_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#hasFamily)
    ///
    /// ``` family: []const u8 ```
    pub fn HasFamily(family: []const u8) bool {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        return qtc.QFontDatabase_HasFamily(family_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isPrivateFamily)
    ///
    /// ``` family: []const u8 ```
    pub fn IsPrivateFamily(family: []const u8) bool {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        return qtc.QFontDatabase_IsPrivateFamily(family_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#writingSystemName)
    ///
    /// ``` writingSystem: qfontdatabase_enums.WritingSystem, allocator: std.mem.Allocator ```
    pub fn WritingSystemName(writingSystem: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontDatabase_WritingSystemName(@intCast(writingSystem));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontdatabase.WritingSystemName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#writingSystemSample)
    ///
    /// ``` writingSystem: qfontdatabase_enums.WritingSystem, allocator: std.mem.Allocator ```
    pub fn WritingSystemSample(writingSystem: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontDatabase_WritingSystemSample(@intCast(writingSystem));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontdatabase.WritingSystemSample: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#addApplicationFont)
    ///
    /// ``` fileName: []const u8 ```
    pub fn AddApplicationFont(fileName: []const u8) i32 {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QFontDatabase_AddApplicationFont(fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#addApplicationFontFromData)
    ///
    /// ``` fontData: []u8 ```
    pub fn AddApplicationFontFromData(fontData: []u8) i32 {
        const fontData_str = qtc.struct_libqt_string{
            .len = fontData.len,
            .data = fontData.ptr,
        };
        return qtc.QFontDatabase_AddApplicationFontFromData(fontData_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#applicationFontFamilies)
    ///
    /// ``` id: i32, allocator: std.mem.Allocator ```
    pub fn ApplicationFontFamilies(id: i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QFontDatabase_ApplicationFontFamilies(@intCast(id));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfontdatabase.ApplicationFontFamilies: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfontdatabase.ApplicationFontFamilies: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#removeApplicationFont)
    ///
    /// ``` id: i32 ```
    pub fn RemoveApplicationFont(id: i32) bool {
        return qtc.QFontDatabase_RemoveApplicationFont(@intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#removeAllApplicationFonts)
    ///
    ///
    pub fn RemoveAllApplicationFonts() bool {
        return qtc.QFontDatabase_RemoveAllApplicationFonts();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#addApplicationFallbackFontFamily)
    ///
    /// ``` script: qchar_enums.Script, familyName: []const u8 ```
    pub fn AddApplicationFallbackFontFamily(script: i64, familyName: []const u8) void {
        const familyName_str = qtc.struct_libqt_string{
            .len = familyName.len,
            .data = familyName.ptr,
        };
        qtc.QFontDatabase_AddApplicationFallbackFontFamily(@intCast(script), familyName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#removeApplicationFallbackFontFamily)
    ///
    /// ``` script: qchar_enums.Script, familyName: []const u8 ```
    pub fn RemoveApplicationFallbackFontFamily(script: i64, familyName: []const u8) bool {
        const familyName_str = qtc.struct_libqt_string{
            .len = familyName.len,
            .data = familyName.ptr,
        };
        return qtc.QFontDatabase_RemoveApplicationFallbackFontFamily(@intCast(script), familyName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#setApplicationFallbackFontFamilies)
    ///
    /// ``` param1: qchar_enums.Script, familyNames: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetApplicationFallbackFontFamilies(param1: i64, familyNames: [][]const u8, allocator: std.mem.Allocator) void {
        var familyNames_arr = allocator.alloc(qtc.struct_libqt_string, familyNames.len) catch @panic("qfontdatabase.SetApplicationFallbackFontFamilies: Memory allocation failed");
        defer allocator.free(familyNames_arr);
        for (familyNames, 0..familyNames.len) |item, i| {
            familyNames_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const familyNames_list = qtc.struct_libqt_list{
            .len = familyNames.len,
            .data = familyNames_arr.ptr,
        };
        qtc.QFontDatabase_SetApplicationFallbackFontFamilies(@intCast(param1), familyNames_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#applicationFallbackFontFamilies)
    ///
    /// ``` script: qchar_enums.Script, allocator: std.mem.Allocator ```
    pub fn ApplicationFallbackFontFamilies(script: i64, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QFontDatabase_ApplicationFallbackFontFamilies(@intCast(script));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfontdatabase.ApplicationFallbackFontFamilies: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfontdatabase.ApplicationFallbackFontFamilies: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#systemFont)
    ///
    /// ``` typeVal: qfontdatabase_enums.SystemFont ```
    pub fn SystemFont(typeVal: i64) QtC.QFont {
        return qtc.QFontDatabase_SystemFont(@intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#families)
    ///
    /// ``` writingSystem: qfontdatabase_enums.WritingSystem, allocator: std.mem.Allocator ```
    pub fn Families1(writingSystem: i64, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QFontDatabase_Families1(@intCast(writingSystem));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qfontdatabase.Families1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfontdatabase.Families1: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#pointSizes)
    ///
    /// ``` family: []const u8, style: []const u8, allocator: std.mem.Allocator ```
    pub fn PointSizes2(family: []const u8, style: []const u8, allocator: std.mem.Allocator) []i32 {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.struct_libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        const _arr: qtc.struct_libqt_list = qtc.QFontDatabase_PointSizes2(family_str, style_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qfontdatabase.PointSizes2: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isBitmapScalable)
    ///
    /// ``` family: []const u8, style: []const u8 ```
    pub fn IsBitmapScalable2(family: []const u8, style: []const u8) bool {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.struct_libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return qtc.QFontDatabase_IsBitmapScalable2(family_str, style_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isSmoothlyScalable)
    ///
    /// ``` family: []const u8, style: []const u8 ```
    pub fn IsSmoothlyScalable2(family: []const u8, style: []const u8) bool {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.struct_libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return qtc.QFontDatabase_IsSmoothlyScalable2(family_str, style_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isScalable)
    ///
    /// ``` family: []const u8, style: []const u8 ```
    pub fn IsScalable2(family: []const u8, style: []const u8) bool {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.struct_libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return qtc.QFontDatabase_IsScalable2(family_str, style_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isFixedPitch)
    ///
    /// ``` family: []const u8, style: []const u8 ```
    pub fn IsFixedPitch2(family: []const u8, style: []const u8) bool {
        const family_str = qtc.struct_libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        const style_str = qtc.struct_libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return qtc.QFontDatabase_IsFixedPitch2(family_str, style_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#dtor.QFontDatabase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QFontDatabase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFontDatabase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qfontdatabase.html#types
pub const enums = struct {
    pub const WritingSystem = enum {
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

    pub const SystemFont = enum {
        pub const GeneralFont: i32 = 0;
        pub const FixedFont: i32 = 1;
        pub const TitleFont: i32 = 2;
        pub const SmallestReadableFont: i32 = 3;
    };
};
