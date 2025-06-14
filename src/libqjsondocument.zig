const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qjsondocument_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qjsonparseerror.html
pub const qjsonparseerror = struct {
    /// New constructs a new QJsonParseError object.
    ///
    /// ``` other: QtC.QJsonParseError ```
    pub fn New(other: ?*anyopaque) QtC.QJsonParseError {
        return qtc.QJsonParseError_new(@ptrCast(other));
    }

    /// New2 constructs a new QJsonParseError object and invalidates the source QJsonParseError object.
    ///
    /// ``` other: QtC.QJsonParseError ```
    pub fn New2(other: ?*anyopaque) QtC.QJsonParseError {
        return qtc.QJsonParseError_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QJsonParseError, other: QtC.QJsonParseError ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonParseError_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QJsonParseError, other: QtC.QJsonParseError ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonParseError_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonparseerror.html#errorString)
    ///
    /// ``` self: QtC.QJsonParseError, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QJsonParseError_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonparseerror.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonparseerror.html#dtor.QJsonParseError)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QJsonParseError ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonParseError_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsondocument.html
pub const qjsondocument = struct {
    /// New constructs a new QJsonDocument object.
    ///
    ///
    pub fn New() QtC.QJsonDocument {
        return qtc.QJsonDocument_new();
    }

    /// New2 constructs a new QJsonDocument object.
    ///
    /// ``` object: QtC.QJsonObject ```
    pub fn New2(object: ?*anyopaque) QtC.QJsonDocument {
        return qtc.QJsonDocument_new2(@ptrCast(object));
    }

    /// New3 constructs a new QJsonDocument object.
    ///
    /// ``` array: QtC.QJsonArray ```
    pub fn New3(array: ?*anyopaque) QtC.QJsonDocument {
        return qtc.QJsonDocument_new3(@ptrCast(array));
    }

    /// New4 constructs a new QJsonDocument object.
    ///
    /// ``` other: QtC.QJsonDocument ```
    pub fn New4(other: ?*anyopaque) QtC.QJsonDocument {
        return qtc.QJsonDocument_new4(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator=)
    ///
    /// ``` self: QtC.QJsonDocument, other: QtC.QJsonDocument ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonDocument_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#swap)
    ///
    /// ``` self: QtC.QJsonDocument, other: QtC.QJsonDocument ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonDocument_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#fromVariant)
    ///
    /// ``` variant: QtC.QVariant ```
    pub fn FromVariant(variant: ?*anyopaque) QtC.QJsonDocument {
        return qtc.QJsonDocument_FromVariant(@ptrCast(variant));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#toVariant)
    ///
    /// ``` self: QtC.QJsonDocument ```
    pub fn ToVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QJsonDocument_ToVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#fromJson)
    ///
    /// ``` json: []u8 ```
    pub fn FromJson(json: []u8) QtC.QJsonDocument {
        const json_str = qtc.struct_libqt_string{
            .len = json.len,
            .data = json.ptr,
        };
        return qtc.QJsonDocument_FromJson(json_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#toJson)
    ///
    /// ``` self: QtC.QJsonDocument, allocator: std.mem.Allocator ```
    pub fn ToJson(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QJsonDocument_ToJson(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qjsondocument.ToJson: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#isEmpty)
    ///
    /// ``` self: QtC.QJsonDocument ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QJsonDocument_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#isArray)
    ///
    /// ``` self: QtC.QJsonDocument ```
    pub fn IsArray(self: ?*anyopaque) bool {
        return qtc.QJsonDocument_IsArray(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#isObject)
    ///
    /// ``` self: QtC.QJsonDocument ```
    pub fn IsObject(self: ?*anyopaque) bool {
        return qtc.QJsonDocument_IsObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#object)
    ///
    /// ``` self: QtC.QJsonDocument ```
    pub fn Object(self: ?*anyopaque) QtC.QJsonObject {
        return qtc.QJsonDocument_Object(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#array)
    ///
    /// ``` self: QtC.QJsonDocument ```
    pub fn Array(self: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonDocument_Array(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#setObject)
    ///
    /// ``` self: QtC.QJsonDocument, object: QtC.QJsonObject ```
    pub fn SetObject(self: ?*anyopaque, object: ?*anyopaque) void {
        qtc.QJsonDocument_SetObject(@ptrCast(self), @ptrCast(object));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#setArray)
    ///
    /// ``` self: QtC.QJsonDocument, array: QtC.QJsonArray ```
    pub fn SetArray(self: ?*anyopaque, array: ?*anyopaque) void {
        qtc.QJsonDocument_SetArray(@ptrCast(self), @ptrCast(array));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator[])
    ///
    /// ``` self: QtC.QJsonDocument, key: []const u8 ```
    pub fn OperatorSubscript(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonDocument_OperatorSubscript(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator[])
    ///
    /// ``` self: QtC.QJsonDocument, i: i64 ```
    pub fn OperatorSubscriptWithQsizetype(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonDocument_OperatorSubscriptWithQsizetype(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator==)
    ///
    /// ``` self: QtC.QJsonDocument, other: QtC.QJsonDocument ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonDocument_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator!=)
    ///
    /// ``` self: QtC.QJsonDocument, other: QtC.QJsonDocument ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonDocument_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#isNull)
    ///
    /// ``` self: QtC.QJsonDocument ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QJsonDocument_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#fromJson)
    ///
    /// ``` json: []u8, errorVal: QtC.QJsonParseError ```
    pub fn FromJson2(json: []u8, errorVal: ?*anyopaque) QtC.QJsonDocument {
        const json_str = qtc.struct_libqt_string{
            .len = json.len,
            .data = json.ptr,
        };
        return qtc.QJsonDocument_FromJson2(json_str, @ptrCast(errorVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#toJson)
    ///
    /// ``` self: QtC.QJsonDocument, format: qjsondocument_enums.JsonFormat, allocator: std.mem.Allocator ```
    pub fn ToJson1(self: ?*anyopaque, format: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QJsonDocument_ToJson1(@ptrCast(self), @intCast(format));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qjsondocument.ToJson1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#dtor.QJsonDocument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QJsonDocument ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonDocument_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsondocument.html#types
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
