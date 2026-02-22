const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qvariant_enums = enums;
const std = @import("std");
const arraymap_constu8_qtcqvariant = std.StringArrayHashMapUnmanaged(QtC.QVariant);
const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)
pub const qvariant = struct {
    /// New constructs a new QVariant object.
    ///
    pub fn New() QtC.QVariant {
        return qtc.QVariant_new();
    }

    /// New2 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QtC.QMetaType `
    ///
    pub fn New2(typeVal: QtC.QMetaType) QtC.QVariant {
        return qtc.QVariant_new2(@ptrCast(typeVal));
    }

    /// New3 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QVariant `
    ///
    pub fn New3(other: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new3(@ptrCast(other));
    }

    /// New4 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` i: i32 `
    ///
    pub fn New4(i: i32) QtC.QVariant {
        return qtc.QVariant_new4(@bitCast(i));
    }

    /// New5 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` ui: u32 `
    ///
    pub fn New5(ui: u32) QtC.QVariant {
        return qtc.QVariant_new5(@bitCast(ui));
    }

    /// New6 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` ll: i64 `
    ///
    pub fn New6(ll: i64) QtC.QVariant {
        return qtc.QVariant_new6(@bitCast(ll));
    }

    /// New7 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` ull: u64 `
    ///
    pub fn New7(ull: u64) QtC.QVariant {
        return qtc.QVariant_new7(@bitCast(ull));
    }

    /// New8 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` b: bool `
    ///
    pub fn New8(b: bool) QtC.QVariant {
        return qtc.QVariant_new8(b);
    }

    /// New9 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` d: f64 `
    ///
    pub fn New9(d: f64) QtC.QVariant {
        return qtc.QVariant_new9(@bitCast(d));
    }

    /// New10 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` f: f32 `
    ///
    pub fn New10(f: f32) QtC.QVariant {
        return qtc.QVariant_new10(@bitCast(f));
    }

    /// New11 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` qchar: QtC.QChar `
    ///
    pub fn New11(qchar: QtC.QChar) QtC.QVariant {
        return qtc.QVariant_new11(@ptrCast(qchar));
    }

    /// New12 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` date: QtC.QDate `
    ///
    pub fn New12(date: QtC.QDate) QtC.QVariant {
        return qtc.QVariant_new12(@ptrCast(date));
    }

    /// New13 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` time: QtC.QTime `
    ///
    pub fn New13(time: QtC.QTime) QtC.QVariant {
        return qtc.QVariant_new13(@ptrCast(time));
    }

    /// New14 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` bitarray: QtC.QBitArray `
    ///
    pub fn New14(bitarray: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new14(@ptrCast(bitarray));
    }

    /// New15 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` bytearray: []u8 `
    ///
    pub fn New15(bytearray: []u8) QtC.QVariant {
        const bytearray_str = qtc.libqt_string{
            .len = bytearray.len,
            .data = bytearray.ptr,
        };

        return qtc.QVariant_new15(bytearray_str);
    }

    /// New16 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` datetime: QtC.QDateTime `
    ///
    pub fn New16(datetime: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new16(@ptrCast(datetime));
    }

    /// New17 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` hash: map_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New17(hash: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.QVariant {
        const hash_count = hash.count();
        const hash_keys = allocator.alloc(qtc.libqt_string, hash_count) catch @panic("qvariant.New17: Memory allocation failed");
        defer allocator.free(hash_keys);
        const hash_values = allocator.alloc(QtC.QVariant, hash_count) catch @panic("qvariant.New17: Memory allocation failed");
        defer allocator.free(hash_values);
        var i: usize = 0;
        var hash_it = hash.iterator();
        while (hash_it.next()) |it_entry| : (i += 1) {
            const hash_key = it_entry.key_ptr.*;
            hash_keys[i] = qtc.libqt_string{
                .len = hash_key.len,
                .data = hash_key.ptr,
            };
            hash_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const hash_map = qtc.libqt_map{
            .len = hash_count,
            .keys = @ptrCast(hash_keys.ptr),
            .values = @ptrCast(hash_values.ptr),
        };

        return qtc.QVariant_new17(hash_map);
    }

    /// New18 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` jsonArray: QtC.QJsonArray `
    ///
    pub fn New18(jsonArray: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new18(@ptrCast(jsonArray));
    }

    /// New19 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` jsonObject: QtC.QJsonObject `
    ///
    pub fn New19(jsonObject: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new19(@ptrCast(jsonObject));
    }

    /// New20 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` list: []QtC.QVariant `
    ///
    pub fn New20(list: []QtC.QVariant) QtC.QVariant {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };

        return qtc.QVariant_new20(list_list);
    }

    /// New21 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` locale: QtC.QLocale `
    ///
    pub fn New21(locale: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new21(@ptrCast(locale));
    }

    /// New22 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` mapVal: arraymap_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New22(mapVal: arraymap_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.QVariant {
        const mapVal_count = mapVal.count();
        const mapVal_keys = allocator.alloc(qtc.libqt_string, mapVal_count) catch @panic("qvariant.New22: Memory allocation failed");
        defer allocator.free(mapVal_keys);
        const mapVal_values = allocator.alloc(QtC.QVariant, mapVal_count) catch @panic("qvariant.New22: Memory allocation failed");
        defer allocator.free(mapVal_values);
        var i: usize = 0;
        var mapVal_it = mapVal.iterator();
        while (mapVal_it.next()) |it_entry| : (i += 1) {
            const mapVal_key = it_entry.key_ptr.*;
            mapVal_keys[i] = qtc.libqt_string{
                .len = mapVal_key.len,
                .data = mapVal_key.ptr,
            };
            mapVal_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const mapVal_map = qtc.libqt_map{
            .len = mapVal_count,
            .keys = @ptrCast(mapVal_keys.ptr),
            .values = @ptrCast(mapVal_values.ptr),
        };

        return qtc.QVariant_new22(mapVal_map);
    }

    /// New23 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` re: QtC.QRegularExpression `
    ///
    pub fn New23(re: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new23(@ptrCast(re));
    }

    /// New24 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn New24(stringVal: []const u8) QtC.QVariant {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };

        return qtc.QVariant_new24(stringVal_str);
    }

    /// New25 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` stringlist: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New25(stringlist: []const []const u8, allocator: std.mem.Allocator) QtC.QVariant {
        const stringlist_arr = allocator.alloc(qtc.libqt_string, stringlist.len) catch @panic("qvariant.New25: Memory allocation failed");
        defer allocator.free(stringlist_arr);
        for (stringlist, 0..stringlist.len) |item, i| {
            stringlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const stringlist_list = qtc.libqt_list{
            .len = stringlist.len,
            .data = stringlist_arr.ptr,
        };

        return qtc.QVariant_new25(stringlist_list);
    }

    /// New26 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn New26(url: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new26(@ptrCast(url));
    }

    /// New27 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` jsonValue: QtC.QJsonValue `
    ///
    pub fn New27(jsonValue: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new27(@ptrCast(jsonValue));
    }

    /// New28 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` modelIndex: QtC.QModelIndex `
    ///
    pub fn New28(modelIndex: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new28(@ptrCast(modelIndex));
    }

    /// New29 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: QtC.QUuid `
    ///
    pub fn New29(uuid: QtC.QUuid) QtC.QVariant {
        return qtc.QVariant_new29(@ptrCast(uuid));
    }

    /// New30 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn New30(size: QtC.QSize) QtC.QVariant {
        return qtc.QVariant_new30(@ptrCast(size));
    }

    /// New31 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn New31(size: QtC.QSizeF) QtC.QVariant {
        return qtc.QVariant_new31(@ptrCast(size));
    }

    /// New32 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pt: QtC.QPoint `
    ///
    pub fn New32(pt: QtC.QPoint) QtC.QVariant {
        return qtc.QVariant_new32(@ptrCast(pt));
    }

    /// New33 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pt: QtC.QPointF `
    ///
    pub fn New33(pt: QtC.QPointF) QtC.QVariant {
        return qtc.QVariant_new33(@ptrCast(pt));
    }

    /// New34 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` line: QtC.QLine `
    ///
    pub fn New34(line: QtC.QLine) QtC.QVariant {
        return qtc.QVariant_new34(@ptrCast(line));
    }

    /// New35 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` line: QtC.QLineF `
    ///
    pub fn New35(line: QtC.QLineF) QtC.QVariant {
        return qtc.QVariant_new35(@ptrCast(line));
    }

    /// New36 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn New36(rect: QtC.QRect) QtC.QVariant {
        return qtc.QVariant_new36(@ptrCast(rect));
    }

    /// New37 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn New37(rect: QtC.QRectF) QtC.QVariant {
        return qtc.QVariant_new37(@ptrCast(rect));
    }

    /// New38 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` easing: QtC.QEasingCurve `
    ///
    pub fn New38(easing: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new38(@ptrCast(easing));
    }

    /// New39 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` jsonDocument: QtC.QJsonDocument `
    ///
    pub fn New39(jsonDocument: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new39(@ptrCast(jsonDocument));
    }

    /// New40 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` modelIndex: QtC.QPersistentModelIndex `
    ///
    pub fn New40(modelIndex: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new40(@ptrCast(modelIndex));
    }

    /// New41 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` str: [:0]const u8 `
    ///
    pub fn New41(str: [:0]const u8) QtC.QVariant {
        const str_Cstring = str.ptr;

        return qtc.QVariant_new41(str_Cstring);
    }

    /// New42 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qvariant_enums.Type `
    ///
    pub fn New42(typeVal: i32) QtC.QVariant {
        return qtc.QVariant_new42(@bitCast(typeVal));
    }

    /// New43 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QtC.QMetaType `
    ///
    /// ` copyVal: ?*const anyopaque `
    ///
    pub fn New43(typeVal: QtC.QMetaType, copyVal: ?*const anyopaque) QtC.QVariant {
        return qtc.QVariant_new43(@ptrCast(typeVal), @ptrCast(copyVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` other: QtC.QVariant `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVariant_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` other: QtC.QVariant `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVariant_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#userType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn UserType(self: ?*anyopaque) i32 {
        return qtc.QVariant_UserType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#typeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn TypeId(self: ?*anyopaque) i32 {
        return qtc.QVariant_TypeId(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#typeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn TypeName(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QVariant_TypeName(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn MetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QVariant_MetaType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#canConvert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` targetType: QtC.QMetaType `
    ///
    pub fn CanConvert(self: ?*anyopaque, targetType: QtC.QMetaType) bool {
        return qtc.QVariant_CanConvert(@ptrCast(self), @ptrCast(targetType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` typeVal: QtC.QMetaType `
    ///
    pub fn Convert(self: ?*anyopaque, typeVal: QtC.QMetaType) bool {
        return qtc.QVariant_Convert(@ptrCast(self), @ptrCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#canView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` targetType: QtC.QMetaType `
    ///
    pub fn CanView(self: ?*anyopaque, targetType: QtC.QMetaType) bool {
        return qtc.QVariant_CanView(@ptrCast(self), @ptrCast(targetType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#canConvert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` targetTypeId: i32 `
    ///
    pub fn CanConvert2(self: ?*anyopaque, targetTypeId: i32) bool {
        return qtc.QVariant_CanConvert2(@ptrCast(self), @bitCast(targetTypeId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` targetTypeId: i32 `
    ///
    pub fn Convert2(self: ?*anyopaque, targetTypeId: i32) bool {
        return qtc.QVariant_Convert2(@ptrCast(self), @bitCast(targetTypeId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QVariant_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QVariant_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QVariant_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QVariant_Detach(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn IsDetached(self: ?*anyopaque) bool {
        return qtc.QVariant_IsDetached(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToInt(self: ?*anyopaque) i32 {
        return qtc.QVariant_ToInt(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToUInt(self: ?*anyopaque) u32 {
        return qtc.QVariant_ToUInt(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToLongLong(self: ?*anyopaque) i64 {
        return qtc.QVariant_ToLongLong(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToULongLong(self: ?*anyopaque) u64 {
        return qtc.QVariant_ToULongLong(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToBool(self: ?*anyopaque) bool {
        return qtc.QVariant_ToBool(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToDouble(self: ?*anyopaque) f64 {
        return qtc.QVariant_ToDouble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToFloat(self: ?*anyopaque) f32 {
        return qtc.QVariant_ToFloat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toReal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToReal(self: ?*anyopaque) f64 {
        return qtc.QVariant_ToReal(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QVariant_ToByteArray(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qvariant.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toBitArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToBitArray(self: ?*anyopaque) QtC.QBitArray {
        return qtc.QVariant_ToBitArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVariant_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvariant.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToStringList(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QVariant_ToStringList(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToChar(self: ?*anyopaque) QtC.QChar {
        return qtc.QVariant_ToChar(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToDate(self: ?*anyopaque) QtC.QDate {
        return qtc.QVariant_ToDate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToTime(self: ?*anyopaque) QtC.QTime {
        return qtc.QVariant_ToTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToDateTime(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QVariant_ToDateTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QVariant {
        const _arr: qtc.libqt_list = qtc.QVariant_ToList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QVariant, _arr.len) catch @panic("qvariant.ToList: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToMap(self: ?*anyopaque, allocator: std.mem.Allocator) arraymap_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QVariant_ToMap(@ptrCast(self));
        var _ret: arraymap_constu8_qtcqvariant = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qvariant.ToMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, @ptrCast(_value)) catch @panic("qvariant.ToMap: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToHash(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QVariant_ToHash(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qvariant.ToHash: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, @ptrCast(_value)) catch @panic("qvariant.ToHash: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToPoint(self: ?*anyopaque) QtC.QPoint {
        return qtc.QVariant_ToPoint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToPointF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QVariant_ToPointF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QVariant_ToRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QVariant_ToSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToSizeF(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QVariant_ToSizeF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToLine(self: ?*anyopaque) QtC.QLine {
        return qtc.QVariant_ToLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLineF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToLineF(self: ?*anyopaque) QtC.QLineF {
        return qtc.QVariant_ToLineF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToRectF(self: ?*anyopaque) QtC.QRectF {
        return qtc.QVariant_ToRectF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToLocale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QVariant_ToLocale(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToRegularExpression(self: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QVariant_ToRegularExpression(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toEasingCurve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToEasingCurve(self: ?*anyopaque) QtC.QEasingCurve {
        return qtc.QVariant_ToEasingCurve(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToUuid(self: ?*anyopaque) QtC.QUuid {
        return qtc.QVariant_ToUuid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.QVariant_ToUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toJsonValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToJsonValue(self: ?*anyopaque) QtC.QJsonValue {
        return qtc.QVariant_ToJsonValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toJsonObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToJsonObject(self: ?*anyopaque) QtC.QJsonObject {
        return qtc.QVariant_ToJsonObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toJsonArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToJsonArray(self: ?*anyopaque) QtC.QJsonArray {
        return qtc.QVariant_ToJsonArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toJsonDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToJsonDocument(self: ?*anyopaque) QtC.QJsonDocument {
        return qtc.QVariant_ToJsonDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toModelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToModelIndex(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QVariant_ToModelIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toPersistentModelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ToPersistentModelIndex(self: ?*anyopaque) QtC.QPersistentModelIndex {
        return qtc.QVariant_ToPersistentModelIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` ds: QtC.QDataStream `
    ///
    pub fn Load(self: ?*anyopaque, ds: ?*anyopaque) void {
        qtc.QVariant_Load(@ptrCast(self), @ptrCast(ds));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` ds: QtC.QDataStream `
    ///
    pub fn Save(self: ?*anyopaque, ds: ?*anyopaque) void {
        qtc.QVariant_Save(@ptrCast(self), @ptrCast(ds));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ## Returns:
    ///
    /// ` qvariant_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QVariant_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#typeToName)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeId: i32 `
    ///
    pub fn TypeToName(typeId: i32) [:0]const u8 {
        const _ret = qtc.QVariant_TypeToName(@bitCast(typeId));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#nameToType)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ## Returns:
    ///
    /// ` qvariant_enums.Type `
    ///
    pub fn NameToType(name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QVariant_NameToType(name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn Data(self: ?*anyopaque) ?*anyopaque {
        return qtc.QVariant_Data(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#constData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn ConstData(self: ?*anyopaque) ?*const anyopaque {
        return qtc.QVariant_ConstData(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn Data2(self: ?*anyopaque) ?*const anyopaque {
        return qtc.QVariant_Data2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` avalue: QtC.QVariant `
    ///
    pub fn SetValue(self: ?*anyopaque, avalue: ?*anyopaque) void {
        qtc.QVariant_SetValue(@ptrCast(self), @ptrCast(avalue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#fromMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QtC.QMetaType `
    ///
    pub fn FromMetaType(typeVal: QtC.QMetaType) QtC.QVariant {
        return qtc.QVariant_FromMetaType(@ptrCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` lhs: QtC.QVariant `
    ///
    /// ` rhs: QtC.QVariant `
    ///
    pub fn Compare(lhs: ?*anyopaque, rhs: ?*anyopaque) QtC.QPartialOrdering {
        return qtc.QVariant_Compare(@ptrCast(lhs), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToInt1(self: ?*anyopaque, ok: *bool) i32 {
        return qtc.QVariant_ToInt1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUInt1(self: ?*anyopaque, ok: *bool) u32 {
        return qtc.QVariant_ToUInt1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToLongLong1(self: ?*anyopaque, ok: *bool) i64 {
        return qtc.QVariant_ToLongLong1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToULongLong1(self: ?*anyopaque, ok: *bool) u64 {
        return qtc.QVariant_ToULongLong1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToDouble1(self: ?*anyopaque, ok: *bool) f64 {
        return qtc.QVariant_ToDouble1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToFloat1(self: ?*anyopaque, ok: *bool) f32 {
        return qtc.QVariant_ToFloat1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toReal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToReal1(self: ?*anyopaque, ok: *bool) f64 {
        return qtc.QVariant_ToReal1(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#fromMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QtC.QMetaType `
    ///
    /// ` copyVal: ?*const anyopaque `
    ///
    pub fn FromMetaType2(typeVal: QtC.QMetaType, copyVal: ?*const anyopaque) QtC.QVariant {
        return qtc.QVariant_FromMetaType2(@ptrCast(typeVal), @ptrCast(copyVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#dtor.QVariant)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QVariant `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVariant_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantconstpointer.html)
pub const qvariantconstpointer = struct {
    /// New constructs a new QVariantConstPointer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` variant: QtC.QVariant `
    ///
    pub fn New(variant: QtC.QVariant) QtC.QVariantConstPointer {
        return qtc.QVariantConstPointer_new(@ptrCast(variant));
    }

    /// New2 constructs a new QVariantConstPointer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QVariantConstPointer `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QVariantConstPointer {
        return qtc.QVariantConstPointer_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantconstpointer.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariantConstPointer `
    ///
    pub fn OperatorMultiply(self: ?*anyopaque) QtC.QVariant {
        return qtc.QVariantConstPointer_OperatorMultiply(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantconstpointer.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariantConstPointer `
    ///
    pub fn OperatorMinusGreater(self: ?*anyopaque) QtC.QVariant {
        return qtc.QVariantConstPointer_OperatorMinusGreater(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantconstpointer.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVariantConstPointer `
    ///
    /// ` param1: QtC.QVariantConstPointer `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QVariantConstPointer_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantconstpointer.html#dtor.QVariantConstPointer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QVariantConstPointer `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVariantConstPointer_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
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
        pub const LastCoreType: i32 = 63;
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
        pub const LastType: i32 = -1;
    };
};
