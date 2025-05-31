const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qshareddata.html
pub const qshareddata = struct {
    /// New constructs a new QSharedData object.
    ///
    ///
    pub fn New() QtC.QSharedData {
        return qtc.QSharedData_new();
    }

    /// New2 constructs a new QSharedData object.
    ///
    /// ``` param1: QtC.QSharedData ```
    pub fn New2(param1: ?*anyopaque) QtC.QSharedData {
        return qtc.QSharedData_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qshareddata.html#dtor.QSharedData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSharedData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSharedData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qadoptshareddatatag.html
pub const qadoptshareddatatag = struct {
    /// New constructs a new QAdoptSharedDataTag object.
    ///
    /// ``` other: QtC.QAdoptSharedDataTag ```
    pub fn New(other: ?*anyopaque) QtC.QAdoptSharedDataTag {
        return qtc.QAdoptSharedDataTag_new(@ptrCast(other));
    }

    /// New2 constructs a new QAdoptSharedDataTag object and invalidates the source QAdoptSharedDataTag object.
    ///
    /// ``` other: QtC.QAdoptSharedDataTag ```
    pub fn New2(other: ?*anyopaque) QtC.QAdoptSharedDataTag {
        return qtc.QAdoptSharedDataTag_new2(@ptrCast(other));
    }

    /// New3 constructs a new QAdoptSharedDataTag object.
    ///
    ///
    pub fn New3() QtC.QAdoptSharedDataTag {
        return qtc.QAdoptSharedDataTag_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QAdoptSharedDataTag, other: QtC.QAdoptSharedDataTag ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAdoptSharedDataTag_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QAdoptSharedDataTag, other: QtC.QAdoptSharedDataTag ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAdoptSharedDataTag_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qadoptshareddatatag.html#dtor.QAdoptSharedDataTag)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAdoptSharedDataTag ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAdoptSharedDataTag_Delete(@ptrCast(self));
    }
};
