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

    /// New constructs a new QRandomGenerator object.
    ///
    pub fn New() QRandomGenerator {
        return .{ .ptr = qtc.QRandomGenerator_new() };
    }

    /// New2 constructs a new QRandomGenerator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` seedBuffer: *const u32 `
    ///
    /// ` lenVal: isize `
    ///
    pub fn New2(seedBuffer: *const u32, lenVal: isize) QRandomGenerator {
        return .{ .ptr = qtc.QRandomGenerator_new2(@ptrCast(seedBuffer), @bitCast(lenVal)) };
    }

    /// New3 constructs a new QRandomGenerator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` begin: *const u32 `
    ///
    /// ` end: *const u32 `
    ///
    pub fn New3(begin: *const u32, end: *const u32) QRandomGenerator {
        return .{ .ptr = qtc.QRandomGenerator_new3(@ptrCast(begin), @ptrCast(end)) };
    }

    /// New4 constructs a new QRandomGenerator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QRandomGenerator `
    ///
    pub fn New4(other: anytype) QRandomGenerator {
        comptime _ = @TypeOf(other)._is_QRandomGenerator;
        return .{ .ptr = qtc.QRandomGenerator_new4(@ptrCast(other.ptr)) };
    }

    /// New5 constructs a new QRandomGenerator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` seedValue: u32 `
    ///
    pub fn New5(seedValue: u32) QRandomGenerator {
        return .{ .ptr = qtc.QRandomGenerator_new5(@bitCast(seedValue)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` other: QRandomGenerator `
    ///
    pub fn OperatorAssign(self: QRandomGenerator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QRandomGenerator;
        qtc.QRandomGenerator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    pub fn Generate(self: QRandomGenerator) u32 {
        return qtc.QRandomGenerator_Generate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generate64)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    pub fn Generate64(self: QRandomGenerator) u64 {
        return qtc.QRandomGenerator_Generate64(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generateDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    pub fn GenerateDouble(self: QRandomGenerator) f64 {
        return qtc.QRandomGenerator_GenerateDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` highest: f64 `
    ///
    pub fn Bounded(self: QRandomGenerator, highest: f64) f64 {
        return qtc.QRandomGenerator_Bounded(@ptrCast(self.ptr), @bitCast(highest));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` highest: u32 `
    ///
    pub fn Bounded2(self: QRandomGenerator, highest: u32) u32 {
        return qtc.QRandomGenerator_Bounded2(@ptrCast(self.ptr), @bitCast(highest));
    }

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
    pub fn Bounded3(self: QRandomGenerator, lowest: u32, highest: u32) u32 {
        return qtc.QRandomGenerator_Bounded3(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` highest: i32 `
    ///
    pub fn Bounded4(self: QRandomGenerator, highest: i32) i32 {
        return qtc.QRandomGenerator_Bounded4(@ptrCast(self.ptr), @bitCast(highest));
    }

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
    pub fn Bounded5(self: QRandomGenerator, lowest: i32, highest: i32) i32 {
        return qtc.QRandomGenerator_Bounded5(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` highest: u64 `
    ///
    pub fn Bounded6(self: QRandomGenerator, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded6(@ptrCast(self.ptr), @bitCast(highest));
    }

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
    pub fn Bounded7(self: QRandomGenerator, lowest: u64, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded7(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` highest: i64 `
    ///
    pub fn Bounded8(self: QRandomGenerator, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded8(@ptrCast(self.ptr), @bitCast(highest));
    }

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
    pub fn Bounded9(self: QRandomGenerator, lowest: i64, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded9(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

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
    pub fn Bounded10(self: QRandomGenerator, lowest: i32, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded10(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

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
    pub fn Bounded11(self: QRandomGenerator, lowest: i64, highest: i32) i64 {
        return qtc.QRandomGenerator_Bounded11(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

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
    pub fn Bounded12(self: QRandomGenerator, lowest: u32, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded12(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

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
    pub fn Bounded13(self: QRandomGenerator, lowest: u64, highest: u32) u64 {
        return qtc.QRandomGenerator_Bounded13(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

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
    pub fn Generate2(self: QRandomGenerator, begin: *u32, end: *u32) void {
        qtc.QRandomGenerator_Generate2(@ptrCast(self.ptr), @ptrCast(begin), @ptrCast(end));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    pub fn OperatorCall(self: QRandomGenerator) u32 {
        return qtc.QRandomGenerator_OperatorCall(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    pub fn Seed(self: QRandomGenerator) void {
        qtc.QRandomGenerator_Seed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#discard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` z: usize `
    ///
    pub fn Discard(self: QRandomGenerator, z: usize) void {
        qtc.QRandomGenerator_Discard(@ptrCast(self.ptr), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#min)
    ///
    pub fn Min() u32 {
        return qtc.QRandomGenerator_Min();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#max)
    ///
    pub fn Max() u32 {
        return qtc.QRandomGenerator_Max();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#system)
    ///
    pub fn System() QRandomGenerator {
        return .{ .ptr = qtc.QRandomGenerator_System() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#global)
    ///
    pub fn Global() QRandomGenerator {
        return .{ .ptr = qtc.QRandomGenerator_Global() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#securelySeeded)
    ///
    pub fn SecurelySeeded() QRandomGenerator {
        return .{ .ptr = qtc.QRandomGenerator_SecurelySeeded() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator `
    ///
    /// ` s: u32 `
    ///
    pub fn Seed1(self: QRandomGenerator, s: u32) void {
        qtc.QRandomGenerator_Seed1(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#dtor.QRandomGenerator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QRandomGenerator `
    ///
    pub fn Delete(self: QRandomGenerator) void {
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

    /// New constructs a new QRandomGenerator64 object.
    ///
    pub fn New() QRandomGenerator64 {
        return .{ .ptr = qtc.QRandomGenerator64_new() };
    }

    /// New2 constructs a new QRandomGenerator64 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` seedBuffer: *const u32 `
    ///
    /// ` lenVal: isize `
    ///
    pub fn New2(seedBuffer: *const u32, lenVal: isize) QRandomGenerator64 {
        return .{ .ptr = qtc.QRandomGenerator64_new2(@ptrCast(seedBuffer), @bitCast(lenVal)) };
    }

    /// New3 constructs a new QRandomGenerator64 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` begin: *const u32 `
    ///
    /// ` end: *const u32 `
    ///
    pub fn New3(begin: *const u32, end: *const u32) QRandomGenerator64 {
        return .{ .ptr = qtc.QRandomGenerator64_new3(@ptrCast(begin), @ptrCast(end)) };
    }

    /// New4 constructs a new QRandomGenerator64 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QRandomGenerator `
    ///
    pub fn New4(other: anytype) QRandomGenerator64 {
        comptime _ = @TypeOf(other)._is_QRandomGenerator;
        return .{ .ptr = qtc.QRandomGenerator64_new4(@ptrCast(other.ptr)) };
    }

    /// New5 constructs a new QRandomGenerator64 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QRandomGenerator64 `
    ///
    pub fn New5(param1: anytype) QRandomGenerator64 {
        comptime _ = @TypeOf(param1)._is_QRandomGenerator64;
        return .{ .ptr = qtc.QRandomGenerator64_new5(@ptrCast(param1.ptr)) };
    }

    /// New6 constructs a new QRandomGenerator64 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` seedValue: u32 `
    ///
    pub fn New6(seedValue: u32) QRandomGenerator64 {
        return .{ .ptr = qtc.QRandomGenerator64_new6(@bitCast(seedValue)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#generate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    pub fn Generate(self: QRandomGenerator64) u64 {
        return qtc.QRandomGenerator64_Generate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    pub fn OperatorCall(self: QRandomGenerator64) usize {
        return qtc.QRandomGenerator64_OperatorCall(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#discard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` z: usize `
    ///
    pub fn Discard(self: QRandomGenerator64, z: usize) void {
        qtc.QRandomGenerator64_Discard(@ptrCast(self.ptr), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#min)
    ///
    pub fn Min() usize {
        return qtc.QRandomGenerator64_Min();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#max)
    ///
    pub fn Max() usize {
        return qtc.QRandomGenerator64_Max();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#system)
    ///
    pub fn System() QRandomGenerator64 {
        return .{ .ptr = qtc.QRandomGenerator64_System() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#global)
    ///
    pub fn Global() QRandomGenerator64 {
        return .{ .ptr = qtc.QRandomGenerator64_Global() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#securelySeeded)
    ///
    pub fn SecurelySeeded() QRandomGenerator64 {
        return .{ .ptr = qtc.QRandomGenerator64_SecurelySeeded() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    /// ` param1: QRandomGenerator64 `
    ///
    pub fn OperatorAssign(self: QRandomGenerator64, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRandomGenerator64;
        qtc.QRandomGenerator64_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generate64)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    pub fn Generate64(self: QRandomGenerator64) u64 {
        return qtc.QRandomGenerator_Generate64(@ptrCast(self.ptr));
    }

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generateDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    pub fn GenerateDouble(self: QRandomGenerator64) f64 {
        return qtc.QRandomGenerator_GenerateDouble(@ptrCast(self.ptr));
    }

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
    pub fn Bounded(self: QRandomGenerator64, highest: f64) f64 {
        return qtc.QRandomGenerator_Bounded(@ptrCast(self.ptr), @bitCast(highest));
    }

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
    pub fn Bounded2(self: QRandomGenerator64, highest: u32) u32 {
        return qtc.QRandomGenerator_Bounded2(@ptrCast(self.ptr), @bitCast(highest));
    }

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
    pub fn Bounded3(self: QRandomGenerator64, lowest: u32, highest: u32) u32 {
        return qtc.QRandomGenerator_Bounded3(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

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
    pub fn Bounded4(self: QRandomGenerator64, highest: i32) i32 {
        return qtc.QRandomGenerator_Bounded4(@ptrCast(self.ptr), @bitCast(highest));
    }

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
    pub fn Bounded5(self: QRandomGenerator64, lowest: i32, highest: i32) i32 {
        return qtc.QRandomGenerator_Bounded5(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

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
    pub fn Bounded6(self: QRandomGenerator64, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded6(@ptrCast(self.ptr), @bitCast(highest));
    }

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
    pub fn Bounded7(self: QRandomGenerator64, lowest: u64, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded7(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

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
    pub fn Bounded8(self: QRandomGenerator64, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded8(@ptrCast(self.ptr), @bitCast(highest));
    }

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
    pub fn Bounded9(self: QRandomGenerator64, lowest: i64, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded9(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

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
    pub fn Bounded10(self: QRandomGenerator64, lowest: i32, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded10(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

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
    pub fn Bounded11(self: QRandomGenerator64, lowest: i64, highest: i32) i64 {
        return qtc.QRandomGenerator_Bounded11(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

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
    pub fn Bounded12(self: QRandomGenerator64, lowest: u32, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded12(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

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
    pub fn Bounded13(self: QRandomGenerator64, lowest: u64, highest: u32) u64 {
        return qtc.QRandomGenerator_Bounded13(@ptrCast(self.ptr), @bitCast(lowest), @bitCast(highest));
    }

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
    pub fn Generate2(self: QRandomGenerator64, begin: *u32, end: *u32) void {
        qtc.QRandomGenerator_Generate2(@ptrCast(self.ptr), @ptrCast(begin), @ptrCast(end));
    }

    /// Inherited from QRandomGenerator
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRandomGenerator64 `
    ///
    pub fn Seed(self: QRandomGenerator64) void {
        qtc.QRandomGenerator_Seed(@ptrCast(self.ptr));
    }

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
    pub fn Seed1(self: QRandomGenerator64, s: u32) void {
        qtc.QRandomGenerator_Seed1(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#dtor.QRandomGenerator64)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QRandomGenerator64 `
    ///
    pub fn Delete(self: QRandomGenerator64) void {
        qtc.QRandomGenerator64_Delete(@ptrCast(self.ptr));
    }
};
