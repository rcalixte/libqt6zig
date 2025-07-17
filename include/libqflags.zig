const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qflag.html
pub const qflag = struct {
    /// New constructs a new QFlag object.
    ///
    /// ``` other: QtC.QFlag ```
    pub fn New(other: ?*anyopaque) QtC.QFlag {
        return qtc.QFlag_new(@ptrCast(other));
    }

    /// New2 constructs a new QFlag object and invalidates the source QFlag object.
    ///
    /// ``` other: QtC.QFlag ```
    pub fn New2(other: ?*anyopaque) QtC.QFlag {
        return qtc.QFlag_new2(@ptrCast(other));
    }

    /// New3 constructs a new QFlag object.
    ///
    /// ``` value: i32 ```
    pub fn New3(value: i32) QtC.QFlag {
        return qtc.QFlag_new3(@intCast(value));
    }

    /// New4 constructs a new QFlag object.
    ///
    /// ``` value: u32 ```
    pub fn New4(value: u32) QtC.QFlag {
        return qtc.QFlag_new4(@intCast(value));
    }

    /// New5 constructs a new QFlag object.
    ///
    /// ``` value: i16 ```
    pub fn New5(value: i16) QtC.QFlag {
        return qtc.QFlag_new5(@intCast(value));
    }

    /// New6 constructs a new QFlag object.
    ///
    /// ``` value: u16 ```
    pub fn New6(value: u16) QtC.QFlag {
        return qtc.QFlag_new6(@intCast(value));
    }

    /// New7 constructs a new QFlag object.
    ///
    /// ``` param1: QtC.QFlag ```
    pub fn New7(param1: ?*anyopaque) QtC.QFlag {
        return qtc.QFlag_new7(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QFlag, other: QtC.QFlag ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFlag_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QFlag, other: QtC.QFlag ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFlag_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qflag.html#operator)
    ///
    /// ``` self: QtC.QFlag ```
    pub fn ToInt(self: ?*anyopaque) i32 {
        return qtc.QFlag_ToInt(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qflag.html#operator)
    ///
    /// ``` self: QtC.QFlag ```
    pub fn ToUnsignedInt(self: ?*anyopaque) u32 {
        return qtc.QFlag_ToUnsignedInt(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qflag.html#dtor.QFlag)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QFlag ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFlag_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qincompatibleflag.html
pub const qincompatibleflag = struct {
    /// New constructs a new QIncompatibleFlag object.
    ///
    /// ``` other: QtC.QIncompatibleFlag ```
    pub fn New(other: ?*anyopaque) QtC.QIncompatibleFlag {
        return qtc.QIncompatibleFlag_new(@ptrCast(other));
    }

    /// New2 constructs a new QIncompatibleFlag object and invalidates the source QIncompatibleFlag object.
    ///
    /// ``` other: QtC.QIncompatibleFlag ```
    pub fn New2(other: ?*anyopaque) QtC.QIncompatibleFlag {
        return qtc.QIncompatibleFlag_new2(@ptrCast(other));
    }

    /// New3 constructs a new QIncompatibleFlag object.
    ///
    /// ``` i: i32 ```
    pub fn New3(i: i32) QtC.QIncompatibleFlag {
        return qtc.QIncompatibleFlag_new3(@intCast(i));
    }

    /// New4 constructs a new QIncompatibleFlag object.
    ///
    /// ``` param1: QtC.QIncompatibleFlag ```
    pub fn New4(param1: ?*anyopaque) QtC.QIncompatibleFlag {
        return qtc.QIncompatibleFlag_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QIncompatibleFlag, other: QtC.QIncompatibleFlag ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QIncompatibleFlag_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QIncompatibleFlag, other: QtC.QIncompatibleFlag ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QIncompatibleFlag_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qincompatibleflag.html#operator)
    ///
    /// ``` self: QtC.QIncompatibleFlag ```
    pub fn ToInt(self: ?*anyopaque) i32 {
        return qtc.QIncompatibleFlag_ToInt(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qincompatibleflag.html#dtor.QIncompatibleFlag)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QIncompatibleFlag ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QIncompatibleFlag_Delete(@ptrCast(self));
    }
};
