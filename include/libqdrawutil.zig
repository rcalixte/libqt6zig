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

    /// New constructs a new QTileRules object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTileRules `
    ///
    pub fn New(other: anytype) QTileRules {
        comptime _ = @TypeOf(other)._is_QTileRules;
        return .{ .ptr = qtc.QTileRules_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QTileRules object and invalidates the source QTileRules object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTileRules `
    ///
    pub fn New2(other: anytype) QTileRules {
        comptime _ = @TypeOf(other)._is_QTileRules;
        return .{ .ptr = qtc.QTileRules_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QTileRules object.
    ///
    /// ## Parameter(s):
    ///
    /// ` horizontalRule: qnamespace_enums.TileRule `
    ///
    /// ` verticalRule: qnamespace_enums.TileRule `
    ///
    pub fn New3(horizontalRule: i32, verticalRule: i32) QTileRules {
        return .{ .ptr = qtc.QTileRules_new3(@bitCast(horizontalRule), @bitCast(verticalRule)) };
    }

    /// New4 constructs a new QTileRules object.
    ///
    pub fn New4() QTileRules {
        return .{ .ptr = qtc.QTileRules_new4() };
    }

    /// New5 constructs a new QTileRules object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTileRules `
    ///
    pub fn New5(param1: anytype) QTileRules {
        comptime _ = @TypeOf(param1)._is_QTileRules;
        return .{ .ptr = qtc.QTileRules_new5(@ptrCast(param1.ptr)) };
    }

    /// New6 constructs a new QTileRules object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rule: qnamespace_enums.TileRule `
    ///
    pub fn New6(rule: i32) QTileRules {
        return .{ .ptr = qtc.QTileRules_new6(@bitCast(rule)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTileRules `
    ///
    /// ` other: QTileRules `
    ///
    pub fn CopyAssign(self: QTileRules, other: QTileRules) void {
        qtc.QTileRules_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTileRules `
    ///
    /// ` other: QTileRules `
    ///
    pub fn MoveAssign(self: QTileRules, other: QTileRules) void {
        qtc.QTileRules_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

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
    pub fn Horizontal(self: QTileRules) i32 {
        return qtc.QTileRules_Horizontal(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#horizontal-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTileRules `
    ///
    /// ` horizontal: qnamespace_enums.TileRule `
    ///
    pub fn SetHorizontal(self: QTileRules, horizontal: i32) void {
        qtc.QTileRules_SetHorizontal(@ptrCast(self.ptr), @bitCast(horizontal));
    }

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
    pub fn Vertical(self: QTileRules) i32 {
        return qtc.QTileRules_Vertical(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#vertical-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTileRules `
    ///
    /// ` vertical: qnamespace_enums.TileRule `
    ///
    pub fn SetVertical(self: QTileRules, vertical: i32) void {
        qtc.QTileRules_SetVertical(@ptrCast(self.ptr), @bitCast(vertical));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#dtor.QTileRules)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTileRules `
    ///
    pub fn Delete(self: QTileRules) void {
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
