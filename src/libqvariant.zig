const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qvariant_enums = enums;
const std = @import("std");
pub const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// https://doc.qt.io/qt-6/qvariant.html
pub const qvariant = struct {
    /// New constructs a new QVariant object.
    ///
    ///
    pub fn New() QtC.QVariant {
        return qtc.QVariant_new();
    }

    /// New2 constructs a new QVariant object.
    ///
    /// ``` typeVal: QtC.QMetaType ```
    pub fn New2(typeVal: QtC.QMetaType) QtC.QVariant {
        return qtc.QVariant_new2(@ptrCast(typeVal));
    }

    /// New3 constructs a new QVariant object.
    ///
    /// ``` other: QtC.QVariant ```
    pub fn New3(other: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new3(@ptrCast(other));
    }

    /// New4 constructs a new QVariant object.
    ///
    /// ``` i: i32 ```
    pub fn New4(i: i32) QtC.QVariant {
        return qtc.QVariant_new4(@intCast(i));
    }

    /// New5 constructs a new QVariant object.
    ///
    /// ``` ui: u32 ```
    pub fn New5(ui: u32) QtC.QVariant {
        return qtc.QVariant_new5(@intCast(ui));
    }

    /// New6 constructs a new QVariant object.
    ///
    /// ``` ll: i64 ```
    pub fn New6(ll: i64) QtC.QVariant {
        return qtc.QVariant_new6(@intCast(ll));
    }

    /// New7 constructs a new QVariant object.
    ///
    /// ``` ull: u64 ```
    pub fn New7(ull: u64) QtC.QVariant {
        return qtc.QVariant_new7(@intCast(ull));
    }

    /// New8 constructs a new QVariant object.
    ///
    /// ``` b: bool ```
    pub fn New8(b: bool) QtC.QVariant {
        return qtc.QVariant_new8(b);
    }

    /// New9 constructs a new QVariant object.
    ///
    /// ``` d: f64 ```
    pub fn New9(d: f64) QtC.QVariant {
        return qtc.QVariant_new9(@floatCast(d));
    }

    /// New10 constructs a new QVariant object.
    ///
    /// ``` f: f32 ```
    pub fn New10(f: f32) QtC.QVariant {
        return qtc.QVariant_new10(@floatCast(f));
    }

    /// New11 constructs a new QVariant object.
    ///
    /// ``` str: []const u8 ```
    pub fn New11(str: []const u8) QtC.QVariant {
        const str_Cstring = str.ptr;

        return qtc.QVariant_new11(str_Cstring);
    }

    /// New12 constructs a new QVariant object.
    ///
    /// ``` bytearray: []u8 ```
    pub fn New12(bytearray: []u8) QtC.QVariant {
        const bytearray_str = qtc.struct_libqt_string{
            .len = bytearray.len,
            .data = bytearray.ptr,
        };

        return qtc.QVariant_new12(bytearray_str);
    }

    /// New13 constructs a new QVariant object.
    ///
    /// ``` bitarray: QtC.QBitArray ```
    pub fn New13(bitarray: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new13(@ptrCast(bitarray));
    }

    /// New14 constructs a new QVariant object.
    ///
    /// ``` stringVal: []const u8 ```
    pub fn New14(stringVal: []const u8) QtC.QVariant {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };

        return qtc.QVariant_new14(stringVal_str);
    }

    /// New15 constructs a new QVariant object.
    ///
    /// ``` stringlist: [][]const u8, allocator: std.mem.Allocator ```
    pub fn New15(stringlist: [][]const u8, allocator: std.mem.Allocator) QtC.QVariant {
        var stringlist_arr = allocator.alloc(qtc.struct_libqt_string, stringlist.len) catch @panic("qvariant.: Memory allocation failed");
        defer allocator.free(stringlist_arr);
        for (stringlist, 0..stringlist.len) |item, i| {
            stringlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const stringlist_list = qtc.struct_libqt_list{
            .len = stringlist.len,
            .data = stringlist_arr.ptr,
        };

        return qtc.QVariant_new15(stringlist_list);
    }

    /// New16 constructs a new QVariant object.
    ///
    /// ``` qchar: QtC.QChar ```
    pub fn New16(qchar: QtC.QChar) QtC.QVariant {
        return qtc.QVariant_new16(@ptrCast(qchar));
    }

    /// New17 constructs a new QVariant object.
    ///
    /// ``` date: QtC.QDate ```
    pub fn New17(date: QtC.QDate) QtC.QVariant {
        return qtc.QVariant_new17(@ptrCast(date));
    }

    /// New18 constructs a new QVariant object.
    ///
    /// ``` time: QtC.QTime ```
    pub fn New18(time: QtC.QTime) QtC.QVariant {
        return qtc.QVariant_new18(@ptrCast(time));
    }

    /// New19 constructs a new QVariant object.
    ///
    /// ``` datetime: QtC.QDateTime ```
    pub fn New19(datetime: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new19(@ptrCast(datetime));
    }

    /// New20 constructs a new QVariant object.
    ///
    /// ``` mapVal: map_constu8_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn New20(mapVal: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.QVariant {
        const mapVal_keys = allocator.alloc(qtc.struct_libqt_string, mapVal.count()) catch @panic("qvariant.: Memory allocation failed");
        defer allocator.free(mapVal_keys);
        const mapVal_values = allocator.alloc(QtC.QVariant, mapVal.count()) catch @panic("qvariant.: Memory allocation failed");
        defer allocator.free(mapVal_values);
        var i: usize = 0;
        var mapVal_it = mapVal.iterator();
        while (mapVal_it.next()) |entry| {
            const key = entry.key_ptr.*;
            mapVal_keys[i] = qtc.struct_libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            mapVal_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const mapVal_map = qtc.struct_libqt_map{
            .len = mapVal.count(),
            .keys = @ptrCast(mapVal_keys.ptr),
            .values = @ptrCast(mapVal_values.ptr),
        };

        return qtc.QVariant_new20(mapVal_map);
    }

    /// New21 constructs a new QVariant object.
    ///
    /// ``` hash: map_constu8_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn New21(hash: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.QVariant {
        const hash_keys = allocator.alloc(qtc.struct_libqt_string, hash.count()) catch @panic("qvariant.: Memory allocation failed");
        defer allocator.free(hash_keys);
        const hash_values = allocator.alloc(QtC.QVariant, hash.count()) catch @panic("qvariant.: Memory allocation failed");
        defer allocator.free(hash_values);
        var i: usize = 0;
        var hash_it = hash.iterator();
        while (hash_it.next()) |entry| {
            const key = entry.key_ptr.*;
            hash_keys[i] = qtc.struct_libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            hash_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const hash_map = qtc.struct_libqt_map{
            .len = hash.count(),
            .keys = @ptrCast(hash_keys.ptr),
            .values = @ptrCast(hash_values.ptr),
        };

        return qtc.QVariant_new21(hash_map);
    }

    /// New22 constructs a new QVariant object.
    ///
    /// ``` size: QtC.QSize ```
    pub fn New22(size: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new22(@ptrCast(size));
    }

    /// New23 constructs a new QVariant object.
    ///
    /// ``` size: QtC.QSizeF ```
    pub fn New23(size: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new23(@ptrCast(size));
    }

    /// New24 constructs a new QVariant object.
    ///
    /// ``` pt: QtC.QPoint ```
    pub fn New24(pt: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new24(@ptrCast(pt));
    }

    /// New25 constructs a new QVariant object.
    ///
    /// ``` pt: QtC.QPointF ```
    pub fn New25(pt: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new25(@ptrCast(pt));
    }

    /// New26 constructs a new QVariant object.
    ///
    /// ``` line: QtC.QLine ```
    pub fn New26(line: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new26(@ptrCast(line));
    }

    /// New27 constructs a new QVariant object.
    ///
    /// ``` line: QtC.QLineF ```
    pub fn New27(line: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new27(@ptrCast(line));
    }

    /// New28 constructs a new QVariant object.
    ///
    /// ``` rect: QtC.QRect ```
    pub fn New28(rect: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new28(@ptrCast(rect));
    }

    /// New29 constructs a new QVariant object.
    ///
    /// ``` rect: QtC.QRectF ```
    pub fn New29(rect: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new29(@ptrCast(rect));
    }

    /// New30 constructs a new QVariant object.
    ///
    /// ``` locale: QtC.QLocale ```
    pub fn New30(locale: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new30(@ptrCast(locale));
    }

    /// New31 constructs a new QVariant object.
    ///
    /// ``` re: QtC.QRegularExpression ```
    pub fn New31(re: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new31(@ptrCast(re));
    }

    /// New32 constructs a new QVariant object.
    ///
    /// ``` easing: QtC.QEasingCurve ```
    pub fn New32(easing: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new32(@ptrCast(easing));
    }

    /// New33 constructs a new QVariant object.
    ///
    /// ``` uuid: QtC.QUuid ```
    pub fn New33(uuid: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new33(@ptrCast(uuid));
    }

    /// New34 constructs a new QVariant object.
    ///
    /// ``` url: QtC.QUrl ```
    pub fn New34(url: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new34(@ptrCast(url));
    }

    /// New35 constructs a new QVariant object.
    ///
    /// ``` jsonValue: QtC.QJsonValue ```
    pub fn New35(jsonValue: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new35(@ptrCast(jsonValue));
    }

    /// New36 constructs a new QVariant object.
    ///
    /// ``` jsonObject: QtC.QJsonObject ```
    pub fn New36(jsonObject: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new36(@ptrCast(jsonObject));
    }

    /// New37 constructs a new QVariant object.
    ///
    /// ``` jsonArray: QtC.QJsonArray ```
    pub fn New37(jsonArray: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new37(@ptrCast(jsonArray));
    }

    /// New38 constructs a new QVariant object.
    ///
    /// ``` jsonDocument: QtC.QJsonDocument ```
    pub fn New38(jsonDocument: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new38(@ptrCast(jsonDocument));
    }

    /// New39 constructs a new QVariant object.
    ///
    /// ``` modelIndex: QtC.QModelIndex ```
    pub fn New39(modelIndex: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new39(@ptrCast(modelIndex));
    }

    /// New40 constructs a new QVariant object.
    ///
    /// ``` modelIndex: QtC.QPersistentModelIndex ```
    pub fn New40(modelIndex: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new40(@ptrCast(modelIndex));
    }

    /// New41 constructs a new QVariant object.
    ///
    /// ``` typeVal: qvariant_enums.Type ```
    pub fn New41(typeVal: i64) QtC.QVariant {
        return qtc.QVariant_new41(@intCast(typeVal));
    }

    /// New42 constructs a new QVariant object.
    ///
    /// ``` typeVal: QtC.QMetaType, copyVal: ?*anyopaque ```
    pub fn New42(typeVal: QtC.QMetaType, copyVal: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new42(@ptrCast(typeVal), copyVal);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#operator=)
    ///
    /// ``` self: QtC.QVariant, other: QtC.QVariant ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVariant_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#swap)
    ///
    /// ``` self: QtC.QVariant, other: QtC.QVariant ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVariant_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#userType)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn UserType(self: ?*anyopaque) i32 {
        return qtc.QVariant_UserType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#typeId)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn TypeId(self: ?*anyopaque) i32 {
        return qtc.QVariant_TypeId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#typeName)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn TypeName(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QVariant_TypeName(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#metaType)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn MetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QVariant_MetaType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#canConvert)
    ///
    /// ``` self: QtC.QVariant, targetType: QtC.QMetaType ```
    pub fn CanConvert(self: ?*anyopaque, targetType: QtC.QMetaType) bool {
        return qtc.QVariant_CanConvert(@ptrCast(self), @ptrCast(targetType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#convert)
    ///
    /// ``` self: QtC.QVariant, typeVal: QtC.QMetaType ```
    pub fn Convert(self: ?*anyopaque, typeVal: QtC.QMetaType) bool {
        return qtc.QVariant_Convert(@ptrCast(self), @ptrCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#canView)
    ///
    /// ``` self: QtC.QVariant, targetType: QtC.QMetaType ```
    pub fn CanView(self: ?*anyopaque, targetType: QtC.QMetaType) bool {
        return qtc.QVariant_CanView(@ptrCast(self), @ptrCast(targetType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#canConvert)
    ///
    /// ``` self: QtC.QVariant, targetTypeId: i32 ```
    pub fn CanConvertWithTargetTypeId(self: ?*anyopaque, targetTypeId: i32) bool {
        return qtc.QVariant_CanConvertWithTargetTypeId(@ptrCast(self), @intCast(targetTypeId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#convert)
    ///
    /// ``` self: QtC.QVariant, targetTypeId: i32 ```
    pub fn ConvertWithTargetTypeId(self: ?*anyopaque, targetTypeId: i32) bool {
        return qtc.QVariant_ConvertWithTargetTypeId(@ptrCast(self), @intCast(targetTypeId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#isValid)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QVariant_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#isNull)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QVariant_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#clear)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QVariant_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#detach)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QVariant_Detach(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#isDetached)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn IsDetached(self: ?*anyopaque) bool {
        return qtc.QVariant_IsDetached(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toInt)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToInt(self: ?*anyopaque) i32 {
        return qtc.QVariant_ToInt(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toUInt)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToUInt(self: ?*anyopaque) u32 {
        return qtc.QVariant_ToUInt(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLongLong)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToLongLong(self: ?*anyopaque) i64 {
        return qtc.QVariant_ToLongLong(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toULongLong)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToULongLong(self: ?*anyopaque) u64 {
        return qtc.QVariant_ToULongLong(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toBool)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToBool(self: ?*anyopaque) bool {
        return qtc.QVariant_ToBool(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toDouble)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToDouble(self: ?*anyopaque) f64 {
        return qtc.QVariant_ToDouble(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toFloat)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToFloat(self: ?*anyopaque) f32 {
        return qtc.QVariant_ToFloat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toReal)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToReal(self: ?*anyopaque) f64 {
        return qtc.QVariant_ToReal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toByteArray)
    ///
    /// ``` self: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn ToByteArray(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QVariant_ToByteArray(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qvariant.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toBitArray)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToBitArray(self: ?*anyopaque) QtC.QBitArray {
        return qtc.QVariant_ToBitArray(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toString)
    ///
    /// ``` self: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVariant_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvariant.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toStringList)
    ///
    /// ``` self: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn ToStringList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QVariant_ToStringList(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qvariant.ToStringList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qvariant.ToStringList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toChar)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToChar(self: ?*anyopaque) QtC.QChar {
        return qtc.QVariant_ToChar(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toDate)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToDate(self: ?*anyopaque) QtC.QDate {
        return qtc.QVariant_ToDate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toTime)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToTime(self: ?*anyopaque) QtC.QTime {
        return qtc.QVariant_ToTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toDateTime)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToDateTime(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QVariant_ToDateTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toMap)
    ///
    /// ``` self: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn ToMap(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QVariant_ToMap(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
        defer {
            const _keys: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("qvariant.ToMap: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toHash)
    ///
    /// ``` self: QtC.QVariant, allocator: std.mem.Allocator ```
    pub fn ToHash(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QVariant_ToHash(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
        defer {
            const _keys: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("qvariant.ToHash: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toPoint)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToPoint(self: ?*anyopaque) QtC.QPoint {
        return qtc.QVariant_ToPoint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toPointF)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToPointF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QVariant_ToPointF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toRect)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QVariant_ToRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toSize)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QVariant_ToSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toSizeF)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToSizeF(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QVariant_ToSizeF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLine)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToLine(self: ?*anyopaque) QtC.QLine {
        return qtc.QVariant_ToLine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLineF)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToLineF(self: ?*anyopaque) QtC.QLineF {
        return qtc.QVariant_ToLineF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toRectF)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToRectF(self: ?*anyopaque) QtC.QRectF {
        return qtc.QVariant_ToRectF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLocale)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToLocale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QVariant_ToLocale(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toRegularExpression)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToRegularExpression(self: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QVariant_ToRegularExpression(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toEasingCurve)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToEasingCurve(self: ?*anyopaque) QtC.QEasingCurve {
        return qtc.QVariant_ToEasingCurve(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toUuid)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToUuid(self: ?*anyopaque) QtC.QUuid {
        return qtc.QVariant_ToUuid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toUrl)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.QVariant_ToUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toJsonValue)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToJsonValue(self: ?*anyopaque) QtC.QJsonValue {
        return qtc.QVariant_ToJsonValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toJsonObject)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToJsonObject(self: ?*anyopaque) QtC.QJsonObject {
        return qtc.QVariant_ToJsonObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toJsonArray)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToJsonArray(self: ?*anyopaque) QtC.QJsonArray {
        return qtc.QVariant_ToJsonArray(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toJsonDocument)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToJsonDocument(self: ?*anyopaque) QtC.QJsonDocument {
        return qtc.QVariant_ToJsonDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toModelIndex)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToModelIndex(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QVariant_ToModelIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toPersistentModelIndex)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ToPersistentModelIndex(self: ?*anyopaque) QtC.QPersistentModelIndex {
        return qtc.QVariant_ToPersistentModelIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#load)
    ///
    /// ``` self: QtC.QVariant, ds: QtC.QDataStream ```
    pub fn Load(self: ?*anyopaque, ds: ?*anyopaque) void {
        qtc.QVariant_Load(@ptrCast(self), @ptrCast(ds));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#save)
    ///
    /// ``` self: QtC.QVariant, ds: QtC.QDataStream ```
    pub fn Save(self: ?*anyopaque, ds: ?*anyopaque) void {
        qtc.QVariant_Save(@ptrCast(self), @ptrCast(ds));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#type)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QVariant_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#typeToName)
    ///
    /// ``` typeId: i32 ```
    pub fn TypeToName(typeId: i32) []const u8 {
        const _ret = qtc.QVariant_TypeToName(@intCast(typeId));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#nameToType)
    ///
    /// ``` name: []const u8 ```
    pub fn NameToType(name: []const u8) i64 {
        const name_Cstring = name.ptr;
        return qtc.QVariant_NameToType(name_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#data)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn Data(self: ?*anyopaque) ?*anyopaque {
        return qtc.QVariant_Data(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#constData)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn ConstData(self: ?*anyopaque) ?*const anyopaque {
        return qtc.QVariant_ConstData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#data)
    ///
    /// ``` self: QtC.QVariant ```
    pub fn Data2(self: ?*anyopaque) ?*const anyopaque {
        return qtc.QVariant_Data2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#setValue)
    ///
    /// ``` self: QtC.QVariant, avalue: QtC.QVariant ```
    pub fn SetValue(self: ?*anyopaque, avalue: ?*anyopaque) void {
        qtc.QVariant_SetValue(@ptrCast(self), @ptrCast(avalue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#compare)
    ///
    /// ``` lhs: QtC.QVariant, rhs: QtC.QVariant ```
    pub fn Compare(lhs: ?*anyopaque, rhs: ?*anyopaque) QtC.QPartialOrdering {
        return qtc.QVariant_Compare(@ptrCast(lhs), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toInt)
    ///
    /// ``` self: QtC.QVariant, ok: bool ```
    pub fn ToInt1(self: ?*anyopaque, ok: ?*anyopaque) i32 {
        return qtc.QVariant_ToInt1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toUInt)
    ///
    /// ``` self: QtC.QVariant, ok: bool ```
    pub fn ToUInt1(self: ?*anyopaque, ok: ?*anyopaque) u32 {
        return qtc.QVariant_ToUInt1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toLongLong)
    ///
    /// ``` self: QtC.QVariant, ok: bool ```
    pub fn ToLongLong1(self: ?*anyopaque, ok: ?*anyopaque) i64 {
        return qtc.QVariant_ToLongLong1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toULongLong)
    ///
    /// ``` self: QtC.QVariant, ok: bool ```
    pub fn ToULongLong1(self: ?*anyopaque, ok: ?*anyopaque) u64 {
        return qtc.QVariant_ToULongLong1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toDouble)
    ///
    /// ``` self: QtC.QVariant, ok: bool ```
    pub fn ToDouble1(self: ?*anyopaque, ok: ?*anyopaque) f64 {
        return qtc.QVariant_ToDouble1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toFloat)
    ///
    /// ``` self: QtC.QVariant, ok: bool ```
    pub fn ToFloat1(self: ?*anyopaque, ok: ?*anyopaque) f32 {
        return qtc.QVariant_ToFloat1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#toReal)
    ///
    /// ``` self: QtC.QVariant, ok: bool ```
    pub fn ToReal1(self: ?*anyopaque, ok: ?*anyopaque) f64 {
        return qtc.QVariant_ToReal1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariant.html#dtor.QVariant)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QVariant ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVariant_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qvariantconstpointer.html
pub const qvariantconstpointer = struct {
    /// New constructs a new QVariantConstPointer object.
    ///
    /// ``` variant: QtC.QVariant ```
    pub fn New(variant: QtC.QVariant) QtC.QVariantConstPointer {
        return qtc.QVariantConstPointer_new(@ptrCast(variant));
    }

    /// New2 constructs a new QVariantConstPointer object.
    ///
    /// ``` param1: QtC.QVariantConstPointer ```
    pub fn New2(param1: ?*anyopaque) QtC.QVariantConstPointer {
        return qtc.QVariantConstPointer_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantconstpointer.html#operator*)
    ///
    /// ``` self: QtC.QVariantConstPointer ```
    pub fn OperatorMultiply(self: ?*anyopaque) QtC.QVariant {
        return qtc.QVariantConstPointer_OperatorMultiply(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantconstpointer.html#operator->)
    ///
    /// ``` self: QtC.QVariantConstPointer ```
    pub fn OperatorMinusGreater(self: ?*anyopaque) QtC.QVariant {
        return qtc.QVariantConstPointer_OperatorMinusGreater(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantconstpointer.html#operator=)
    ///
    /// ``` self: QtC.QVariantConstPointer, param1: QtC.QVariantConstPointer ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QVariantConstPointer_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantconstpointer.html#dtor.QVariantConstPointer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QVariantConstPointer ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVariantConstPointer_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qvariant.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const Invalid: i32 = 0;
        pub const Bool: i32 = 1;
        pub const Int: i32 = 2;
        pub const UInt: i32 = 3;
        pub const LongLong: i32 = 4;
        pub const ULongLong: i32 = 5;
        pub const Double: i32 = 6;
        pub const Char: i32 = 7;
        pub const Map: i32 = 8;
        pub const List: i32 = 9;
        pub const String: i32 = 10;
        pub const StringList: i32 = 11;
        pub const ByteArray: i32 = 12;
        pub const BitArray: i32 = 13;
        pub const Date: i32 = 14;
        pub const Time: i32 = 15;
        pub const DateTime: i32 = 16;
        pub const Url: i32 = 17;
        pub const Locale: i32 = 18;
        pub const Rect: i32 = 19;
        pub const RectF: i32 = 20;
        pub const Size: i32 = 21;
        pub const SizeF: i32 = 22;
        pub const Line: i32 = 23;
        pub const LineF: i32 = 24;
        pub const Point: i32 = 25;
        pub const PointF: i32 = 26;
        pub const RegularExpression: i32 = 44;
        pub const Hash: i32 = 28;
        pub const EasingCurve: i32 = 29;
        pub const Uuid: i32 = 30;
        pub const ModelIndex: i32 = 42;
        pub const PersistentModelIndex: i32 = 50;
        pub const LastCoreType: i32 = 58;
        pub const Font: i32 = 4096;
        pub const Pixmap: i32 = 4097;
        pub const Brush: i32 = 4098;
        pub const Color: i32 = 4099;
        pub const Palette: i32 = 4100;
        pub const Image: i32 = 4102;
        pub const Polygon: i32 = 4103;
        pub const Region: i32 = 4104;
        pub const Bitmap: i32 = 4105;
        pub const Cursor: i32 = 4106;
        pub const KeySequence: i32 = 4107;
        pub const Pen: i32 = 4108;
        pub const TextLength: i32 = 4109;
        pub const TextFormat: i32 = 4110;
        pub const Transform: i32 = 4112;
        pub const Matrix4x4: i32 = 4113;
        pub const Vector2D: i32 = 4114;
        pub const Vector3D: i32 = 4115;
        pub const Vector4D: i32 = 4116;
        pub const Quaternion: i32 = 4117;
        pub const PolygonF: i32 = 4118;
        pub const Icon: i32 = 4101;
        pub const LastGuiType: i32 = 4119;
        pub const SizePolicy: i32 = 8192;
        pub const UserType: i32 = 65536;
        pub const LastType: i64 = 4294967295;
    };
};
