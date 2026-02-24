const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html)
pub const qtilerules = struct {
    /// New constructs a new QTileRules object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QTileRules `
    ///
    pub fn New(other: ?*anyopaque) QtC.QTileRules {
        return qtc.QTileRules_new(@ptrCast(other));
    }

    /// New2 constructs a new QTileRules object and invalidates the source QTileRules object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QTileRules `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QTileRules {
        return qtc.QTileRules_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTileRules object.
    ///
    /// ## Parameter(s):
    ///
    /// ` horizontalRule: qnamespace_enums.TileRule `
    ///
    /// ` verticalRule: qnamespace_enums.TileRule `
    ///
    pub fn New3(horizontalRule: i32, verticalRule: i32) QtC.QTileRules {
        return qtc.QTileRules_new3(@bitCast(horizontalRule), @bitCast(verticalRule));
    }

    /// New4 constructs a new QTileRules object.
    ///
    pub fn New4() QtC.QTileRules {
        return qtc.QTileRules_new4();
    }

    /// New5 constructs a new QTileRules object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QTileRules `
    ///
    pub fn New5(param1: ?*anyopaque) QtC.QTileRules {
        return qtc.QTileRules_new5(@ptrCast(param1));
    }

    /// New6 constructs a new QTileRules object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rule: qnamespace_enums.TileRule `
    ///
    pub fn New6(rule: i32) QtC.QTileRules {
        return qtc.QTileRules_new6(@bitCast(rule));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTileRules `
    ///
    /// ` other: QtC.QTileRules `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTileRules_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTileRules `
    ///
    /// ` other: QtC.QTileRules `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTileRules_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#horizontal-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTileRules `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TileRule `
    ///
    pub fn Horizontal(self: ?*anyopaque) i32 {
        return qtc.QTileRules_Horizontal(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#horizontal-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTileRules `
    ///
    /// ` horizontal: qnamespace_enums.TileRule `
    ///
    pub fn SetHorizontal(self: ?*anyopaque, horizontal: i32) void {
        qtc.QTileRules_SetHorizontal(@ptrCast(self), @bitCast(horizontal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#vertical-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTileRules `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TileRule `
    ///
    pub fn Vertical(self: ?*anyopaque) i32 {
        return qtc.QTileRules_Vertical(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#vertical-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTileRules `
    ///
    /// ` vertical: qnamespace_enums.TileRule `
    ///
    pub fn SetVertical(self: ?*anyopaque, vertical: i32) void {
        qtc.QTileRules_SetVertical(@ptrCast(self), @bitCast(vertical));
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
    /// ` self: QtC.QTileRules `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QTileRules_Delete(@ptrCast(self));
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
