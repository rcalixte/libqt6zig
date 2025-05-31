const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qrandomgenerator.html
pub const qrandomgenerator = struct {
    /// New constructs a new QRandomGenerator object.
    ///
    ///
    pub fn New() QtC.QRandomGenerator {
        return qtc.QRandomGenerator_new();
    }

    /// New2 constructs a new QRandomGenerator object.
    ///
    /// ``` seedBuffer: ?*u32, lenVal: i64 ```
    pub fn New2(seedBuffer: ?*anyopaque, lenVal: i64) QtC.QRandomGenerator {
        return qtc.QRandomGenerator_new2(@intCast(seedBuffer), @intCast(lenVal));
    }

    /// New3 constructs a new QRandomGenerator object.
    ///
    /// ``` begin: ?*u32, end: ?*u32 ```
    pub fn New3(begin: ?*anyopaque, end: ?*anyopaque) QtC.QRandomGenerator {
        return qtc.QRandomGenerator_new3(@intCast(begin), @intCast(end));
    }

    /// New4 constructs a new QRandomGenerator object.
    ///
    /// ``` other: QtC.QRandomGenerator ```
    pub fn New4(other: ?*anyopaque) QtC.QRandomGenerator {
        return qtc.QRandomGenerator_new4(@ptrCast(other));
    }

    /// New5 constructs a new QRandomGenerator object.
    ///
    /// ``` seedValue: u32 ```
    pub fn New5(seedValue: u32) QtC.QRandomGenerator {
        return qtc.QRandomGenerator_new5(@intCast(seedValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#operator=)
    ///
    /// ``` self: QtC.QRandomGenerator, other: QtC.QRandomGenerator ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRandomGenerator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generate)
    ///
    /// ``` self: QtC.QRandomGenerator ```
    pub fn Generate(self: ?*anyopaque) u32 {
        return qtc.QRandomGenerator_Generate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generate64)
    ///
    /// ``` self: QtC.QRandomGenerator ```
    pub fn Generate64(self: ?*anyopaque) u64 {
        return qtc.QRandomGenerator_Generate64(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generateDouble)
    ///
    /// ``` self: QtC.QRandomGenerator ```
    pub fn GenerateDouble(self: ?*anyopaque) f64 {
        return qtc.QRandomGenerator_GenerateDouble(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator, highest: f64 ```
    pub fn Bounded(self: ?*anyopaque, highest: f64) f64 {
        return qtc.QRandomGenerator_Bounded(@ptrCast(self), @floatCast(highest));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator, highest: u32 ```
    pub fn BoundedWithHighest(self: ?*anyopaque, highest: u32) u32 {
        return qtc.QRandomGenerator_BoundedWithHighest(@ptrCast(self), @intCast(highest));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator, lowest: u32, highest: u32 ```
    pub fn Bounded2(self: ?*anyopaque, lowest: u32, highest: u32) u32 {
        return qtc.QRandomGenerator_Bounded2(@ptrCast(self), @intCast(lowest), @intCast(highest));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator, highest: i32 ```
    pub fn Bounded3(self: ?*anyopaque, highest: i32) i32 {
        return qtc.QRandomGenerator_Bounded3(@ptrCast(self), @intCast(highest));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator, lowest: i32, highest: i32 ```
    pub fn Bounded4(self: ?*anyopaque, lowest: i32, highest: i32) i32 {
        return qtc.QRandomGenerator_Bounded4(@ptrCast(self), @intCast(lowest), @intCast(highest));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator, highest: u64 ```
    pub fn Bounded5(self: ?*anyopaque, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded5(@ptrCast(self), @intCast(highest));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator, lowest: u64, highest: u64 ```
    pub fn Bounded6(self: ?*anyopaque, lowest: u64, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded6(@ptrCast(self), @intCast(lowest), @intCast(highest));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator, highest: i64 ```
    pub fn Bounded7(self: ?*anyopaque, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded7(@ptrCast(self), @intCast(highest));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator, lowest: i64, highest: i64 ```
    pub fn Bounded8(self: ?*anyopaque, lowest: i64, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded8(@ptrCast(self), @intCast(lowest), @intCast(highest));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator, lowest: i32, highest: i64 ```
    pub fn Bounded9(self: ?*anyopaque, lowest: i32, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded9(@ptrCast(self), @intCast(lowest), @intCast(highest));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator, lowest: i64, highest: i32 ```
    pub fn Bounded10(self: ?*anyopaque, lowest: i64, highest: i32) i64 {
        return qtc.QRandomGenerator_Bounded10(@ptrCast(self), @intCast(lowest), @intCast(highest));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator, lowest: u32, highest: u64 ```
    pub fn Bounded11(self: ?*anyopaque, lowest: u32, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded11(@ptrCast(self), @intCast(lowest), @intCast(highest));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator, lowest: u64, highest: u32 ```
    pub fn Bounded12(self: ?*anyopaque, lowest: u64, highest: u32) u64 {
        return qtc.QRandomGenerator_Bounded12(@ptrCast(self), @intCast(lowest), @intCast(highest));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generate)
    ///
    /// ``` self: QtC.QRandomGenerator, begin: ?*u32, end: ?*u32 ```
    pub fn Generate2(self: ?*anyopaque, begin: ?*anyopaque, end: ?*anyopaque) void {
        qtc.QRandomGenerator_Generate2(@ptrCast(self), @intCast(begin), @intCast(end));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#operator())
    ///
    /// ``` self: QtC.QRandomGenerator ```
    pub fn OperatorCall(self: ?*anyopaque) u32 {
        return qtc.QRandomGenerator_OperatorCall(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
    ///
    /// ``` self: QtC.QRandomGenerator ```
    pub fn Seed(self: ?*anyopaque) void {
        qtc.QRandomGenerator_Seed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#discard)
    ///
    /// ``` self: QtC.QRandomGenerator, z: u64 ```
    pub fn Discard(self: ?*anyopaque, z: u64) void {
        qtc.QRandomGenerator_Discard(@ptrCast(self), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#min)
    ///
    ///
    pub fn Min() u32 {
        return qtc.QRandomGenerator_Min();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#max)
    ///
    ///
    pub fn Max() u32 {
        return qtc.QRandomGenerator_Max();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#system)
    ///
    ///
    pub fn System() QtC.QRandomGenerator {
        return qtc.QRandomGenerator_System();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#global)
    ///
    ///
    pub fn Global() QtC.QRandomGenerator {
        return qtc.QRandomGenerator_Global();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#securelySeeded)
    ///
    ///
    pub fn SecurelySeeded() QtC.QRandomGenerator {
        return qtc.QRandomGenerator_SecurelySeeded();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
    ///
    /// ``` self: QtC.QRandomGenerator, s: u32 ```
    pub fn Seed1(self: ?*anyopaque, s: u32) void {
        qtc.QRandomGenerator_Seed1(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#dtor.QRandomGenerator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QRandomGenerator ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRandomGenerator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qrandomgenerator64.html
pub const qrandomgenerator64 = struct {
    /// New constructs a new QRandomGenerator64 object.
    ///
    ///
    pub fn New() QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_new();
    }

    /// New2 constructs a new QRandomGenerator64 object.
    ///
    /// ``` seedBuffer: ?*u32, lenVal: i64 ```
    pub fn New2(seedBuffer: ?*anyopaque, lenVal: i64) QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_new2(@intCast(seedBuffer), @intCast(lenVal));
    }

    /// New3 constructs a new QRandomGenerator64 object.
    ///
    /// ``` begin: ?*u32, end: ?*u32 ```
    pub fn New3(begin: ?*anyopaque, end: ?*anyopaque) QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_new3(@intCast(begin), @intCast(end));
    }

    /// New4 constructs a new QRandomGenerator64 object.
    ///
    /// ``` other: QtC.QRandomGenerator ```
    pub fn New4(other: ?*anyopaque) QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_new4(@ptrCast(other));
    }

    /// New5 constructs a new QRandomGenerator64 object.
    ///
    /// ``` param1: QtC.QRandomGenerator64 ```
    pub fn New5(param1: ?*anyopaque) QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_new5(@ptrCast(param1));
    }

    /// New6 constructs a new QRandomGenerator64 object.
    ///
    /// ``` seedValue: u32 ```
    pub fn New6(seedValue: u32) QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_new6(@intCast(seedValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#generate)
    ///
    /// ``` self: QtC.QRandomGenerator64 ```
    pub fn Generate(self: ?*anyopaque) u64 {
        return qtc.QRandomGenerator64_Generate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#operator())
    ///
    /// ``` self: QtC.QRandomGenerator64 ```
    pub fn OperatorCall(self: ?*anyopaque) u64 {
        return qtc.QRandomGenerator64_OperatorCall(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#discard)
    ///
    /// ``` self: QtC.QRandomGenerator64, z: u64 ```
    pub fn Discard(self: ?*anyopaque, z: u64) void {
        qtc.QRandomGenerator64_Discard(@ptrCast(self), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#min)
    ///
    ///
    pub fn Min() u64 {
        return qtc.QRandomGenerator64_Min();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#max)
    ///
    ///
    pub fn Max() u64 {
        return qtc.QRandomGenerator64_Max();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#system)
    ///
    ///
    pub fn System() QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_System();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#global)
    ///
    ///
    pub fn Global() QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_Global();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#securelySeeded)
    ///
    ///
    pub fn SecurelySeeded() QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_SecurelySeeded();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#operator=)
    ///
    /// ``` self: QtC.QRandomGenerator64, param1: QtC.QRandomGenerator64 ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRandomGenerator64_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generate64)
    ///
    /// ``` self: QtC.QRandomGenerator64 ```
    pub fn Generate64(self: ?*anyopaque) u64 {
        return qtc.QRandomGenerator_Generate64(@ptrCast(self));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generateDouble)
    ///
    /// ``` self: QtC.QRandomGenerator64 ```
    pub fn GenerateDouble(self: ?*anyopaque) f64 {
        return qtc.QRandomGenerator_GenerateDouble(@ptrCast(self));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator64, highest: f64 ```
    pub fn Bounded(self: ?*anyopaque, highest: f64) f64 {
        return qtc.QRandomGenerator_Bounded(@ptrCast(self), @floatCast(highest));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator64, highest: u32 ```
    pub fn BoundedWithHighest(self: ?*anyopaque, highest: u32) u32 {
        return qtc.QRandomGenerator_BoundedWithHighest(@ptrCast(self), @intCast(highest));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator64, lowest: u32, highest: u32 ```
    pub fn Bounded2(self: ?*anyopaque, lowest: u32, highest: u32) u32 {
        return qtc.QRandomGenerator_Bounded2(@ptrCast(self), @intCast(lowest), @intCast(highest));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator64, highest: i32 ```
    pub fn Bounded3(self: ?*anyopaque, highest: i32) i32 {
        return qtc.QRandomGenerator_Bounded3(@ptrCast(self), @intCast(highest));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator64, lowest: i32, highest: i32 ```
    pub fn Bounded4(self: ?*anyopaque, lowest: i32, highest: i32) i32 {
        return qtc.QRandomGenerator_Bounded4(@ptrCast(self), @intCast(lowest), @intCast(highest));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator64, highest: u64 ```
    pub fn Bounded5(self: ?*anyopaque, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded5(@ptrCast(self), @intCast(highest));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator64, lowest: u64, highest: u64 ```
    pub fn Bounded6(self: ?*anyopaque, lowest: u64, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded6(@ptrCast(self), @intCast(lowest), @intCast(highest));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator64, highest: i64 ```
    pub fn Bounded7(self: ?*anyopaque, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded7(@ptrCast(self), @intCast(highest));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator64, lowest: i64, highest: i64 ```
    pub fn Bounded8(self: ?*anyopaque, lowest: i64, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded8(@ptrCast(self), @intCast(lowest), @intCast(highest));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator64, lowest: i32, highest: i64 ```
    pub fn Bounded9(self: ?*anyopaque, lowest: i32, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded9(@ptrCast(self), @intCast(lowest), @intCast(highest));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator64, lowest: i64, highest: i32 ```
    pub fn Bounded10(self: ?*anyopaque, lowest: i64, highest: i32) i64 {
        return qtc.QRandomGenerator_Bounded10(@ptrCast(self), @intCast(lowest), @intCast(highest));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator64, lowest: u32, highest: u64 ```
    pub fn Bounded11(self: ?*anyopaque, lowest: u32, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded11(@ptrCast(self), @intCast(lowest), @intCast(highest));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
    ///
    /// ``` self: QtC.QRandomGenerator64, lowest: u64, highest: u32 ```
    pub fn Bounded12(self: ?*anyopaque, lowest: u64, highest: u32) u64 {
        return qtc.QRandomGenerator_Bounded12(@ptrCast(self), @intCast(lowest), @intCast(highest));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generate)
    ///
    /// ``` self: QtC.QRandomGenerator64, begin: ?*u32, end: ?*u32 ```
    pub fn Generate2(self: ?*anyopaque, begin: ?*anyopaque, end: ?*anyopaque) void {
        qtc.QRandomGenerator_Generate2(@ptrCast(self), @intCast(begin), @intCast(end));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
    ///
    /// ``` self: QtC.QRandomGenerator64 ```
    pub fn Seed(self: ?*anyopaque) void {
        qtc.QRandomGenerator_Seed(@ptrCast(self));
    }

    /// Inherited from QRandomGenerator
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
    ///
    /// ``` self: QtC.QRandomGenerator64, s: u32 ```
    pub fn Seed1(self: ?*anyopaque, s: u32) void {
        qtc.QRandomGenerator_Seed1(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#dtor.QRandomGenerator64)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QRandomGenerator64 ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRandomGenerator64_Delete(@ptrCast(self));
    }
};
