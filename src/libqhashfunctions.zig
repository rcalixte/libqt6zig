const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBitArray = @import("libqt6").QBitArray;
const QChar = @import("libqt6").QChar;
const QKeyCombination = @import("libqt6").QKeyCombination;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html)
pub const qhashfunctions = extern struct {
    /// ### DEPRECATED: Use `qGlobalQHashSeed` instead
    ///
    pub const QGlobalQHashSeed = qGlobalQHashSeed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qGlobalQHashSeed)
    ///
    pub fn qGlobalQHashSeed() i32 {
        return qtc.qhashfunctions_QGlobalQHashSeed();
    }

    /// ### DEPRECATED: Use `qSetGlobalQHashSeed` instead
    ///
    pub const QSetGlobalQHashSeed = qSetGlobalQHashSeed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qSetGlobalQHashSeed)
    ///
    /// ## Parameter(s):
    ///
    /// ` newSeed: i32 `
    ///
    pub fn qSetGlobalQHashSeed(newSeed: i32) void {
        qtc.qhashfunctions_QSetGlobalQHashSeed(@bitCast(newSeed));
    }

    /// ### DEPRECATED: Use `qHashBits` instead
    ///
    pub const QHashBits = qHashBits;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHashBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: ?*const anyopaque `
    ///
    /// ` size: usize `
    ///
    /// ` seed: usize `
    ///
    pub fn qHashBits(p: ?*const anyopaque, size: usize, seed: usize) usize {
        return qtc.qhashfunctions_QHashBits(@ptrCast(p), @bitCast(size), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash` instead
    ///
    pub const QHash = qHash;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: u8 `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash(key: u8, seed: usize) usize {
        return qtc.qhashfunctions_QHash(@bitCast(key), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash2` instead
    ///
    pub const QHash2 = qHash2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: u8 `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash2(key: u8, seed: usize) usize {
        return qtc.qhashfunctions_QHash2(@bitCast(key), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash3` instead
    ///
    pub const QHash3 = qHash3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: i8 `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash3(key: i8, seed: usize) usize {
        return qtc.qhashfunctions_QHash3(@bitCast(key), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash4` instead
    ///
    pub const QHash4 = qHash4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: u16 `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash4(key: u16, seed: usize) usize {
        return qtc.qhashfunctions_QHash4(@bitCast(key), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash5` instead
    ///
    pub const QHash5 = qHash5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: i16 `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash5(key: i16, seed: usize) usize {
        return qtc.qhashfunctions_QHash5(@bitCast(key), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash6` instead
    ///
    pub const QHash6 = qHash6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: u32 `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash6(key: u32, seed: usize) usize {
        return qtc.qhashfunctions_QHash6(@bitCast(key), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash7` instead
    ///
    pub const QHash7 = qHash7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: i32 `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash7(key: i32, seed: usize) usize {
        return qtc.qhashfunctions_QHash7(@bitCast(key), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash8` instead
    ///
    pub const QHash8 = qHash8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: usize `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash8(key: usize, seed: usize) usize {
        return qtc.qhashfunctions_QHash8(@bitCast(key), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash9` instead
    ///
    pub const QHash9 = qHash9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: isize `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash9(key: isize, seed: usize) usize {
        return qtc.qhashfunctions_QHash9(@bitCast(key), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash10` instead
    ///
    pub const QHash10 = qHash10;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: u64 `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash10(key: u64, seed: usize) usize {
        return qtc.qhashfunctions_QHash10(@bitCast(key), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash11` instead
    ///
    pub const QHash11 = qHash11;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: i64 `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash11(key: i64, seed: usize) usize {
        return qtc.qhashfunctions_QHash11(@bitCast(key), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash12` instead
    ///
    pub const QHash12 = qHash12;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: f32 `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash12(key: f32, seed: usize) usize {
        return qtc.qhashfunctions_QHash12(@bitCast(key), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash13` instead
    ///
    pub const QHash13 = qHash13;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: f64 `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash13(key: f64, seed: usize) usize {
        return qtc.qhashfunctions_QHash13(@bitCast(key), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash19` instead
    ///
    pub const QHash19 = qHash19;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QChar `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash19(key: anytype, seed: usize) usize {
        comptime _ = @TypeOf(key)._is_QChar;
        return qtc.qhashfunctions_QHash19(@ptrCast(key.ptr), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash20` instead
    ///
    pub const QHash20 = qHash20;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []u8 `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash20(key: []u8, seed: usize) usize {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.qhashfunctions_QHash20(key_str, @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash22` instead
    ///
    pub const QHash22 = qHash22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash22(key: []const u8, seed: usize) usize {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.qhashfunctions_QHash22(key_str, @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash23` instead
    ///
    pub const QHash23 = qHash23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash23(key: []const u8, seed: usize) usize {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.qhashfunctions_QHash23(key_str, @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash24` instead
    ///
    pub const QHash24 = qHash24;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QBitArray `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash24(key: anytype, seed: usize) usize {
        comptime _ = @TypeOf(key)._is_QBitArray;
        return qtc.qhashfunctions_QHash24(@ptrCast(key.ptr), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash25` instead
    ///
    pub const QHash25 = qHash25;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []u8 `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash25(key: []u8, seed: usize) usize {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.qhashfunctions_QHash25(key_str, @bitCast(seed));
    }

    /// ### DEPRECATED: Use `qHash26` instead
    ///
    pub const QHash26 = qHash26;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QKeyCombination `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash26(key: anytype, seed: usize) usize {
        comptime _ = @TypeOf(key)._is_QKeyCombination;
        return qtc.qhashfunctions_QHash26(@ptrCast(key.ptr), @bitCast(seed));
    }

    /// ### DEPRECATED: Use `hash` instead
    ///
    pub const Hash = hash;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qt_hash)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    /// ` chained: u32 `
    ///
    pub fn hash(key: []const u8, chained: u32) u32 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.qhashfunctions_Hash(key_str, @bitCast(chained));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html)
