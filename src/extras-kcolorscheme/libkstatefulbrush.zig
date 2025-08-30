const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kcolorscheme_enums = @import("libkcolorscheme.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;

/// https://api-staging.kde.org/kstatefulbrush.html
pub const kstatefulbrush = struct {
    /// New constructs a new KStatefulBrush object.
    ///
    ///
    pub fn New() QtC.KStatefulBrush {
        return qtc.KStatefulBrush_new();
    }

    /// New2 constructs a new KStatefulBrush object.
    ///
    /// ``` param1: kcolorscheme_enums.ColorSet, param2: kcolorscheme_enums.ForegroundRole ```
    pub fn New2(param1: i32, param2: i32) QtC.KStatefulBrush {
        return qtc.KStatefulBrush_new2(@intCast(param1), @intCast(param2));
    }

    /// New3 constructs a new KStatefulBrush object.
    ///
    /// ``` param1: kcolorscheme_enums.ColorSet, param2: kcolorscheme_enums.BackgroundRole ```
    pub fn New3(param1: i32, param2: i32) QtC.KStatefulBrush {
        return qtc.KStatefulBrush_new3(@intCast(param1), @intCast(param2));
    }

    /// New4 constructs a new KStatefulBrush object.
    ///
    /// ``` param1: kcolorscheme_enums.ColorSet, param2: kcolorscheme_enums.DecorationRole ```
    pub fn New4(param1: i32, param2: i32) QtC.KStatefulBrush {
        return qtc.KStatefulBrush_new4(@intCast(param1), @intCast(param2));
    }

    /// New5 constructs a new KStatefulBrush object.
    ///
    /// ``` param1: QtC.QBrush ```
    pub fn New5(param1: ?*anyopaque) QtC.KStatefulBrush {
        return qtc.KStatefulBrush_new5(@ptrCast(param1));
    }

    /// New6 constructs a new KStatefulBrush object.
    ///
    /// ``` param1: QtC.QBrush, background: QtC.QBrush ```
    pub fn New6(param1: ?*anyopaque, background: ?*anyopaque) QtC.KStatefulBrush {
        return qtc.KStatefulBrush_new6(@ptrCast(param1), @ptrCast(background));
    }

    /// New7 constructs a new KStatefulBrush object.
    ///
    /// ``` param1: QtC.KStatefulBrush ```
    pub fn New7(param1: ?*anyopaque) QtC.KStatefulBrush {
        return qtc.KStatefulBrush_new7(@ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstatefulbrush.html#operator-eq)
    ///
    /// ``` self: QtC.KStatefulBrush, param1: QtC.KStatefulBrush ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KStatefulBrush_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstatefulbrush.html#brush)
    ///
    /// ``` self: QtC.KStatefulBrush, param1: qpalette_enums.ColorGroup ```
    pub fn Brush(self: ?*anyopaque, param1: i32) QtC.QBrush {
        return qtc.KStatefulBrush_Brush(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstatefulbrush.html#brush)
    ///
    /// ``` self: QtC.KStatefulBrush, param1: QtC.QPalette ```
    pub fn Brush2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QBrush {
        return qtc.KStatefulBrush_Brush2(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstatefulbrush.html#dtor.KStatefulBrush)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KStatefulBrush ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KStatefulBrush_Delete(@ptrCast(self));
    }
};
