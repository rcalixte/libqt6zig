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

    /// New constructs a new QJsonParseError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonParseError `
    ///
    pub fn New(other: anytype) QJsonParseError {
        comptime _ = @TypeOf(other)._is_QJsonParseError;
        return .{ .ptr = qtc.QJsonParseError_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QJsonParseError object and invalidates the source QJsonParseError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonParseError `
    ///
    pub fn New2(other: anytype) QJsonParseError {
        comptime _ = @TypeOf(other)._is_QJsonParseError;
        return .{ .ptr = qtc.QJsonParseError_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QJsonParseError `
    ///
    /// ` other: QJsonParseError `
    ///
    pub fn CopyAssign(self: QJsonParseError, other: QJsonParseError) void {
        qtc.QJsonParseError_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QJsonParseError `
    ///
    /// ` other: QJsonParseError `
    ///
    pub fn MoveAssign(self: QJsonParseError, other: QJsonParseError) void {
        qtc.QJsonParseError_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonparseerror.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonParseError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QJsonParseError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJsonParseError_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonparseerror.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonparseerror.html#offset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonParseError `
    ///
    pub fn Offset(self: QJsonParseError) i32 {
        return qtc.QJsonParseError_Offset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonparseerror.html#offset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonParseError `
    ///
    /// ` offset: i32 `
    ///
    pub fn SetOffset(self: QJsonParseError, offset: i32) void {
        qtc.QJsonParseError_SetOffset(@ptrCast(self.ptr), @bitCast(offset));
    }

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
    pub fn Error(self: QJsonParseError) i32 {
        return qtc.QJsonParseError_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonparseerror.html#error-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonParseError `
    ///
    /// ` error: qjsondocument_enums.ParseError `
    ///
    pub fn SetError(self: QJsonParseError, _error: i32) void {
        qtc.QJsonParseError_SetError(@ptrCast(self.ptr), @bitCast(_error));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonparseerror.html#dtor.QJsonParseError)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonParseError `
    ///
    pub fn Delete(self: QJsonParseError) void {
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

    /// New constructs a new QJsonDocument object.
    ///
    pub fn New() QJsonDocument {
        return .{ .ptr = qtc.QJsonDocument_new() };
    }

    /// New2 constructs a new QJsonDocument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QJsonObject `
    ///
    pub fn New2(object: anytype) QJsonDocument {
        comptime _ = @TypeOf(object)._is_QJsonObject;
        return .{ .ptr = qtc.QJsonDocument_new2(@ptrCast(object.ptr)) };
    }

    /// New3 constructs a new QJsonDocument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` array: QJsonArray `
    ///
    pub fn New3(array: anytype) QJsonDocument {
        comptime _ = @TypeOf(array)._is_QJsonArray;
        return .{ .ptr = qtc.QJsonDocument_new3(@ptrCast(array.ptr)) };
    }

    /// New4 constructs a new QJsonDocument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonDocument `
    ///
    pub fn New4(other: anytype) QJsonDocument {
        comptime _ = @TypeOf(other)._is_QJsonDocument;
        return .{ .ptr = qtc.QJsonDocument_new4(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` other: QJsonDocument `
    ///
    pub fn OperatorAssign(self: QJsonDocument, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonDocument;
        qtc.QJsonDocument_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` other: QJsonDocument `
    ///
    pub fn Swap(self: QJsonDocument, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonDocument;
        qtc.QJsonDocument_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#fromVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` variant: QVariant `
    ///
    pub fn FromVariant(variant: anytype) QJsonDocument {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QJsonDocument_FromVariant(@ptrCast(variant.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    pub fn ToVariant(self: QJsonDocument) QVariant {
        return .{ .ptr = qtc.QJsonDocument_ToVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#fromJson)
    ///
    /// ## Parameter(s):
    ///
    /// ` json: []u8 `
    ///
    pub fn FromJson(json: []u8) QJsonDocument {
        const json_str = qtc.libqt_string{
            .len = json.len,
            .data = json.ptr,
        };
        return .{ .ptr = qtc.QJsonDocument_FromJson(json_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#toJson)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToJson(self: QJsonDocument, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QJsonDocument_ToJson(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qjsondocument.ToJson: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    pub fn IsEmpty(self: QJsonDocument) bool {
        return qtc.QJsonDocument_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    pub fn IsArray(self: QJsonDocument) bool {
        return qtc.QJsonDocument_IsArray(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#isObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    pub fn IsObject(self: QJsonDocument) bool {
        return qtc.QJsonDocument_IsObject(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    pub fn Object(self: QJsonDocument) QJsonObject {
        return .{ .ptr = qtc.QJsonDocument_Object(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#array)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    pub fn Array(self: QJsonDocument) QJsonArray {
        return .{ .ptr = qtc.QJsonDocument_Array(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#setObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` object: QJsonObject `
    ///
    pub fn SetObject(self: QJsonDocument, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QJsonObject;
        qtc.QJsonDocument_SetObject(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#setArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` array: QJsonArray `
    ///
    pub fn SetArray(self: QJsonDocument, array: anytype) void {
        comptime _ = @TypeOf(array)._is_QJsonArray;
        qtc.QJsonDocument_SetArray(@ptrCast(self.ptr), @ptrCast(array.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript(self: QJsonDocument, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonDocument_OperatorSubscript(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    /// ` i: isize `
    ///
    pub fn OperatorSubscript4(self: QJsonDocument, i: isize) QJsonValue {
        return .{ .ptr = qtc.QJsonDocument_OperatorSubscript4(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonDocument `
    ///
    pub fn IsNull(self: QJsonDocument) bool {
        return qtc.QJsonDocument_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#fromJson)
    ///
    /// ## Parameter(s):
    ///
    /// ` json: []u8 `
    ///
    /// ` errorVal: QJsonParseError `
    ///
    pub fn FromJson2(json: []u8, errorVal: anytype) QJsonDocument {
        const json_str = qtc.libqt_string{
            .len = json.len,
            .data = json.ptr,
        };
        comptime _ = @TypeOf(errorVal)._is_QJsonParseError;
        return .{ .ptr = qtc.QJsonDocument_FromJson2(json_str, @ptrCast(errorVal.ptr)) };
    }

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
    pub fn ToJson1(self: QJsonDocument, allocator: std.mem.Allocator, format: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QJsonDocument_ToJson1(@ptrCast(self.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qjsondocument.ToJson1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#dtor.QJsonDocument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonDocument `
    ///
    pub fn Delete(self: QJsonDocument) void {
        qtc.QJsonDocument_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsondocument.html#public-types)
pub const enums = struct {
    pub const ParseError = enum(i32) {
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

    pub const JsonFormat = enum(i32) {
        pub const Indented: i32 = 0;
        pub const Compact: i32 = 1;
    };
};
