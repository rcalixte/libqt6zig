const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBrush = @import("libqt6").QBrush;
const QPalette = @import("libqt6").QPalette;
const kcolorscheme_enums = @import("libkcolorscheme.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kstatefulbrush.html)
pub const KStatefulBrush = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kstatefulbrush.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KStatefulBrush,

    pub const _is_KStatefulBrush = {};

    /// New constructs a new KStatefulBrush object.
    ///
    pub fn New() KStatefulBrush {
        return .{ .ptr = qtc.KStatefulBrush_new() };
    }

    /// New2 constructs a new KStatefulBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kcolorscheme_enums.ColorSet `
    ///
    /// ` param2: kcolorscheme_enums.ForegroundRole `
    ///
    pub fn New2(param1: i32, param2: i32) KStatefulBrush {
        return .{ .ptr = qtc.KStatefulBrush_new2(@bitCast(param1), @bitCast(param2)) };
    }

    /// New3 constructs a new KStatefulBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kcolorscheme_enums.ColorSet `
    ///
    /// ` param2: kcolorscheme_enums.BackgroundRole `
    ///
    pub fn New3(param1: i32, param2: i32) KStatefulBrush {
        return .{ .ptr = qtc.KStatefulBrush_new3(@bitCast(param1), @bitCast(param2)) };
    }

    /// New4 constructs a new KStatefulBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kcolorscheme_enums.ColorSet `
    ///
    /// ` param2: kcolorscheme_enums.DecorationRole `
    ///
    pub fn New4(param1: i32, param2: i32) KStatefulBrush {
        return .{ .ptr = qtc.KStatefulBrush_new4(@bitCast(param1), @bitCast(param2)) };
    }

    /// New5 constructs a new KStatefulBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QBrush `
    ///
    pub fn New5(param1: anytype) KStatefulBrush {
        comptime _ = @TypeOf(param1)._is_QBrush;
        return .{ .ptr = qtc.KStatefulBrush_new5(@ptrCast(param1.ptr)) };
    }

    /// New6 constructs a new KStatefulBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QBrush `
    ///
    /// ` background: QBrush `
    ///
    pub fn New6(param1: anytype, background: anytype) KStatefulBrush {
        comptime _ = @TypeOf(param1)._is_QBrush;
        comptime _ = @TypeOf(background)._is_QBrush;
        return .{ .ptr = qtc.KStatefulBrush_new6(@ptrCast(param1.ptr), @ptrCast(background.ptr)) };
    }

    /// New7 constructs a new KStatefulBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KStatefulBrush `
    ///
    pub fn New7(param1: anytype) KStatefulBrush {
        comptime _ = @TypeOf(param1)._is_KStatefulBrush;
        return .{ .ptr = qtc.KStatefulBrush_new7(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstatefulbrush.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatefulBrush `
    ///
    /// ` param1: KStatefulBrush `
    ///
    pub fn OperatorAssign(self: KStatefulBrush, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KStatefulBrush;
        qtc.KStatefulBrush_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstatefulbrush.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatefulBrush `
    ///
    /// ` param1: qpalette_enums.ColorGroup `
    ///
    pub fn Brush(self: KStatefulBrush, param1: i32) QBrush {
        return .{ .ptr = qtc.KStatefulBrush_Brush(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstatefulbrush.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatefulBrush `
    ///
    /// ` param1: QPalette `
    ///
    pub fn Brush2(self: KStatefulBrush, param1: anytype) QBrush {
        comptime _ = @TypeOf(param1)._is_QPalette;
        return .{ .ptr = qtc.KStatefulBrush_Brush2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kstatefulbrush.html#dtor.KStatefulBrush)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KStatefulBrush `
    ///
    pub fn Delete(self: KStatefulBrush) void {
        qtc.KStatefulBrush_Delete(@ptrCast(self.ptr));
    }
};
