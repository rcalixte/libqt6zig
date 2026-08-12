const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html)
pub const QTileRules = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTileRules,

    pub const _is_QTileRules = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTileRules object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTileRules `
    ///
    pub fn new(other: anytype) QTileRules {
        comptime _ = @TypeOf(other)._is_QTileRules;
        return .{ .ptr = qtc.QTileRules_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTileRules object and invalidate the source QTileRules object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTileRules `
    ///
    pub fn new2(other: anytype) QTileRules {
        comptime _ = @TypeOf(other)._is_QTileRules;
        return .{ .ptr = qtc.QTileRules_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTileRules object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` horizontalRule: qnamespace_enums.TileRule `
    ///
    /// ` verticalRule: qnamespace_enums.TileRule `
    ///
    pub fn new3(horizontalRule: i32, verticalRule: i32) QTileRules {
        return .{ .ptr = qtc.QTileRules_new3(@bitCast(horizontalRule), @bitCast(verticalRule)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTileRules object in C++ memory
    ///
    pub fn new4() QTileRules {
        return .{ .ptr = qtc.QTileRules_new4() };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QTileRules object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTileRules `
    ///
    pub fn new5(param1: anytype) QTileRules {
        comptime _ = @TypeOf(param1)._is_QTileRules;
        return .{ .ptr = qtc.QTileRules_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QTileRules object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rule: qnamespace_enums.TileRule `
    ///
    pub fn new6(rule: i32) QTileRules {
        return .{ .ptr = qtc.QTileRules_new6(@bitCast(rule)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTileRules `
    ///
    /// ` other: QTileRules `
    ///
    pub fn copyAssign(self: QTileRules, other: QTileRules) void {
        qtc.QTileRules_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTileRules `
    ///
    /// ` other: QTileRules `
    ///
    pub fn moveAssign(self: QTileRules, other: QTileRules) void {
        qtc.QTileRules_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `horizontal` instead
    ///
    pub const Horizontal = horizontal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#horizontal-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTileRules `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TileRule `
    ///
    pub fn horizontal(self: QTileRules) i32 {
        return qtc.QTileRules_Horizontal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontal` instead
    ///
    pub const SetHorizontal = setHorizontal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#horizontal-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTileRules `
    ///
    /// ` _horizontal: qnamespace_enums.TileRule `
    ///
    pub fn setHorizontal(self: QTileRules, _horizontal: i32) void {
        qtc.QTileRules_SetHorizontal(@ptrCast(self.ptr), @bitCast(_horizontal));
    }

    /// ### DEPRECATED: Use `vertical` instead
    ///
    pub const Vertical = vertical;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#vertical-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTileRules `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TileRule `
    ///
    pub fn vertical(self: QTileRules) i32 {
        return qtc.QTileRules_Vertical(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVertical` instead
    ///
    pub const SetVertical = setVertical;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#vertical-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTileRules `
    ///
    /// ` _vertical: qnamespace_enums.TileRule `
    ///
    pub fn setVertical(self: QTileRules, _vertical: i32) void {
        qtc.QTileRules_SetVertical(@ptrCast(self.ptr), @bitCast(_vertical));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#dtor.QTileRules)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTileRules `
    ///
    pub fn delete(self: QTileRules) void {
        qtc.QTileRules_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil.html#public-types)
pub const enums = struct {
    pub const DrawingHint = enum(i32) {
        pub const OpaqueTopLeft: i32 = 1;
        pub const OpaqueTop: i32 = 2;
        pub const OpaqueTopRight: i32 = 4;
        pub const OpaqueLeft: i32 = 8;
        pub const OpaqueCenter: i32 = 16;
        pub const OpaqueRight: i32 = 32;
        pub const OpaqueBottomLeft: i32 = 64;
        pub const OpaqueBottom: i32 = 128;
        pub const OpaqueBottomRight: i32 = 256;
        pub const OpaqueCorners: i32 = 325;
        pub const OpaqueEdges: i32 = 170;
        pub const OpaqueFrame: i32 = 495;
        pub const OpaqueAll: i32 = 511;
    };
};
