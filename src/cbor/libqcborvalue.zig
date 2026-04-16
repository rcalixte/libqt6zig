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

    /// New constructs a new QCborParserError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborParserError `
    ///
    pub fn New(other: anytype) QCborParserError {
        comptime _ = @TypeOf(other)._is_QCborParserError;
        return .{ .ptr = qtc.QCborParserError_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QCborParserError object and invalidates the source QCborParserError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborParserError `
    ///
    pub fn New2(other: anytype) QCborParserError {
        comptime _ = @TypeOf(other)._is_QCborParserError;
        return .{ .ptr = qtc.QCborParserError_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QCborParserError `
    ///
    /// ` other: QCborParserError `
    ///
    pub fn CopyAssign(self: QCborParserError, other: QCborParserError) void {
        qtc.QCborParserError_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QCborParserError `
    ///
    /// ` other: QCborParserError `
    ///
    pub fn MoveAssign(self: QCborParserError, other: QCborParserError) void {
        qtc.QCborParserError_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#offset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborParserError `
    ///
    pub fn Offset(self: QCborParserError) i64 {
        return qtc.QCborParserError_Offset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#offset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborParserError `
    ///
    /// ` offset: i64 `
    ///
    pub fn SetOffset(self: QCborParserError, offset: i64) void {
        qtc.QCborParserError_SetOffset(@ptrCast(self.ptr), @bitCast(offset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#error-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborParserError `
    ///
    pub fn Error(self: QCborParserError) QCborError {
        return .{ .ptr = qtc.QCborParserError_Error(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#error-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborParserError `
    ///
    /// ` error: QCborError `
    ///
    pub fn SetError(self: QCborParserError, _error: anytype) void {
        comptime _ = @TypeOf(_error)._is_QCborError;
        qtc.QCborParserError_SetError(@ptrCast(self.ptr), @ptrCast(_error.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborParserError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QCborParserError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborParserError_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborparsererror.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#dtor.QCborParserError)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborParserError `
    ///
    pub fn Delete(self: QCborParserError) void {
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

    /// New constructs a new QCborValue object.
    ///
    pub fn New() QCborValue {
        return .{ .ptr = qtc.QCborValue_new() };
    }

    /// New2 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` t_: qcborvalue_enums.Type `
    ///
    pub fn New2(t_: i32) QCborValue {
        return .{ .ptr = qtc.QCborValue_new2(@bitCast(t_)) };
    }

    /// New3 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` b_: bool `
    ///
    pub fn New3(b_: bool) QCborValue {
        return .{ .ptr = qtc.QCborValue_new3(b_) };
    }

    /// New4 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` i: i32 `
    ///
    pub fn New4(i: i32) QCborValue {
        return .{ .ptr = qtc.QCborValue_new4(@bitCast(i)) };
    }

    /// New5 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` u: u32 `
    ///
    pub fn New5(u: u32) QCborValue {
        return .{ .ptr = qtc.QCborValue_new5(@bitCast(u)) };
    }

    /// New6 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` i: i64 `
    ///
    pub fn New6(i: i64) QCborValue {
        return .{ .ptr = qtc.QCborValue_new6(@bitCast(i)) };
    }

    /// New7 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` v: f64 `
    ///
    pub fn New7(v: f64) QCborValue {
        return .{ .ptr = qtc.QCborValue_new7(@bitCast(v)) };
    }

    /// New8 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn New8(st: u8) QCborValue {
        return .{ .ptr = qtc.QCborValue_new8(@bitCast(st)) };
    }

    /// New9 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` ba: []u8 `
    ///
    pub fn New9(ba: []u8) QCborValue {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        return .{ .ptr = qtc.QCborValue_new9(ba_str) };
    }

    /// New10 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    pub fn New10(s: []const u8) QCborValue {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QCborValue_new10(s_str) };
    }

    /// New11 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn New11(s: [:0]const u8) QCborValue {
        const s_Cstring = s.ptr;
        return .{ .ptr = qtc.QCborValue_new11(s_Cstring) };
    }

    /// New12 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` a: QCborArray `
    ///
    pub fn New12(a: anytype) QCborValue {
        comptime _ = @TypeOf(a)._is_QCborArray;
        return .{ .ptr = qtc.QCborValue_new12(@ptrCast(a.ptr)) };
    }

    /// New13 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` m: QCborMap `
    ///
    pub fn New13(m: anytype) QCborValue {
        comptime _ = @TypeOf(m)._is_QCborMap;
        return .{ .ptr = qtc.QCborValue_new13(@ptrCast(m.ptr)) };
    }

    /// New14 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` tag: qcborcommon_enums.QCborTag `
    ///
    pub fn New14(tag: u64) QCborValue {
        return .{ .ptr = qtc.QCborValue_new14(@bitCast(tag)) };
    }

    /// New15 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` t_: qcborcommon_enums.QCborKnownTags `
    ///
    pub fn New15(t_: i32) QCborValue {
        return .{ .ptr = qtc.QCborValue_new15(@bitCast(t_)) };
    }

    /// New16 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` dt: QDateTime `
    ///
    pub fn New16(dt: anytype) QCborValue {
        comptime _ = @TypeOf(dt)._is_QDateTime;
        return .{ .ptr = qtc.QCborValue_new16(@ptrCast(dt.ptr)) };
    }

    /// New17 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn New17(url: anytype) QCborValue {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QCborValue_new17(@ptrCast(url.ptr)) };
    }

    /// New18 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rx: QRegularExpression `
    ///
    pub fn New18(rx: anytype) QCborValue {
        comptime _ = @TypeOf(rx)._is_QRegularExpression;
        return .{ .ptr = qtc.QCborValue_new18(@ptrCast(rx.ptr)) };
    }

    /// New19 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: QUuid `
    ///
    pub fn New19(uuid: anytype) QCborValue {
        comptime _ = @TypeOf(uuid)._is_QUuid;
        return .{ .ptr = qtc.QCborValue_new19(@ptrCast(uuid.ptr)) };
    }

    /// New20 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborValue `
    ///
    pub fn New20(other: anytype) QCborValue {
        comptime _ = @TypeOf(other)._is_QCborValue;
        return .{ .ptr = qtc.QCborValue_new20(@ptrCast(other.ptr)) };
    }

    /// New21 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` tag: qcborcommon_enums.QCborTag `
    ///
    /// ` taggedValue: QCborValue `
    ///
    pub fn New21(tag: u64, taggedValue: anytype) QCborValue {
        comptime _ = @TypeOf(taggedValue)._is_QCborValue;
        return .{ .ptr = qtc.QCborValue_new21(@bitCast(tag), @ptrCast(taggedValue.ptr)) };
    }

    /// New22 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` t_: qcborcommon_enums.QCborKnownTags `
    ///
    /// ` tv: QCborValue `
    ///
    pub fn New22(t_: i32, tv: anytype) QCborValue {
        comptime _ = @TypeOf(tv)._is_QCborValue;
        return .{ .ptr = qtc.QCborValue_new22(@bitCast(t_), @ptrCast(tv.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` other: QCborValue `
    ///
    pub fn OperatorAssign(self: QCborValue, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborValue;
        qtc.QCborValue_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` other: QCborValue `
    ///
    pub fn Swap(self: QCborValue, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborValue;
        qtc.QCborValue_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

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
    pub fn Type(self: QCborValue) i32 {
        return qtc.QCborValue_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsInteger(self: QCborValue) bool {
        return qtc.QCborValue_IsInteger(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsByteArray(self: QCborValue) bool {
        return qtc.QCborValue_IsByteArray(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsString(self: QCborValue) bool {
        return qtc.QCborValue_IsString(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsArray(self: QCborValue) bool {
        return qtc.QCborValue_IsArray(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsMap(self: QCborValue) bool {
        return qtc.QCborValue_IsMap(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsTag(self: QCborValue) bool {
        return qtc.QCborValue_IsTag(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isFalse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsFalse(self: QCborValue) bool {
        return qtc.QCborValue_IsFalse(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isTrue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsTrue(self: QCborValue) bool {
        return qtc.QCborValue_IsTrue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsBool(self: QCborValue) bool {
        return qtc.QCborValue_IsBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsNull(self: QCborValue) bool {
        return qtc.QCborValue_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsUndefined(self: QCborValue) bool {
        return qtc.QCborValue_IsUndefined(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsDouble(self: QCborValue) bool {
        return qtc.QCborValue_IsDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsDateTime(self: QCborValue) bool {
        return qtc.QCborValue_IsDateTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsUrl(self: QCborValue) bool {
        return qtc.QCborValue_IsUrl(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsRegularExpression(self: QCborValue) bool {
        return qtc.QCborValue_IsRegularExpression(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsUuid(self: QCborValue) bool {
        return qtc.QCborValue_IsUuid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isInvalid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsInvalid(self: QCborValue) bool {
        return qtc.QCborValue_IsInvalid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsContainer(self: QCborValue) bool {
        return qtc.QCborValue_IsContainer(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn IsSimpleType(self: QCborValue) bool {
        return qtc.QCborValue_IsSimpleType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn IsSimpleType2(self: QCborValue, st: u8) bool {
        return qtc.QCborValue_IsSimpleType2(@ptrCast(self.ptr), @bitCast(st));
    }

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
    pub fn ToSimpleType(self: QCborValue) u8 {
        return qtc.QCborValue_ToSimpleType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn ToInteger(self: QCborValue) i64 {
        return qtc.QCborValue_ToInteger(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn ToBool(self: QCborValue) bool {
        return qtc.QCborValue_ToBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn ToDouble(self: QCborValue) f64 {
        return qtc.QCborValue_ToDouble(@ptrCast(self.ptr));
    }

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
    pub fn Tag(self: QCborValue) u64 {
        return qtc.QCborValue_Tag(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn TaggedValue(self: QCborValue) QCborValue {
        return .{ .ptr = qtc.QCborValue_TaggedValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray(self: QCborValue, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValue_ToByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalue.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QCborValue, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValue_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalue.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn ToDateTime(self: QCborValue) QDateTime {
        return .{ .ptr = qtc.QCborValue_ToDateTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn ToUrl(self: QCborValue) QUrl {
        return .{ .ptr = qtc.QCborValue_ToUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn ToRegularExpression(self: QCborValue) QRegularExpression {
        return .{ .ptr = qtc.QCborValue_ToRegularExpression(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn ToUuid(self: QCborValue) QUuid {
        return .{ .ptr = qtc.QCborValue_ToUuid(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn ToArray(self: QCborValue) QCborArray {
        return .{ .ptr = qtc.QCborValue_ToArray(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: QCborArray `
    ///
    pub fn ToArray2(self: QCborValue, defaultValue: anytype) QCborArray {
        comptime _ = @TypeOf(defaultValue)._is_QCborArray;
        return .{ .ptr = qtc.QCborValue_ToArray2(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn ToMap(self: QCborValue) QCborMap {
        return .{ .ptr = qtc.QCborValue_ToMap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: QCborMap `
    ///
    pub fn ToMap2(self: QCborValue, defaultValue: anytype) QCborMap {
        comptime _ = @TypeOf(defaultValue)._is_QCborMap;
        return .{ .ptr = qtc.QCborValue_ToMap2(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript(self: QCborValue, key: []const u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborValue_OperatorSubscript(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` key: i64 `
    ///
    pub fn OperatorSubscript3(self: QCborValue, key: i64) QCborValue {
        return .{ .ptr = qtc.QCborValue_OperatorSubscript3(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` key: i64 `
    ///
    pub fn OperatorSubscript4(self: QCborValue, key: i64) QCborValueRef {
        return .{ .ptr = qtc.QCborValue_OperatorSubscript4(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript6(self: QCborValue, key: []const u8) QCborValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborValue_OperatorSubscript6(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` other: QCborValue `
    ///
    pub fn Compare(self: QCborValue, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QCborValue;
        return qtc.QCborValue_Compare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` variant: QVariant `
    ///
    pub fn FromVariant(variant: anytype) QCborValue {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QCborValue_FromVariant(@ptrCast(variant.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn ToVariant(self: QCborValue) QVariant {
        return .{ .ptr = qtc.QCborValue_ToVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromJsonValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: QJsonValue `
    ///
    pub fn FromJsonValue(v: anytype) QCborValue {
        comptime _ = @TypeOf(v)._is_QJsonValue;
        return .{ .ptr = qtc.QCborValue_FromJsonValue(@ptrCast(v.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toJsonValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    pub fn ToJsonValue(self: QCborValue) QJsonValue {
        return .{ .ptr = qtc.QCborValue_ToJsonValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` reader: QCborStreamReader `
    ///
    pub fn FromCbor(reader: anytype) QCborValue {
        comptime _ = @TypeOf(reader)._is_QCborStreamReader;
        return .{ .ptr = qtc.QCborValue_FromCbor(@ptrCast(reader.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` ba: []u8 `
    ///
    pub fn FromCbor2(ba: []u8) QCborValue {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        return .{ .ptr = qtc.QCborValue_FromCbor2(ba_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: isize `
    ///
    pub fn FromCbor3(data: [:0]const u8, lenVal: isize) QCborValue {
        const data_Cstring = data.ptr;
        return .{ .ptr = qtc.QCborValue_FromCbor3(data_Cstring, @bitCast(lenVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` lenVal: isize `
    ///
    pub fn FromCbor4(data: *const u8, lenVal: isize) QCborValue {
        return .{ .ptr = qtc.QCborValue_FromCbor4(@ptrCast(data), @bitCast(lenVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToCbor(self: QCborValue, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValue_ToCbor(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalue.ToCbor: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` writer: QCborStreamWriter `
    ///
    pub fn ToCbor2(self: QCborValue, writer: anytype) void {
        comptime _ = @TypeOf(writer)._is_QCborStreamWriter;
        qtc.QCborValue_ToCbor2(@ptrCast(self.ptr), @ptrCast(writer.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDiagnosticNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToDiagnosticNotation(self: QCborValue, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValue_ToDiagnosticNotation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalue.ToDiagnosticNotation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ToSimpleType1(self: QCborValue, defaultValue: u8) u8 {
        return qtc.QCborValue_ToSimpleType1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn ToInteger1(self: QCborValue, defaultValue: i64) i64 {
        return qtc.QCborValue_ToInteger1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn ToBool1(self: QCborValue, defaultValue: bool) bool {
        return qtc.QCborValue_ToBool1(@ptrCast(self.ptr), defaultValue);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn ToDouble1(self: QCborValue, defaultValue: f64) f64 {
        return qtc.QCborValue_ToDouble1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

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
    pub fn Tag1(self: QCborValue, defaultValue: u64) u64 {
        return qtc.QCborValue_Tag1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: QCborValue `
    ///
    pub fn TaggedValue1(self: QCborValue, defaultValue: anytype) QCborValue {
        comptime _ = @TypeOf(defaultValue)._is_QCborValue;
        return .{ .ptr = qtc.QCborValue_TaggedValue1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

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
    pub fn ToByteArray1(self: QCborValue, allocator: std.mem.Allocator, defaultValue: []u8) []u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCborValue_ToByteArray1(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalue.ToByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn ToString1(self: QCborValue, allocator: std.mem.Allocator, defaultValue: []const u8) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QCborValue_ToString1(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalue.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: QDateTime `
    ///
    pub fn ToDateTime1(self: QCborValue, defaultValue: anytype) QDateTime {
        comptime _ = @TypeOf(defaultValue)._is_QDateTime;
        return .{ .ptr = qtc.QCborValue_ToDateTime1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: QUrl `
    ///
    pub fn ToUrl1(self: QCborValue, defaultValue: anytype) QUrl {
        comptime _ = @TypeOf(defaultValue)._is_QUrl;
        return .{ .ptr = qtc.QCborValue_ToUrl1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: QRegularExpression `
    ///
    pub fn ToRegularExpression1(self: QCborValue, defaultValue: anytype) QRegularExpression {
        comptime _ = @TypeOf(defaultValue)._is_QRegularExpression;
        return .{ .ptr = qtc.QCborValue_ToRegularExpression1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValue `
    ///
    /// ` defaultValue: QUuid `
    ///
    pub fn ToUuid1(self: QCborValue, defaultValue: anytype) QUuid {
        comptime _ = @TypeOf(defaultValue)._is_QUuid;
        return .{ .ptr = qtc.QCborValue_ToUuid1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` ba: []u8 `
    ///
    /// ` errorVal: QCborParserError `
    ///
    pub fn FromCbor22(ba: []u8, errorVal: anytype) QCborValue {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        comptime _ = @TypeOf(errorVal)._is_QCborParserError;
        return .{ .ptr = qtc.QCborValue_FromCbor22(ba_str, @ptrCast(errorVal.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: isize `
    ///
    /// ` errorVal: QCborParserError `
    ///
    pub fn FromCbor32(data: [:0]const u8, lenVal: isize, errorVal: anytype) QCborValue {
        const data_Cstring = data.ptr;
        comptime _ = @TypeOf(errorVal)._is_QCborParserError;
        return .{ .ptr = qtc.QCborValue_FromCbor32(data_Cstring, @bitCast(lenVal), @ptrCast(errorVal.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` lenVal: isize `
    ///
    /// ` errorVal: QCborParserError `
    ///
    pub fn FromCbor33(data: *const u8, lenVal: isize, errorVal: anytype) QCborValue {
        comptime _ = @TypeOf(errorVal)._is_QCborParserError;
        return .{ .ptr = qtc.QCborValue_FromCbor33(@ptrCast(data), @bitCast(lenVal), @ptrCast(errorVal.ptr)) };
    }

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
    pub fn ToCbor1(self: QCborValue, allocator: std.mem.Allocator, opt: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValue_ToCbor1(@ptrCast(self.ptr), @bitCast(opt));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalue.ToCbor1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn ToCbor22(self: QCborValue, writer: anytype, opt: i32) void {
        comptime _ = @TypeOf(writer)._is_QCborStreamWriter;
        qtc.QCborValue_ToCbor22(@ptrCast(self.ptr), @ptrCast(writer.ptr), @bitCast(opt));
    }

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
    pub fn ToDiagnosticNotation1(self: QCborValue, allocator: std.mem.Allocator, opts: i32) []const u8 {
        var _str = qtc.QCborValue_ToDiagnosticNotation1(@ptrCast(self.ptr), @bitCast(opts));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalue.ToDiagnosticNotation1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#dtor.QCborValue)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborValue `
    ///
    pub fn Delete(self: QCborValue) void {
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

    /// New constructs a new QCborValueConstRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborValueConstRef `
    ///
    pub fn New(other: anytype) QCborValueConstRef {
        comptime _ = @TypeOf(other)._is_QCborValueConstRef;
        return .{ .ptr = qtc.QCborValueConstRef_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QCborValueConstRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QCborValueConstRef `
    ///
    pub fn New2(param1: anytype) QCborValueConstRef {
        comptime _ = @TypeOf(param1)._is_QCborValueConstRef;
        return .{ .ptr = qtc.QCborValueConstRef_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn ToQCborValue(self: QCborValueConstRef) QCborValue {
        return .{ .ptr = qtc.QCborValueConstRef_ToQCborValue(@ptrCast(self.ptr)) };
    }

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
    pub fn Type(self: QCborValueConstRef) i32 {
        return qtc.QCborValueConstRef_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsInteger(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsInteger(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsByteArray(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsByteArray(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsString(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsString(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsArray(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsArray(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsMap(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsMap(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsTag(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsTag(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isFalse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsFalse(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsFalse(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isTrue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsTrue(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsTrue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsBool(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsNull(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsUndefined(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsUndefined(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsDouble(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsDateTime(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsDateTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsUrl(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsUrl(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsRegularExpression(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsRegularExpression(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsUuid(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsUuid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isInvalid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsInvalid(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsInvalid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsContainer(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsContainer(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn IsSimpleType(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_IsSimpleType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn IsSimpleType2(self: QCborValueConstRef, st: u8) bool {
        return qtc.QCborValueConstRef_IsSimpleType2(@ptrCast(self.ptr), @bitCast(st));
    }

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
    pub fn ToSimpleType(self: QCborValueConstRef) u8 {
        return qtc.QCborValueConstRef_ToSimpleType(@ptrCast(self.ptr));
    }

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
    pub fn Tag(self: QCborValueConstRef) u64 {
        return qtc.QCborValueConstRef_Tag(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn TaggedValue(self: QCborValueConstRef) QCborValue {
        return .{ .ptr = qtc.QCborValueConstRef_TaggedValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn ToInteger(self: QCborValueConstRef) i64 {
        return qtc.QCborValueConstRef_ToInteger(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn ToBool(self: QCborValueConstRef) bool {
        return qtc.QCborValueConstRef_ToBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn ToDouble(self: QCborValueConstRef) f64 {
        return qtc.QCborValueConstRef_ToDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray(self: QCborValueConstRef, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueConstRef_ToByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueconstref.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QCborValueConstRef, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValueConstRef_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueconstref.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn ToDateTime(self: QCborValueConstRef) QDateTime {
        return .{ .ptr = qtc.QCborValueConstRef_ToDateTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn ToUrl(self: QCborValueConstRef) QUrl {
        return .{ .ptr = qtc.QCborValueConstRef_ToUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn ToRegularExpression(self: QCborValueConstRef) QRegularExpression {
        return .{ .ptr = qtc.QCborValueConstRef_ToRegularExpression(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn ToUuid(self: QCborValueConstRef) QUuid {
        return .{ .ptr = qtc.QCborValueConstRef_ToUuid(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn ToArray(self: QCborValueConstRef) QCborArray {
        return .{ .ptr = qtc.QCborValueConstRef_ToArray(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` a: QCborArray `
    ///
    pub fn ToArray2(self: QCborValueConstRef, a: anytype) QCborArray {
        comptime _ = @TypeOf(a)._is_QCborArray;
        return .{ .ptr = qtc.QCborValueConstRef_ToArray2(@ptrCast(self.ptr), @ptrCast(a.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn ToMap(self: QCborValueConstRef) QCborMap {
        return .{ .ptr = qtc.QCborValueConstRef_ToMap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` m: QCborMap `
    ///
    pub fn ToMap2(self: QCborValueConstRef, m: anytype) QCborMap {
        comptime _ = @TypeOf(m)._is_QCborMap;
        return .{ .ptr = qtc.QCborValueConstRef_ToMap2(@ptrCast(self.ptr), @ptrCast(m.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript(self: QCborValueConstRef, key: []const u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborValueConstRef_OperatorSubscript(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` key: i64 `
    ///
    pub fn OperatorSubscript3(self: QCborValueConstRef, key: i64) QCborValue {
        return .{ .ptr = qtc.QCborValueConstRef_OperatorSubscript3(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` other: QCborValue `
    ///
    pub fn Compare(self: QCborValueConstRef, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QCborValue;
        return qtc.QCborValueConstRef_Compare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn ToVariant(self: QCborValueConstRef) QVariant {
        return .{ .ptr = qtc.QCborValueConstRef_ToVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toJsonValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn ToJsonValue(self: QCborValueConstRef) QJsonValue {
        return .{ .ptr = qtc.QCborValueConstRef_ToJsonValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToCbor(self: QCborValueConstRef, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueConstRef_ToCbor(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueconstref.ToCbor: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` writer: QCborStreamWriter `
    ///
    pub fn ToCbor2(self: QCborValueConstRef, writer: anytype) void {
        comptime _ = @TypeOf(writer)._is_QCborStreamWriter;
        qtc.QCborValueConstRef_ToCbor2(@ptrCast(self.ptr), @ptrCast(writer.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDiagnosticNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToDiagnosticNotation(self: QCborValueConstRef, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValueConstRef_ToDiagnosticNotation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueconstref.ToDiagnosticNotation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ToSimpleType1(self: QCborValueConstRef, defaultValue: u8) u8 {
        return qtc.QCborValueConstRef_ToSimpleType1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

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
    pub fn Tag1(self: QCborValueConstRef, defaultValue: u64) u64 {
        return qtc.QCborValueConstRef_Tag1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: QCborValue `
    ///
    pub fn TaggedValue1(self: QCborValueConstRef, defaultValue: anytype) QCborValue {
        comptime _ = @TypeOf(defaultValue)._is_QCborValue;
        return .{ .ptr = qtc.QCborValueConstRef_TaggedValue1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn ToInteger1(self: QCborValueConstRef, defaultValue: i64) i64 {
        return qtc.QCborValueConstRef_ToInteger1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn ToBool1(self: QCborValueConstRef, defaultValue: bool) bool {
        return qtc.QCborValueConstRef_ToBool1(@ptrCast(self.ptr), defaultValue);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn ToDouble1(self: QCborValueConstRef, defaultValue: f64) f64 {
        return qtc.QCborValueConstRef_ToDouble1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

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
    pub fn ToByteArray1(self: QCborValueConstRef, allocator: std.mem.Allocator, defaultValue: []u8) []u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCborValueConstRef_ToByteArray1(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueconstref.ToByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn ToString1(self: QCborValueConstRef, allocator: std.mem.Allocator, defaultValue: []const u8) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QCborValueConstRef_ToString1(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueconstref.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: QDateTime `
    ///
    pub fn ToDateTime1(self: QCborValueConstRef, defaultValue: anytype) QDateTime {
        comptime _ = @TypeOf(defaultValue)._is_QDateTime;
        return .{ .ptr = qtc.QCborValueConstRef_ToDateTime1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: QUrl `
    ///
    pub fn ToUrl1(self: QCborValueConstRef, defaultValue: anytype) QUrl {
        comptime _ = @TypeOf(defaultValue)._is_QUrl;
        return .{ .ptr = qtc.QCborValueConstRef_ToUrl1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: QRegularExpression `
    ///
    pub fn ToRegularExpression1(self: QCborValueConstRef, defaultValue: anytype) QRegularExpression {
        comptime _ = @TypeOf(defaultValue)._is_QRegularExpression;
        return .{ .ptr = qtc.QCborValueConstRef_ToRegularExpression1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueConstRef `
    ///
    /// ` defaultValue: QUuid `
    ///
    pub fn ToUuid1(self: QCborValueConstRef, defaultValue: anytype) QUuid {
        comptime _ = @TypeOf(defaultValue)._is_QUuid;
        return .{ .ptr = qtc.QCborValueConstRef_ToUuid1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

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
    pub fn ToCbor1(self: QCborValueConstRef, allocator: std.mem.Allocator, opt: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueConstRef_ToCbor1(@ptrCast(self.ptr), @bitCast(opt));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueconstref.ToCbor1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn ToCbor22(self: QCborValueConstRef, writer: anytype, opt: i32) void {
        comptime _ = @TypeOf(writer)._is_QCborStreamWriter;
        qtc.QCborValueConstRef_ToCbor22(@ptrCast(self.ptr), @ptrCast(writer.ptr), @bitCast(opt));
    }

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
    pub fn ToDiagnosticNotation1(self: QCborValueConstRef, allocator: std.mem.Allocator, opt: i32) []const u8 {
        var _str = qtc.QCborValueConstRef_ToDiagnosticNotation1(@ptrCast(self.ptr), @bitCast(opt));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueconstref.ToDiagnosticNotation1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#dtor.QCborValueConstRef)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborValueConstRef `
    ///
    pub fn Delete(self: QCborValueConstRef) void {
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

    /// New constructs a new QCborValueRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborValueRef `
    ///
    pub fn New(other: anytype) QCborValueRef {
        comptime _ = @TypeOf(other)._is_QCborValueRef;
        return .{ .ptr = qtc.QCborValueRef_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QCborValueRef object and invalidates the source QCborValueRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborValueRef `
    ///
    pub fn New2(other: anytype) QCborValueRef {
        comptime _ = @TypeOf(other)._is_QCborValueRef;
        return .{ .ptr = qtc.QCborValueRef_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QCborValueRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QCborValueRef `
    ///
    pub fn New3(param1: anytype) QCborValueRef {
        comptime _ = @TypeOf(param1)._is_QCborValueRef;
        return .{ .ptr = qtc.QCborValueRef_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` other: QCborValue `
    ///
    pub fn OperatorAssign(self: QCborValueRef, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborValue;
        qtc.QCborValueRef_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` other: QCborValueRef `
    ///
    pub fn OperatorAssign2(self: QCborValueRef, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborValueRef;
        qtc.QCborValueRef_OperatorAssign2(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` key: i64 `
    ///
    pub fn OperatorSubscript(self: QCborValueRef, key: i64) QCborValueRef {
        return .{ .ptr = qtc.QCborValueRef_OperatorSubscript(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript3(self: QCborValueRef, key: []const u8) QCborValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborValueRef_OperatorSubscript3(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn ToQCborValue(self: QCborValueRef) QCborValue {
        return .{ .ptr = qtc.QCborValueRef_ToQCborValue(@ptrCast(self.ptr)) };
    }

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
    pub fn Type(self: QCborValueRef) i32 {
        return qtc.QCborValueRef_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsInteger(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsInteger(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsByteArray(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsByteArray(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsString(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsString(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsArray(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsArray(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsMap(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsMap(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsTag(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsTag(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isFalse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsFalse(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsFalse(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isTrue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsTrue(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsTrue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsBool(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsNull(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsUndefined(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsUndefined(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsDouble(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsDateTime(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsDateTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsUrl(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsUrl(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsRegularExpression(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsRegularExpression(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsUuid(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsUuid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isInvalid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsInvalid(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsInvalid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsContainer(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsContainer(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn IsSimpleType(self: QCborValueRef) bool {
        return qtc.QCborValueRef_IsSimpleType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn IsSimpleType2(self: QCborValueRef, st: u8) bool {
        return qtc.QCborValueRef_IsSimpleType2(@ptrCast(self.ptr), @bitCast(st));
    }

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
    pub fn ToSimpleType(self: QCborValueRef) u8 {
        return qtc.QCborValueRef_ToSimpleType(@ptrCast(self.ptr));
    }

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
    pub fn Tag(self: QCborValueRef) u64 {
        return qtc.QCborValueRef_Tag(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn TaggedValue(self: QCborValueRef) QCborValue {
        return .{ .ptr = qtc.QCborValueRef_TaggedValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn ToInteger(self: QCborValueRef) i64 {
        return qtc.QCborValueRef_ToInteger(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn ToBool(self: QCborValueRef) bool {
        return qtc.QCborValueRef_ToBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn ToDouble(self: QCborValueRef) f64 {
        return qtc.QCborValueRef_ToDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray(self: QCborValueRef, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueRef_ToByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueref.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QCborValueRef, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValueRef_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueref.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn ToDateTime(self: QCborValueRef) QDateTime {
        return .{ .ptr = qtc.QCborValueRef_ToDateTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn ToUrl(self: QCborValueRef) QUrl {
        return .{ .ptr = qtc.QCborValueRef_ToUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn ToRegularExpression(self: QCborValueRef) QRegularExpression {
        return .{ .ptr = qtc.QCborValueRef_ToRegularExpression(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn ToUuid(self: QCborValueRef) QUuid {
        return .{ .ptr = qtc.QCborValueRef_ToUuid(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn ToArray(self: QCborValueRef) QCborArray {
        return .{ .ptr = qtc.QCborValueRef_ToArray(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` a: QCborArray `
    ///
    pub fn ToArray2(self: QCborValueRef, a: anytype) QCborArray {
        comptime _ = @TypeOf(a)._is_QCborArray;
        return .{ .ptr = qtc.QCborValueRef_ToArray2(@ptrCast(self.ptr), @ptrCast(a.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn ToMap(self: QCborValueRef) QCborMap {
        return .{ .ptr = qtc.QCborValueRef_ToMap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` m: QCborMap `
    ///
    pub fn ToMap2(self: QCborValueRef, m: anytype) QCborMap {
        comptime _ = @TypeOf(m)._is_QCborMap;
        return .{ .ptr = qtc.QCborValueRef_ToMap2(@ptrCast(self.ptr), @ptrCast(m.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript4(self: QCborValueRef, key: []const u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborValueRef_OperatorSubscript4(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` key: i64 `
    ///
    pub fn OperatorSubscript6(self: QCborValueRef, key: i64) QCborValue {
        return .{ .ptr = qtc.QCborValueRef_OperatorSubscript6(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` other: QCborValue `
    ///
    pub fn Compare(self: QCborValueRef, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QCborValue;
        return qtc.QCborValueRef_Compare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn ToVariant(self: QCborValueRef) QVariant {
        return .{ .ptr = qtc.QCborValueRef_ToVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toJsonValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn ToJsonValue(self: QCborValueRef) QJsonValue {
        return .{ .ptr = qtc.QCborValueRef_ToJsonValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToCbor(self: QCborValueRef, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueRef_ToCbor(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueref.ToCbor: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` writer: QCborStreamWriter `
    ///
    pub fn ToCbor2(self: QCborValueRef, writer: anytype) void {
        comptime _ = @TypeOf(writer)._is_QCborStreamWriter;
        qtc.QCborValueRef_ToCbor2(@ptrCast(self.ptr), @ptrCast(writer.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDiagnosticNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToDiagnosticNotation(self: QCborValueRef, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValueRef_ToDiagnosticNotation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueref.ToDiagnosticNotation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ToSimpleType1(self: QCborValueRef, defaultValue: u8) u8 {
        return qtc.QCborValueRef_ToSimpleType1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

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
    pub fn Tag1(self: QCborValueRef, defaultValue: u64) u64 {
        return qtc.QCborValueRef_Tag1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: QCborValue `
    ///
    pub fn TaggedValue1(self: QCborValueRef, defaultValue: anytype) QCborValue {
        comptime _ = @TypeOf(defaultValue)._is_QCborValue;
        return .{ .ptr = qtc.QCborValueRef_TaggedValue1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn ToInteger1(self: QCborValueRef, defaultValue: i64) i64 {
        return qtc.QCborValueRef_ToInteger1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn ToBool1(self: QCborValueRef, defaultValue: bool) bool {
        return qtc.QCborValueRef_ToBool1(@ptrCast(self.ptr), defaultValue);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn ToDouble1(self: QCborValueRef, defaultValue: f64) f64 {
        return qtc.QCborValueRef_ToDouble1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

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
    pub fn ToByteArray1(self: QCborValueRef, allocator: std.mem.Allocator, defaultValue: []u8) []u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCborValueRef_ToByteArray1(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueref.ToByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn ToString1(self: QCborValueRef, allocator: std.mem.Allocator, defaultValue: []const u8) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QCborValueRef_ToString1(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueref.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: QDateTime `
    ///
    pub fn ToDateTime1(self: QCborValueRef, defaultValue: anytype) QDateTime {
        comptime _ = @TypeOf(defaultValue)._is_QDateTime;
        return .{ .ptr = qtc.QCborValueRef_ToDateTime1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: QUrl `
    ///
    pub fn ToUrl1(self: QCborValueRef, defaultValue: anytype) QUrl {
        comptime _ = @TypeOf(defaultValue)._is_QUrl;
        return .{ .ptr = qtc.QCborValueRef_ToUrl1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: QRegularExpression `
    ///
    pub fn ToRegularExpression1(self: QCborValueRef, defaultValue: anytype) QRegularExpression {
        comptime _ = @TypeOf(defaultValue)._is_QRegularExpression;
        return .{ .ptr = qtc.QCborValueRef_ToRegularExpression1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborValueRef `
    ///
    /// ` defaultValue: QUuid `
    ///
    pub fn ToUuid1(self: QCborValueRef, defaultValue: anytype) QUuid {
        comptime _ = @TypeOf(defaultValue)._is_QUuid;
        return .{ .ptr = qtc.QCborValueRef_ToUuid1(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

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
    pub fn ToCbor1(self: QCborValueRef, allocator: std.mem.Allocator, opt: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueRef_ToCbor1(@ptrCast(self.ptr), @bitCast(opt));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueref.ToCbor1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn ToCbor22(self: QCborValueRef, writer: anytype, opt: i32) void {
        comptime _ = @TypeOf(writer)._is_QCborStreamWriter;
        qtc.QCborValueRef_ToCbor22(@ptrCast(self.ptr), @ptrCast(writer.ptr), @bitCast(opt));
    }

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
    pub fn ToDiagnosticNotation1(self: QCborValueRef, allocator: std.mem.Allocator, opt: i32) []const u8 {
        var _str = qtc.QCborValueRef_ToDiagnosticNotation1(@ptrCast(self.ptr), @bitCast(opt));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueref.ToDiagnosticNotation1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#dtor.QCborValueRef)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborValueRef `
    ///
    pub fn Delete(self: QCborValueRef) void {
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
