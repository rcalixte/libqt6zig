const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qtextoption_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html)
pub const qtextoption = struct {
    /// New constructs a new QTextOption object.
    ///
    pub fn New() QtC.QTextOption {
        return qtc.QTextOption_new();
    }

    /// New2 constructs a new QTextOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn New2(alignment: i32) QtC.QTextOption {
        return qtc.QTextOption_new2(@intCast(alignment));
    }

    /// New3 constructs a new QTextOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QtC.QTextOption `
    ///
    pub fn New3(o: ?*anyopaque) QtC.QTextOption {
        return qtc.QTextOption_new3(@ptrCast(o));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    /// ` o: QtC.QTextOption `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, o: ?*anyopaque) void {
        qtc.QTextOption_OperatorAssign(@ptrCast(self), @ptrCast(o));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QTextOption_SetAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: ?*anyopaque) i32 {
        return qtc.QTextOption_Alignment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setTextDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    /// ` aDirection: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetTextDirection(self: ?*anyopaque, aDirection: i32) void {
        qtc.QTextOption_SetTextDirection(@ptrCast(self), @intCast(aDirection));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#textDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn TextDirection(self: ?*anyopaque) i32 {
        return qtc.QTextOption_TextDirection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    /// ` wrap: qtextoption_enums.WrapMode `
    ///
    pub fn SetWrapMode(self: ?*anyopaque, wrap: i32) void {
        qtc.QTextOption_SetWrapMode(@ptrCast(self), @intCast(wrap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#wrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    /// ## Returns:
    ///
    /// ` qtextoption_enums.WrapMode `
    ///
    pub fn WrapMode(self: ?*anyopaque) i32 {
        return qtc.QTextOption_WrapMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    /// ` flags: flag of qtextoption_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QTextOption_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtextoption_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QTextOption_Flags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setTabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    /// ` tabStopDistance: f64 `
    ///
    pub fn SetTabStopDistance(self: ?*anyopaque, tabStopDistance: f64) void {
        qtc.QTextOption_SetTabStopDistance(@ptrCast(self), @floatCast(tabStopDistance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#tabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    pub fn TabStopDistance(self: ?*anyopaque) f64 {
        return qtc.QTextOption_TabStopDistance(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setTabArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    /// ` tabStops: []f64 `
    ///
    pub fn SetTabArray(self: ?*anyopaque, tabStops: []f64) void {
        const tabStops_list = qtc.libqt_list{
            .len = tabStops.len,
            .data = tabStops.ptr,
        };
        qtc.QTextOption_SetTabArray(@ptrCast(self), tabStops_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#tabArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TabArray(self: ?*anyopaque, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.QTextOption_TabArray(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f64, _arr.len) catch @panic("qtextoption.TabArray: Memory allocation failed");
        const _data: [*]f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setTabs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    /// ` tabStops: []QtC.QTextOption__Tab `
    ///
    pub fn SetTabs(self: ?*anyopaque, tabStops: []QtC.QTextOption__Tab) void {
        const tabStops_list = qtc.libqt_list{
            .len = tabStops.len,
            .data = @ptrCast(tabStops.ptr),
        };
        qtc.QTextOption_SetTabs(@ptrCast(self), tabStops_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#tabs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tabs(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QTextOption__Tab {
        const _arr: qtc.libqt_list = qtc.QTextOption_Tabs(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextOption__Tab, _arr.len) catch @panic("qtextoption.Tabs: Memory allocation failed");
        const _data: [*]QtC.QTextOption__Tab = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setUseDesignMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    /// ` b: bool `
    ///
    pub fn SetUseDesignMetrics(self: ?*anyopaque, b: bool) void {
        qtc.QTextOption_SetUseDesignMetrics(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#useDesignMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption `
    ///
    pub fn UseDesignMetrics(self: ?*anyopaque) bool {
        return qtc.QTextOption_UseDesignMetrics(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#dtor.QTextOption)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QTextOption `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextOption_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html)
pub const qtextoption__tab = struct {
    /// New constructs a new QTextOption::Tab object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QTextOption__Tab `
    ///
    pub fn New(other: ?*anyopaque) QtC.QTextOption__Tab {
        return qtc.QTextOption__Tab_new(@ptrCast(other));
    }

    /// New2 constructs a new QTextOption::Tab object and invalidates the source QTextOption::Tab object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QTextOption__Tab `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QTextOption__Tab {
        return qtc.QTextOption__Tab_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTextOption::Tab object.
    ///
    pub fn New3() QtC.QTextOption__Tab {
        return qtc.QTextOption__Tab_new3();
    }

    /// New4 constructs a new QTextOption::Tab object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: f64 `
    ///
    /// ` tabType: qtextoption_enums.TabType `
    ///
    pub fn New4(pos: f64, tabType: i32) QtC.QTextOption__Tab {
        return qtc.QTextOption__Tab_new4(@floatCast(pos), @intCast(tabType));
    }

    /// New5 constructs a new QTextOption::Tab object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: f64 `
    ///
    /// ` tabType: qtextoption_enums.TabType `
    ///
    /// ` delim: QtC.QChar `
    ///
    pub fn New5(pos: f64, tabType: i32, delim: QtC.QChar) QtC.QTextOption__Tab {
        return qtc.QTextOption__Tab_new5(@floatCast(pos), @intCast(tabType), @ptrCast(delim));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTextOption__Tab `
    ///
    /// ` other: QtC.QTextOption__Tab `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextOption__Tab_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTextOption__Tab `
    ///
    /// ` other: QtC.QTextOption__Tab `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextOption__Tab_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption__Tab `
    ///
    /// ` other: QtC.QTextOption__Tab `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTextOption__Tab_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption__Tab `
    ///
    /// ` other: QtC.QTextOption__Tab `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTextOption__Tab_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption__Tab `
    ///
    pub fn Position(self: ?*anyopaque) f64 {
        return qtc.QTextOption__Tab_Position(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption__Tab `
    ///
    /// ` position: f64 `
    ///
    pub fn SetPosition(self: ?*anyopaque, position: f64) void {
        qtc.QTextOption__Tab_SetPosition(@ptrCast(self), @floatCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption__Tab `
    ///
    /// ## Returns:
    ///
    /// ` qtextoption_enums.TabType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QTextOption__Tab_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption__Tab `
    ///
    /// ` type: qtextoption_enums.TabType `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QTextOption__Tab_SetType(@ptrCast(self), @intCast(_type));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#delimiter-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption__Tab `
    ///
    pub fn Delimiter(self: ?*anyopaque) QtC.QChar {
        return qtc.QTextOption__Tab_Delimiter(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#delimiter-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTextOption__Tab `
    ///
    /// ` delimiter: QtC.QChar `
    ///
    pub fn SetDelimiter(self: ?*anyopaque, delimiter: QtC.QChar) void {
        qtc.QTextOption__Tab_SetDelimiter(@ptrCast(self), @ptrCast(delimiter));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QTextOption__Tab `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextOption__Tab_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#public-types)
pub const enums = struct {
    pub const TabType = enum(i32) {
        pub const LeftTab: i32 = 0;
        pub const RightTab: i32 = 1;
        pub const CenterTab: i32 = 2;
        pub const DelimiterTab: i32 = 3;
    };

    pub const WrapMode = enum(i32) {
        pub const NoWrap: i32 = 0;
        pub const WordWrap: i32 = 1;
        pub const ManualWrap: i32 = 2;
        pub const WrapAnywhere: i32 = 3;
        pub const WrapAtWordBoundaryOrAnywhere: i32 = 4;
    };

    pub const Flag = enum(i32) {
        pub const ShowTabsAndSpaces: i32 = 1;
        pub const ShowLineAndParagraphSeparators: i32 = 2;
        pub const AddSpaceForLineAndParagraphSeparators: i32 = 4;
        pub const SuppressColors: i32 = 8;
        pub const ShowDocumentTerminator: i32 = 16;
        pub const IncludeTrailingSpaces: i32 = -2147483648;
    };
};
