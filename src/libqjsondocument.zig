const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QJsonArray = @import("libqt6").QJsonArray;
const QJsonObject = @import("libqt6").QJsonObject;
const QJsonValue = @import("libqt6").QJsonValue;
const QVariant = @import("libqt6").QVariant;
const qjsondocument_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonparseerror.html)
pub const QJsonParseError = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonparseerror.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJsonParseError,

    pub const _is_QJsonParseError = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJsonParseError object in C++ memory
    ///
    pub fn new() QJsonParseError {
        return .{ .ptr = qtc.QJsonParseError_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJsonParseError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonParseError `
    ///
    pub fn new2(other: anytype) QJsonParseError {
        comptime _ = @TypeOf(other)._is_QJsonParseError;
        return .{ .ptr = qtc.QJsonParseError_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QJsonParseError object and invalidate the source QJsonParseError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonParseError `
    ///
    pub fn new3(other: anytype) QJsonParseError {
        comptime _ = @TypeOf(other)._is_QJsonParseError;
        return .{ .ptr = qtc.QJsonParseError_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QJsonParseError `
    ///
    /// ` other: QJsonParseError `
    ///
    pub fn copyAssign(self: QJsonParseError, other: QJsonParseError) void {
        qtc.QJsonParseError_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QJsonParseError `
    ///
    /// ` other: QJsonParseError `
    ///
    pub fn moveAssign(self: QJsonParseError, other: QJsonParseError) void {
        qtc.QJsonParseError_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonparseerror.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonParseError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QJsonParseError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJsonParseError_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJsonParseError.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `offset` instead
    ///
    pub const Offset = offset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonparseerror.html#offset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonParseError `
    ///
    pub fn offset(self: QJsonParseError) i32 {
        return qtc.QJsonParseError_Offset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOffset` instead
    ///
    pub const SetOffset = setOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonparseerror.html#offset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonParseError `
    ///
    /// ` _offset: i32 `
    ///
    pub fn setOffset(self: QJsonParseError, _offset: i32) void {
        qtc.QJsonParseError_SetOffset(@ptrCast(self.ptr), @bitCast(_offset));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonparseerror.html#error-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonParseError `
    ///
    /// ## Returns:
    ///
    /// ` qjsondocument_enums.ParseError `
    ///
    pub fn error0(self: QJsonParseError) i32 {
        return qtc.QJsonParseError_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setError` instead
    ///
    pub const SetError = setError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonparseerror.html#error-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonParseError `
    ///
    /// ` _error: qjsondocument_enums.ParseError `
    ///
    pub fn setError(self: QJsonParseError, _error: i32) void {
        qtc.QJsonParseError_SetError(@ptrCast(self.ptr), @bitCast(_error));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonparseerror.html#dtor.QJsonParseError)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonParseError `
    ///
    pub fn delete(self: QJsonParseError) void {
        qtc.QJsonParseError_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html)
pub const QJsonDocument = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJsonDocument,

    pub const _is_QJsonDocument = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJsonDocument object in C++ memory
    ///
    pub fn new() QJsonDocument {
        return .{ .ptr = qtc.QJsonDocument_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJsonDocument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _object: QJsonObject `
    ///
    pub fn new2(_object: anytype) QJsonDocument {
        comptime _ = @TypeOf(_object)._is_QJsonObject;
        return .{ .ptr = qtc.QJsonDocument_new2(@ptrCast(_object.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QJsonDocument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _array: QJsonArray `
    ///
    pub fn new3(_array: anytype) QJsonDocument {
        comptime _ = @TypeOf(_array)._is_QJsonArray;
        return .{ .ptr = qtc.QJsonDocument_new3(@ptrCast(_array.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QJsonDocument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonDocument `
    ///
    pub fn new4(other: anytype) QJsonDocument {
        comptime _ = @TypeOf(other)._is_QJsonDocument;
        return .{ .ptr = qtc.QJsonDocument_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` other: QJsonDocument `
    ///
    pub fn operatorAssign(self: QJsonDocument, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonDocument;
        qtc.QJsonDocument_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` other: QJsonDocument `
    ///
    pub fn swap(self: QJsonDocument, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonDocument;
        qtc.QJsonDocument_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `fromVariant` instead
    ///
    pub const FromVariant = fromVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#fromVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` variant: QVariant `
    ///
    pub fn fromVariant(variant: anytype) QJsonDocument {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QJsonDocument_FromVariant(@ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `toVariant` instead
    ///
    pub const ToVariant = toVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    pub fn toVariant(self: QJsonDocument) QVariant {
        return .{ .ptr = qtc.QJsonDocument_ToVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fromJson` instead
    ///
    pub const FromJson = fromJson;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#fromJson)
    ///
    /// ## Parameter(s):
    ///
    /// ` json: []u8 `
    ///
    pub fn fromJson(json: []u8) QJsonDocument {
        const json_str = qtc.libqt_string{
            .len = json.len,
            .data = json.ptr,
        };
        return .{ .ptr = qtc.QJsonDocument_FromJson(json_str) };
    }

    /// ### DEPRECATED: Use `toJson` instead
    ///
    pub const ToJson = toJson;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#toJson)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toJson(self: QJsonDocument, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QJsonDocument_ToJson(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QJsonDocument.toJson: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    pub fn isEmpty(self: QJsonDocument) bool {
        return qtc.QJsonDocument_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isArray` instead
    ///
    pub const IsArray = isArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    pub fn isArray(self: QJsonDocument) bool {
        return qtc.QJsonDocument_IsArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isObject` instead
    ///
    pub const IsObject = isObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#isObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    pub fn isObject(self: QJsonDocument) bool {
        return qtc.QJsonDocument_IsObject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    pub fn object(self: QJsonDocument) QJsonObject {
        return .{ .ptr = qtc.QJsonDocument_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `array` instead
    ///
    pub const Array = array;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#array)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    pub fn array(self: QJsonDocument) QJsonArray {
        return .{ .ptr = qtc.QJsonDocument_Array(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setObject` instead
    ///
    pub const SetObject = setObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#setObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` _object: QJsonObject `
    ///
    pub fn setObject(self: QJsonDocument, _object: anytype) void {
        comptime _ = @TypeOf(_object)._is_QJsonObject;
        qtc.QJsonDocument_SetObject(@ptrCast(self.ptr), @ptrCast(_object.ptr));
    }

    /// ### DEPRECATED: Use `setArray` instead
    ///
    pub const SetArray = setArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#setArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` _array: QJsonArray `
    ///
    pub fn setArray(self: QJsonDocument, _array: anytype) void {
        comptime _ = @TypeOf(_array)._is_QJsonArray;
        qtc.QJsonDocument_SetArray(@ptrCast(self.ptr), @ptrCast(_array.ptr));
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript(self: QJsonDocument, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonDocument_OperatorSubscript(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript2(self: QJsonDocument, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonDocument_OperatorSubscript2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript3` instead
    ///
    pub const OperatorSubscript3 = operatorSubscript3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` key: []u8 `
    ///
    pub fn operatorSubscript3(self: QJsonDocument, key: []u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonDocument_OperatorSubscript3(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript4` instead
    ///
    pub const OperatorSubscript4 = operatorSubscript4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` i: isize `
    ///
    pub fn operatorSubscript4(self: QJsonDocument, i: isize) QJsonValue {
        return .{ .ptr = qtc.QJsonDocument_OperatorSubscript4(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    pub fn isNull(self: QJsonDocument) bool {
        return qtc.QJsonDocument_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromJson2` instead
    ///
    pub const FromJson2 = fromJson2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#fromJson)
    ///
    /// ## Parameter(s):
    ///
    /// ` json: []u8 `
    ///
    /// ` errorVal: QJsonParseError `
    ///
    pub fn fromJson2(json: []u8, errorVal: anytype) QJsonDocument {
        const json_str = qtc.libqt_string{
            .len = json.len,
            .data = json.ptr,
        };
        comptime _ = @TypeOf(errorVal)._is_QJsonParseError;
        return .{ .ptr = qtc.QJsonDocument_FromJson2(json_str, @ptrCast(errorVal.ptr)) };
    }

    /// ### DEPRECATED: Use `toJson1` instead
    ///
    pub const ToJson1 = toJson1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#toJson)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` format: qjsondocument_enums.JsonFormat `
    ///
    pub fn toJson1(self: QJsonDocument, allocator: std.mem.Allocator, format: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QJsonDocument_ToJson1(@ptrCast(self.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QJsonDocument.toJson1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#dtor.QJsonDocument)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonDocument `
    ///
    pub fn delete(self: QJsonDocument) void {
        qtc.QJsonDocument_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#public-types)
pub const enums = struct {
    pub const ParseError = enum {
        pub const NoError: i32 = 0;
        pub const UnterminatedObject: i32 = 1;
        pub const MissingNameSeparator: i32 = 2;
        pub const UnterminatedArray: i32 = 3;
        pub const MissingValueSeparator: i32 = 4;
        pub const IllegalValue: i32 = 5;
        pub const TerminationByNumber: i32 = 6;
        pub const IllegalNumber: i32 = 7;
        pub const IllegalEscapeSequence: i32 = 8;
        pub const IllegalUTF8String: i32 = 9;
        pub const UnterminatedString: i32 = 10;
        pub const MissingObject: i32 = 11;
        pub const DeepNesting: i32 = 12;
        pub const DocumentTooLarge: i32 = 13;
        pub const GarbageAtEnd: i32 = 14;
    };

    pub const JsonFormat = enum {
        pub const Indented: i32 = 0;
        pub const Compact: i32 = 1;
    };
};
