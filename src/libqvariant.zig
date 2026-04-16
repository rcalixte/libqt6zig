const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBitArray = @import("libqt6").QBitArray;
const QChar = @import("libqt6").QChar;
const QDataStream = @import("libqt6").QDataStream;
const QDate = @import("libqt6").QDate;
const QDateTime = @import("libqt6").QDateTime;
const QEasingCurve = @import("libqt6").QEasingCurve;
const QJsonArray = @import("libqt6").QJsonArray;
const QJsonDocument = @import("libqt6").QJsonDocument;
const QJsonObject = @import("libqt6").QJsonObject;
const QJsonValue = @import("libqt6").QJsonValue;
const QLine = @import("libqt6").QLine;
const QLineF = @import("libqt6").QLineF;
const QLocale = @import("libqt6").QLocale;
const QMetaType = @import("libqt6").QMetaType;
const QModelIndex = @import("libqt6").QModelIndex;
const QPartialOrdering = @import("libqt6").QPartialOrdering;
const QPersistentModelIndex = @import("libqt6").QPersistentModelIndex;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QRegularExpression = @import("libqt6").QRegularExpression;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QTime = @import("libqt6").QTime;
const QUrl = @import("libqt6").QUrl;
const QUuid = @import("libqt6").QUuid;
const qvariant_enums = enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);
const Map_constu8_QVariant = std.StringHashMapUnmanaged(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)
pub const QVariant = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVariant,

    pub const _is_QVariant = {};

    /// New constructs a new QVariant object.
    ///
    pub fn New() QVariant {
        return .{ .ptr = qtc.QVariant_new() };
    }

    /// New2 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QMetaType `
    ///
    pub fn New2(typeVal: anytype) QVariant {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        return .{ .ptr = qtc.QVariant_new2(@ptrCast(typeVal.ptr)) };
    }

    /// New3 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVariant `
    ///
    pub fn New3(other: anytype) QVariant {
        comptime _ = @TypeOf(other)._is_QVariant;
        return .{ .ptr = qtc.QVariant_new3(@ptrCast(other.ptr)) };
    }

    /// New4 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` i: i32 `
    ///
    pub fn New4(i: i32) QVariant {
        return .{ .ptr = qtc.QVariant_new4(@bitCast(i)) };
    }

    /// New5 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` ui: u32 `
    ///
    pub fn New5(ui: u32) QVariant {
        return .{ .ptr = qtc.QVariant_new5(@bitCast(ui)) };
    }

    /// New6 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` ll: isize `
    ///
    pub fn New6(ll: isize) QVariant {
        return .{ .ptr = qtc.QVariant_new6(@bitCast(ll)) };
    }

    /// New7 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` ull: usize `
    ///
    pub fn New7(ull: usize) QVariant {
        return .{ .ptr = qtc.QVariant_new7(@bitCast(ull)) };
    }

    /// New8 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` b: bool `
    ///
    pub fn New8(b: bool) QVariant {
        return .{ .ptr = qtc.QVariant_new8(b) };
    }

    /// New9 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` d: f64 `
    ///
    pub fn New9(d: f64) QVariant {
        return .{ .ptr = qtc.QVariant_new9(@bitCast(d)) };
    }

    /// New10 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` f: f32 `
    ///
    pub fn New10(f: f32) QVariant {
        return .{ .ptr = qtc.QVariant_new10(@bitCast(f)) };
    }

    /// New11 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` qchar: QChar `
    ///
    pub fn New11(qchar: anytype) QVariant {
        comptime _ = @TypeOf(qchar)._is_QChar;
        return .{ .ptr = qtc.QVariant_new11(@ptrCast(qchar.ptr)) };
    }

    /// New12 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` date: QDate `
    ///
    pub fn New12(date: anytype) QVariant {
        comptime _ = @TypeOf(date)._is_QDate;
        return .{ .ptr = qtc.QVariant_new12(@ptrCast(date.ptr)) };
    }

    /// New13 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` time: QTime `
    ///
    pub fn New13(time: anytype) QVariant {
        comptime _ = @TypeOf(time)._is_QTime;
        return .{ .ptr = qtc.QVariant_new13(@ptrCast(time.ptr)) };
    }

    /// New14 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` bitarray: QBitArray `
    ///
    pub fn New14(bitarray: anytype) QVariant {
        comptime _ = @TypeOf(bitarray)._is_QBitArray;
        return .{ .ptr = qtc.QVariant_new14(@ptrCast(bitarray.ptr)) };
    }

    /// New15 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` bytearray: []u8 `
    ///
    pub fn New15(bytearray: []u8) QVariant {
        const bytearray_str = qtc.libqt_string{
            .len = bytearray.len,
            .data = bytearray.ptr,
        };
        return .{ .ptr = qtc.QVariant_new15(bytearray_str) };
    }

    /// New16 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` datetime: QDateTime `
    ///
    pub fn New16(datetime: anytype) QVariant {
        comptime _ = @TypeOf(datetime)._is_QDateTime;
        return .{ .ptr = qtc.QVariant_new16(@ptrCast(datetime.ptr)) };
    }

    /// New17 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` hash: Map_constu8_QVariant `
    ///
    pub fn New17(allocator: std.mem.Allocator, hash: Map_constu8_QVariant) QVariant {
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
            hash_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const hash_map = qtc.libqt_map{
            .len = hash_count,
            .keys = @ptrCast(hash_keys.ptr),
            .values = @ptrCast(hash_values.ptr),
        };
        return .{ .ptr = qtc.QVariant_new17(hash_map) };
    }

    /// New18 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` jsonArray: QJsonArray `
    ///
    pub fn New18(jsonArray: anytype) QVariant {
        comptime _ = @TypeOf(jsonArray)._is_QJsonArray;
        return .{ .ptr = qtc.QVariant_new18(@ptrCast(jsonArray.ptr)) };
    }

    /// New19 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` jsonObject: QJsonObject `
    ///
    pub fn New19(jsonObject: anytype) QVariant {
        comptime _ = @TypeOf(jsonObject)._is_QJsonObject;
        return .{ .ptr = qtc.QVariant_new19(@ptrCast(jsonObject.ptr)) };
    }

    /// New20 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` list: []QVariant `
    ///
    pub fn New20(list: []QVariant) QVariant {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        return .{ .ptr = qtc.QVariant_new20(list_list) };
    }

    /// New21 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` locale: QLocale `
    ///
    pub fn New21(locale: anytype) QVariant {
        comptime _ = @TypeOf(locale)._is_QLocale;
        return .{ .ptr = qtc.QVariant_new21(@ptrCast(locale.ptr)) };
    }

    /// New22 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mapVal: ArrayMap_constu8_QVariant `
    ///
    pub fn New22(allocator: std.mem.Allocator, mapVal: ArrayMap_constu8_QVariant) QVariant {
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
            mapVal_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const mapVal_map = qtc.libqt_map{
            .len = mapVal_count,
            .keys = @ptrCast(mapVal_keys.ptr),
            .values = @ptrCast(mapVal_values.ptr),
        };
        return .{ .ptr = qtc.QVariant_new22(mapVal_map) };
    }

    /// New23 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` re: QRegularExpression `
    ///
    pub fn New23(re: anytype) QVariant {
        comptime _ = @TypeOf(re)._is_QRegularExpression;
        return .{ .ptr = qtc.QVariant_new23(@ptrCast(re.ptr)) };
    }

    /// New24 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn New24(stringVal: []const u8) QVariant {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.QVariant_new24(stringVal_str) };
    }

    /// New25 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` stringlist: []const []const u8 `
    ///
    pub fn New25(allocator: std.mem.Allocator, stringlist: []const []const u8) QVariant {
        const stringlist_arr = allocator.alloc(qtc.libqt_string, stringlist.len) catch @panic("qvariant.New25: Memory allocation failed");
        defer allocator.free(stringlist_arr);
        for (stringlist, 0..stringlist.len) |item, i|
            stringlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const stringlist_list = qtc.libqt_list{
            .len = stringlist.len,
            .data = stringlist_arr.ptr,
        };
        return .{ .ptr = qtc.QVariant_new25(stringlist_list) };
    }

    /// New26 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn New26(url: anytype) QVariant {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QVariant_new26(@ptrCast(url.ptr)) };
    }

    /// New27 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` jsonValue: QJsonValue `
    ///
    pub fn New27(jsonValue: anytype) QVariant {
        comptime _ = @TypeOf(jsonValue)._is_QJsonValue;
        return .{ .ptr = qtc.QVariant_new27(@ptrCast(jsonValue.ptr)) };
    }

    /// New28 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` modelIndex: QModelIndex `
    ///
    pub fn New28(modelIndex: anytype) QVariant {
        comptime _ = @TypeOf(modelIndex)._is_QModelIndex;
        return .{ .ptr = qtc.QVariant_new28(@ptrCast(modelIndex.ptr)) };
    }

    /// New29 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: QUuid `
    ///
    pub fn New29(uuid: anytype) QVariant {
        comptime _ = @TypeOf(uuid)._is_QUuid;
        return .{ .ptr = qtc.QVariant_new29(@ptrCast(uuid.ptr)) };
    }

    /// New30 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    pub fn New30(size: anytype) QVariant {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QVariant_new30(@ptrCast(size.ptr)) };
    }

    /// New31 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSizeF `
    ///
    pub fn New31(size: anytype) QVariant {
        comptime _ = @TypeOf(size)._is_QSizeF;
        return .{ .ptr = qtc.QVariant_new31(@ptrCast(size.ptr)) };
    }

    /// New32 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pt: QPoint `
    ///
    pub fn New32(pt: anytype) QVariant {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return .{ .ptr = qtc.QVariant_new32(@ptrCast(pt.ptr)) };
    }

    /// New33 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pt: QPointF `
    ///
    pub fn New33(pt: anytype) QVariant {
        comptime _ = @TypeOf(pt)._is_QPointF;
        return .{ .ptr = qtc.QVariant_new33(@ptrCast(pt.ptr)) };
    }

    /// New34 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` line: QLine `
    ///
    pub fn New34(line: anytype) QVariant {
        comptime _ = @TypeOf(line)._is_QLine;
        return .{ .ptr = qtc.QVariant_new34(@ptrCast(line.ptr)) };
    }

    /// New35 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` line: QLineF `
    ///
    pub fn New35(line: anytype) QVariant {
        comptime _ = @TypeOf(line)._is_QLineF;
        return .{ .ptr = qtc.QVariant_new35(@ptrCast(line.ptr)) };
    }

    /// New36 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rect: QRect `
    ///
    pub fn New36(rect: anytype) QVariant {
        comptime _ = @TypeOf(rect)._is_QRect;
        return .{ .ptr = qtc.QVariant_new36(@ptrCast(rect.ptr)) };
    }

    /// New37 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rect: QRectF `
    ///
    pub fn New37(rect: anytype) QVariant {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QVariant_new37(@ptrCast(rect.ptr)) };
    }

    /// New38 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` easing: QEasingCurve `
    ///
    pub fn New38(easing: anytype) QVariant {
        comptime _ = @TypeOf(easing)._is_QEasingCurve;
        return .{ .ptr = qtc.QVariant_new38(@ptrCast(easing.ptr)) };
    }

    /// New39 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` jsonDocument: QJsonDocument `
    ///
    pub fn New39(jsonDocument: anytype) QVariant {
        comptime _ = @TypeOf(jsonDocument)._is_QJsonDocument;
        return .{ .ptr = qtc.QVariant_new39(@ptrCast(jsonDocument.ptr)) };
    }

    /// New40 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` modelIndex: QPersistentModelIndex `
    ///
    pub fn New40(modelIndex: anytype) QVariant {
        comptime _ = @TypeOf(modelIndex)._is_QPersistentModelIndex;
        return .{ .ptr = qtc.QVariant_new40(@ptrCast(modelIndex.ptr)) };
    }

    /// New41 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` str: [:0]const u8 `
    ///
    pub fn New41(str: [:0]const u8) QVariant {
        const str_Cstring = str.ptr;
        return .{ .ptr = qtc.QVariant_new41(str_Cstring) };
    }

    /// New42 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qvariant_enums.Type `
    ///
    pub fn New42(typeVal: i32) QVariant {
        return .{ .ptr = qtc.QVariant_new42(@bitCast(typeVal)) };
    }

    /// New43 constructs a new QVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QMetaType `
    ///
    /// ` copyVal: ?*const anyopaque `
    ///
    pub fn New43(typeVal: anytype, copyVal: ?*const anyopaque) QVariant {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        return .{ .ptr = qtc.QVariant_new43(@ptrCast(typeVal.ptr), @ptrCast(copyVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` other: QVariant `
    ///
    pub fn OperatorAssign(self: QVariant, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QVariant;
        qtc.QVariant_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` other: QVariant `
    ///
    pub fn Swap(self: QVariant, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QVariant;
        qtc.QVariant_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#userType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn UserType(self: QVariant) i32 {
        return qtc.QVariant_UserType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#typeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn TypeId(self: QVariant) i32 {
        return qtc.QVariant_TypeId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#typeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn TypeName(self: QVariant) [:0]const u8 {
        const _ret = qtc.QVariant_TypeName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn MetaType(self: QVariant) QMetaType {
        return .{ .ptr = qtc.QVariant_MetaType(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#canConvert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` targetType: QMetaType `
    ///
    pub fn CanConvert(self: QVariant, targetType: anytype) bool {
        comptime _ = @TypeOf(targetType)._is_QMetaType;
        return qtc.QVariant_CanConvert(@ptrCast(self.ptr), @ptrCast(targetType.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` typeVal: QMetaType `
    ///
    pub fn Convert(self: QVariant, typeVal: anytype) bool {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        return qtc.QVariant_Convert(@ptrCast(self.ptr), @ptrCast(typeVal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#canView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` targetType: QMetaType `
    ///
    pub fn CanView(self: QVariant, targetType: anytype) bool {
        comptime _ = @TypeOf(targetType)._is_QMetaType;
        return qtc.QVariant_CanView(@ptrCast(self.ptr), @ptrCast(targetType.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#canConvert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` targetTypeId: i32 `
    ///
    pub fn CanConvert2(self: QVariant, targetTypeId: i32) bool {
        return qtc.QVariant_CanConvert2(@ptrCast(self.ptr), @bitCast(targetTypeId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` targetTypeId: i32 `
    ///
    pub fn Convert2(self: QVariant, targetTypeId: i32) bool {
        return qtc.QVariant_Convert2(@ptrCast(self.ptr), @bitCast(targetTypeId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn IsValid(self: QVariant) bool {
        return qtc.QVariant_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn IsNull(self: QVariant) bool {
        return qtc.QVariant_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn Clear(self: QVariant) void {
        qtc.QVariant_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn Detach(self: QVariant) void {
        qtc.QVariant_Detach(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn IsDetached(self: QVariant) bool {
        return qtc.QVariant_IsDetached(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToInt(self: QVariant) i32 {
        return qtc.QVariant_ToInt(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToUInt(self: QVariant) u32 {
        return qtc.QVariant_ToUInt(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToLongLong(self: QVariant) isize {
        return qtc.QVariant_ToLongLong(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToULongLong(self: QVariant) usize {
        return qtc.QVariant_ToULongLong(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToBool(self: QVariant) bool {
        return qtc.QVariant_ToBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToDouble(self: QVariant) f64 {
        return qtc.QVariant_ToDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToFloat(self: QVariant) f32 {
        return qtc.QVariant_ToFloat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toReal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToReal(self: QVariant) f64 {
        return qtc.QVariant_ToReal(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray(self: QVariant, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QVariant_ToByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qvariant.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toBitArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToBitArray(self: QVariant) QBitArray {
        return .{ .ptr = qtc.QVariant_ToBitArray(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QVariant, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVariant_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvariant.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToStringList(self: QVariant, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QVariant_ToStringList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QVariant `
    ///
    pub fn ToChar(self: QVariant) QChar {
        return .{ .ptr = qtc.QVariant_ToChar(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToDate(self: QVariant) QDate {
        return .{ .ptr = qtc.QVariant_ToDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToTime(self: QVariant) QTime {
        return .{ .ptr = qtc.QVariant_ToTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToDateTime(self: QVariant) QDateTime {
        return .{ .ptr = qtc.QVariant_ToDateTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToList(self: QVariant, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QVariant_ToList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("qvariant.ToList: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToMap(self: QVariant, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QVariant_ToMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
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
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("qvariant.ToMap: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToHash(self: QVariant, allocator: std.mem.Allocator) Map_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QVariant_ToHash(@ptrCast(self.ptr));
        var _ret: Map_constu8_QVariant = .empty;
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
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("qvariant.ToHash: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToPoint(self: QVariant) QPoint {
        return .{ .ptr = qtc.QVariant_ToPoint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToPointF(self: QVariant) QPointF {
        return .{ .ptr = qtc.QVariant_ToPointF(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToRect(self: QVariant) QRect {
        return .{ .ptr = qtc.QVariant_ToRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToSize(self: QVariant) QSize {
        return .{ .ptr = qtc.QVariant_ToSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToSizeF(self: QVariant) QSizeF {
        return .{ .ptr = qtc.QVariant_ToSizeF(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToLine(self: QVariant) QLine {
        return .{ .ptr = qtc.QVariant_ToLine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLineF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToLineF(self: QVariant) QLineF {
        return .{ .ptr = qtc.QVariant_ToLineF(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToRectF(self: QVariant) QRectF {
        return .{ .ptr = qtc.QVariant_ToRectF(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToLocale(self: QVariant) QLocale {
        return .{ .ptr = qtc.QVariant_ToLocale(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToRegularExpression(self: QVariant) QRegularExpression {
        return .{ .ptr = qtc.QVariant_ToRegularExpression(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toEasingCurve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToEasingCurve(self: QVariant) QEasingCurve {
        return .{ .ptr = qtc.QVariant_ToEasingCurve(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToUuid(self: QVariant) QUuid {
        return .{ .ptr = qtc.QVariant_ToUuid(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToUrl(self: QVariant) QUrl {
        return .{ .ptr = qtc.QVariant_ToUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toJsonValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToJsonValue(self: QVariant) QJsonValue {
        return .{ .ptr = qtc.QVariant_ToJsonValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toJsonObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToJsonObject(self: QVariant) QJsonObject {
        return .{ .ptr = qtc.QVariant_ToJsonObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toJsonArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToJsonArray(self: QVariant) QJsonArray {
        return .{ .ptr = qtc.QVariant_ToJsonArray(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toJsonDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToJsonDocument(self: QVariant) QJsonDocument {
        return .{ .ptr = qtc.QVariant_ToJsonDocument(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toModelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToModelIndex(self: QVariant) QModelIndex {
        return .{ .ptr = qtc.QVariant_ToModelIndex(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toPersistentModelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ToPersistentModelIndex(self: QVariant) QPersistentModelIndex {
        return .{ .ptr = qtc.QVariant_ToPersistentModelIndex(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ds: QDataStream `
    ///
    pub fn Load(self: QVariant, ds: anytype) void {
        comptime _ = @TypeOf(ds)._is_QDataStream;
        qtc.QVariant_Load(@ptrCast(self.ptr), @ptrCast(ds.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ds: QDataStream `
    ///
    pub fn Save(self: QVariant, ds: anytype) void {
        comptime _ = @TypeOf(ds)._is_QDataStream;
        qtc.QVariant_Save(@ptrCast(self.ptr), @ptrCast(ds.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ## Returns:
    ///
    /// ` qvariant_enums.Type `
    ///
    pub fn Type(self: QVariant) i32 {
        return qtc.QVariant_Type(@ptrCast(self.ptr));
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
    /// ` self: QVariant `
    ///
    pub fn Data(self: QVariant) ?*anyopaque {
        return qtc.QVariant_Data(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#constData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn ConstData(self: QVariant) ?*const anyopaque {
        return qtc.QVariant_ConstData(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn Data2(self: QVariant) ?*const anyopaque {
        return qtc.QVariant_Data2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` avalue: QVariant `
    ///
    pub fn SetValue(self: QVariant, avalue: anytype) void {
        comptime _ = @TypeOf(avalue)._is_QVariant;
        qtc.QVariant_SetValue(@ptrCast(self.ptr), @ptrCast(avalue.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#fromMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QMetaType `
    ///
    pub fn FromMetaType(typeVal: anytype) QVariant {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        return .{ .ptr = qtc.QVariant_FromMetaType(@ptrCast(typeVal.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` lhs: QVariant `
    ///
    /// ` rhs: QVariant `
    ///
    pub fn Compare(lhs: anytype, rhs: anytype) QPartialOrdering {
        comptime _ = @TypeOf(lhs)._is_QVariant;
        comptime _ = @TypeOf(rhs)._is_QVariant;
        return .{ .ptr = qtc.QVariant_Compare(@ptrCast(lhs.ptr), @ptrCast(rhs.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToInt1(self: QVariant, ok: *bool) i32 {
        return qtc.QVariant_ToInt1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUInt1(self: QVariant, ok: *bool) u32 {
        return qtc.QVariant_ToUInt1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToLongLong1(self: QVariant, ok: *bool) isize {
        return qtc.QVariant_ToLongLong1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToULongLong1(self: QVariant, ok: *bool) usize {
        return qtc.QVariant_ToULongLong1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToDouble1(self: QVariant, ok: *bool) f64 {
        return qtc.QVariant_ToDouble1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToFloat1(self: QVariant, ok: *bool) f32 {
        return qtc.QVariant_ToFloat1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toReal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToReal1(self: QVariant, ok: *bool) f64 {
        return qtc.QVariant_ToReal1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#fromMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QMetaType `
    ///
    /// ` copyVal: ?*const anyopaque `
    ///
    pub fn FromMetaType2(typeVal: anytype, copyVal: ?*const anyopaque) QVariant {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        return .{ .ptr = qtc.QVariant_FromMetaType2(@ptrCast(typeVal.ptr), @ptrCast(copyVal)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#dtor.QVariant)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QVariant `
    ///
    pub fn Delete(self: QVariant) void {
        qtc.QVariant_Delete(@ptrCast(self.ptr));
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