pub const QHashSeed = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHashSeed,

    pub const _is_QHashSeed = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QHashSeed object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QHashSeed `
    ///
    pub fn new(other: anytype) QHashSeed {
        comptime _ = @TypeOf(other)._is_QHashSeed;
        return .{ .ptr = qtc.QHashSeed_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QHashSeed object and invalidate the source QHashSeed object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QHashSeed `
    ///
    pub fn new2(other: anytype) QHashSeed {
        comptime _ = @TypeOf(other)._is_QHashSeed;
        return .{ .ptr = qtc.QHashSeed_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QHashSeed object in C++ memory
    ///
    pub fn new3() QHashSeed {
        return .{ .ptr = qtc.QHashSeed_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QHashSeed object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` d: usize `
    ///
    pub fn new4(d: usize) QHashSeed {
        return .{ .ptr = qtc.QHashSeed_new4(@bitCast(d)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QHashSeed `
    ///
    /// ` other: QHashSeed `
    ///
    pub fn copyAssign(self: QHashSeed, other: QHashSeed) void {
        qtc.QHashSeed_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QHashSeed `
    ///
    /// ` other: QHashSeed `
    ///
    pub fn moveAssign(self: QHashSeed, other: QHashSeed) void {
        qtc.QHashSeed_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toUnsignedLong` instead
    ///
    pub const ToUnsignedLong = toUnsignedLong;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#operator-unsigned-long)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHashSeed `
    ///
    pub fn toUnsignedLong(self: QHashSeed) usize {
        return qtc.QHashSeed_ToUnsignedLong(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `globalSeed` instead
    ///
    pub const GlobalSeed = globalSeed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#globalSeed)
    ///
    pub fn globalSeed() QHashSeed {
        return .{ .ptr = qtc.QHashSeed_GlobalSeed() };
    }

    /// ### DEPRECATED: Use `setDeterministicGlobalSeed` instead
    ///
    pub const SetDeterministicGlobalSeed = setDeterministicGlobalSeed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#setDeterministicGlobalSeed)
    ///
    pub fn setDeterministicGlobalSeed() void {
        qtc.QHashSeed_SetDeterministicGlobalSeed();
    }

    /// ### DEPRECATED: Use `resetRandomGlobalSeed` instead
    ///
    pub const ResetRandomGlobalSeed = resetRandomGlobalSeed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#resetRandomGlobalSeed)
    ///
    pub fn resetRandomGlobalSeed() void {
        qtc.QHashSeed_ResetRandomGlobalSeed();
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#dtor.QHashSeed)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QHashSeed `
    ///
    pub fn delete(self: QHashSeed) void {
        qtc.QHashSeed_Delete(@ptrCast(self.ptr));
    }
};
