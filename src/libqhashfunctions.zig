const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qhashseed.html
pub const qhashseed = struct {
    /// New constructs a new QHashSeed object.
    ///
    /// ``` other: QtC.QHashSeed ```
    pub fn New(other: ?*anyopaque) QtC.QHashSeed {
        return qtc.QHashSeed_new(@ptrCast(other));
    }

    /// New2 constructs a new QHashSeed object and invalidates the source QHashSeed object.
    ///
    /// ``` other: QtC.QHashSeed ```
    pub fn New2(other: ?*anyopaque) QtC.QHashSeed {
        return qtc.QHashSeed_new2(@ptrCast(other));
    }

    /// New3 constructs a new QHashSeed object.
    ///
    ///
    pub fn New3() QtC.QHashSeed {
        return qtc.QHashSeed_new3();
    }

    /// New4 constructs a new QHashSeed object.
    ///
    /// ``` d: u64 ```
    pub fn New4(d: u64) QtC.QHashSeed {
        return qtc.QHashSeed_new4(@intCast(d));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QHashSeed, other: QtC.QHashSeed ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHashSeed_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QHashSeed, other: QtC.QHashSeed ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHashSeed_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#operator)
    ///
    /// ``` self: QtC.QHashSeed ```
    pub fn ToUnsignedLong(self: ?*anyopaque) u64 {
        return qtc.QHashSeed_ToUnsignedLong(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#globalSeed)
    ///
    ///
    pub fn GlobalSeed() QtC.QHashSeed {
        return qtc.QHashSeed_GlobalSeed();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#setDeterministicGlobalSeed)
    ///
    ///
    pub fn SetDeterministicGlobalSeed() void {
        qtc.QHashSeed_SetDeterministicGlobalSeed();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#resetRandomGlobalSeed)
    ///
    ///
    pub fn ResetRandomGlobalSeed() void {
        qtc.QHashSeed_ResetRandomGlobalSeed();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#dtor.QHashSeed)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QHashSeed ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHashSeed_Delete(@ptrCast(self));
    }
};
