const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcborcommon_enums = @import("libqcborcommon.zig").enums;
const qcborvalue_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html)
pub const qcborparsererror = struct {
    /// New constructs a new QCborParserError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QCborParserError `
    ///
    pub fn New(other: ?*anyopaque) QtC.QCborParserError {
        return qtc.QCborParserError_new(@ptrCast(other));
    }

    /// New2 constructs a new QCborParserError object and invalidates the source QCborParserError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QCborParserError `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QCborParserError {
        return qtc.QCborParserError_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCborParserError `
    ///
    /// ` other: QtC.QCborParserError `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborParserError_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCborParserError `
    ///
    /// ` other: QtC.QCborParserError `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborParserError_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#offset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborParserError `
    ///
    pub fn Offset(self: ?*anyopaque) i64 {
        return qtc.QCborParserError_Offset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#offset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborParserError `
    ///
    /// ` offset: i64 `
    ///
    pub fn SetOffset(self: ?*anyopaque, offset: i64) void {
        qtc.QCborParserError_SetOffset(@ptrCast(self), @bitCast(offset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#error-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborParserError `
    ///
    pub fn Error(self: ?*anyopaque) QtC.QCborError {
        return qtc.QCborParserError_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#error-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborParserError `
    ///
    /// ` error: QtC.QCborError `
    ///
    pub fn SetError(self: ?*anyopaque, _error: QtC.QCborError) void {
        qtc.QCborParserError_SetError(@ptrCast(self), @ptrCast(_error));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborParserError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborParserError_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborparsererror.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#dtor.QCborParserError)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QCborParserError `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborParserError_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)
pub const qcborvalue = struct {
    /// New constructs a new QCborValue object.
    ///
    pub fn New() QtC.QCborValue {
        return qtc.QCborValue_new();
    }

    /// New2 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` t_: qcborvalue_enums.Type `
    ///
    pub fn New2(t_: i32) QtC.QCborValue {
        return qtc.QCborValue_new2(@bitCast(t_));
    }

    /// New3 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` b_: bool `
    ///
    pub fn New3(b_: bool) QtC.QCborValue {
        return qtc.QCborValue_new3(b_);
    }

    /// New4 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` i: i32 `
    ///
    pub fn New4(i: i32) QtC.QCborValue {
        return qtc.QCborValue_new4(@bitCast(i));
    }

    /// New5 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` u: u32 `
    ///
    pub fn New5(u: u32) QtC.QCborValue {
        return qtc.QCborValue_new5(@bitCast(u));
    }

    /// New6 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` i: i64 `
    ///
    pub fn New6(i: i64) QtC.QCborValue {
        return qtc.QCborValue_new6(@bitCast(i));
    }

    /// New7 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` v: f64 `
    ///
    pub fn New7(v: f64) QtC.QCborValue {
        return qtc.QCborValue_new7(@bitCast(v));
    }

    /// New8 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn New8(st: u8) QtC.QCborValue {
        return qtc.QCborValue_new8(@bitCast(st));
    }

    /// New9 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` ba: []u8 `
    ///
    pub fn New9(ba: []u8) QtC.QCborValue {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };

        return qtc.QCborValue_new9(ba_str);
    }

    /// New10 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    pub fn New10(s: []const u8) QtC.QCborValue {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };

        return qtc.QCborValue_new10(s_str);
    }

    /// New11 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn New11(s: [:0]const u8) QtC.QCborValue {
        const s_Cstring = s.ptr;

        return qtc.QCborValue_new11(s_Cstring);
    }

    /// New12 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` a: QtC.QCborArray `
    ///
    pub fn New12(a: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new12(@ptrCast(a));
    }

    /// New13 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` m: QtC.QCborMap `
    ///
    pub fn New13(m: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new13(@ptrCast(m));
    }

    /// New14 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` tag: qcborcommon_enums.QCborTag `
    ///
    pub fn New14(tag: u64) QtC.QCborValue {
        return qtc.QCborValue_new14(@bitCast(tag));
    }

    /// New15 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` t_: qcborcommon_enums.QCborKnownTags `
    ///
    pub fn New15(t_: i32) QtC.QCborValue {
        return qtc.QCborValue_new15(@bitCast(t_));
    }

    /// New16 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` dt: QtC.QDateTime `
    ///
    pub fn New16(dt: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new16(@ptrCast(dt));
    }

    /// New17 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn New17(url: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new17(@ptrCast(url));
    }

    /// New18 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rx: QtC.QRegularExpression `
    ///
    pub fn New18(rx: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new18(@ptrCast(rx));
    }

    /// New19 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: QtC.QUuid `
    ///
    pub fn New19(uuid: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new19(@ptrCast(uuid));
    }

    /// New20 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QCborValue `
    ///
    pub fn New20(other: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new20(@ptrCast(other));
    }

    /// New21 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` tag: qcborcommon_enums.QCborTag `
    ///
    /// ` taggedValue: QtC.QCborValue `
    ///
    pub fn New21(tag: u64, taggedValue: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new21(@bitCast(tag), @ptrCast(taggedValue));
    }

    /// New22 constructs a new QCborValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` t_: qcborcommon_enums.QCborKnownTags `
    ///
    /// ` tv: QtC.QCborValue `
    ///
    pub fn New22(t_: i32, tv: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new22(@bitCast(t_), @ptrCast(tv));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` other: QtC.QCborValue `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborValue_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` other: QtC.QCborValue `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborValue_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ## Returns:
    ///
    /// ` qcborvalue_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QCborValue_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsInteger(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsInteger(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsByteArray(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsByteArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsString(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsString(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsArray(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsMap(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsMap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsTag(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsTag(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isFalse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsFalse(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsFalse(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isTrue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsTrue(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsTrue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsBool(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsBool(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsUndefined(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsUndefined(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsDouble(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsDouble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsDateTime(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsDateTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsUrl(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsRegularExpression(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsRegularExpression(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsUuid(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsUuid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isInvalid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsInvalid(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsInvalid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsContainer(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsContainer(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn IsSimpleType(self: ?*anyopaque) bool {
        return qtc.QCborValue_IsSimpleType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn IsSimpleType2(self: ?*anyopaque, st: u8) bool {
        return qtc.QCborValue_IsSimpleType2(@ptrCast(self), @bitCast(st));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborSimpleType `
    ///
    pub fn ToSimpleType(self: ?*anyopaque) u8 {
        return qtc.QCborValue_ToSimpleType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn ToInteger(self: ?*anyopaque) i64 {
        return qtc.QCborValue_ToInteger(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn ToBool(self: ?*anyopaque) bool {
        return qtc.QCborValue_ToBool(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn ToDouble(self: ?*anyopaque) f64 {
        return qtc.QCborValue_ToDouble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#tag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborTag `
    ///
    pub fn Tag(self: ?*anyopaque) u64 {
        return qtc.QCborValue_Tag(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn TaggedValue(self: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_TaggedValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValue_ToByteArray(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalue.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValue_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalue.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn ToDateTime(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QCborValue_ToDateTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn ToUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.QCborValue_ToUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn ToRegularExpression(self: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QCborValue_ToRegularExpression(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn ToUuid(self: ?*anyopaque) QtC.QUuid {
        return qtc.QCborValue_ToUuid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn ToArray(self: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborValue_ToArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` defaultValue: QtC.QCborArray `
    ///
    pub fn ToArray2(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborValue_ToArray2(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn ToMap(self: ?*anyopaque) QtC.QCborMap {
        return qtc.QCborValue_ToMap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` defaultValue: QtC.QCborMap `
    ///
    pub fn ToMap2(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QCborMap {
        return qtc.QCborValue_ToMap2(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript(self: ?*anyopaque, key: []const u8) QtC.QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborValue_OperatorSubscript(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` key: i64 `
    ///
    pub fn OperatorSubscript3(self: ?*anyopaque, key: i64) QtC.QCborValue {
        return qtc.QCborValue_OperatorSubscript3(@ptrCast(self), @bitCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` key: i64 `
    ///
    pub fn OperatorSubscript4(self: ?*anyopaque, key: i64) QtC.QCborValueRef {
        return qtc.QCborValue_OperatorSubscript4(@ptrCast(self), @bitCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript6(self: ?*anyopaque, key: []const u8) QtC.QCborValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborValue_OperatorSubscript6(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` other: QtC.QCborValue `
    ///
    pub fn Compare(self: ?*anyopaque, other: ?*anyopaque) i32 {
        return qtc.QCborValue_Compare(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` variant: QtC.QVariant `
    ///
    pub fn FromVariant(variant: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_FromVariant(@ptrCast(variant));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn ToVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QCborValue_ToVariant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromJsonValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: QtC.QJsonValue `
    ///
    pub fn FromJsonValue(v: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_FromJsonValue(@ptrCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toJsonValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn ToJsonValue(self: ?*anyopaque) QtC.QJsonValue {
        return qtc.QCborValue_ToJsonValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` reader: QtC.QCborStreamReader `
    ///
    pub fn FromCbor(reader: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_FromCbor(@ptrCast(reader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` ba: []u8 `
    ///
    pub fn FromCbor2(ba: []u8) QtC.QCborValue {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        return qtc.QCborValue_FromCbor2(ba_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn FromCbor3(data: [:0]const u8, lenVal: i64) QtC.QCborValue {
        const data_Cstring = data.ptr;
        return qtc.QCborValue_FromCbor3(data_Cstring, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn FromCbor4(data: *const u8, lenVal: i64) QtC.QCborValue {
        return qtc.QCborValue_FromCbor4(@ptrCast(data), @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToCbor(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValue_ToCbor(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalue.ToCbor: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` writer: QtC.QCborStreamWriter `
    ///
    pub fn ToCbor2(self: ?*anyopaque, writer: ?*anyopaque) void {
        qtc.QCborValue_ToCbor2(@ptrCast(self), @ptrCast(writer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDiagnosticNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToDiagnosticNotation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValue_ToDiagnosticNotation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalue.ToDiagnosticNotation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` defaultValue: qcborcommon_enums.QCborSimpleType `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborSimpleType `
    ///
    pub fn ToSimpleType1(self: ?*anyopaque, defaultValue: u8) u8 {
        return qtc.QCborValue_ToSimpleType1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn ToInteger1(self: ?*anyopaque, defaultValue: i64) i64 {
        return qtc.QCborValue_ToInteger1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn ToBool1(self: ?*anyopaque, defaultValue: bool) bool {
        return qtc.QCborValue_ToBool1(@ptrCast(self), defaultValue);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn ToDouble1(self: ?*anyopaque, defaultValue: f64) f64 {
        return qtc.QCborValue_ToDouble1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#tag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` defaultValue: qcborcommon_enums.QCborTag `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborTag `
    ///
    pub fn Tag1(self: ?*anyopaque, defaultValue: u64) u64 {
        return qtc.QCborValue_Tag1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` defaultValue: QtC.QCborValue `
    ///
    pub fn TaggedValue1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_TaggedValue1(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` defaultValue: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray1(self: ?*anyopaque, defaultValue: []u8, allocator: std.mem.Allocator) []u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCborValue_ToByteArray1(@ptrCast(self), defaultValue_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalue.ToByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString1(self: ?*anyopaque, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QCborValue_ToString1(@ptrCast(self), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalue.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` defaultValue: QtC.QDateTime `
    ///
    pub fn ToDateTime1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QDateTime {
        return qtc.QCborValue_ToDateTime1(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` defaultValue: QtC.QUrl `
    ///
    pub fn ToUrl1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QUrl {
        return qtc.QCborValue_ToUrl1(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` defaultValue: QtC.QRegularExpression `
    ///
    pub fn ToRegularExpression1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QCborValue_ToRegularExpression1(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` defaultValue: QtC.QUuid `
    ///
    pub fn ToUuid1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QUuid {
        return qtc.QCborValue_ToUuid1(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` ba: []u8 `
    ///
    /// ` errorVal: QtC.QCborParserError `
    ///
    pub fn FromCbor22(ba: []u8, errorVal: ?*anyopaque) QtC.QCborValue {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        return qtc.QCborValue_FromCbor22(ba_str, @ptrCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    /// ` errorVal: QtC.QCborParserError `
    ///
    pub fn FromCbor32(data: [:0]const u8, lenVal: i64, errorVal: ?*anyopaque) QtC.QCborValue {
        const data_Cstring = data.ptr;
        return qtc.QCborValue_FromCbor32(data_Cstring, @bitCast(lenVal), @ptrCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    /// ` errorVal: QtC.QCborParserError `
    ///
    pub fn FromCbor33(data: *const u8, lenVal: i64, errorVal: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_FromCbor33(@ptrCast(data), @bitCast(lenVal), @ptrCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` opt: flag of qcborvalue_enums.EncodingOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToCbor1(self: ?*anyopaque, opt: i32, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValue_ToCbor1(@ptrCast(self), @bitCast(opt));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalue.ToCbor1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` writer: QtC.QCborStreamWriter `
    ///
    /// ` opt: flag of qcborvalue_enums.EncodingOption `
    ///
    pub fn ToCbor22(self: ?*anyopaque, writer: ?*anyopaque, opt: i32) void {
        qtc.QCborValue_ToCbor22(@ptrCast(self), @ptrCast(writer), @bitCast(opt));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDiagnosticNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValue `
    ///
    /// ` opts: flag of qcborvalue_enums.DiagnosticNotationOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToDiagnosticNotation1(self: ?*anyopaque, opts: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValue_ToDiagnosticNotation1(@ptrCast(self), @bitCast(opts));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalue.ToDiagnosticNotation1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#dtor.QCborValue)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QCborValue `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborValue_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html)
pub const qcborvalueconstref = struct {
    /// New constructs a new QCborValueConstRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QCborValueConstRef `
    ///
    pub fn New(other: ?*anyopaque) QtC.QCborValueConstRef {
        return qtc.QCborValueConstRef_new(@ptrCast(other));
    }

    /// New2 constructs a new QCborValueConstRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QCborValueConstRef `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QCborValueConstRef {
        return qtc.QCborValueConstRef_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn ToQCborValue(self: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValueConstRef_ToQCborValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ## Returns:
    ///
    /// ` qcborvalue_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QCborValueConstRef_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsInteger(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsInteger(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsByteArray(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsByteArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsString(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsString(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsArray(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsMap(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsMap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsTag(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsTag(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isFalse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsFalse(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsFalse(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isTrue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsTrue(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsTrue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsBool(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsBool(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsUndefined(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsUndefined(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsDouble(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsDouble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsDateTime(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsDateTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsUrl(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsRegularExpression(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsRegularExpression(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsUuid(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsUuid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isInvalid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsInvalid(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsInvalid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsContainer(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsContainer(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn IsSimpleType(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_IsSimpleType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn IsSimpleType2(self: ?*anyopaque, st: u8) bool {
        return qtc.QCborValueConstRef_IsSimpleType2(@ptrCast(self), @bitCast(st));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborSimpleType `
    ///
    pub fn ToSimpleType(self: ?*anyopaque) u8 {
        return qtc.QCborValueConstRef_ToSimpleType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#tag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborTag `
    ///
    pub fn Tag(self: ?*anyopaque) u64 {
        return qtc.QCborValueConstRef_Tag(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn TaggedValue(self: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValueConstRef_TaggedValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn ToInteger(self: ?*anyopaque) i64 {
        return qtc.QCborValueConstRef_ToInteger(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn ToBool(self: ?*anyopaque) bool {
        return qtc.QCborValueConstRef_ToBool(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn ToDouble(self: ?*anyopaque) f64 {
        return qtc.QCborValueConstRef_ToDouble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueConstRef_ToByteArray(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueconstref.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValueConstRef_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueconstref.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn ToDateTime(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QCborValueConstRef_ToDateTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn ToUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.QCborValueConstRef_ToUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn ToRegularExpression(self: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QCborValueConstRef_ToRegularExpression(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn ToUuid(self: ?*anyopaque) QtC.QUuid {
        return qtc.QCborValueConstRef_ToUuid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn ToArray(self: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborValueConstRef_ToArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` a: QtC.QCborArray `
    ///
    pub fn ToArray2(self: ?*anyopaque, a: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborValueConstRef_ToArray2(@ptrCast(self), @ptrCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn ToMap(self: ?*anyopaque) QtC.QCborMap {
        return qtc.QCborValueConstRef_ToMap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` m: QtC.QCborMap `
    ///
    pub fn ToMap2(self: ?*anyopaque, m: ?*anyopaque) QtC.QCborMap {
        return qtc.QCborValueConstRef_ToMap2(@ptrCast(self), @ptrCast(m));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript(self: ?*anyopaque, key: []const u8) QtC.QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborValueConstRef_OperatorSubscript(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` key: i64 `
    ///
    pub fn OperatorSubscript3(self: ?*anyopaque, key: i64) QtC.QCborValue {
        return qtc.QCborValueConstRef_OperatorSubscript3(@ptrCast(self), @bitCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` other: QtC.QCborValue `
    ///
    pub fn Compare(self: ?*anyopaque, other: ?*anyopaque) i32 {
        return qtc.QCborValueConstRef_Compare(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn ToVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QCborValueConstRef_ToVariant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toJsonValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn ToJsonValue(self: ?*anyopaque) QtC.QJsonValue {
        return qtc.QCborValueConstRef_ToJsonValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToCbor(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueConstRef_ToCbor(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueconstref.ToCbor: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` writer: QtC.QCborStreamWriter `
    ///
    pub fn ToCbor2(self: ?*anyopaque, writer: ?*anyopaque) void {
        qtc.QCborValueConstRef_ToCbor2(@ptrCast(self), @ptrCast(writer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDiagnosticNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToDiagnosticNotation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValueConstRef_ToDiagnosticNotation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueconstref.ToDiagnosticNotation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` defaultValue: qcborcommon_enums.QCborSimpleType `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborSimpleType `
    ///
    pub fn ToSimpleType1(self: ?*anyopaque, defaultValue: u8) u8 {
        return qtc.QCborValueConstRef_ToSimpleType1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#tag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` defaultValue: qcborcommon_enums.QCborTag `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborTag `
    ///
    pub fn Tag1(self: ?*anyopaque, defaultValue: u64) u64 {
        return qtc.QCborValueConstRef_Tag1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` defaultValue: QtC.QCborValue `
    ///
    pub fn TaggedValue1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValueConstRef_TaggedValue1(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn ToInteger1(self: ?*anyopaque, defaultValue: i64) i64 {
        return qtc.QCborValueConstRef_ToInteger1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn ToBool1(self: ?*anyopaque, defaultValue: bool) bool {
        return qtc.QCborValueConstRef_ToBool1(@ptrCast(self), defaultValue);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn ToDouble1(self: ?*anyopaque, defaultValue: f64) f64 {
        return qtc.QCborValueConstRef_ToDouble1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` defaultValue: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray1(self: ?*anyopaque, defaultValue: []u8, allocator: std.mem.Allocator) []u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCborValueConstRef_ToByteArray1(@ptrCast(self), defaultValue_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueconstref.ToByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString1(self: ?*anyopaque, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QCborValueConstRef_ToString1(@ptrCast(self), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueconstref.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` defaultValue: QtC.QDateTime `
    ///
    pub fn ToDateTime1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QDateTime {
        return qtc.QCborValueConstRef_ToDateTime1(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` defaultValue: QtC.QUrl `
    ///
    pub fn ToUrl1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QUrl {
        return qtc.QCborValueConstRef_ToUrl1(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` defaultValue: QtC.QRegularExpression `
    ///
    pub fn ToRegularExpression1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QCborValueConstRef_ToRegularExpression1(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` defaultValue: QtC.QUuid `
    ///
    pub fn ToUuid1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QUuid {
        return qtc.QCborValueConstRef_ToUuid1(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` opt: flag of qcborvalue_enums.EncodingOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToCbor1(self: ?*anyopaque, opt: i32, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueConstRef_ToCbor1(@ptrCast(self), @bitCast(opt));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueconstref.ToCbor1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` writer: QtC.QCborStreamWriter `
    ///
    /// ` opt: flag of qcborvalue_enums.EncodingOption `
    ///
    pub fn ToCbor22(self: ?*anyopaque, writer: ?*anyopaque, opt: i32) void {
        qtc.QCborValueConstRef_ToCbor22(@ptrCast(self), @ptrCast(writer), @bitCast(opt));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDiagnosticNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    /// ` opt: flag of qcborvalue_enums.DiagnosticNotationOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToDiagnosticNotation1(self: ?*anyopaque, opt: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValueConstRef_ToDiagnosticNotation1(@ptrCast(self), @bitCast(opt));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueconstref.ToDiagnosticNotation1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#dtor.QCborValueConstRef)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QCborValueConstRef `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborValueConstRef_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html)
pub const qcborvalueref = struct {
    /// New constructs a new QCborValueRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QCborValueRef `
    ///
    pub fn New(other: ?*anyopaque) QtC.QCborValueRef {
        return qtc.QCborValueRef_new(@ptrCast(other));
    }

    /// New2 constructs a new QCborValueRef object and invalidates the source QCborValueRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QCborValueRef `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QCborValueRef {
        return qtc.QCborValueRef_new2(@ptrCast(other));
    }

    /// New3 constructs a new QCborValueRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QCborValueRef `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QCborValueRef {
        return qtc.QCborValueRef_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` other: QtC.QCborValue `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborValueRef_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` other: QtC.QCborValueRef `
    ///
    pub fn OperatorAssign2(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborValueRef_OperatorAssign2(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` key: i64 `
    ///
    pub fn OperatorSubscript(self: ?*anyopaque, key: i64) QtC.QCborValueRef {
        return qtc.QCborValueRef_OperatorSubscript(@ptrCast(self), @bitCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript3(self: ?*anyopaque, key: []const u8) QtC.QCborValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborValueRef_OperatorSubscript3(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn ToQCborValue(self: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValueRef_ToQCborValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ## Returns:
    ///
    /// ` qcborvalue_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QCborValueRef_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsInteger(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsInteger(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsByteArray(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsByteArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsString(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsString(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsArray(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsMap(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsMap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsTag(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsTag(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isFalse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsFalse(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsFalse(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isTrue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsTrue(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsTrue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsBool(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsBool(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsUndefined(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsUndefined(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsDouble(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsDouble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsDateTime(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsDateTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsUrl(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsRegularExpression(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsRegularExpression(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsUuid(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsUuid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isInvalid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsInvalid(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsInvalid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsContainer(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsContainer(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn IsSimpleType(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_IsSimpleType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn IsSimpleType2(self: ?*anyopaque, st: u8) bool {
        return qtc.QCborValueRef_IsSimpleType2(@ptrCast(self), @bitCast(st));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborSimpleType `
    ///
    pub fn ToSimpleType(self: ?*anyopaque) u8 {
        return qtc.QCborValueRef_ToSimpleType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#tag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborTag `
    ///
    pub fn Tag(self: ?*anyopaque) u64 {
        return qtc.QCborValueRef_Tag(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn TaggedValue(self: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValueRef_TaggedValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn ToInteger(self: ?*anyopaque) i64 {
        return qtc.QCborValueRef_ToInteger(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn ToBool(self: ?*anyopaque) bool {
        return qtc.QCborValueRef_ToBool(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn ToDouble(self: ?*anyopaque) f64 {
        return qtc.QCborValueRef_ToDouble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueRef_ToByteArray(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueref.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValueRef_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueref.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn ToDateTime(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QCborValueRef_ToDateTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn ToUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.QCborValueRef_ToUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn ToRegularExpression(self: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QCborValueRef_ToRegularExpression(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn ToUuid(self: ?*anyopaque) QtC.QUuid {
        return qtc.QCborValueRef_ToUuid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn ToArray(self: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborValueRef_ToArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` a: QtC.QCborArray `
    ///
    pub fn ToArray2(self: ?*anyopaque, a: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborValueRef_ToArray2(@ptrCast(self), @ptrCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn ToMap(self: ?*anyopaque) QtC.QCborMap {
        return qtc.QCborValueRef_ToMap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` m: QtC.QCborMap `
    ///
    pub fn ToMap2(self: ?*anyopaque, m: ?*anyopaque) QtC.QCborMap {
        return qtc.QCborValueRef_ToMap2(@ptrCast(self), @ptrCast(m));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript4(self: ?*anyopaque, key: []const u8) QtC.QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborValueRef_OperatorSubscript4(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` key: i64 `
    ///
    pub fn OperatorSubscript6(self: ?*anyopaque, key: i64) QtC.QCborValue {
        return qtc.QCborValueRef_OperatorSubscript6(@ptrCast(self), @bitCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` other: QtC.QCborValue `
    ///
    pub fn Compare(self: ?*anyopaque, other: ?*anyopaque) i32 {
        return qtc.QCborValueRef_Compare(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn ToVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QCborValueRef_ToVariant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toJsonValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn ToJsonValue(self: ?*anyopaque) QtC.QJsonValue {
        return qtc.QCborValueRef_ToJsonValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToCbor(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueRef_ToCbor(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueref.ToCbor: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` writer: QtC.QCborStreamWriter `
    ///
    pub fn ToCbor2(self: ?*anyopaque, writer: ?*anyopaque) void {
        qtc.QCborValueRef_ToCbor2(@ptrCast(self), @ptrCast(writer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDiagnosticNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToDiagnosticNotation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValueRef_ToDiagnosticNotation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueref.ToDiagnosticNotation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` defaultValue: qcborcommon_enums.QCborSimpleType `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborSimpleType `
    ///
    pub fn ToSimpleType1(self: ?*anyopaque, defaultValue: u8) u8 {
        return qtc.QCborValueRef_ToSimpleType1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#tag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` defaultValue: qcborcommon_enums.QCborTag `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborTag `
    ///
    pub fn Tag1(self: ?*anyopaque, defaultValue: u64) u64 {
        return qtc.QCborValueRef_Tag1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#taggedValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` defaultValue: QtC.QCborValue `
    ///
    pub fn TaggedValue1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValueRef_TaggedValue1(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn ToInteger1(self: ?*anyopaque, defaultValue: i64) i64 {
        return qtc.QCborValueRef_ToInteger1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn ToBool1(self: ?*anyopaque, defaultValue: bool) bool {
        return qtc.QCborValueRef_ToBool1(@ptrCast(self), defaultValue);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn ToDouble1(self: ?*anyopaque, defaultValue: f64) f64 {
        return qtc.QCborValueRef_ToDouble1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` defaultValue: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray1(self: ?*anyopaque, defaultValue: []u8, allocator: std.mem.Allocator) []u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCborValueRef_ToByteArray1(@ptrCast(self), defaultValue_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueref.ToByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString1(self: ?*anyopaque, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QCborValueRef_ToString1(@ptrCast(self), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueref.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` defaultValue: QtC.QDateTime `
    ///
    pub fn ToDateTime1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QDateTime {
        return qtc.QCborValueRef_ToDateTime1(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` defaultValue: QtC.QUrl `
    ///
    pub fn ToUrl1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QUrl {
        return qtc.QCborValueRef_ToUrl1(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` defaultValue: QtC.QRegularExpression `
    ///
    pub fn ToRegularExpression1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QCborValueRef_ToRegularExpression1(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` defaultValue: QtC.QUuid `
    ///
    pub fn ToUuid1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QUuid {
        return qtc.QCborValueRef_ToUuid1(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` opt: flag of qcborvalue_enums.EncodingOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToCbor1(self: ?*anyopaque, opt: i32, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborValueRef_ToCbor1(@ptrCast(self), @bitCast(opt));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueref.ToCbor1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` writer: QtC.QCborStreamWriter `
    ///
    /// ` opt: flag of qcborvalue_enums.EncodingOption `
    ///
    pub fn ToCbor22(self: ?*anyopaque, writer: ?*anyopaque, opt: i32) void {
        qtc.QCborValueRef_ToCbor22(@ptrCast(self), @ptrCast(writer), @bitCast(opt));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDiagnosticNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    /// ` opt: flag of qcborvalue_enums.DiagnosticNotationOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToDiagnosticNotation1(self: ?*anyopaque, opt: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborValueRef_ToDiagnosticNotation1(@ptrCast(self), @bitCast(opt));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueref.ToDiagnosticNotation1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#dtor.QCborValueRef)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QCborValueRef `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborValueRef_Delete(@ptrCast(self));
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
