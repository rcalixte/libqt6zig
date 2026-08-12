const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html)
pub const QRandomGenerator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QRandomGenerator,

    pub const _is_QRandomGenerator = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QRandomGenerator object in C++ memory
    ///
    pub fn new() QRandomGenerator {
        return .{ .ptr = qtc.QRandomGenerator_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QRandomGenerator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` seedBuffer: *const u32 `
    ///
    /// ` len: isize `
    ///
    pub fn new2(seedBuffer: *const u32, len: isize) QRandomGenerator {
        return .{ .ptr = qtc.QRandomGenerator_new2(@ptrCast(seedBuffer), @bitCast(len)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QRandomGenerator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` begin: *const u32 `
    ///
    /// ` end: *const u32 `
    ///
    pub fn new3(begin: *const u32, end: *const u32) QRandomGenerator {
        return .{ .ptr = qtc.QRandomGenerator_new3(@ptrCast(begin), @ptrCast(end)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QRandomGenerator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QRandomGenerator `
    ///
    pub fn new4(other: anytype) QRandomGenerator {
        comptime _ = @TypeOf(other)._is_QRandomGenerator;
        return .{ .ptr = qtc.QRandomGenerator_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QRandomGenerator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` seedValue: u32 `
    ///
    pub fn new5(seedValue: u32) QRandomGenerator {
        return .{ .ptr = qtc.QRandomGenerator_new5(@bitCast(seedValue)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` other: QRandomGenerator `
    ///
    pub fn operatorAssign(self: QRandomGenerator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QRandomGenerator;
        qtc.QRandomGenerator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `generate` instead
    ///
    pub const Generate = generate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    pub fn generate(self: QRandomGenerator) u32 {
        return qtc.QRandomGenerator_Generate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `generate64` instead
    ///
    pub const Generate64 = generate64;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generate64)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    pub fn generate64(self: QRandomGenerator) u64 {
        return qtc.QRandomGenerator_Generate64(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `generateDouble` instead
    ///
    pub const GenerateDouble = generateDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generateDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    pub fn generateDouble(self: QRandomGenerator) f64 {
        return qtc.QRandomGenerator_GenerateDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bounded` instead
    ///
    pub const Bounded = bounded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` highest: f64 `
    ///
    pub fn bounded(self: QRandomGenerator, highest: f64) f64 {
        return qtc.QRandomGenerator_Bounded(@ptrCast(self.ptr), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded2` instead
    ///
    pub const Bounded2 = bounded2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` highest: u32 `
    ///
    pub fn bounded2(self: QRandomGenerator, highest: u32) u32 {
        return qtc.QRandomGenerator_Bounded2(@ptrCast(self.ptr), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded3` instead
    ///
    pub const Bounded3 = bounded3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` lowest: u32 `
    ///
    /// ` highest: u32 `
    ///
    pub fn bounded3(self: QRandomGenerator, lowest: u32, highest: u32) u32 {
        return qtc.QRandomGenerator_Bounded3(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded4` instead
    ///
    pub const Bounded4 = bounded4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` highest: i32 `
    ///
    pub fn bounded4(self: QRandomGenerator, highest: i32) i32 {
        return qtc.QRandomGenerator_Bounded4(@ptrCast(self.ptr), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded5` instead
    ///
    pub const Bounded5 = bounded5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` lowest: i32 `
    ///
    /// ` highest: i32 `
    ///
    pub fn bounded5(self: QRandomGenerator, lowest: i32, highest: i32) i32 {
        return qtc.QRandomGenerator_Bounded5(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded6` instead
    ///
    pub const Bounded6 = bounded6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` highest: u64 `
    ///
    pub fn bounded6(self: QRandomGenerator, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded6(@ptrCast(self.ptr), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded7` instead
    ///
    pub const Bounded7 = bounded7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` lowest: u64 `
    ///
    /// ` highest: u64 `
    ///
    pub fn bounded7(self: QRandomGenerator, lowest: u64, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded7(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded8` instead
    ///
    pub const Bounded8 = bounded8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` highest: i64 `
    ///
    pub fn bounded8(self: QRandomGenerator, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded8(@ptrCast(self.ptr), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded9` instead
    ///
    pub const Bounded9 = bounded9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` lowest: i64 `
    ///
    /// ` highest: i64 `
    ///
    pub fn bounded9(self: QRandomGenerator, lowest: i64, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded9(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded10` instead
    ///
    pub const Bounded10 = bounded10;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` lowest: i32 `
    ///
    /// ` highest: i64 `
    ///
    pub fn bounded10(self: QRandomGenerator, lowest: i32, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded10(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded11` instead
    ///
    pub const Bounded11 = bounded11;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` lowest: i64 `
    ///
    /// ` highest: i32 `
    ///
    pub fn bounded11(self: QRandomGenerator, lowest: i64, highest: i32) i64 {
        return qtc.QRandomGenerator_Bounded11(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded12` instead
    ///
    pub const Bounded12 = bounded12;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` lowest: u32 `
    ///
    /// ` highest: u64 `
    ///
    pub fn bounded12(self: QRandomGenerator, lowest: u32, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded12(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded13` instead
    ///
    pub const Bounded13 = bounded13;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` lowest: u64 `
    ///
    /// ` highest: u32 `
    ///
    pub fn bounded13(self: QRandomGenerator, lowest: u64, highest: u32) u64 {
        return qtc.QRandomGenerator_Bounded13(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `generate2` instead
    ///
    pub const Generate2 = generate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` begin: *u32 `
    ///
    /// ` end: *u32 `
    ///
    pub fn generate2(self: QRandomGenerator, begin: *u32, end: *u32) void {
        qtc.QRandomGenerator_Generate2(@ptrCast(self.ptr), @ptrCast(begin), @ptrCast(end));
    }

    /// ### DEPRECATED: Use `operatorCall` instead
    ///
    pub const OperatorCall = operatorCall;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    pub fn operatorCall(self: QRandomGenerator) u32 {
        return qtc.QRandomGenerator_OperatorCall(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `seed` instead
    ///
    pub const Seed = seed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    pub fn seed(self: QRandomGenerator) void {
        qtc.QRandomGenerator_Seed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `discard` instead
    ///
    pub const Discard = discard;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#discard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` z: usize `
    ///
    pub fn discard(self: QRandomGenerator, z: usize) void {
        qtc.QRandomGenerator_Discard(@ptrCast(self.ptr), @bitCast(z));
    }

    /// ### DEPRECATED: Use `min` instead
    ///
    pub const Min = min;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#min)
    ///
    pub fn min() u32 {
        return qtc.QRandomGenerator_Min();
    }

    /// ### DEPRECATED: Use `max` instead
    ///
    pub const Max = max;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#max)
    ///
    pub fn max() u32 {
        return qtc.QRandomGenerator_Max();
    }

    /// ### DEPRECATED: Use `system` instead
    ///
    pub const System = system;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#system)
    ///
    pub fn system() QRandomGenerator {
        return .{ .ptr = qtc.QRandomGenerator_System() };
    }

    /// ### DEPRECATED: Use `global` instead
    ///
    pub const Global = global;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#global)
    ///
    pub fn global() QRandomGenerator {
        return .{ .ptr = qtc.QRandomGenerator_Global() };
    }

    /// ### DEPRECATED: Use `securelySeeded` instead
    ///
    pub const SecurelySeeded = securelySeeded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#securelySeeded)
    ///
    pub fn securelySeeded() QRandomGenerator {
        return .{ .ptr = qtc.QRandomGenerator_SecurelySeeded() };
    }

    /// ### DEPRECATED: Use `seed1` instead
    ///
    pub const Seed1 = seed1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` s: u32 `
    ///
    pub fn seed1(self: QRandomGenerator, s: u32) void {
        qtc.QRandomGenerator_Seed1(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#dtor.QRandomGenerator)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QRandomGenerator `
    ///
    pub fn delete(self: QRandomGenerator) void {
        qtc.QRandomGenerator_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html)
pub const QRandomGenerator64 = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QRandomGenerator64,

    pub const _is_QRandomGenerator64 = {};
    pub const _is_QRandomGenerator = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QRandomGenerator64 object in C++ memory
    ///
    pub fn new() QRandomGenerator64 {
        return .{ .ptr = qtc.QRandomGenerator64_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QRandomGenerator64 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` seedBuffer: *const u32 `
    ///
    /// ` len: isize `
    ///
    pub fn new2(seedBuffer: *const u32, len: isize) QRandomGenerator64 {
        return .{ .ptr = qtc.QRandomGenerator64_new2(@ptrCast(seedBuffer), @bitCast(len)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QRandomGenerator64 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` begin: *const u32 `
    ///
    /// ` end: *const u32 `
    ///
    pub fn new3(begin: *const u32, end: *const u32) QRandomGenerator64 {
        return .{ .ptr = qtc.QRandomGenerator64_new3(@ptrCast(begin), @ptrCast(end)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QRandomGenerator64 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QRandomGenerator `
    ///
    pub fn new4(other: anytype) QRandomGenerator64 {
        comptime _ = @TypeOf(other)._is_QRandomGenerator;
        return .{ .ptr = qtc.QRandomGenerator64_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QRandomGenerator64 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QRandomGenerator64 `
    ///
    pub fn new5(param1: anytype) QRandomGenerator64 {
        comptime _ = @TypeOf(param1)._is_QRandomGenerator64;
        return .{ .ptr = qtc.QRandomGenerator64_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QRandomGenerator64 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` seedValue: u32 `
    ///
    pub fn new6(seedValue: u32) QRandomGenerator64 {
        return .{ .ptr = qtc.QRandomGenerator64_new6(@bitCast(seedValue)) };
    }

    /// ### DEPRECATED: Use `generate` instead
    ///
    pub const Generate = generate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#generate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    pub fn generate(self: QRandomGenerator64) u64 {
        return qtc.QRandomGenerator64_Generate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorCall` instead
    ///
    pub const OperatorCall = operatorCall;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    pub fn operatorCall(self: QRandomGenerator64) usize {
        return qtc.QRandomGenerator64_OperatorCall(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `discard` instead
    ///
    pub const Discard = discard;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#discard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` z: usize `
    ///
    pub fn discard(self: QRandomGenerator64, z: usize) void {
        qtc.QRandomGenerator64_Discard(@ptrCast(self.ptr), @bitCast(z));
    }

    /// ### DEPRECATED: Use `min` instead
    ///
    pub const Min = min;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#min)
    ///
    pub fn min() usize {
        return qtc.QRandomGenerator64_Min();
    }

    /// ### DEPRECATED: Use `max` instead
    ///
    pub const Max = max;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#max)
    ///
    pub fn max() usize {
        return qtc.QRandomGenerator64_Max();
    }

    /// ### DEPRECATED: Use `system` instead
    ///
    pub const System = system;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#system)
    ///
    pub fn system() QRandomGenerator64 {
        return .{ .ptr = qtc.QRandomGenerator64_System() };
    }

    /// ### DEPRECATED: Use `global` instead
    ///
    pub const Global = global;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#global)
    ///
    pub fn global() QRandomGenerator64 {
        return .{ .ptr = qtc.QRandomGenerator64_Global() };
    }

    /// ### DEPRECATED: Use `securelySeeded` instead
    ///
    pub const SecurelySeeded = securelySeeded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#securelySeeded)
    ///
    pub fn securelySeeded() QRandomGenerator64 {
        return .{ .ptr = qtc.QRandomGenerator64_SecurelySeeded() };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` param1: QRandomGenerator64 `
    ///
    pub fn operatorAssign(self: QRandomGenerator64, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRandomGenerator64;
        qtc.QRandomGenerator64_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `generate64` instead
    ///
    pub const Generate64 = generate64;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generate64)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    pub fn generate64(self: QRandomGenerator64) u64 {
        return qtc.QRandomGenerator_Generate64(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `generateDouble` instead
    ///
    pub const GenerateDouble = generateDouble;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generateDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    pub fn generateDouble(self: QRandomGenerator64) f64 {
        return qtc.QRandomGenerator_GenerateDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bounded` instead
    ///
    pub const Bounded = bounded;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` highest: f64 `
    ///
    pub fn bounded(self: QRandomGenerator64, highest: f64) f64 {
        return qtc.QRandomGenerator_Bounded(@ptrCast(self.ptr), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded2` instead
    ///
    pub const Bounded2 = bounded2;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` highest: u32 `
    ///
    pub fn bounded2(self: QRandomGenerator64, highest: u32) u32 {
        return qtc.QRandomGenerator_Bounded2(@ptrCast(self.ptr), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded3` instead
    ///
    pub const Bounded3 = bounded3;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` lowest: u32 `
    ///
    /// ` highest: u32 `
    ///
    pub fn bounded3(self: QRandomGenerator64, lowest: u32, highest: u32) u32 {
        return qtc.QRandomGenerator_Bounded3(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded4` instead
    ///
    pub const Bounded4 = bounded4;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` highest: i32 `
    ///
    pub fn bounded4(self: QRandomGenerator64, highest: i32) i32 {
        return qtc.QRandomGenerator_Bounded4(@ptrCast(self.ptr), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded5` instead
    ///
    pub const Bounded5 = bounded5;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` lowest: i32 `
    ///
    /// ` highest: i32 `
    ///
    pub fn bounded5(self: QRandomGenerator64, lowest: i32, highest: i32) i32 {
        return qtc.QRandomGenerator_Bounded5(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded6` instead
    ///
    pub const Bounded6 = bounded6;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` highest: u64 `
    ///
    pub fn bounded6(self: QRandomGenerator64, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded6(@ptrCast(self.ptr), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded7` instead
    ///
    pub const Bounded7 = bounded7;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` lowest: u64 `
    ///
    /// ` highest: u64 `
    ///
    pub fn bounded7(self: QRandomGenerator64, lowest: u64, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded7(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded8` instead
    ///
    pub const Bounded8 = bounded8;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` highest: i64 `
    ///
    pub fn bounded8(self: QRandomGenerator64, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded8(@ptrCast(self.ptr), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded9` instead
    ///
    pub const Bounded9 = bounded9;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` lowest: i64 `
    ///
    /// ` highest: i64 `
    ///
    pub fn bounded9(self: QRandomGenerator64, lowest: i64, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded9(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded10` instead
    ///
    pub const Bounded10 = bounded10;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` lowest: i32 `
    ///
    /// ` highest: i64 `
    ///
    pub fn bounded10(self: QRandomGenerator64, lowest: i32, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded10(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded11` instead
    ///
    pub const Bounded11 = bounded11;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` lowest: i64 `
    ///
    /// ` highest: i32 `
    ///
    pub fn bounded11(self: QRandomGenerator64, lowest: i64, highest: i32) i64 {
        return qtc.QRandomGenerator_Bounded11(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded12` instead
    ///
    pub const Bounded12 = bounded12;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` lowest: u32 `
    ///
    /// ` highest: u64 `
    ///
    pub fn bounded12(self: QRandomGenerator64, lowest: u32, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded12(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `bounded13` instead
    ///
    pub const Bounded13 = bounded13;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` lowest: u64 `
    ///
    /// ` highest: u32 `
    ///
    pub fn bounded13(self: QRandomGenerator64, lowest: u64, highest: u32) u64 {
        return qtc.QRandomGenerator_Bounded13(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### DEPRECATED: Use `generate2` instead
    ///
    pub const Generate2 = generate2;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` begin: *u32 `
    ///
    /// ` end: *u32 `
    ///
    pub fn generate2(self: QRandomGenerator64, begin: *u32, end: *u32) void {
        qtc.QRandomGenerator_Generate2(@ptrCast(self.ptr), @ptrCast(begin), @ptrCast(end));
    }

    /// ### DEPRECATED: Use `seed` instead
    ///
    pub const Seed = seed;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    pub fn seed(self: QRandomGenerator64) void {
        qtc.QRandomGenerator_Seed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `seed1` instead
    ///
    pub const Seed1 = seed1;

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` s: u32 `
    ///
    pub fn seed1(self: QRandomGenerator64, s: u32) void {
        qtc.QRandomGenerator_Seed1(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#dtor.QRandomGenerator64)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QRandomGenerator64 `
    ///
    pub fn delete(self: QRandomGenerator64) void {
        qtc.QRandomGenerator64_Delete(@ptrCast(self.ptr));
    }
};
