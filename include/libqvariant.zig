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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVariant object in C++ memory
    ///
    pub fn new() QVariant {
        return .{ .ptr = qtc.QVariant_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QMetaType `
    ///
    pub fn new2(typeVal: anytype) QVariant {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        return .{ .ptr = qtc.QVariant_new2(@ptrCast(typeVal.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVariant `
    ///
    pub fn new3(other: anytype) QVariant {
        comptime _ = @TypeOf(other)._is_QVariant;
        return .{ .ptr = qtc.QVariant_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` i: i32 `
    ///
    pub fn new4(i: i32) QVariant {
        return .{ .ptr = qtc.QVariant_new4(@bitCast(i)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ui: u32 `
    ///
    pub fn new5(ui: u32) QVariant {
        return .{ .ptr = qtc.QVariant_new5(@bitCast(ui)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ll: isize `
    ///
    pub fn new6(ll: isize) QVariant {
        return .{ .ptr = qtc.QVariant_new6(@bitCast(ll)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ull: usize `
    ///
    pub fn new7(ull: usize) QVariant {
        return .{ .ptr = qtc.QVariant_new7(@bitCast(ull)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` b: bool `
    ///
    pub fn new8(b: bool) QVariant {
        return .{ .ptr = qtc.QVariant_new8(b) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` d: f64 `
    ///
    pub fn new9(d: f64) QVariant {
        return .{ .ptr = qtc.QVariant_new9(@bitCast(d)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` f: f32 `
    ///
    pub fn new10(f: f32) QVariant {
        return .{ .ptr = qtc.QVariant_new10(@bitCast(f)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` qchar: QChar `
    ///
    pub fn new11(qchar: anytype) QVariant {
        comptime _ = @TypeOf(qchar)._is_QChar;
        return .{ .ptr = qtc.QVariant_new11(@ptrCast(qchar.ptr)) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` date: QDate `
    ///
    pub fn new12(date: anytype) QVariant {
        comptime _ = @TypeOf(date)._is_QDate;
        return .{ .ptr = qtc.QVariant_new12(@ptrCast(date.ptr)) };
    }

    /// ### DEPRECATED: Use `new13` instead
    ///
    pub const New13 = new13;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` time: QTime `
    ///
    pub fn new13(time: anytype) QVariant {
        comptime _ = @TypeOf(time)._is_QTime;
        return .{ .ptr = qtc.QVariant_new13(@ptrCast(time.ptr)) };
    }

    /// ### DEPRECATED: Use `new14` instead
    ///
    pub const New14 = new14;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` bitarray: QBitArray `
    ///
    pub fn new14(bitarray: anytype) QVariant {
        comptime _ = @TypeOf(bitarray)._is_QBitArray;
        return .{ .ptr = qtc.QVariant_new14(@ptrCast(bitarray.ptr)) };
    }

    /// ### DEPRECATED: Use `new15` instead
    ///
    pub const New15 = new15;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` bytearray: []u8 `
    ///
    pub fn new15(bytearray: []u8) QVariant {
        const bytearray_str = qtc.libqt_string{
            .len = bytearray.len,
            .data = bytearray.ptr,
        };
        return .{ .ptr = qtc.QVariant_new15(bytearray_str) };
    }

    /// ### DEPRECATED: Use `new16` instead
    ///
    pub const New16 = new16;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` datetime: QDateTime `
    ///
    pub fn new16(datetime: anytype) QVariant {
        comptime _ = @TypeOf(datetime)._is_QDateTime;
        return .{ .ptr = qtc.QVariant_new16(@ptrCast(datetime.ptr)) };
    }

    /// ### DEPRECATED: Use `new17` instead
    ///
    pub const New17 = new17;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` hash: Map_constu8_QVariant `
    ///
    pub fn new17(allocator: std.mem.Allocator, hash: Map_constu8_QVariant) QVariant {
        const hash_count = hash.count();
        const hash_keys = allocator.alloc(qtc.libqt_string, hash_count) catch @panic("QVariant.new17: Memory allocation failed");
        defer allocator.free(hash_keys);
        const hash_values = allocator.alloc(QtC.QVariant, hash_count) catch @panic("QVariant.new17: Memory allocation failed");
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

    /// ### DEPRECATED: Use `new18` instead
    ///
    pub const New18 = new18;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` jsonArray: QJsonArray `
    ///
    pub fn new18(jsonArray: anytype) QVariant {
        comptime _ = @TypeOf(jsonArray)._is_QJsonArray;
        return .{ .ptr = qtc.QVariant_new18(@ptrCast(jsonArray.ptr)) };
    }

    /// ### DEPRECATED: Use `new19` instead
    ///
    pub const New19 = new19;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` jsonObject: QJsonObject `
    ///
    pub fn new19(jsonObject: anytype) QVariant {
        comptime _ = @TypeOf(jsonObject)._is_QJsonObject;
        return .{ .ptr = qtc.QVariant_new19(@ptrCast(jsonObject.ptr)) };
    }

    /// ### DEPRECATED: Use `new20` instead
    ///
    pub const New20 = new20;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` list: []QVariant `
    ///
    pub fn new20(list: []QVariant) QVariant {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        return .{ .ptr = qtc.QVariant_new20(list_list) };
    }

    /// ### DEPRECATED: Use `new21` instead
    ///
    pub const New21 = new21;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` locale: QLocale `
    ///
    pub fn new21(locale: anytype) QVariant {
        comptime _ = @TypeOf(locale)._is_QLocale;
        return .{ .ptr = qtc.QVariant_new21(@ptrCast(locale.ptr)) };
    }

    /// ### DEPRECATED: Use `new22` instead
    ///
    pub const New22 = new22;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` map: ArrayMap_constu8_QVariant `
    ///
    pub fn new22(allocator: std.mem.Allocator, map: ArrayMap_constu8_QVariant) QVariant {
        const map_count = map.count();
        const map_keys = allocator.alloc(qtc.libqt_string, map_count) catch @panic("QVariant.new22: Memory allocation failed");
        defer allocator.free(map_keys);
        const map_values = allocator.alloc(QtC.QVariant, map_count) catch @panic("QVariant.new22: Memory allocation failed");
        defer allocator.free(map_values);
        var i: usize = 0;
        var map_it = map.iterator();
        while (map_it.next()) |it_entry| : (i += 1) {
            const map_key = it_entry.key_ptr.*;
            map_keys[i] = qtc.libqt_string{
                .len = map_key.len,
                .data = map_key.ptr,
            };
            map_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const map_map = qtc.libqt_map{
            .len = map_count,
            .keys = @ptrCast(map_keys.ptr),
            .values = @ptrCast(map_values.ptr),
        };
        return .{ .ptr = qtc.QVariant_new22(map_map) };
    }

    /// ### DEPRECATED: Use `new23` instead
    ///
    pub const New23 = new23;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` re: QRegularExpression `
    ///
    pub fn new23(re: anytype) QVariant {
        comptime _ = @TypeOf(re)._is_QRegularExpression;
        return .{ .ptr = qtc.QVariant_new23(@ptrCast(re.ptr)) };
    }

    /// ### DEPRECATED: Use `new24` instead
    ///
    pub const New24 = new24;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    pub fn new24(string: []const u8) QVariant {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QVariant_new24(string_str) };
    }

    /// ### DEPRECATED: Use `new25` instead
    ///
    pub const New25 = new25;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` stringlist: []const []const u8 `
    ///
    pub fn new25(allocator: std.mem.Allocator, stringlist: []const []const u8) QVariant {
        const stringlist_arr = allocator.alloc(qtc.libqt_string, stringlist.len) catch @panic("QVariant.new25: Memory allocation failed");
        defer allocator.free(stringlist_arr);
        for (stringlist, 0..stringlist.len) |str_item, i|
            stringlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const stringlist_list = qtc.libqt_list{
            .len = stringlist.len,
            .data = stringlist_arr.ptr,
        };
        return .{ .ptr = qtc.QVariant_new25(stringlist_list) };
    }

    /// ### DEPRECATED: Use `new26` instead
    ///
    pub const New26 = new26;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn new26(url: anytype) QVariant {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QVariant_new26(@ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `new27` instead
    ///
    pub const New27 = new27;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` jsonValue: QJsonValue `
    ///
    pub fn new27(jsonValue: anytype) QVariant {
        comptime _ = @TypeOf(jsonValue)._is_QJsonValue;
        return .{ .ptr = qtc.QVariant_new27(@ptrCast(jsonValue.ptr)) };
    }

    /// ### DEPRECATED: Use `new28` instead
    ///
    pub const New28 = new28;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` modelIndex: QModelIndex `
    ///
    pub fn new28(modelIndex: anytype) QVariant {
        comptime _ = @TypeOf(modelIndex)._is_QModelIndex;
        return .{ .ptr = qtc.QVariant_new28(@ptrCast(modelIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `new29` instead
    ///
    pub const New29 = new29;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: QUuid `
    ///
    pub fn new29(uuid: anytype) QVariant {
        comptime _ = @TypeOf(uuid)._is_QUuid;
        return .{ .ptr = qtc.QVariant_new29(@ptrCast(uuid.ptr)) };
    }

    /// ### DEPRECATED: Use `new30` instead
    ///
    pub const New30 = new30;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    pub fn new30(size: anytype) QVariant {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QVariant_new30(@ptrCast(size.ptr)) };
    }

    /// ### DEPRECATED: Use `new31` instead
    ///
    pub const New31 = new31;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSizeF `
    ///
    pub fn new31(size: anytype) QVariant {
        comptime _ = @TypeOf(size)._is_QSizeF;
        return .{ .ptr = qtc.QVariant_new31(@ptrCast(size.ptr)) };
    }

    /// ### DEPRECATED: Use `new32` instead
    ///
    pub const New32 = new32;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pt: QPoint `
    ///
    pub fn new32(pt: anytype) QVariant {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return .{ .ptr = qtc.QVariant_new32(@ptrCast(pt.ptr)) };
    }

    /// ### DEPRECATED: Use `new33` instead
    ///
    pub const New33 = new33;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pt: QPointF `
    ///
    pub fn new33(pt: anytype) QVariant {
        comptime _ = @TypeOf(pt)._is_QPointF;
        return .{ .ptr = qtc.QVariant_new33(@ptrCast(pt.ptr)) };
    }

    /// ### DEPRECATED: Use `new34` instead
    ///
    pub const New34 = new34;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` line: QLine `
    ///
    pub fn new34(line: anytype) QVariant {
        comptime _ = @TypeOf(line)._is_QLine;
        return .{ .ptr = qtc.QVariant_new34(@ptrCast(line.ptr)) };
    }

    /// ### DEPRECATED: Use `new35` instead
    ///
    pub const New35 = new35;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` line: QLineF `
    ///
    pub fn new35(line: anytype) QVariant {
        comptime _ = @TypeOf(line)._is_QLineF;
        return .{ .ptr = qtc.QVariant_new35(@ptrCast(line.ptr)) };
    }

    /// ### DEPRECATED: Use `new36` instead
    ///
    pub const New36 = new36;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rect: QRect `
    ///
    pub fn new36(rect: anytype) QVariant {
        comptime _ = @TypeOf(rect)._is_QRect;
        return .{ .ptr = qtc.QVariant_new36(@ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `new37` instead
    ///
    pub const New37 = new37;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rect: QRectF `
    ///
    pub fn new37(rect: anytype) QVariant {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QVariant_new37(@ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `new38` instead
    ///
    pub const New38 = new38;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` easing: QEasingCurve `
    ///
    pub fn new38(easing: anytype) QVariant {
        comptime _ = @TypeOf(easing)._is_QEasingCurve;
        return .{ .ptr = qtc.QVariant_new38(@ptrCast(easing.ptr)) };
    }

    /// ### DEPRECATED: Use `new39` instead
    ///
    pub const New39 = new39;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` jsonDocument: QJsonDocument `
    ///
    pub fn new39(jsonDocument: anytype) QVariant {
        comptime _ = @TypeOf(jsonDocument)._is_QJsonDocument;
        return .{ .ptr = qtc.QVariant_new39(@ptrCast(jsonDocument.ptr)) };
    }

    /// ### DEPRECATED: Use `new40` instead
    ///
    pub const New40 = new40;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` modelIndex: QPersistentModelIndex `
    ///
    pub fn new40(modelIndex: anytype) QVariant {
        comptime _ = @TypeOf(modelIndex)._is_QPersistentModelIndex;
        return .{ .ptr = qtc.QVariant_new40(@ptrCast(modelIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `new41` instead
    ///
    pub const New41 = new41;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` str: [:0]const u8 `
    ///
    pub fn new41(str: [:0]const u8) QVariant {
        const str_Cstring = str.ptr;
        return .{ .ptr = qtc.QVariant_new41(str_Cstring) };
    }

    /// ### DEPRECATED: Use `new42` instead
    ///
    pub const New42 = new42;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []u8 `
    ///
    pub fn new42(string: []u8) QVariant {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QVariant_new42(string_str) };
    }

    /// ### DEPRECATED: Use `new43` instead
    ///
    pub const New43 = new43;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qvariant_enums.Type `
    ///
    pub fn new43(typeVal: i32) QVariant {
        return .{ .ptr = qtc.QVariant_new43(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new44` instead
    ///
    pub const New44 = new44;

    /// Allocate a new QVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QMetaType `
    ///
    /// ` copy: ?*const anyopaque `
    ///
    pub fn new44(typeVal: anytype, copy: ?*const anyopaque) QVariant {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        return .{ .ptr = qtc.QVariant_new44(@ptrCast(typeVal.ptr), @ptrCast(copy)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` other: QVariant `
    ///
    pub fn operatorAssign(self: QVariant, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QVariant;
        qtc.QVariant_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` other: QVariant `
    ///
    pub fn swap(self: QVariant, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QVariant;
        qtc.QVariant_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `userType` instead
    ///
    pub const UserType = userType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#userType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn userType(self: QVariant) i32 {
        return qtc.QVariant_UserType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `typeId` instead
    ///
    pub const TypeId = typeId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#typeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn typeId(self: QVariant) i32 {
        return qtc.QVariant_TypeId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `typeName` instead
    ///
    pub const TypeName = typeName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#typeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn typeName(self: QVariant) [:0]const u8 {
        const _ret = qtc.QVariant_TypeName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `metaType` instead
    ///
    pub const MetaType = metaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn metaType(self: QVariant) QMetaType {
        return .{ .ptr = qtc.QVariant_MetaType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `canConvert` instead
    ///
    pub const CanConvert = canConvert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#canConvert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` targetType: QMetaType `
    ///
    pub fn canConvert(self: QVariant, targetType: anytype) bool {
        comptime _ = @TypeOf(targetType)._is_QMetaType;
        return qtc.QVariant_CanConvert(@ptrCast(self.ptr), @ptrCast(targetType.ptr));
    }

    /// ### DEPRECATED: Use `convert` instead
    ///
    pub const Convert = convert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` typeVal: QMetaType `
    ///
    pub fn convert(self: QVariant, typeVal: anytype) bool {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        return qtc.QVariant_Convert(@ptrCast(self.ptr), @ptrCast(typeVal.ptr));
    }

    /// ### DEPRECATED: Use `canView` instead
    ///
    pub const CanView = canView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#canView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` targetType: QMetaType `
    ///
    pub fn canView(self: QVariant, targetType: anytype) bool {
        comptime _ = @TypeOf(targetType)._is_QMetaType;
        return qtc.QVariant_CanView(@ptrCast(self.ptr), @ptrCast(targetType.ptr));
    }

    /// ### DEPRECATED: Use `canConvert2` instead
    ///
    pub const CanConvert2 = canConvert2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#canConvert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` targetTypeId: i32 `
    ///
    pub fn canConvert2(self: QVariant, targetTypeId: i32) bool {
        return qtc.QVariant_CanConvert2(@ptrCast(self.ptr), @bitCast(targetTypeId));
    }

    /// ### DEPRECATED: Use `convert2` instead
    ///
    pub const Convert2 = convert2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` targetTypeId: i32 `
    ///
    pub fn convert2(self: QVariant, targetTypeId: i32) bool {
        return qtc.QVariant_Convert2(@ptrCast(self.ptr), @bitCast(targetTypeId));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn isValid(self: QVariant) bool {
        return qtc.QVariant_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn isNull(self: QVariant) bool {
        return qtc.QVariant_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn clear(self: QVariant) void {
        qtc.QVariant_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn detach(self: QVariant) void {
        qtc.QVariant_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDetached` instead
    ///
    pub const IsDetached = isDetached;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn isDetached(self: QVariant) bool {
        return qtc.QVariant_IsDetached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toInt` instead
    ///
    pub const ToInt = toInt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toInt(self: QVariant) i32 {
        return qtc.QVariant_ToInt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toUInt` instead
    ///
    pub const ToUInt = toUInt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toUInt(self: QVariant) u32 {
        return qtc.QVariant_ToUInt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toLongLong` instead
    ///
    pub const ToLongLong = toLongLong;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toLongLong(self: QVariant) isize {
        return qtc.QVariant_ToLongLong(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toULongLong` instead
    ///
    pub const ToULongLong = toULongLong;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toULongLong(self: QVariant) usize {
        return qtc.QVariant_ToULongLong(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBool` instead
    ///
    pub const ToBool = toBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toBool(self: QVariant) bool {
        return qtc.QVariant_ToBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toDouble` instead
    ///
    pub const ToDouble = toDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toDouble(self: QVariant) f64 {
        return qtc.QVariant_ToDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toFloat` instead
    ///
    pub const ToFloat = toFloat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toFloat(self: QVariant) f32 {
        return qtc.QVariant_ToFloat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toReal` instead
    ///
    pub const ToReal = toReal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toReal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toReal(self: QVariant) f64 {
        return qtc.QVariant_ToReal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toByteArray` instead
    ///
    pub const ToByteArray = toByteArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toByteArray(self: QVariant, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QVariant_ToByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QVariant.toByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toBitArray` instead
    ///
    pub const ToBitArray = toBitArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toBitArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toBitArray(self: QVariant) QBitArray {
        return .{ .ptr = qtc.QVariant_ToBitArray(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QVariant, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVariant_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVariant.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toStringList` instead
    ///
    pub const ToStringList = toStringList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toStringList(self: QVariant, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QVariant_ToStringList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QVariant.toStringList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QVariant.toStringList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `toChar` instead
    ///
    pub const ToChar = toChar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toChar(self: QVariant) QChar {
        return .{ .ptr = qtc.QVariant_ToChar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDate` instead
    ///
    pub const ToDate = toDate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toDate(self: QVariant) QDate {
        return .{ .ptr = qtc.QVariant_ToDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTime` instead
    ///
    pub const ToTime = toTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toTime(self: QVariant) QTime {
        return .{ .ptr = qtc.QVariant_ToTime(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDateTime` instead
    ///
    pub const ToDateTime = toDateTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toDateTime(self: QVariant) QDateTime {
        return .{ .ptr = qtc.QVariant_ToDateTime(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toList` instead
    ///
    pub const ToList = toList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toList(self: QVariant, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QVariant_ToList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("QVariant.toList: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `toMap` instead
    ///
    pub const ToMap = toMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toMap(self: QVariant, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QVariant_ToMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QVariant.toMap: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("QVariant.toMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `toHash` instead
    ///
    pub const ToHash = toHash;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toHash(self: QVariant, allocator: std.mem.Allocator) Map_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QVariant_ToHash(@ptrCast(self.ptr));
        var _ret: Map_constu8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QVariant.toHash: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("QVariant.toHash: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `toPoint` instead
    ///
    pub const ToPoint = toPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toPoint(self: QVariant) QPoint {
        return .{ .ptr = qtc.QVariant_ToPoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toPointF` instead
    ///
    pub const ToPointF = toPointF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toPointF(self: QVariant) QPointF {
        return .{ .ptr = qtc.QVariant_ToPointF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toRect` instead
    ///
    pub const ToRect = toRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toRect(self: QVariant) QRect {
        return .{ .ptr = qtc.QVariant_ToRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toSize` instead
    ///
    pub const ToSize = toSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toSize(self: QVariant) QSize {
        return .{ .ptr = qtc.QVariant_ToSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toSizeF` instead
    ///
    pub const ToSizeF = toSizeF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toSizeF(self: QVariant) QSizeF {
        return .{ .ptr = qtc.QVariant_ToSizeF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toLine` instead
    ///
    pub const ToLine = toLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toLine(self: QVariant) QLine {
        return .{ .ptr = qtc.QVariant_ToLine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toLineF` instead
    ///
    pub const ToLineF = toLineF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLineF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toLineF(self: QVariant) QLineF {
        return .{ .ptr = qtc.QVariant_ToLineF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toRectF` instead
    ///
    pub const ToRectF = toRectF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toRectF(self: QVariant) QRectF {
        return .{ .ptr = qtc.QVariant_ToRectF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toLocale` instead
    ///
    pub const ToLocale = toLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toLocale(self: QVariant) QLocale {
        return .{ .ptr = qtc.QVariant_ToLocale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toRegularExpression` instead
    ///
    pub const ToRegularExpression = toRegularExpression;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toRegularExpression(self: QVariant) QRegularExpression {
        return .{ .ptr = qtc.QVariant_ToRegularExpression(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEasingCurve` instead
    ///
    pub const ToEasingCurve = toEasingCurve;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toEasingCurve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toEasingCurve(self: QVariant) QEasingCurve {
        return .{ .ptr = qtc.QVariant_ToEasingCurve(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toUuid` instead
    ///
    pub const ToUuid = toUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toUuid(self: QVariant) QUuid {
        return .{ .ptr = qtc.QVariant_ToUuid(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toUrl` instead
    ///
    pub const ToUrl = toUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toUrl(self: QVariant) QUrl {
        return .{ .ptr = qtc.QVariant_ToUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toJsonValue` instead
    ///
    pub const ToJsonValue = toJsonValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toJsonValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toJsonValue(self: QVariant) QJsonValue {
        return .{ .ptr = qtc.QVariant_ToJsonValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toJsonObject` instead
    ///
    pub const ToJsonObject = toJsonObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toJsonObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toJsonObject(self: QVariant) QJsonObject {
        return .{ .ptr = qtc.QVariant_ToJsonObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toJsonArray` instead
    ///
    pub const ToJsonArray = toJsonArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toJsonArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toJsonArray(self: QVariant) QJsonArray {
        return .{ .ptr = qtc.QVariant_ToJsonArray(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toJsonDocument` instead
    ///
    pub const ToJsonDocument = toJsonDocument;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toJsonDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toJsonDocument(self: QVariant) QJsonDocument {
        return .{ .ptr = qtc.QVariant_ToJsonDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toModelIndex` instead
    ///
    pub const ToModelIndex = toModelIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toModelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toModelIndex(self: QVariant) QModelIndex {
        return .{ .ptr = qtc.QVariant_ToModelIndex(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toPersistentModelIndex` instead
    ///
    pub const ToPersistentModelIndex = toPersistentModelIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toPersistentModelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn toPersistentModelIndex(self: QVariant) QPersistentModelIndex {
        return .{ .ptr = qtc.QVariant_ToPersistentModelIndex(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `load` instead
    ///
    pub const Load = load;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ds: QDataStream `
    ///
    pub fn load(self: QVariant, ds: anytype) void {
        comptime _ = @TypeOf(ds)._is_QDataStream;
        qtc.QVariant_Load(@ptrCast(self.ptr), @ptrCast(ds.ptr));
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ds: QDataStream `
    ///
    pub fn save(self: QVariant, ds: anytype) void {
        comptime _ = @TypeOf(ds)._is_QDataStream;
        qtc.QVariant_Save(@ptrCast(self.ptr), @ptrCast(ds.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QVariant) i32 {
        return qtc.QVariant_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `typeToName` instead
    ///
    pub const TypeToName = typeToName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#typeToName)
    ///
    /// ## Parameter(s):
    ///
    /// ` _typeId: i32 `
    ///
    pub fn typeToName(_typeId: i32) [:0]const u8 {
        const _ret = qtc.QVariant_TypeToName(@bitCast(_typeId));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `nameToType` instead
    ///
    pub const NameToType = nameToType;

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
    pub fn nameToType(name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QVariant_NameToType(name_Cstring);
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn data(self: QVariant) ?*anyopaque {
        return qtc.QVariant_Data(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `constData` instead
    ///
    pub const ConstData = constData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#constData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn constData(self: QVariant) ?*const anyopaque {
        return qtc.QVariant_ConstData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data2` instead
    ///
    pub const Data2 = data2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    pub fn data2(self: QVariant) ?*const anyopaque {
        return qtc.QVariant_Data2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` avalue: QVariant `
    ///
    pub fn setValue(self: QVariant, avalue: anytype) void {
        comptime _ = @TypeOf(avalue)._is_QVariant;
        qtc.QVariant_SetValue(@ptrCast(self.ptr), @ptrCast(avalue.ptr));
    }

    /// ### DEPRECATED: Use `fromMetaType` instead
    ///
    pub const FromMetaType = fromMetaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#fromMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QMetaType `
    ///
    pub fn fromMetaType(typeVal: anytype) QVariant {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        return .{ .ptr = qtc.QVariant_FromMetaType(@ptrCast(typeVal.ptr)) };
    }

    /// ### DEPRECATED: Use `compare` instead
    ///
    pub const Compare = compare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` lhs: QVariant `
    ///
    /// ` rhs: QVariant `
    ///
    pub fn compare(lhs: anytype, rhs: anytype) QPartialOrdering {
        comptime _ = @TypeOf(lhs)._is_QVariant;
        comptime _ = @TypeOf(rhs)._is_QVariant;
        return .{ .ptr = qtc.QVariant_Compare(@ptrCast(lhs.ptr), @ptrCast(rhs.ptr)) };
    }

    /// ### DEPRECATED: Use `toInt1` instead
    ///
    pub const ToInt1 = toInt1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn toInt1(self: QVariant, ok: *bool) i32 {
        return qtc.QVariant_ToInt1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `toUInt1` instead
    ///
    pub const ToUInt1 = toUInt1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn toUInt1(self: QVariant, ok: *bool) u32 {
        return qtc.QVariant_ToUInt1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `toLongLong1` instead
    ///
    pub const ToLongLong1 = toLongLong1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn toLongLong1(self: QVariant, ok: *bool) isize {
        return qtc.QVariant_ToLongLong1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `toULongLong1` instead
    ///
    pub const ToULongLong1 = toULongLong1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn toULongLong1(self: QVariant, ok: *bool) usize {
        return qtc.QVariant_ToULongLong1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `toDouble1` instead
    ///
    pub const ToDouble1 = toDouble1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn toDouble1(self: QVariant, ok: *bool) f64 {
        return qtc.QVariant_ToDouble1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `toFloat1` instead
    ///
    pub const ToFloat1 = toFloat1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn toFloat1(self: QVariant, ok: *bool) f32 {
        return qtc.QVariant_ToFloat1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `toReal1` instead
    ///
    pub const ToReal1 = toReal1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#toReal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariant `
    ///
    /// ` ok: *bool `
    ///
    pub fn toReal1(self: QVariant, ok: *bool) f64 {
        return qtc.QVariant_ToReal1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `fromMetaType2` instead
    ///
    pub const FromMetaType2 = fromMetaType2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#fromMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QMetaType `
    ///
    /// ` copy: ?*const anyopaque `
    ///
    pub fn fromMetaType2(typeVal: anytype, copy: ?*const anyopaque) QVariant {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        return .{ .ptr = qtc.QVariant_FromMetaType2(@ptrCast(typeVal.ptr), @ptrCast(copy)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#dtor.QVariant)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVariant `
    ///
    pub fn delete(self: QVariant) void {
        qtc.QVariant_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvariant.html#public-types)
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
