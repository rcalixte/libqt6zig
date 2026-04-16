const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qtextoption_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html)
pub const QTextOption = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextOption,

    pub const _is_QTextOption = {};

    /// New constructs a new QTextOption object.
    ///
    pub fn New() QTextOption {
        return .{ .ptr = qtc.QTextOption_new() };
    }

    /// New2 constructs a new QTextOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn New2(alignment: i32) QTextOption {
        return .{ .ptr = qtc.QTextOption_new2(@bitCast(alignment)) };
    }

    /// New3 constructs a new QTextOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QTextOption `
    ///
    pub fn New3(o: anytype) QTextOption {
        comptime _ = @TypeOf(o)._is_QTextOption;
        return .{ .ptr = qtc.QTextOption_new3(@ptrCast(o.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` o: QTextOption `
    ///
    pub fn OperatorAssign(self: QTextOption, o: anytype) void {
        comptime _ = @TypeOf(o)._is_QTextOption;
        qtc.QTextOption_OperatorAssign(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QTextOption, alignment: i32) void {
        qtc.QTextOption_SetAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QTextOption) i32 {
        return qtc.QTextOption_Alignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setTextDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` aDirection: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetTextDirection(self: QTextOption, aDirection: i32) void {
        qtc.QTextOption_SetTextDirection(@ptrCast(self.ptr), @bitCast(aDirection));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#textDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn TextDirection(self: QTextOption) i32 {
        return qtc.QTextOption_TextDirection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` wrap: qtextoption_enums.WrapMode `
    ///
    pub fn SetWrapMode(self: QTextOption, wrap: i32) void {
        qtc.QTextOption_SetWrapMode(@ptrCast(self.ptr), @bitCast(wrap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#wrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ## Returns:
    ///
    /// ` qtextoption_enums.WrapMode `
    ///
    pub fn WrapMode(self: QTextOption) i32 {
        return qtc.QTextOption_WrapMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` flags: flag of qtextoption_enums.Flag `
    ///
    pub fn SetFlags(self: QTextOption, flags: i32) void {
        qtc.QTextOption_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtextoption_enums.Flag `
    ///
    pub fn Flags(self: QTextOption) i32 {
        return qtc.QTextOption_Flags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setTabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` tabStopDistance: f64 `
    ///
    pub fn SetTabStopDistance(self: QTextOption, tabStopDistance: f64) void {
        qtc.QTextOption_SetTabStopDistance(@ptrCast(self.ptr), @bitCast(tabStopDistance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#tabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    pub fn TabStopDistance(self: QTextOption) f64 {
        return qtc.QTextOption_TabStopDistance(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setTabArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` tabStops: []f64 `
    ///
    pub fn SetTabArray(self: QTextOption, tabStops: []f64) void {
        const tabStops_list = qtc.libqt_list{
            .len = tabStops.len,
            .data = tabStops.ptr,
        };
        qtc.QTextOption_SetTabArray(@ptrCast(self.ptr), tabStops_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#tabArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TabArray(self: QTextOption, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.QTextOption_TabArray(@ptrCast(self.ptr));
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
    /// ` self: QTextOption `
    ///
    /// ` tabStops: []QTextOption__Tab `
    ///
    pub fn SetTabs(self: QTextOption, tabStops: []QTextOption__Tab) void {
        const tabStops_list = qtc.libqt_list{
            .len = tabStops.len,
            .data = @ptrCast(tabStops.ptr),
        };
        qtc.QTextOption_SetTabs(@ptrCast(self.ptr), tabStops_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#tabs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tabs(self: QTextOption, allocator: std.mem.Allocator) []QTextOption__Tab {
        const _arr: qtc.libqt_list = qtc.QTextOption_Tabs(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextOption__Tab, _arr.len) catch @panic("qtextoption.Tabs: Memory allocation failed");
        const _data: [*]QtC.QTextOption__Tab = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setUseDesignMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` b: bool `
    ///
    pub fn SetUseDesignMetrics(self: QTextOption, b: bool) void {
        qtc.QTextOption_SetUseDesignMetrics(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#useDesignMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    pub fn UseDesignMetrics(self: QTextOption) bool {
        return qtc.QTextOption_UseDesignMetrics(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#dtor.QTextOption)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextOption `
    ///
    pub fn Delete(self: QTextOption) void {
        qtc.QTextOption_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html)
pub const QTextOption__Tab = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextOption__Tab,

    pub const _is_QTextOption__Tab = {};

    /// New constructs a new QTextOption::Tab object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextOption__Tab `
    ///
    pub fn New(other: anytype) QTextOption__Tab {
        comptime _ = @TypeOf(other)._is_QTextOption__Tab;
        return .{ .ptr = qtc.QTextOption__Tab_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QTextOption::Tab object and invalidates the source QTextOption::Tab object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextOption__Tab `
    ///
    pub fn New2(other: anytype) QTextOption__Tab {
        comptime _ = @TypeOf(other)._is_QTextOption__Tab;
        return .{ .ptr = qtc.QTextOption__Tab_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QTextOption::Tab object.
    ///
    pub fn New3() QTextOption__Tab {
        return .{ .ptr = qtc.QTextOption__Tab_new3() };
    }

    /// New4 constructs a new QTextOption::Tab object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: f64 `
    ///
    /// ` tabType: qtextoption_enums.TabType `
    ///
    pub fn New4(pos: f64, tabType: i32) QTextOption__Tab {
        return .{ .ptr = qtc.QTextOption__Tab_new4(@bitCast(pos), @bitCast(tabType)) };
    }

    /// New5 constructs a new QTextOption::Tab object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: f64 `
    ///
    /// ` tabType: qtextoption_enums.TabType `
    ///
    /// ` delim: QChar `
    ///
    pub fn New5(pos: f64, tabType: i32, delim: anytype) QTextOption__Tab {
        comptime _ = @TypeOf(delim)._is_QChar;
        return .{ .ptr = qtc.QTextOption__Tab_new5(@bitCast(pos), @bitCast(tabType), @ptrCast(delim.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextOption__Tab `
    ///
    /// ` other: QTextOption__Tab `
    ///
    pub fn CopyAssign(self: QTextOption__Tab, other: QTextOption__Tab) void {
        qtc.QTextOption__Tab_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextOption__Tab `
    ///
    /// ` other: QTextOption__Tab `
    ///
    pub fn MoveAssign(self: QTextOption__Tab, other: QTextOption__Tab) void {
        qtc.QTextOption__Tab_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption__Tab `
    ///
    /// ` other: QTextOption__Tab `
    ///
    pub fn OperatorEqual(self: QTextOption__Tab, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTextOption__Tab;
        return qtc.QTextOption__Tab_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption__Tab `
    ///
    /// ` other: QTextOption__Tab `
    ///
    pub fn OperatorNotEqual(self: QTextOption__Tab, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTextOption__Tab;
        return qtc.QTextOption__Tab_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption__Tab `
    ///
    pub fn Position(self: QTextOption__Tab) f64 {
        return qtc.QTextOption__Tab_Position(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption__Tab `
    ///
    /// ` position: f64 `
    ///
    pub fn SetPosition(self: QTextOption__Tab, position: f64) void {
        qtc.QTextOption__Tab_SetPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption__Tab `
    ///
    /// ## Returns:
    ///
    /// ` qtextoption_enums.TabType `
    ///
    pub fn Type(self: QTextOption__Tab) i32 {
        return qtc.QTextOption__Tab_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption__Tab `
    ///
    /// ` type: qtextoption_enums.TabType `
    ///
    pub fn SetType(self: QTextOption__Tab, _type: i32) void {
        qtc.QTextOption__Tab_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#delimiter-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption__Tab `
    ///
    pub fn Delimiter(self: QTextOption__Tab) QChar {
        return .{ .ptr = qtc.QTextOption__Tab_Delimiter(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#delimiter-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption__Tab `
    ///
    /// ` delimiter: QChar `
    ///
    pub fn SetDelimiter(self: QTextOption__Tab, delimiter: anytype) void {
        comptime _ = @TypeOf(delimiter)._is_QChar;
        qtc.QTextOption__Tab_SetDelimiter(@ptrCast(self.ptr), @ptrCast(delimiter.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextOption__Tab `
    ///
    pub fn Delete(self: QTextOption__Tab) void {
        qtc.QTextOption__Tab_Delete(@ptrCast(self.ptr));
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
