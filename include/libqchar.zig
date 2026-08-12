const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qchar_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1char.html)
pub const QLatin1Char = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1char.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLatin1Char,

    pub const _is_QLatin1Char = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLatin1Char object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLatin1Char `
    ///
    pub fn new(other: anytype) QLatin1Char {
        comptime _ = @TypeOf(other)._is_QLatin1Char;
        return .{ .ptr = qtc.QLatin1Char_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLatin1Char object and invalidate the source QLatin1Char object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLatin1Char `
    ///
    pub fn new2(other: anytype) QLatin1Char {
        comptime _ = @TypeOf(other)._is_QLatin1Char;
        return .{ .ptr = qtc.QLatin1Char_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QLatin1Char object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` c: u8 `
    ///
    pub fn new3(c: u8) QLatin1Char {
        return .{ .ptr = qtc.QLatin1Char_new3(@bitCast(c)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QLatin1Char object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QLatin1Char `
    ///
    pub fn new4(param1: anytype) QLatin1Char {
        comptime _ = @TypeOf(param1)._is_QLatin1Char;
        return .{ .ptr = qtc.QLatin1Char_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QLatin1Char `
    ///
    /// ` other: QLatin1Char `
    ///
    pub fn copyAssign(self: QLatin1Char, other: QLatin1Char) void {
        qtc.QLatin1Char_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QLatin1Char `
    ///
    /// ` other: QLatin1Char `
    ///
    pub fn moveAssign(self: QLatin1Char, other: QLatin1Char) void {
        qtc.QLatin1Char_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toLatin1` instead
    ///
    pub const ToLatin1 = toLatin1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1char.html#toLatin1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1Char `
    ///
    pub fn toLatin1(self: QLatin1Char) u8 {
        return qtc.QLatin1Char_ToLatin1(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1char.html#dtor.QLatin1Char)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLatin1Char `
    ///
    pub fn delete(self: QLatin1Char) void {
        qtc.QLatin1Char_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html)
pub const QChar = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QChar,

    pub const _is_QChar = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QChar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QChar `
    ///
    pub fn new(other: anytype) QChar {
        comptime _ = @TypeOf(other)._is_QChar;
        return .{ .ptr = qtc.QChar_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QChar object and invalidate the source QChar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QChar `
    ///
    pub fn new2(other: anytype) QChar {
        comptime _ = @TypeOf(other)._is_QChar;
        return .{ .ptr = qtc.QChar_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QChar object in C++ memory
    ///
    pub fn new3() QChar {
        return .{ .ptr = qtc.QChar_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QChar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rc: u16 `
    ///
    pub fn new4(rc: u16) QChar {
        return .{ .ptr = qtc.QChar_new4(@bitCast(rc)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QChar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` c: u8 `
    ///
    /// ` r: u8 `
    ///
    pub fn new5(c: u8, r: u8) QChar {
        return .{ .ptr = qtc.QChar_new5(@bitCast(c), @bitCast(r)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QChar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rc: i16 `
    ///
    pub fn new6(rc: i16) QChar {
        return .{ .ptr = qtc.QChar_new6(@bitCast(rc)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QChar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rc: u32 `
    ///
    pub fn new7(rc: u32) QChar {
        return .{ .ptr = qtc.QChar_new7(@bitCast(rc)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QChar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rc: i32 `
    ///
    pub fn new8(rc: i32) QChar {
        return .{ .ptr = qtc.QChar_new8(@bitCast(rc)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QChar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` s: qchar_enums.SpecialCharacter `
    ///
    pub fn new9(s: i32) QChar {
        return .{ .ptr = qtc.QChar_new9(@bitCast(s)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QChar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ch: QLatin1Char `
    ///
    pub fn new10(ch: anytype) QChar {
        comptime _ = @TypeOf(ch)._is_QLatin1Char;
        return .{ .ptr = qtc.QChar_new10(@ptrCast(ch.ptr)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QChar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` c: u8 `
    ///
    pub fn new11(c: u8) QChar {
        return .{ .ptr = qtc.QChar_new11(@bitCast(c)) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QChar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` c: u8 `
    ///
    pub fn new12(c: u8) QChar {
        return .{ .ptr = qtc.QChar_new12(@bitCast(c)) };
    }

    /// ### DEPRECATED: Use `new13` instead
    ///
    pub const New13 = new13;

    /// Allocate a new QChar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QChar `
    ///
    pub fn new13(param1: anytype) QChar {
        comptime _ = @TypeOf(param1)._is_QChar;
        return .{ .ptr = qtc.QChar_new13(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QChar `
    ///
    /// ` other: QChar `
    ///
    pub fn copyAssign(self: QChar, other: QChar) void {
        qtc.QChar_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QChar `
    ///
    /// ` other: QChar `
    ///
    pub fn moveAssign(self: QChar, other: QChar) void {
        qtc.QChar_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `category` instead
    ///
    pub const Category = category;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    /// ## Returns:
    ///
    /// ` qchar_enums.Category `
    ///
    pub fn category(self: QChar) i32 {
        return qtc.QChar_Category(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#direction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    /// ## Returns:
    ///
    /// ` qchar_enums.Direction `
    ///
    pub fn direction(self: QChar) i32 {
        return qtc.QChar_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `joiningType` instead
    ///
    pub const JoiningType = joiningType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#joiningType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    /// ## Returns:
    ///
    /// ` qchar_enums.JoiningType `
    ///
    pub fn joiningType(self: QChar) i32 {
        return qtc.QChar_JoiningType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `combiningClass` instead
    ///
    pub const CombiningClass = combiningClass;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#combiningClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn combiningClass(self: QChar) u8 {
        return qtc.QChar_CombiningClass(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mirroredChar` instead
    ///
    pub const MirroredChar = mirroredChar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#mirroredChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn mirroredChar(self: QChar) QChar {
        return .{ .ptr = qtc.QChar_MirroredChar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasMirrored` instead
    ///
    pub const HasMirrored = hasMirrored;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#hasMirrored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn hasMirrored(self: QChar) bool {
        return qtc.QChar_HasMirrored(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `decomposition` instead
    ///
    pub const Decomposition = decomposition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#decomposition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn decomposition(self: QChar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QChar_Decomposition(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QChar.decomposition: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `decompositionTag` instead
    ///
    pub const DecompositionTag = decompositionTag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#decompositionTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    /// ## Returns:
    ///
    /// ` qchar_enums.Decomposition `
    ///
    pub fn decompositionTag(self: QChar) i32 {
        return qtc.QChar_DecompositionTag(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `digitValue` instead
    ///
    pub const DigitValue = digitValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#digitValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn digitValue(self: QChar) i32 {
        return qtc.QChar_DigitValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toLower` instead
    ///
    pub const ToLower = toLower;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#toLower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn toLower(self: QChar) QChar {
        return .{ .ptr = qtc.QChar_ToLower(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toUpper` instead
    ///
    pub const ToUpper = toUpper;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#toUpper)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn toUpper(self: QChar) QChar {
        return .{ .ptr = qtc.QChar_ToUpper(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTitleCase` instead
    ///
    pub const ToTitleCase = toTitleCase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#toTitleCase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn toTitleCase(self: QChar) QChar {
        return .{ .ptr = qtc.QChar_ToTitleCase(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCaseFolded` instead
    ///
    pub const ToCaseFolded = toCaseFolded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#toCaseFolded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn toCaseFolded(self: QChar) QChar {
        return .{ .ptr = qtc.QChar_ToCaseFolded(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `script` instead
    ///
    pub const Script = script;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#script)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    /// ## Returns:
    ///
    /// ` qchar_enums.Script `
    ///
    pub fn script(self: QChar) i32 {
        return qtc.QChar_Script(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unicodeVersion` instead
    ///
    pub const UnicodeVersion = unicodeVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#unicodeVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    /// ## Returns:
    ///
    /// ` qchar_enums.UnicodeVersion `
    ///
    pub fn unicodeVersion(self: QChar) i32 {
        return qtc.QChar_UnicodeVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toLatin1` instead
    ///
    pub const ToLatin1 = toLatin1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#toLatin1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn toLatin1(self: QChar) u8 {
        return qtc.QChar_ToLatin1(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromLatin1` instead
    ///
    pub const FromLatin1 = fromLatin1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#fromLatin1)
    ///
    /// ## Parameter(s):
    ///
    /// ` c: u8 `
    ///
    pub fn fromLatin1(c: u8) QChar {
        return .{ .ptr = qtc.QChar_FromLatin1(@bitCast(c)) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isNull(self: QChar) bool {
        return qtc.QChar_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPrint` instead
    ///
    pub const IsPrint = isPrint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isPrint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isPrint(self: QChar) bool {
        return qtc.QChar_IsPrint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSpace` instead
    ///
    pub const IsSpace = isSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isSpace(self: QChar) bool {
        return qtc.QChar_IsSpace(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMark` instead
    ///
    pub const IsMark = isMark;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isMark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isMark(self: QChar) bool {
        return qtc.QChar_IsMark(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPunct` instead
    ///
    pub const IsPunct = isPunct;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isPunct)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isPunct(self: QChar) bool {
        return qtc.QChar_IsPunct(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSymbol` instead
    ///
    pub const IsSymbol = isSymbol;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isSymbol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isSymbol(self: QChar) bool {
        return qtc.QChar_IsSymbol(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLetter` instead
    ///
    pub const IsLetter = isLetter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isLetter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isLetter(self: QChar) bool {
        return qtc.QChar_IsLetter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNumber` instead
    ///
    pub const IsNumber = isNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isNumber(self: QChar) bool {
        return qtc.QChar_IsNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLetterOrNumber` instead
    ///
    pub const IsLetterOrNumber = isLetterOrNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isLetterOrNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isLetterOrNumber(self: QChar) bool {
        return qtc.QChar_IsLetterOrNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDigit` instead
    ///
    pub const IsDigit = isDigit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isDigit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isDigit(self: QChar) bool {
        return qtc.QChar_IsDigit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLower` instead
    ///
    pub const IsLower = isLower;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isLower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isLower(self: QChar) bool {
        return qtc.QChar_IsLower(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUpper` instead
    ///
    pub const IsUpper = isUpper;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isUpper)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isUpper(self: QChar) bool {
        return qtc.QChar_IsUpper(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTitleCase` instead
    ///
    pub const IsTitleCase = isTitleCase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isTitleCase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isTitleCase(self: QChar) bool {
        return qtc.QChar_IsTitleCase(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNonCharacter` instead
    ///
    pub const IsNonCharacter = isNonCharacter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isNonCharacter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isNonCharacter(self: QChar) bool {
        return qtc.QChar_IsNonCharacter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isHighSurrogate` instead
    ///
    pub const IsHighSurrogate = isHighSurrogate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isHighSurrogate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isHighSurrogate(self: QChar) bool {
        return qtc.QChar_IsHighSurrogate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLowSurrogate` instead
    ///
    pub const IsLowSurrogate = isLowSurrogate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isLowSurrogate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isLowSurrogate(self: QChar) bool {
        return qtc.QChar_IsLowSurrogate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSurrogate` instead
    ///
    pub const IsSurrogate = isSurrogate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isSurrogate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn isSurrogate(self: QChar) bool {
        return qtc.QChar_IsSurrogate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cell` instead
    ///
    pub const Cell = cell;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#cell)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn cell(self: QChar) u8 {
        return qtc.QChar_Cell(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `row` instead
    ///
    pub const Row = row;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#row)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    pub fn row(self: QChar) u8 {
        return qtc.QChar_Row(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCell` instead
    ///
    pub const SetCell = setCell;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#setCell)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    /// ` acell: u8 `
    ///
    pub fn setCell(self: QChar, acell: u8) void {
        qtc.QChar_SetCell(@ptrCast(self.ptr), @bitCast(acell));
    }

    /// ### DEPRECATED: Use `setRow` instead
    ///
    pub const SetRow = setRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#setRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QChar `
    ///
    /// ` arow: u8 `
    ///
    pub fn setRow(self: QChar, arow: u8) void {
        qtc.QChar_SetRow(@ptrCast(self.ptr), @bitCast(arow));
    }

    /// ### DEPRECATED: Use `currentUnicodeVersion` instead
    ///
    pub const CurrentUnicodeVersion = currentUnicodeVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#currentUnicodeVersion)
    ///
    /// ## Returns:
    ///
    /// ` qchar_enums.UnicodeVersion `
    ///
    pub fn currentUnicodeVersion() i32 {
        return qtc.QChar_CurrentUnicodeVersion();
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#dtor.QChar)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QChar `
    ///
    pub fn delete(self: QChar) void {
        qtc.QChar_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qchar.html#public-types)
pub const enums = struct {
    pub const SpecialCharacter = enum(i32) {
        pub const Null: i32 = 0;
        pub const Tabulation: i32 = 9;
        pub const LineFeed: i32 = 10;
        pub const FormFeed: i32 = 12;
        pub const CarriageReturn: i32 = 13;
        pub const Space: i32 = 32;
        pub const Nbsp: i32 = 160;
        pub const SoftHyphen: i32 = 173;
        pub const ReplacementCharacter: i32 = 65533;
        pub const ObjectReplacementCharacter: i32 = 65532;
        pub const ByteOrderMark: i32 = 65279;
        pub const ByteOrderSwapped: i32 = 65534;
        pub const ParagraphSeparator: i32 = 8233;
        pub const LineSeparator: i32 = 8232;
        pub const VisualTabCharacter: i32 = 8594;
        pub const LastValidCodePoint: i32 = 1114111;
    };

    pub const Category = enum(i32) {
        pub const Mark_NonSpacing: i32 = 0;
        pub const Mark_SpacingCombining: i32 = 1;
        pub const Mark_Enclosing: i32 = 2;
        pub const Number_DecimalDigit: i32 = 3;
        pub const Number_Letter: i32 = 4;
        pub const Number_Other: i32 = 5;
        pub const Separator_Space: i32 = 6;
        pub const Separator_Line: i32 = 7;
        pub const Separator_Paragraph: i32 = 8;
        pub const Other_Control: i32 = 9;
        pub const Other_Format: i32 = 10;
        pub const Other_Surrogate: i32 = 11;
        pub const Other_PrivateUse: i32 = 12;
        pub const Other_NotAssigned: i32 = 13;
        pub const Letter_Uppercase: i32 = 14;
        pub const Letter_Lowercase: i32 = 15;
        pub const Letter_Titlecase: i32 = 16;
        pub const Letter_Modifier: i32 = 17;
        pub const Letter_Other: i32 = 18;
        pub const Punctuation_Connector: i32 = 19;
        pub const Punctuation_Dash: i32 = 20;
        pub const Punctuation_Open: i32 = 21;
        pub const Punctuation_Close: i32 = 22;
        pub const Punctuation_InitialQuote: i32 = 23;
        pub const Punctuation_FinalQuote: i32 = 24;
        pub const Punctuation_Other: i32 = 25;
        pub const Symbol_Math: i32 = 26;
        pub const Symbol_Currency: i32 = 27;
        pub const Symbol_Modifier: i32 = 28;
        pub const Symbol_Other: i32 = 29;
    };

    pub const Script = enum(i32) {
        pub const Script_Unknown: i32 = 0;
        pub const Script_Inherited: i32 = 1;
        pub const Script_Common: i32 = 2;
        pub const Script_Latin: i32 = 3;
        pub const Script_Greek: i32 = 4;
        pub const Script_Cyrillic: i32 = 5;
        pub const Script_Armenian: i32 = 6;
        pub const Script_Hebrew: i32 = 7;
        pub const Script_Arabic: i32 = 8;
        pub const Script_Syriac: i32 = 9;
        pub const Script_Thaana: i32 = 10;
        pub const Script_Devanagari: i32 = 11;
        pub const Script_Bengali: i32 = 12;
        pub const Script_Gurmukhi: i32 = 13;
        pub const Script_Gujarati: i32 = 14;
        pub const Script_Oriya: i32 = 15;
        pub const Script_Tamil: i32 = 16;
        pub const Script_Telugu: i32 = 17;
        pub const Script_Kannada: i32 = 18;
        pub const Script_Malayalam: i32 = 19;
        pub const Script_Sinhala: i32 = 20;
        pub const Script_Thai: i32 = 21;
        pub const Script_Lao: i32 = 22;
        pub const Script_Tibetan: i32 = 23;
        pub const Script_Myanmar: i32 = 24;
        pub const Script_Georgian: i32 = 25;
        pub const Script_Hangul: i32 = 26;
        pub const Script_Ethiopic: i32 = 27;
        pub const Script_Cherokee: i32 = 28;
        pub const Script_CanadianAboriginal: i32 = 29;
        pub const Script_Ogham: i32 = 30;
        pub const Script_Runic: i32 = 31;
        pub const Script_Khmer: i32 = 32;
        pub const Script_Mongolian: i32 = 33;
        pub const Script_Hiragana: i32 = 34;
        pub const Script_Katakana: i32 = 35;
        pub const Script_Bopomofo: i32 = 36;
        pub const Script_Han: i32 = 37;
        pub const Script_Yi: i32 = 38;
        pub const Script_OldItalic: i32 = 39;
        pub const Script_Gothic: i32 = 40;
        pub const Script_Deseret: i32 = 41;
        pub const Script_Tagalog: i32 = 42;
        pub const Script_Hanunoo: i32 = 43;
        pub const Script_Buhid: i32 = 44;
        pub const Script_Tagbanwa: i32 = 45;
        pub const Script_Coptic: i32 = 46;
        pub const Script_Limbu: i32 = 47;
        pub const Script_TaiLe: i32 = 48;
        pub const Script_LinearB: i32 = 49;
        pub const Script_Ugaritic: i32 = 50;
        pub const Script_Shavian: i32 = 51;
        pub const Script_Osmanya: i32 = 52;
        pub const Script_Cypriot: i32 = 53;
        pub const Script_Braille: i32 = 54;
        pub const Script_Buginese: i32 = 55;
        pub const Script_NewTaiLue: i32 = 56;
        pub const Script_Glagolitic: i32 = 57;
        pub const Script_Tifinagh: i32 = 58;
        pub const Script_SylotiNagri: i32 = 59;
        pub const Script_OldPersian: i32 = 60;
        pub const Script_Kharoshthi: i32 = 61;
        pub const Script_Balinese: i32 = 62;
        pub const Script_Cuneiform: i32 = 63;
        pub const Script_Phoenician: i32 = 64;
        pub const Script_PhagsPa: i32 = 65;
        pub const Script_Nko: i32 = 66;
        pub const Script_Sundanese: i32 = 67;
        pub const Script_Lepcha: i32 = 68;
        pub const Script_OlChiki: i32 = 69;
        pub const Script_Vai: i32 = 70;
        pub const Script_Saurashtra: i32 = 71;
        pub const Script_KayahLi: i32 = 72;
        pub const Script_Rejang: i32 = 73;
        pub const Script_Lycian: i32 = 74;
        pub const Script_Carian: i32 = 75;
        pub const Script_Lydian: i32 = 76;
        pub const Script_Cham: i32 = 77;
        pub const Script_TaiTham: i32 = 78;
        pub const Script_TaiViet: i32 = 79;
        pub const Script_Avestan: i32 = 80;
        pub const Script_EgyptianHieroglyphs: i32 = 81;
        pub const Script_Samaritan: i32 = 82;
        pub const Script_Lisu: i32 = 83;
        pub const Script_Bamum: i32 = 84;
        pub const Script_Javanese: i32 = 85;
        pub const Script_MeeteiMayek: i32 = 86;
        pub const Script_ImperialAramaic: i32 = 87;
        pub const Script_OldSouthArabian: i32 = 88;
        pub const Script_InscriptionalParthian: i32 = 89;
        pub const Script_InscriptionalPahlavi: i32 = 90;
        pub const Script_OldTurkic: i32 = 91;
        pub const Script_Kaithi: i32 = 92;
        pub const Script_Batak: i32 = 93;
        pub const Script_Brahmi: i32 = 94;
        pub const Script_Mandaic: i32 = 95;
        pub const Script_Chakma: i32 = 96;
        pub const Script_MeroiticCursive: i32 = 97;
        pub const Script_MeroiticHieroglyphs: i32 = 98;
        pub const Script_Miao: i32 = 99;
        pub const Script_Sharada: i32 = 100;
        pub const Script_SoraSompeng: i32 = 101;
        pub const Script_Takri: i32 = 102;
        pub const Script_CaucasianAlbanian: i32 = 103;
        pub const Script_BassaVah: i32 = 104;
        pub const Script_Duployan: i32 = 105;
        pub const Script_Elbasan: i32 = 106;
        pub const Script_Grantha: i32 = 107;
        pub const Script_PahawhHmong: i32 = 108;
        pub const Script_Khojki: i32 = 109;
        pub const Script_LinearA: i32 = 110;
        pub const Script_Mahajani: i32 = 111;
        pub const Script_Manichaean: i32 = 112;
        pub const Script_MendeKikakui: i32 = 113;
        pub const Script_Modi: i32 = 114;
        pub const Script_Mro: i32 = 115;
        pub const Script_OldNorthArabian: i32 = 116;
        pub const Script_Nabataean: i32 = 117;
        pub const Script_Palmyrene: i32 = 118;
        pub const Script_PauCinHau: i32 = 119;
        pub const Script_OldPermic: i32 = 120;
        pub const Script_PsalterPahlavi: i32 = 121;
        pub const Script_Siddham: i32 = 122;
        pub const Script_Khudawadi: i32 = 123;
        pub const Script_Tirhuta: i32 = 124;
        pub const Script_WarangCiti: i32 = 125;
        pub const Script_Ahom: i32 = 126;
        pub const Script_AnatolianHieroglyphs: i32 = 127;
        pub const Script_Hatran: i32 = 128;
        pub const Script_Multani: i32 = 129;
        pub const Script_OldHungarian: i32 = 130;
        pub const Script_SignWriting: i32 = 131;
        pub const Script_Adlam: i32 = 132;
        pub const Script_Bhaiksuki: i32 = 133;
        pub const Script_Marchen: i32 = 134;
        pub const Script_Newa: i32 = 135;
        pub const Script_Osage: i32 = 136;
        pub const Script_Tangut: i32 = 137;
        pub const Script_MasaramGondi: i32 = 138;
        pub const Script_Nushu: i32 = 139;
        pub const Script_Soyombo: i32 = 140;
        pub const Script_ZanabazarSquare: i32 = 141;
        pub const Script_Dogra: i32 = 142;
        pub const Script_GunjalaGondi: i32 = 143;
        pub const Script_HanifiRohingya: i32 = 144;
        pub const Script_Makasar: i32 = 145;
        pub const Script_Medefaidrin: i32 = 146;
        pub const Script_OldSogdian: i32 = 147;
        pub const Script_Sogdian: i32 = 148;
        pub const Script_Elymaic: i32 = 149;
        pub const Script_Nandinagari: i32 = 150;
        pub const Script_NyiakengPuachueHmong: i32 = 151;
        pub const Script_Wancho: i32 = 152;
        pub const Script_Chorasmian: i32 = 153;
        pub const Script_DivesAkuru: i32 = 154;
        pub const Script_KhitanSmallScript: i32 = 155;
        pub const Script_Yezidi: i32 = 156;
        pub const Script_CyproMinoan: i32 = 157;
        pub const Script_OldUyghur: i32 = 158;
        pub const Script_Tangsa: i32 = 159;
        pub const Script_Toto: i32 = 160;
        pub const Script_Vithkuqi: i32 = 161;
        pub const Script_Kawi: i32 = 162;
        pub const Script_NagMundari: i32 = 163;
        pub const ScriptCount: i32 = 164;
    };

    pub const Direction = enum(i32) {
        pub const DirL: i32 = 0;
        pub const DirR: i32 = 1;
        pub const DirEN: i32 = 2;
        pub const DirES: i32 = 3;
        pub const DirET: i32 = 4;
        pub const DirAN: i32 = 5;
        pub const DirCS: i32 = 6;
        pub const DirB: i32 = 7;
        pub const DirS: i32 = 8;
        pub const DirWS: i32 = 9;
        pub const DirON: i32 = 10;
        pub const DirLRE: i32 = 11;
        pub const DirLRO: i32 = 12;
        pub const DirAL: i32 = 13;
        pub const DirRLE: i32 = 14;
        pub const DirRLO: i32 = 15;
        pub const DirPDF: i32 = 16;
        pub const DirNSM: i32 = 17;
        pub const DirBN: i32 = 18;
        pub const DirLRI: i32 = 19;
        pub const DirRLI: i32 = 20;
        pub const DirFSI: i32 = 21;
        pub const DirPDI: i32 = 22;
    };

    pub const Decomposition = enum(i32) {
        pub const NoDecomposition: i32 = 0;
        pub const Canonical: i32 = 1;
        pub const Font: i32 = 2;
        pub const NoBreak: i32 = 3;
        pub const Initial: i32 = 4;
        pub const Medial: i32 = 5;
        pub const Final: i32 = 6;
        pub const Isolated: i32 = 7;
        pub const Circle: i32 = 8;
        pub const Super: i32 = 9;
        pub const Sub: i32 = 10;
        pub const Vertical: i32 = 11;
        pub const Wide: i32 = 12;
        pub const Narrow: i32 = 13;
        pub const Small: i32 = 14;
        pub const Square: i32 = 15;
        pub const Compat: i32 = 16;
        pub const Fraction: i32 = 17;
    };

    pub const JoiningType = enum(i32) {
        pub const Joining_None: i32 = 0;
        pub const Joining_Causing: i32 = 1;
        pub const Joining_Dual: i32 = 2;
        pub const Joining_Right: i32 = 3;
        pub const Joining_Left: i32 = 4;
        pub const Joining_Transparent: i32 = 5;
    };

    pub const CombiningClass = enum(i32) {
        pub const Combining_BelowLeftAttached: i32 = 200;
        pub const Combining_BelowAttached: i32 = 202;
        pub const Combining_BelowRightAttached: i32 = 204;
        pub const Combining_LeftAttached: i32 = 208;
        pub const Combining_RightAttached: i32 = 210;
        pub const Combining_AboveLeftAttached: i32 = 212;
        pub const Combining_AboveAttached: i32 = 214;
        pub const Combining_AboveRightAttached: i32 = 216;
        pub const Combining_BelowLeft: i32 = 218;
        pub const Combining_Below: i32 = 220;
        pub const Combining_BelowRight: i32 = 222;
        pub const Combining_Left: i32 = 224;
        pub const Combining_Right: i32 = 226;
        pub const Combining_AboveLeft: i32 = 228;
        pub const Combining_Above: i32 = 230;
        pub const Combining_AboveRight: i32 = 232;
        pub const Combining_DoubleBelow: i32 = 233;
        pub const Combining_DoubleAbove: i32 = 234;
        pub const Combining_IotaSubscript: i32 = 240;
    };

    pub const UnicodeVersion = enum(i32) {
        pub const Unicode_Unassigned: i32 = 0;
        pub const Unicode_1_1: i32 = 1;
        pub const Unicode_2_0: i32 = 2;
        pub const Unicode_2_1_2: i32 = 3;
        pub const Unicode_3_0: i32 = 4;
        pub const Unicode_3_1: i32 = 5;
        pub const Unicode_3_2: i32 = 6;
        pub const Unicode_4_0: i32 = 7;
        pub const Unicode_4_1: i32 = 8;
        pub const Unicode_5_0: i32 = 9;
        pub const Unicode_5_1: i32 = 10;
        pub const Unicode_5_2: i32 = 11;
        pub const Unicode_6_0: i32 = 12;
        pub const Unicode_6_1: i32 = 13;
        pub const Unicode_6_2: i32 = 14;
        pub const Unicode_6_3: i32 = 15;
        pub const Unicode_7_0: i32 = 16;
        pub const Unicode_8_0: i32 = 17;
        pub const Unicode_9_0: i32 = 18;
        pub const Unicode_10_0: i32 = 19;
        pub const Unicode_11_0: i32 = 20;
        pub const Unicode_12_0: i32 = 21;
        pub const Unicode_12_1: i32 = 22;
        pub const Unicode_13_0: i32 = 23;
        pub const Unicode_14_0: i32 = 24;
        pub const Unicode_15_0: i32 = 25;
        pub const Unicode_15_1: i32 = 26;
    };
};
