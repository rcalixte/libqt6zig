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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KStatefulBrush object in C++ memory
    ///
    pub fn new() KStatefulBrush {
        return .{ .ptr = qtc.KStatefulBrush_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KStatefulBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kcolorscheme_enums.ColorSet `
    ///
    /// ` param2: kcolorscheme_enums.ForegroundRole `
    ///
    pub fn new2(param1: i32, param2: i32) KStatefulBrush {
        return .{ .ptr = qtc.KStatefulBrush_new2(@bitCast(param1), @bitCast(param2)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KStatefulBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kcolorscheme_enums.ColorSet `
    ///
    /// ` param2: kcolorscheme_enums.BackgroundRole `
    ///
    pub fn new3(param1: i32, param2: i32) KStatefulBrush {
        return .{ .ptr = qtc.KStatefulBrush_new3(@bitCast(param1), @bitCast(param2)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KStatefulBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kcolorscheme_enums.ColorSet `
    ///
    /// ` param2: kcolorscheme_enums.DecorationRole `
    ///
    pub fn new4(param1: i32, param2: i32) KStatefulBrush {
        return .{ .ptr = qtc.KStatefulBrush_new4(@bitCast(param1), @bitCast(param2)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KStatefulBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QBrush `
    ///
    pub fn new5(param1: anytype) KStatefulBrush {
        comptime _ = @TypeOf(param1)._is_QBrush;
        return .{ .ptr = qtc.KStatefulBrush_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new KStatefulBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QBrush `
    ///
    /// ` background: QBrush `
    ///
    pub fn new6(param1: anytype, background: anytype) KStatefulBrush {
        comptime _ = @TypeOf(param1)._is_QBrush;
        comptime _ = @TypeOf(background)._is_QBrush;
        return .{ .ptr = qtc.KStatefulBrush_new6(@ptrCast(param1.ptr), @ptrCast(background.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new KStatefulBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KStatefulBrush `
    ///
    pub fn new7(param1: anytype) KStatefulBrush {
        comptime _ = @TypeOf(param1)._is_KStatefulBrush;
        return .{ .ptr = qtc.KStatefulBrush_new7(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kstatefulbrush.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatefulBrush `
    ///
    /// ` param1: KStatefulBrush `
    ///
    pub fn operatorAssign(self: KStatefulBrush, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KStatefulBrush;
        qtc.KStatefulBrush_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// ### [Upstream resources](https://api.kde.org/kstatefulbrush.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatefulBrush `
    ///
    /// ` param1: qpalette_enums.ColorGroup `
    ///
    pub fn brush(self: KStatefulBrush, param1: i32) QBrush {
        return .{ .ptr = qtc.KStatefulBrush_Brush(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `brush2` instead
    ///
    pub const Brush2 = brush2;

    /// ### [Upstream resources](https://api.kde.org/kstatefulbrush.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatefulBrush `
    ///
    /// ` param1: QPalette `
    ///
    pub fn brush2(self: KStatefulBrush, param1: anytype) QBrush {
        comptime _ = @TypeOf(param1)._is_QPalette;
        return .{ .ptr = qtc.KStatefulBrush_Brush2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kstatefulbrush.html#dtor.KStatefulBrush)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KStatefulBrush `
    ///
    pub fn delete(self: KStatefulBrush) void {
        qtc.KStatefulBrush_Delete(@ptrCast(self.ptr));
    }
};
