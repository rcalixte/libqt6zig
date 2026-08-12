const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QCborArray = @import("libqt6").QCborArray;
const QCborError = @import("libqt6").QCborError;
const QCborMap = @import("libqt6").QCborMap;
const QCborStreamReader = @import("libqt6").QCborStreamReader;
const QCborStreamWriter = @import("libqt6").QCborStreamWriter;
const QDateTime = @import("libqt6").QDateTime;
const QJsonValue = @import("libqt6").QJsonValue;
const QRegularExpression = @import("libqt6").QRegularExpression;
const QUrl = @import("libqt6").QUrl;
const QUuid = @import("libqt6").QUuid;
const QVariant = @import("libqt6").QVariant;
const qcborcommon_enums = @import("libqcborcommon.zig").enums;
const qcborvalue_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html)
pub const QCborParserError = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCborParserError,

    pub const _is_QCborParserError = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCborParserError object in C++ memory
    ///
    pub fn new() QCborParserError {
        return .{ .ptr = qtc.QCborParserError_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCborParserError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborParserError `
    ///
    pub fn new2(other: anytype) QCborParserError {
        comptime _ = @TypeOf(other)._is_QCborParserError;
        return .{ .ptr = qtc.QCborParserError_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCborParserError object and invalidate the source QCborParserError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborParserError `
    ///
    pub fn new3(other: anytype) QCborParserError {
        comptime _ = @TypeOf(other)._is_QCborParserError;
        return .{ .ptr = qtc.QCborParserError_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QCborParserError `
    ///
    /// ` other: QCborParserError `
    ///
    pub fn copyAssign(self: QCborParserError, other: QCborParserError) void {
        qtc.QCborParserError_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QCborParserError `
    ///
    /// ` other: QCborParserError `
    ///
    pub fn moveAssign(self: QCborParserError, other: QCborParserError) void {
        qtc.QCborParserError_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `offset` instead
    ///
    pub const Offset = offset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#offset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborParserError `
    ///
    pub fn offset(self: QCborParserError) i64 {
        return qtc.QCborParserError_Offset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOffset` instead
    ///
    pub const SetOffset = setOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#offset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborParserError `
    ///
    /// ` _offset: i64 `
    ///
    pub fn setOffset(self: QCborParserError, _offset: i64) void {
        qtc.QCborParserError_SetOffset(@ptrCast(self.ptr), @bitCast(_offset));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#error-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborParserError `
    ///
    pub fn error0(self: QCborParserError) QCborError {
        return .{ .ptr = qtc.QCborParserError_Error(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setError` instead
    ///
    pub const SetError = setError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#error-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborParserError `
    ///
    /// ` _error: QCborError `
    ///
    pub fn setError(self: QCborParserError, _error: anytype) void {
        comptime _ = @TypeOf(_error)._is_QCborError;
        qtc.QCborParserError_SetError(@ptrCast(self.ptr), @ptrCast(_error.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborParserError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QCborParserError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborParserError_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCborParserError.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#dtor.QCborParserError)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborParserError `
    ///
    pub fn delete(self: QCborParserError) void {
        qtc.QCborParserError_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)
pub const QCborValue = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCborValue,

    pub const _is_QCborValue = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCborValue object in C++ memory
    ///
    pub fn new() QCborValue {
        return .{ .ptr = qtc.QCborValue_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` t_: qcborvalue_enums.Type `
    ///
    pub fn new2(t_: i32) QCborValue {
        return .{ .ptr = qtc.QCborValue_new2(@bitCast(t_)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` b_: bool `
    ///
    pub fn new3(b_: bool) QCborValue {
        return .{ .ptr = qtc.QCborValue_new3(b_) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` i: i32 `
    ///
    pub fn new4(i: i32) QCborValue {
        return .{ .ptr = qtc.QCborValue_new4(@bitCast(i)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` u: u32 `
    ///
    pub fn new5(u: u32) QCborValue {
        return .{ .ptr = qtc.QCborValue_new5(@bitCast(u)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` i: i64 `
    ///
    pub fn new6(i: i64) QCborValue {
        return .{ .ptr = qtc.QCborValue_new6(@bitCast(i)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` v: f64 `
    ///
    pub fn new7(v: f64) QCborValue {
        return .{ .ptr = qtc.QCborValue_new7(@bitCast(v)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn new8(st: u8) QCborValue {
        return .{ .ptr = qtc.QCborValue_new8(@bitCast(st)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ba: []u8 `
    ///
    pub fn new9(ba: []u8) QCborValue {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        return .{ .ptr = qtc.QCborValue_new9(ba_str) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    pub fn new10(s: []const u8) QCborValue {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QCborValue_new10(s_str) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    pub fn new11(s: []const u8) QCborValue {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QCborValue_new11(s_str) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []u8 `
    ///
    pub fn new12(s: []u8) QCborValue {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QCborValue_new12(s_str) };
    }

    /// ### DEPRECATED: Use `new13` instead
    ///
    pub const New13 = new13;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn new13(s: [:0]const u8) QCborValue {
        const s_Cstring = s.ptr;
        return .{ .ptr = qtc.QCborValue_new13(s_Cstring) };
    }

    /// ### DEPRECATED: Use `new14` instead
    ///
    pub const New14 = new14;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` a: QCborArray `
    ///
    pub fn new14(a: anytype) QCborValue {
        comptime _ = @TypeOf(a)._is_QCborArray;
        return .{ .ptr = qtc.QCborValue_new14(@ptrCast(a.ptr)) };
    }

    /// ### DEPRECATED: Use `new15` instead
    ///
    pub const New15 = new15;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` m: QCborMap `
    ///
    pub fn new15(m: anytype) QCborValue {
        comptime _ = @TypeOf(m)._is_QCborMap;
        return .{ .ptr = qtc.QCborValue_new15(@ptrCast(m.ptr)) };
    }

    /// ### DEPRECATED: Use `new16` instead
    ///
    pub const New16 = new16;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _tag: qcborcommon_enums.QCborTag `
    ///
    pub fn new16(_tag: u64) QCborValue {
        return .{ .ptr = qtc.QCborValue_new16(@bitCast(_tag)) };
    }

    /// ### DEPRECATED: Use `new17` instead
    ///
    pub const New17 = new17;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` t_: qcborcommon_enums.QCborKnownTags `
    ///
    pub fn new17(t_: i32) QCborValue {
        return .{ .ptr = qtc.QCborValue_new17(@bitCast(t_)) };
    }

    /// ### DEPRECATED: Use `new18` instead
    ///
    pub const New18 = new18;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` dt: QDateTime `
    ///
    pub fn new18(dt: anytype) QCborValue {
        comptime _ = @TypeOf(dt)._is_QDateTime;
        return .{ .ptr = qtc.QCborValue_new18(@ptrCast(dt.ptr)) };
    }

    /// ### DEPRECATED: Use `new19` instead
    ///
    pub const New19 = new19;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn new19(url: anytype) QCborValue {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QCborValue_new19(@ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `new20` instead
    ///
    pub const New20 = new20;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rx: QRegularExpression `
    ///
    pub fn new20(rx: anytype) QCborValue {
        comptime _ = @TypeOf(rx)._is_QRegularExpression;
        return .{ .ptr = qtc.QCborValue_new20(@ptrCast(rx.ptr)) };
    }

    /// ### DEPRECATED: Use `new21` instead
    ///
    pub const New21 = new21;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: QUuid `
    ///
    pub fn new21(uuid: anytype) QCborValue {
        comptime _ = @TypeOf(uuid)._is_QUuid;
        return .{ .ptr = qtc.QCborValue_new21(@ptrCast(uuid.ptr)) };
    }

    /// ### DEPRECATED: Use `new22` instead
    ///
    pub const New22 = new22;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborValue `
    ///
    pub fn new22(other: anytype) QCborValue {
        comptime _ = @TypeOf(other)._is_QCborValue;
        return .{ .ptr = qtc.QCborValue_new22(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new23` instead
    ///
    pub const New23 = new23;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _tag: qcborcommon_enums.QCborTag `
    ///
    /// ` _taggedValue: QCborValue `
    ///
    pub fn new23(_tag: u64, _taggedValue: anytype) QCborValue {
        comptime _ = @TypeOf(_taggedValue)._is_QCborValue;
        return .{ .ptr = qtc.QCborValue_new23(@bitCast(_tag), @ptrCast(_taggedValue.ptr)) };
    }

    /// ### DEPRECATED: Use `new24` instead
    ///
    pub const New24 = new24;

    /// Allocate a new QCborValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` t_: qcborcommon_enums.QCborKnownTags `
    ///
    /// ` tv: QCborValue `
    ///
    pub fn new24(t_: i32, tv: anytype) QCborValue {
        comptime _ = @TypeOf(tv)._is_QCborValue;
        return .{ .ptr = qtc.QCborValue_new24(@bitCast(t_), @ptrCast(tv.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` other: QCborValue `
    ///
    pub fn operatorAssign(self: QCborValue, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborValue;
        qtc.QCborValue_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` other: QCborValue `
    ///
    pub fn swap(self: QCborValue, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborValue;
        qtc.QCborValue_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ## Returns:
    ///
    /// ` qcborvalue_enums.Type `
    ///
    pub fn type0(self: QCborValue) i32 {
        return qtc.QCborValue_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInteger` instead
    ///
    pub const IsInteger = isInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isInteger(self: QCborValue) bool {
        return qtc.QCborValue_IsInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isByteArray` instead
    ///
    pub const IsByteArray = isByteArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isByteArray(self: QCborValue) bool {
        return qtc.QCborValue_IsByteArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isString` instead
    ///
    pub const IsString = isString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isString(self: QCborValue) bool {
        return qtc.QCborValue_IsString(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isArray` instead
    ///
    pub const IsArray = isArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isArray(self: QCborValue) bool {
        return qtc.QCborValue_IsArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMap` instead
    ///
    pub const IsMap = isMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isMap(self: QCborValue) bool {
        return qtc.QCborValue_IsMap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTag` instead
    ///
    pub const IsTag = isTag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isTag(self: QCborValue) bool {
        return qtc.QCborValue_IsTag(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFalse` instead
    ///
    pub const IsFalse = isFalse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isFalse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isFalse(self: QCborValue) bool {
        return qtc.QCborValue_IsFalse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTrue` instead
    ///
    pub const IsTrue = isTrue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isTrue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isTrue(self: QCborValue) bool {
        return qtc.QCborValue_IsTrue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBool` instead
    ///
    pub const IsBool = isBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isBool(self: QCborValue) bool {
        return qtc.QCborValue_IsBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isNull(self: QCborValue) bool {
        return qtc.QCborValue_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUndefined` instead
    ///
    pub const IsUndefined = isUndefined;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isUndefined(self: QCborValue) bool {
        return qtc.QCborValue_IsUndefined(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDouble` instead
    ///
    pub const IsDouble = isDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isDouble(self: QCborValue) bool {
        return qtc.QCborValue_IsDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDateTime` instead
    ///
    pub const IsDateTime = isDateTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isDateTime(self: QCborValue) bool {
        return qtc.QCborValue_IsDateTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUrl` instead
    ///
    pub const IsUrl = isUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isUrl(self: QCborValue) bool {
        return qtc.QCborValue_IsUrl(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRegularExpression` instead
    ///
    pub const IsRegularExpression = isRegularExpression;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isRegularExpression(self: QCborValue) bool {
        return qtc.QCborValue_IsRegularExpression(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUuid` instead
    ///
    pub const IsUuid = isUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isUuid(self: QCborValue) bool {
        return qtc.QCborValue_IsUuid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInvalid` instead
    ///
    pub const IsInvalid = isInvalid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isInvalid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isInvalid(self: QCborValue) bool {
        return qtc.QCborValue_IsInvalid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isContainer` instead
    ///
    pub const IsContainer = isContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isContainer(self: QCborValue) bool {
        return qtc.QCborValue_IsContainer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSimpleType` instead
    ///
    pub const IsSimpleType = isSimpleType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn isSimpleType(self: QCborValue) bool {
        return qtc.QCborValue_IsSimpleType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSimpleType2` instead
    ///
    pub const IsSimpleType2 = isSimpleType2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn isSimpleType2(self: QCborValue, st: u8) bool {
        return qtc.QCborValue_IsSimpleType2(@ptrCast(self.ptr), @bitCast(st));
    }

    /// ### DEPRECATED: Use `toSimpleType` instead
    ///
    pub const ToSimpleType = toSimpleType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborSimpleType `
    ///
    pub fn toSimpleType(self: QCborValue) u8 {
        return qtc.QCborValue_ToSimpleType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toInteger` instead
    ///
    pub const ToInteger = toInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn toInteger(self: QCborValue) i64 {
        return qtc.QCborValue_ToInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBool` instead
    ///
    pub const ToBool = toBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn toBool(self: QCborValue) bool {
        return qtc.QCborValue_ToBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toDouble` instead
    ///
    pub const ToDouble = toDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn toDouble(self: QCborValue) f64 {
        return qtc.QCborValue_ToDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tag` instead
    ///
    pub const Tag = tag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#tag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborTag `
    ///
    pub fn tag(self: QCborValue) u64 {
        return qtc.QCborValue_Tag(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `taggedValue` instead
    ///
    pub const TaggedValue = taggedValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn taggedValue(self: QCborValue) QCborValue {
        return .{ .ptr = qtc.QCborValue_TaggedValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toByteArray` instead
    ///
    pub const ToByteArray = toByteArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toByteArray(self: QCborValue, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValue_ToByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCborValue.toByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QCborValue, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValue_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCborValue.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toDateTime` instead
    ///
    pub const ToDateTime = toDateTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn toDateTime(self: QCborValue) QDateTime {
        return .{ .ptr = qtc.QCborValue_ToDateTime(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toUrl` instead
    ///
    pub const ToUrl = toUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn toUrl(self: QCborValue) QUrl {
        return .{ .ptr = qtc.QCborValue_ToUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toRegularExpression` instead
    ///
    pub const ToRegularExpression = toRegularExpression;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn toRegularExpression(self: QCborValue) QRegularExpression {
        return .{ .ptr = qtc.QCborValue_ToRegularExpression(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toUuid` instead
    ///
    pub const ToUuid = toUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn toUuid(self: QCborValue) QUuid {
        return .{ .ptr = qtc.QCborValue_ToUuid(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toArray` instead
    ///
    pub const ToArray = toArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn toArray(self: QCborValue) QCborArray {
        return .{ .ptr = qtc.QCborValue_ToArray(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toArray2` instead
    ///
    pub const ToArray2 = toArray2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: QCborArray `
    ///
    pub fn toArray2(self: QCborValue, defaultValue: anytype) QCborArray {
        comptime _ = @TypeOf(defaultValue)._is_QCborArray;
        return .{ .ptr = qtc.QCborValue_ToArray2(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `toMap` instead
    ///
    pub const ToMap = toMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn toMap(self: QCborValue) QCborMap {
        return .{ .ptr = qtc.QCborValue_ToMap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toMap2` instead
    ///
    pub const ToMap2 = toMap2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: QCborMap `
    ///
    pub fn toMap2(self: QCborValue, defaultValue: anytype) QCborMap {
        comptime _ = @TypeOf(defaultValue)._is_QCborMap;
        return .{ .ptr = qtc.QCborValue_ToMap2(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript(self: QCborValue, key: []const u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborValue_OperatorSubscript(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` key: []u8 `
    ///
    pub fn operatorSubscript2(self: QCborValue, key: []u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborValue_OperatorSubscript2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript3` instead
    ///
    pub const OperatorSubscript3 = operatorSubscript3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` key: i64 `
    ///
    pub fn operatorSubscript3(self: QCborValue, key: i64) QCborValue {
        return .{ .ptr = qtc.QCborValue_OperatorSubscript3(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript4` instead
    ///
    pub const OperatorSubscript4 = operatorSubscript4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` key: i64 `
    ///
    pub fn operatorSubscript4(self: QCborValue, key: i64) QCborValueRef {
        return .{ .ptr = qtc.QCborValue_OperatorSubscript4(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript5` instead
    ///
    pub const OperatorSubscript5 = operatorSubscript5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` key: []u8 `
    ///
    pub fn operatorSubscript5(self: QCborValue, key: []u8) QCborValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborValue_OperatorSubscript5(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript6` instead
    ///
    pub const OperatorSubscript6 = operatorSubscript6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript6(self: QCborValue, key: []const u8) QCborValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborValue_OperatorSubscript6(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `compare` instead
    ///
    pub const Compare = compare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` other: QCborValue `
    ///
    pub fn compare(self: QCborValue, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QCborValue;
        return qtc.QCborValue_Compare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `fromVariant` instead
    ///
    pub const FromVariant = fromVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` variant: QVariant `
    ///
    pub fn fromVariant(variant: anytype) QCborValue {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QCborValue_FromVariant(@ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `toVariant` instead
    ///
    pub const ToVariant = toVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn toVariant(self: QCborValue) QVariant {
        return .{ .ptr = qtc.QCborValue_ToVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fromJsonValue` instead
    ///
    pub const FromJsonValue = fromJsonValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromJsonValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: QJsonValue `
    ///
    pub fn fromJsonValue(v: anytype) QCborValue {
        comptime _ = @TypeOf(v)._is_QJsonValue;
        return .{ .ptr = qtc.QCborValue_FromJsonValue(@ptrCast(v.ptr)) };
    }

    /// ### DEPRECATED: Use `toJsonValue` instead
    ///
    pub const ToJsonValue = toJsonValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toJsonValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn toJsonValue(self: QCborValue) QJsonValue {
        return .{ .ptr = qtc.QCborValue_ToJsonValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fromCbor` instead
    ///
    pub const FromCbor = fromCbor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` reader: QCborStreamReader `
    ///
    pub fn fromCbor(reader: anytype) QCborValue {
        comptime _ = @TypeOf(reader)._is_QCborStreamReader;
        return .{ .ptr = qtc.QCborValue_FromCbor(@ptrCast(reader.ptr)) };
    }

    /// ### DEPRECATED: Use `fromCbor2` instead
    ///
    pub const FromCbor2 = fromCbor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` ba: []u8 `
    ///
    pub fn fromCbor2(ba: []u8) QCborValue {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        return .{ .ptr = qtc.QCborValue_FromCbor2(ba_str) };
    }

    /// ### DEPRECATED: Use `fromCbor3` instead
    ///
    pub const FromCbor3 = fromCbor3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` len: isize `
    ///
    pub fn fromCbor3(data: [:0]const u8, len: isize) QCborValue {
        const data_Cstring = data.ptr;
        return .{ .ptr = qtc.QCborValue_FromCbor3(data_Cstring, @bitCast(len)) };
    }

    /// ### DEPRECATED: Use `fromCbor4` instead
    ///
    pub const FromCbor4 = fromCbor4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` len: isize `
    ///
    pub fn fromCbor4(data: *const u8, len: isize) QCborValue {
        return .{ .ptr = qtc.QCborValue_FromCbor4(@ptrCast(data), @bitCast(len)) };
    }

    /// ### DEPRECATED: Use `toCbor` instead
    ///
    pub const ToCbor = toCbor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toCbor(self: QCborValue, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValue_ToCbor(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCborValue.toCbor: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toCbor2` instead
    ///
    pub const ToCbor2 = toCbor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` writer: QCborStreamWriter `
    ///
    pub fn toCbor2(self: QCborValue, writer: anytype) void {
        comptime _ = @TypeOf(writer)._is_QCborStreamWriter;
        qtc.QCborValue_ToCbor2(@ptrCast(self.ptr), @ptrCast(writer.ptr));
    }

    /// ### DEPRECATED: Use `toDiagnosticNotation` instead
    ///
    pub const ToDiagnosticNotation = toDiagnosticNotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDiagnosticNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toDiagnosticNotation(self: QCborValue, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValue_ToDiagnosticNotation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCborValue.toDiagnosticNotation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toSimpleType1` instead
    ///
    pub const ToSimpleType1 = toSimpleType1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: qcborcommon_enums.QCborSimpleType `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborSimpleType `
    ///
    pub fn toSimpleType1(self: QCborValue, defaultValue: u8) u8 {
        return qtc.QCborValue_ToSimpleType1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `toInteger1` instead
    ///
    pub const ToInteger1 = toInteger1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn toInteger1(self: QCborValue, defaultValue: i64) i64 {
        return qtc.QCborValue_ToInteger1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `toBool1` instead
    ///
    pub const ToBool1 = toBool1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn toBool1(self: QCborValue, defaultValue: bool) bool {
        return qtc.QCborValue_ToBool1(@ptrCast(self.ptr), defaultValue);
    }

    /// ### DEPRECATED: Use `toDouble1` instead
    ///
    pub const ToDouble1 = toDouble1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn toDouble1(self: QCborValue, defaultValue: f64) f64 {
        return qtc.QCborValue_ToDouble1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `tag1` instead
    ///
    pub const Tag1 = tag1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#tag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: qcborcommon_enums.QCborTag `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborTag `
    ///
    pub fn tag1(self: QCborValue, defaultValue: u64) u64 {
        return qtc.QCborValue_Tag1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `taggedValue1` instead
    ///
    pub const TaggedValue1 = taggedValue1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: QCborValue `
    ///
    pub fn taggedValue1(self: QCborValue, defaultValue: anytype) QCborValue {
        comptime _ = @TypeOf(defaultValue)._is_QCborValue;
        return .{ .ptr = qtc.QCborValue_TaggedValue1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `toByteArray1` instead
    ///
    pub const ToByteArray1 = toByteArray1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` defaultValue: []u8 `
    ///
    pub fn toByteArray1(self: QCborValue, allocator: std.mem.Allocator, defaultValue: []u8) []u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCborValue_ToByteArray1(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCborValue.toByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString1` instead
    ///
    pub const ToString1 = toString1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn toString1(self: QCborValue, allocator: std.mem.Allocator, defaultValue: []const u8) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QCborValue_ToString1(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCborValue.toString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toDateTime1` instead
    ///
    pub const ToDateTime1 = toDateTime1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: QDateTime `
    ///
    pub fn toDateTime1(self: QCborValue, defaultValue: anytype) QDateTime {
        comptime _ = @TypeOf(defaultValue)._is_QDateTime;
        return .{ .ptr = qtc.QCborValue_ToDateTime1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `toUrl1` instead
    ///
    pub const ToUrl1 = toUrl1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: QUrl `
    ///
    pub fn toUrl1(self: QCborValue, defaultValue: anytype) QUrl {
        comptime _ = @TypeOf(defaultValue)._is_QUrl;
        return .{ .ptr = qtc.QCborValue_ToUrl1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `toRegularExpression1` instead
    ///
    pub const ToRegularExpression1 = toRegularExpression1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: QRegularExpression `
    ///
    pub fn toRegularExpression1(self: QCborValue, defaultValue: anytype) QRegularExpression {
        comptime _ = @TypeOf(defaultValue)._is_QRegularExpression;
        return .{ .ptr = qtc.QCborValue_ToRegularExpression1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `toUuid1` instead
    ///
    pub const ToUuid1 = toUuid1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: QUuid `
    ///
    pub fn toUuid1(self: QCborValue, defaultValue: anytype) QUuid {
        comptime _ = @TypeOf(defaultValue)._is_QUuid;
        return .{ .ptr = qtc.QCborValue_ToUuid1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `fromCbor22` instead
    ///
    pub const FromCbor22 = fromCbor22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` ba: []u8 `
    ///
    /// ` errorVal: QCborParserError `
    ///
    pub fn fromCbor22(ba: []u8, errorVal: anytype) QCborValue {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        comptime _ = @TypeOf(errorVal)._is_QCborParserError;
        return .{ .ptr = qtc.QCborValue_FromCbor22(ba_str, @ptrCast(errorVal.ptr)) };
    }

    /// ### DEPRECATED: Use `fromCbor32` instead
    ///
    pub const FromCbor32 = fromCbor32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` len: isize `
    ///
    /// ` errorVal: QCborParserError `
    ///
    pub fn fromCbor32(data: [:0]const u8, len: isize, errorVal: anytype) QCborValue {
        const data_Cstring = data.ptr;
        comptime _ = @TypeOf(errorVal)._is_QCborParserError;
        return .{ .ptr = qtc.QCborValue_FromCbor32(data_Cstring, @bitCast(len), @ptrCast(errorVal.ptr)) };
    }

    /// ### DEPRECATED: Use `fromCbor33` instead
    ///
    pub const FromCbor33 = fromCbor33;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` len: isize `
    ///
    /// ` errorVal: QCborParserError `
    ///
    pub fn fromCbor33(data: *const u8, len: isize, errorVal: anytype) QCborValue {
        comptime _ = @TypeOf(errorVal)._is_QCborParserError;
        return .{ .ptr = qtc.QCborValue_FromCbor33(@ptrCast(data), @bitCast(len), @ptrCast(errorVal.ptr)) };
    }

    /// ### DEPRECATED: Use `toCbor1` instead
    ///
    pub const ToCbor1 = toCbor1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` opt: flag of qcborvalue_enums.EncodingOption `
    ///
    pub fn toCbor1(self: QCborValue, allocator: std.mem.Allocator, opt: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValue_ToCbor1(@ptrCast(self.ptr), @bitCast(opt));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCborValue.toCbor1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toCbor22` instead
    ///
    pub const ToCbor22 = toCbor22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` writer: QCborStreamWriter `
    ///
    /// ` opt: flag of qcborvalue_enums.EncodingOption `
    ///
    pub fn toCbor22(self: QCborValue, writer: anytype, opt: i32) void {
        comptime _ = @TypeOf(writer)._is_QCborStreamWriter;
        qtc.QCborValue_ToCbor22(@ptrCast(self.ptr), @ptrCast(writer.ptr), @bitCast(opt));
    }

    /// ### DEPRECATED: Use `toDiagnosticNotation1` instead
    ///
    pub const ToDiagnosticNotation1 = toDiagnosticNotation1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDiagnosticNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` opts: flag of qcborvalue_enums.DiagnosticNotationOption `
    ///
    pub fn toDiagnosticNotation1(self: QCborValue, allocator: std.mem.Allocator, opts: i32) []const u8 {
        var _str = qtc.QCborValue_ToDiagnosticNotation1(@ptrCast(self.ptr), @bitCast(opts));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCborValue.toDiagnosticNotation1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#dtor.QCborValue)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborValue `
    ///
    pub fn delete(self: QCborValue) void {
        qtc.QCborValue_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html)
pub const QCborValueConstRef = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCborValueConstRef,

    pub const _is_QCborValueConstRef = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCborValueConstRef object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborValueConstRef `
    ///
    pub fn new(other: anytype) QCborValueConstRef {
        comptime _ = @TypeOf(other)._is_QCborValueConstRef;
        return .{ .ptr = qtc.QCborValueConstRef_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCborValueConstRef object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QCborValueConstRef `
    ///
    pub fn new2(param1: anytype) QCborValueConstRef {
        comptime _ = @TypeOf(param1)._is_QCborValueConstRef;
        return .{ .ptr = qtc.QCborValueConstRef_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `toQCborValue` instead
    ///
    pub const ToQCborValue = toQCborValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn toQCborValue(self: QCborValueConstRef) QCborValue {
        return .{ .ptr = qtc.QCborValueConstRef_ToQCborValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ## Returns:
    ///
    /// ` qcborvalue_enums.Type `
    ///
    pub fn type0(self: QCborValueConstRef) i32 {
        return qtc.QCborValueConstRef_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInteger` instead
    ///
    pub const IsInteger = isInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isInteger(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isByteArray` instead
    ///
    pub const IsByteArray = isByteArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isByteArray(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsByteArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isString` instead
    ///
    pub const IsString = isString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isString(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsString(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isArray` instead
    ///
    pub const IsArray = isArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isArray(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMap` instead
    ///
    pub const IsMap = isMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isMap(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsMap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTag` instead
    ///
    pub const IsTag = isTag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isTag(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsTag(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFalse` instead
    ///
    pub const IsFalse = isFalse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isFalse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isFalse(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsFalse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTrue` instead
    ///
    pub const IsTrue = isTrue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isTrue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isTrue(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsTrue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBool` instead
    ///
    pub const IsBool = isBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isBool(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isNull(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUndefined` instead
    ///
    pub const IsUndefined = isUndefined;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isUndefined(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsUndefined(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDouble` instead
    ///
    pub const IsDouble = isDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isDouble(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDateTime` instead
    ///
    pub const IsDateTime = isDateTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isDateTime(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsDateTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUrl` instead
    ///
    pub const IsUrl = isUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isUrl(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsUrl(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRegularExpression` instead
    ///
    pub const IsRegularExpression = isRegularExpression;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isRegularExpression(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsRegularExpression(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUuid` instead
    ///
    pub const IsUuid = isUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isUuid(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsUuid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInvalid` instead
    ///
    pub const IsInvalid = isInvalid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isInvalid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isInvalid(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsInvalid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isContainer` instead
    ///
    pub const IsContainer = isContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isContainer(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsContainer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSimpleType` instead
    ///
    pub const IsSimpleType = isSimpleType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn isSimpleType(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsSimpleType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSimpleType2` instead
    ///
    pub const IsSimpleType2 = isSimpleType2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn isSimpleType2(self: QCborValueConstRef, st: u8) bool {
        return qtc.QCborValueConstRef_IsSimpleType2(@ptrCast(self.ptr), @bitCast(st));
    }

    /// ### DEPRECATED: Use `toSimpleType` instead
    ///
    pub const ToSimpleType = toSimpleType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborSimpleType `
    ///
    pub fn toSimpleType(self: QCborValueConstRef) u8 {
        return qtc.QCborValueConstRef_ToSimpleType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tag` instead
    ///
    pub const Tag = tag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#tag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborTag `
    ///
    pub fn tag(self: QCborValueConstRef) u64 {
        return qtc.QCborValueConstRef_Tag(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `taggedValue` instead
    ///
    pub const TaggedValue = taggedValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn taggedValue(self: QCborValueConstRef) QCborValue {
        return .{ .ptr = qtc.QCborValueConstRef_TaggedValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toInteger` instead
    ///
    pub const ToInteger = toInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn toInteger(self: QCborValueConstRef) i64 {
        return qtc.QCborValueConstRef_ToInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBool` instead
    ///
    pub const ToBool = toBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn toBool(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_ToBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toDouble` instead
    ///
    pub const ToDouble = toDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn toDouble(self: QCborValueConstRef) f64 {
        return qtc.QCborValueConstRef_ToDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toByteArray` instead
    ///
    pub const ToByteArray = toByteArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toByteArray(self: QCborValueConstRef, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueConstRef_ToByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCborValueConstRef.toByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QCborValueConstRef, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValueConstRef_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCborValueConstRef.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toDateTime` instead
    ///
    pub const ToDateTime = toDateTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn toDateTime(self: QCborValueConstRef) QDateTime {
        return .{ .ptr = qtc.QCborValueConstRef_ToDateTime(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toUrl` instead
    ///
    pub const ToUrl = toUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn toUrl(self: QCborValueConstRef) QUrl {
        return .{ .ptr = qtc.QCborValueConstRef_ToUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toRegularExpression` instead
    ///
    pub const ToRegularExpression = toRegularExpression;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn toRegularExpression(self: QCborValueConstRef) QRegularExpression {
        return .{ .ptr = qtc.QCborValueConstRef_ToRegularExpression(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toUuid` instead
    ///
    pub const ToUuid = toUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn toUuid(self: QCborValueConstRef) QUuid {
        return .{ .ptr = qtc.QCborValueConstRef_ToUuid(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toArray` instead
    ///
    pub const ToArray = toArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn toArray(self: QCborValueConstRef) QCborArray {
        return .{ .ptr = qtc.QCborValueConstRef_ToArray(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toArray2` instead
    ///
    pub const ToArray2 = toArray2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` a: QCborArray `
    ///
    pub fn toArray2(self: QCborValueConstRef, a: anytype) QCborArray {
        comptime _ = @TypeOf(a)._is_QCborArray;
        return .{ .ptr = qtc.QCborValueConstRef_ToArray2(@ptrCast(self.ptr), @ptrCast(a.ptr)) };
    }

    /// ### DEPRECATED: Use `toMap` instead
    ///
    pub const ToMap = toMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn toMap(self: QCborValueConstRef) QCborMap {
        return .{ .ptr = qtc.QCborValueConstRef_ToMap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toMap2` instead
    ///
    pub const ToMap2 = toMap2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` m: QCborMap `
    ///
    pub fn toMap2(self: QCborValueConstRef, m: anytype) QCborMap {
        comptime _ = @TypeOf(m)._is_QCborMap;
        return .{ .ptr = qtc.QCborValueConstRef_ToMap2(@ptrCast(self.ptr), @ptrCast(m.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript(self: QCborValueConstRef, key: []const u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborValueConstRef_OperatorSubscript(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` key: []u8 `
    ///
    pub fn operatorSubscript2(self: QCborValueConstRef, key: []u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborValueConstRef_OperatorSubscript2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript3` instead
    ///
    pub const OperatorSubscript3 = operatorSubscript3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` key: i64 `
    ///
    pub fn operatorSubscript3(self: QCborValueConstRef, key: i64) QCborValue {
        return .{ .ptr = qtc.QCborValueConstRef_OperatorSubscript3(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `compare` instead
    ///
    pub const Compare = compare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` other: QCborValue `
    ///
    pub fn compare(self: QCborValueConstRef, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QCborValue;
        return qtc.QCborValueConstRef_Compare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toVariant` instead
    ///
    pub const ToVariant = toVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn toVariant(self: QCborValueConstRef) QVariant {
        return .{ .ptr = qtc.QCborValueConstRef_ToVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toJsonValue` instead
    ///
    pub const ToJsonValue = toJsonValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toJsonValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn toJsonValue(self: QCborValueConstRef) QJsonValue {
        return .{ .ptr = qtc.QCborValueConstRef_ToJsonValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCbor` instead
    ///
    pub const ToCbor = toCbor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toCbor(self: QCborValueConstRef, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueConstRef_ToCbor(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCborValueConstRef.toCbor: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toCbor2` instead
    ///
    pub const ToCbor2 = toCbor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` writer: QCborStreamWriter `
    ///
    pub fn toCbor2(self: QCborValueConstRef, writer: anytype) void {
        comptime _ = @TypeOf(writer)._is_QCborStreamWriter;
        qtc.QCborValueConstRef_ToCbor2(@ptrCast(self.ptr), @ptrCast(writer.ptr));
    }

    /// ### DEPRECATED: Use `toDiagnosticNotation` instead
    ///
    pub const ToDiagnosticNotation = toDiagnosticNotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDiagnosticNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toDiagnosticNotation(self: QCborValueConstRef, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValueConstRef_ToDiagnosticNotation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCborValueConstRef.toDiagnosticNotation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toSimpleType1` instead
    ///
    pub const ToSimpleType1 = toSimpleType1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: qcborcommon_enums.QCborSimpleType `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborSimpleType `
    ///
    pub fn toSimpleType1(self: QCborValueConstRef, defaultValue: u8) u8 {
        return qtc.QCborValueConstRef_ToSimpleType1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `tag1` instead
    ///
    pub const Tag1 = tag1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#tag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: qcborcommon_enums.QCborTag `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborTag `
    ///
    pub fn tag1(self: QCborValueConstRef, defaultValue: u64) u64 {
        return qtc.QCborValueConstRef_Tag1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `taggedValue1` instead
    ///
    pub const TaggedValue1 = taggedValue1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: QCborValue `
    ///
    pub fn taggedValue1(self: QCborValueConstRef, defaultValue: anytype) QCborValue {
        comptime _ = @TypeOf(defaultValue)._is_QCborValue;
        return .{ .ptr = qtc.QCborValueConstRef_TaggedValue1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `toInteger1` instead
    ///
    pub const ToInteger1 = toInteger1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn toInteger1(self: QCborValueConstRef, defaultValue: i64) i64 {
        return qtc.QCborValueConstRef_ToInteger1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `toBool1` instead
    ///
    pub const ToBool1 = toBool1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn toBool1(self: QCborValueConstRef, defaultValue: bool) bool {
        return qtc.QCborValueConstRef_ToBool1(@ptrCast(self.ptr), defaultValue);
    }

    /// ### DEPRECATED: Use `toDouble1` instead
    ///
    pub const ToDouble1 = toDouble1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn toDouble1(self: QCborValueConstRef, defaultValue: f64) f64 {
        return qtc.QCborValueConstRef_ToDouble1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `toByteArray1` instead
    ///
    pub const ToByteArray1 = toByteArray1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` defaultValue: []u8 `
    ///
    pub fn toByteArray1(self: QCborValueConstRef, allocator: std.mem.Allocator, defaultValue: []u8) []u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCborValueConstRef_ToByteArray1(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCborValueConstRef.toByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString1` instead
    ///
    pub const ToString1 = toString1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn toString1(self: QCborValueConstRef, allocator: std.mem.Allocator, defaultValue: []const u8) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QCborValueConstRef_ToString1(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCborValueConstRef.toString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toDateTime1` instead
    ///
    pub const ToDateTime1 = toDateTime1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: QDateTime `
    ///
    pub fn toDateTime1(self: QCborValueConstRef, defaultValue: anytype) QDateTime {
        comptime _ = @TypeOf(defaultValue)._is_QDateTime;
        return .{ .ptr = qtc.QCborValueConstRef_ToDateTime1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `toUrl1` instead
    ///
    pub const ToUrl1 = toUrl1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: QUrl `
    ///
    pub fn toUrl1(self: QCborValueConstRef, defaultValue: anytype) QUrl {
        comptime _ = @TypeOf(defaultValue)._is_QUrl;
        return .{ .ptr = qtc.QCborValueConstRef_ToUrl1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `toRegularExpression1` instead
    ///
    pub const ToRegularExpression1 = toRegularExpression1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: QRegularExpression `
    ///
    pub fn toRegularExpression1(self: QCborValueConstRef, defaultValue: anytype) QRegularExpression {
        comptime _ = @TypeOf(defaultValue)._is_QRegularExpression;
        return .{ .ptr = qtc.QCborValueConstRef_ToRegularExpression1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `toUuid1` instead
    ///
    pub const ToUuid1 = toUuid1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: QUuid `
    ///
    pub fn toUuid1(self: QCborValueConstRef, defaultValue: anytype) QUuid {
        comptime _ = @TypeOf(defaultValue)._is_QUuid;
        return .{ .ptr = qtc.QCborValueConstRef_ToUuid1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `toCbor1` instead
    ///
    pub const ToCbor1 = toCbor1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` opt: flag of qcborvalue_enums.EncodingOption `
    ///
    pub fn toCbor1(self: QCborValueConstRef, allocator: std.mem.Allocator, opt: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueConstRef_ToCbor1(@ptrCast(self.ptr), @bitCast(opt));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCborValueConstRef.toCbor1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toCbor22` instead
    ///
    pub const ToCbor22 = toCbor22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` writer: QCborStreamWriter `
    ///
    /// ` opt: flag of qcborvalue_enums.EncodingOption `
    ///
    pub fn toCbor22(self: QCborValueConstRef, writer: anytype, opt: i32) void {
        comptime _ = @TypeOf(writer)._is_QCborStreamWriter;
        qtc.QCborValueConstRef_ToCbor22(@ptrCast(self.ptr), @ptrCast(writer.ptr), @bitCast(opt));
    }

    /// ### DEPRECATED: Use `toDiagnosticNotation1` instead
    ///
    pub const ToDiagnosticNotation1 = toDiagnosticNotation1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDiagnosticNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` opt: flag of qcborvalue_enums.DiagnosticNotationOption `
    ///
    pub fn toDiagnosticNotation1(self: QCborValueConstRef, allocator: std.mem.Allocator, opt: i32) []const u8 {
        var _str = qtc.QCborValueConstRef_ToDiagnosticNotation1(@ptrCast(self.ptr), @bitCast(opt));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCborValueConstRef.toDiagnosticNotation1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#dtor.QCborValueConstRef)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn delete(self: QCborValueConstRef) void {
        qtc.QCborValueConstRef_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html)
pub const QCborValueRef = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCborValueRef,

    pub const _is_QCborValueRef = {};
    pub const _is_QCborValueConstRef = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCborValueRef object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborValueRef `
    ///
    pub fn new(other: anytype) QCborValueRef {
        comptime _ = @TypeOf(other)._is_QCborValueRef;
        return .{ .ptr = qtc.QCborValueRef_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCborValueRef object and invalidate the source QCborValueRef object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborValueRef `
    ///
    pub fn new2(other: anytype) QCborValueRef {
        comptime _ = @TypeOf(other)._is_QCborValueRef;
        return .{ .ptr = qtc.QCborValueRef_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCborValueRef object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QCborValueRef `
    ///
    pub fn new3(param1: anytype) QCborValueRef {
        comptime _ = @TypeOf(param1)._is_QCborValueRef;
        return .{ .ptr = qtc.QCborValueRef_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` other: QCborValue `
    ///
    pub fn operatorAssign(self: QCborValueRef, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborValue;
        qtc.QCborValueRef_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign2` instead
    ///
    pub const OperatorAssign2 = operatorAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` other: QCborValueRef `
    ///
    pub fn operatorAssign2(self: QCborValueRef, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborValueRef;
        qtc.QCborValueRef_OperatorAssign2(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` key: i64 `
    ///
    pub fn operatorSubscript(self: QCborValueRef, key: i64) QCborValueRef {
        return .{ .ptr = qtc.QCborValueRef_OperatorSubscript(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` key: []u8 `
    ///
    pub fn operatorSubscript2(self: QCborValueRef, key: []u8) QCborValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborValueRef_OperatorSubscript2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript3` instead
    ///
    pub const OperatorSubscript3 = operatorSubscript3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript3(self: QCborValueRef, key: []const u8) QCborValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborValueRef_OperatorSubscript3(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `toQCborValue` instead
    ///
    pub const ToQCborValue = toQCborValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn toQCborValue(self: QCborValueRef) QCborValue {
        return .{ .ptr = qtc.QCborValueRef_ToQCborValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ## Returns:
    ///
    /// ` qcborvalue_enums.Type `
    ///
    pub fn type0(self: QCborValueRef) i32 {
        return qtc.QCborValueRef_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInteger` instead
    ///
    pub const IsInteger = isInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isInteger(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isByteArray` instead
    ///
    pub const IsByteArray = isByteArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isByteArray(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsByteArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isString` instead
    ///
    pub const IsString = isString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isString(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsString(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isArray` instead
    ///
    pub const IsArray = isArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isArray(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMap` instead
    ///
    pub const IsMap = isMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isMap(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsMap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTag` instead
    ///
    pub const IsTag = isTag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isTag(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsTag(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFalse` instead
    ///
    pub const IsFalse = isFalse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isFalse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isFalse(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsFalse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTrue` instead
    ///
    pub const IsTrue = isTrue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isTrue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isTrue(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsTrue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBool` instead
    ///
    pub const IsBool = isBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isBool(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isNull(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUndefined` instead
    ///
    pub const IsUndefined = isUndefined;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isUndefined(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsUndefined(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDouble` instead
    ///
    pub const IsDouble = isDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isDouble(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDateTime` instead
    ///
    pub const IsDateTime = isDateTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isDateTime(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsDateTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUrl` instead
    ///
    pub const IsUrl = isUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isUrl(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsUrl(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRegularExpression` instead
    ///
    pub const IsRegularExpression = isRegularExpression;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isRegularExpression(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsRegularExpression(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUuid` instead
    ///
    pub const IsUuid = isUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isUuid(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsUuid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInvalid` instead
    ///
    pub const IsInvalid = isInvalid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isInvalid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isInvalid(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsInvalid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isContainer` instead
    ///
    pub const IsContainer = isContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isContainer(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsContainer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSimpleType` instead
    ///
    pub const IsSimpleType = isSimpleType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn isSimpleType(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsSimpleType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSimpleType2` instead
    ///
    pub const IsSimpleType2 = isSimpleType2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn isSimpleType2(self: QCborValueRef, st: u8) bool {
        return qtc.QCborValueRef_IsSimpleType2(@ptrCast(self.ptr), @bitCast(st));
    }

    /// ### DEPRECATED: Use `toSimpleType` instead
    ///
    pub const ToSimpleType = toSimpleType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborSimpleType `
    ///
    pub fn toSimpleType(self: QCborValueRef) u8 {
        return qtc.QCborValueRef_ToSimpleType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tag` instead
    ///
    pub const Tag = tag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#tag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborTag `
    ///
    pub fn tag(self: QCborValueRef) u64 {
        return qtc.QCborValueRef_Tag(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `taggedValue` instead
    ///
    pub const TaggedValue = taggedValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn taggedValue(self: QCborValueRef) QCborValue {
        return .{ .ptr = qtc.QCborValueRef_TaggedValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toInteger` instead
    ///
    pub const ToInteger = toInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn toInteger(self: QCborValueRef) i64 {
        return qtc.QCborValueRef_ToInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBool` instead
    ///
    pub const ToBool = toBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn toBool(self: QCborValueRef) bool {
        return qtc.QCborValueRef_ToBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toDouble` instead
    ///
    pub const ToDouble = toDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn toDouble(self: QCborValueRef) f64 {
        return qtc.QCborValueRef_ToDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toByteArray` instead
    ///
    pub const ToByteArray = toByteArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toByteArray(self: QCborValueRef, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueRef_ToByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCborValueRef.toByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QCborValueRef, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValueRef_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCborValueRef.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toDateTime` instead
    ///
    pub const ToDateTime = toDateTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn toDateTime(self: QCborValueRef) QDateTime {
        return .{ .ptr = qtc.QCborValueRef_ToDateTime(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toUrl` instead
    ///
    pub const ToUrl = toUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn toUrl(self: QCborValueRef) QUrl {
        return .{ .ptr = qtc.QCborValueRef_ToUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toRegularExpression` instead
    ///
    pub const ToRegularExpression = toRegularExpression;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn toRegularExpression(self: QCborValueRef) QRegularExpression {
        return .{ .ptr = qtc.QCborValueRef_ToRegularExpression(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toUuid` instead
    ///
    pub const ToUuid = toUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn toUuid(self: QCborValueRef) QUuid {
        return .{ .ptr = qtc.QCborValueRef_ToUuid(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toArray` instead
    ///
    pub const ToArray = toArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn toArray(self: QCborValueRef) QCborArray {
        return .{ .ptr = qtc.QCborValueRef_ToArray(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toArray2` instead
    ///
    pub const ToArray2 = toArray2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` a: QCborArray `
    ///
    pub fn toArray2(self: QCborValueRef, a: anytype) QCborArray {
        comptime _ = @TypeOf(a)._is_QCborArray;
        return .{ .ptr = qtc.QCborValueRef_ToArray2(@ptrCast(self.ptr), @ptrCast(a.ptr)) };
    }

    /// ### DEPRECATED: Use `toMap` instead
    ///
    pub const ToMap = toMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn toMap(self: QCborValueRef) QCborMap {
        return .{ .ptr = qtc.QCborValueRef_ToMap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toMap2` instead
    ///
    pub const ToMap2 = toMap2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` m: QCborMap `
    ///
    pub fn toMap2(self: QCborValueRef, m: anytype) QCborMap {
        comptime _ = @TypeOf(m)._is_QCborMap;
        return .{ .ptr = qtc.QCborValueRef_ToMap2(@ptrCast(self.ptr), @ptrCast(m.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript4` instead
    ///
    pub const OperatorSubscript4 = operatorSubscript4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript4(self: QCborValueRef, key: []const u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborValueRef_OperatorSubscript4(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript5` instead
    ///
    pub const OperatorSubscript5 = operatorSubscript5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` key: []u8 `
    ///
    pub fn operatorSubscript5(self: QCborValueRef, key: []u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborValueRef_OperatorSubscript5(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript6` instead
    ///
    pub const OperatorSubscript6 = operatorSubscript6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` key: i64 `
    ///
    pub fn operatorSubscript6(self: QCborValueRef, key: i64) QCborValue {
        return .{ .ptr = qtc.QCborValueRef_OperatorSubscript6(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `compare` instead
    ///
    pub const Compare = compare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` other: QCborValue `
    ///
    pub fn compare(self: QCborValueRef, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QCborValue;
        return qtc.QCborValueRef_Compare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toVariant` instead
    ///
    pub const ToVariant = toVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn toVariant(self: QCborValueRef) QVariant {
        return .{ .ptr = qtc.QCborValueRef_ToVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toJsonValue` instead
    ///
    pub const ToJsonValue = toJsonValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toJsonValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn toJsonValue(self: QCborValueRef) QJsonValue {
        return .{ .ptr = qtc.QCborValueRef_ToJsonValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCbor` instead
    ///
    pub const ToCbor = toCbor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toCbor(self: QCborValueRef, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueRef_ToCbor(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCborValueRef.toCbor: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toCbor2` instead
    ///
    pub const ToCbor2 = toCbor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` writer: QCborStreamWriter `
    ///
    pub fn toCbor2(self: QCborValueRef, writer: anytype) void {
        comptime _ = @TypeOf(writer)._is_QCborStreamWriter;
        qtc.QCborValueRef_ToCbor2(@ptrCast(self.ptr), @ptrCast(writer.ptr));
    }

    /// ### DEPRECATED: Use `toDiagnosticNotation` instead
    ///
    pub const ToDiagnosticNotation = toDiagnosticNotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDiagnosticNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toDiagnosticNotation(self: QCborValueRef, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValueRef_ToDiagnosticNotation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCborValueRef.toDiagnosticNotation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toSimpleType1` instead
    ///
    pub const ToSimpleType1 = toSimpleType1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: qcborcommon_enums.QCborSimpleType `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborSimpleType `
    ///
    pub fn toSimpleType1(self: QCborValueRef, defaultValue: u8) u8 {
        return qtc.QCborValueRef_ToSimpleType1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `tag1` instead
    ///
    pub const Tag1 = tag1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#tag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: qcborcommon_enums.QCborTag `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborTag `
    ///
    pub fn tag1(self: QCborValueRef, defaultValue: u64) u64 {
        return qtc.QCborValueRef_Tag1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `taggedValue1` instead
    ///
    pub const TaggedValue1 = taggedValue1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: QCborValue `
    ///
    pub fn taggedValue1(self: QCborValueRef, defaultValue: anytype) QCborValue {
        comptime _ = @TypeOf(defaultValue)._is_QCborValue;
        return .{ .ptr = qtc.QCborValueRef_TaggedValue1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `toInteger1` instead
    ///
    pub const ToInteger1 = toInteger1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn toInteger1(self: QCborValueRef, defaultValue: i64) i64 {
        return qtc.QCborValueRef_ToInteger1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `toBool1` instead
    ///
    pub const ToBool1 = toBool1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn toBool1(self: QCborValueRef, defaultValue: bool) bool {
        return qtc.QCborValueRef_ToBool1(@ptrCast(self.ptr), defaultValue);
    }

    /// ### DEPRECATED: Use `toDouble1` instead
    ///
    pub const ToDouble1 = toDouble1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn toDouble1(self: QCborValueRef, defaultValue: f64) f64 {
        return qtc.QCborValueRef_ToDouble1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `toByteArray1` instead
    ///
    pub const ToByteArray1 = toByteArray1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` defaultValue: []u8 `
    ///
    pub fn toByteArray1(self: QCborValueRef, allocator: std.mem.Allocator, defaultValue: []u8) []u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCborValueRef_ToByteArray1(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCborValueRef.toByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString1` instead
    ///
    pub const ToString1 = toString1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn toString1(self: QCborValueRef, allocator: std.mem.Allocator, defaultValue: []const u8) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QCborValueRef_ToString1(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCborValueRef.toString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toDateTime1` instead
    ///
    pub const ToDateTime1 = toDateTime1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: QDateTime `
    ///
    pub fn toDateTime1(self: QCborValueRef, defaultValue: anytype) QDateTime {
        comptime _ = @TypeOf(defaultValue)._is_QDateTime;
        return .{ .ptr = qtc.QCborValueRef_ToDateTime1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `toUrl1` instead
    ///
    pub const ToUrl1 = toUrl1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: QUrl `
    ///
    pub fn toUrl1(self: QCborValueRef, defaultValue: anytype) QUrl {
        comptime _ = @TypeOf(defaultValue)._is_QUrl;
        return .{ .ptr = qtc.QCborValueRef_ToUrl1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `toRegularExpression1` instead
    ///
    pub const ToRegularExpression1 = toRegularExpression1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: QRegularExpression `
    ///
    pub fn toRegularExpression1(self: QCborValueRef, defaultValue: anytype) QRegularExpression {
        comptime _ = @TypeOf(defaultValue)._is_QRegularExpression;
        return .{ .ptr = qtc.QCborValueRef_ToRegularExpression1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `toUuid1` instead
    ///
    pub const ToUuid1 = toUuid1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: QUuid `
    ///
    pub fn toUuid1(self: QCborValueRef, defaultValue: anytype) QUuid {
        comptime _ = @TypeOf(defaultValue)._is_QUuid;
        return .{ .ptr = qtc.QCborValueRef_ToUuid1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `toCbor1` instead
    ///
    pub const ToCbor1 = toCbor1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` opt: flag of qcborvalue_enums.EncodingOption `
    ///
    pub fn toCbor1(self: QCborValueRef, allocator: std.mem.Allocator, opt: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueRef_ToCbor1(@ptrCast(self.ptr), @bitCast(opt));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCborValueRef.toCbor1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toCbor22` instead
    ///
    pub const ToCbor22 = toCbor22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` writer: QCborStreamWriter `
    ///
    /// ` opt: flag of qcborvalue_enums.EncodingOption `
    ///
    pub fn toCbor22(self: QCborValueRef, writer: anytype, opt: i32) void {
        comptime _ = @TypeOf(writer)._is_QCborStreamWriter;
        qtc.QCborValueRef_ToCbor22(@ptrCast(self.ptr), @ptrCast(writer.ptr), @bitCast(opt));
    }

    /// ### DEPRECATED: Use `toDiagnosticNotation1` instead
    ///
    pub const ToDiagnosticNotation1 = toDiagnosticNotation1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDiagnosticNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` opt: flag of qcborvalue_enums.DiagnosticNotationOption `
    ///
    pub fn toDiagnosticNotation1(self: QCborValueRef, allocator: std.mem.Allocator, opt: i32) []const u8 {
        var _str = qtc.QCborValueRef_ToDiagnosticNotation1(@ptrCast(self.ptr), @bitCast(opt));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCborValueRef.toDiagnosticNotation1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#dtor.QCborValueRef)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn delete(self: QCborValueRef) void {
        qtc.QCborValueRef_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#public-types)
pub const enums = struct {
    pub const EncodingOption = enum(i32) {
        pub const SortKeysInMaps: i32 = 1;
        pub const UseFloat: i32 = 2;
        pub const UseFloat16: i32 = 6;
        pub const UseIntegers: i32 = 8;
        pub const NoTransformation: i32 = 0;
    };

    pub const DiagnosticNotationOption = enum(i32) {
        pub const Compact: i32 = 0;
        pub const LineWrapped: i32 = 1;
        pub const ExtendedFormat: i32 = 2;
    };

    pub const Type = enum(i32) {
        pub const Integer: i32 = 0;
        pub const ByteArray: i32 = 64;
        pub const String: i32 = 96;
        pub const Array: i32 = 128;
        pub const Map: i32 = 160;
        pub const Tag: i32 = 192;
        pub const SimpleType: i32 = 256;
        pub const False: i32 = 276;
        pub const True: i32 = 277;
        pub const Null: i32 = 278;
        pub const Undefined: i32 = 279;
        pub const Double: i32 = 514;
        pub const DateTime: i32 = 65536;
        pub const Url: i32 = 65568;
        pub const RegularExpression: i32 = 65571;
        pub const Uuid: i32 = 65573;
        pub const Invalid: i32 = -1;
    };
};
