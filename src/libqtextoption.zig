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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextOption object in C++ memory
    ///
    pub fn new() QTextOption {
        return .{ .ptr = qtc.QTextOption_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextOption object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn new2(_alignment: i32) QTextOption {
        return .{ .ptr = qtc.QTextOption_new2(@bitCast(_alignment)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextOption object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QTextOption `
    ///
    pub fn new3(o: anytype) QTextOption {
        comptime _ = @TypeOf(o)._is_QTextOption;
        return .{ .ptr = qtc.QTextOption_new3(@ptrCast(o.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` o: QTextOption `
    ///
    pub fn operatorAssign(self: QTextOption, o: anytype) void {
        comptime _ = @TypeOf(o)._is_QTextOption;
        qtc.QTextOption_OperatorAssign(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment(self: QTextOption, _alignment: i32) void {
        qtc.QTextOption_SetAlignment(@ptrCast(self.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

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
    pub fn alignment(self: QTextOption) i32 {
        return qtc.QTextOption_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextDirection` instead
    ///
    pub const SetTextDirection = setTextDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setTextDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` aDirection: qnamespace_enums.LayoutDirection `
    ///
    pub fn setTextDirection(self: QTextOption, aDirection: i32) void {
        qtc.QTextOption_SetTextDirection(@ptrCast(self.ptr), @bitCast(aDirection));
    }

    /// ### DEPRECATED: Use `textDirection` instead
    ///
    pub const TextDirection = textDirection;

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
    pub fn textDirection(self: QTextOption) i32 {
        return qtc.QTextOption_TextDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWrapMode` instead
    ///
    pub const SetWrapMode = setWrapMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` wrap: qtextoption_enums.WrapMode `
    ///
    pub fn setWrapMode(self: QTextOption, wrap: i32) void {
        qtc.QTextOption_SetWrapMode(@ptrCast(self.ptr), @bitCast(wrap));
    }

    /// ### DEPRECATED: Use `wrapMode` instead
    ///
    pub const WrapMode = wrapMode;

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
    pub fn wrapMode(self: QTextOption) i32 {
        return qtc.QTextOption_WrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` _flags: flag of qtextoption_enums.Flag `
    ///
    pub fn setFlags(self: QTextOption, _flags: i32) void {
        qtc.QTextOption_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

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
    pub fn flags(self: QTextOption) i32 {
        return qtc.QTextOption_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabStopDistance` instead
    ///
    pub const SetTabStopDistance = setTabStopDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setTabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` _tabStopDistance: f64 `
    ///
    pub fn setTabStopDistance(self: QTextOption, _tabStopDistance: f64) void {
        qtc.QTextOption_SetTabStopDistance(@ptrCast(self.ptr), @bitCast(_tabStopDistance));
    }

    /// ### DEPRECATED: Use `tabStopDistance` instead
    ///
    pub const TabStopDistance = tabStopDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#tabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    pub fn tabStopDistance(self: QTextOption) f64 {
        return qtc.QTextOption_TabStopDistance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabArray` instead
    ///
    pub const SetTabArray = setTabArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setTabArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` tabStops: []f64 `
    ///
    pub fn setTabArray(self: QTextOption, tabStops: []f64) void {
        const tabStops_list = qtc.libqt_list{
            .len = tabStops.len,
            .data = tabStops.ptr,
        };
        qtc.QTextOption_SetTabArray(@ptrCast(self.ptr), tabStops_list);
    }

    /// ### DEPRECATED: Use `tabArray` instead
    ///
    pub const TabArray = tabArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#tabArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tabArray(self: QTextOption, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.QTextOption_TabArray(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f64, _arr.len) catch @panic("QTextOption.tabArray: Memory allocation failed");
        const _data_val: [*]f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTabs` instead
    ///
    pub const SetTabs = setTabs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setTabs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` tabStops: []QTextOption__Tab `
    ///
    pub fn setTabs(self: QTextOption, tabStops: []QTextOption__Tab) void {
        const tabStops_list = qtc.libqt_list{
            .len = tabStops.len,
            .data = @ptrCast(tabStops.ptr),
        };
        qtc.QTextOption_SetTabs(@ptrCast(self.ptr), tabStops_list);
    }

    /// ### DEPRECATED: Use `tabs` instead
    ///
    pub const Tabs = tabs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#tabs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tabs(self: QTextOption, allocator: std.mem.Allocator) []QTextOption__Tab {
        const _arr: qtc.libqt_list = qtc.QTextOption_Tabs(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextOption__Tab, _arr.len) catch @panic("QTextOption.tabs: Memory allocation failed");
        const _data_val: [*]QtC.QTextOption__Tab = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setUseDesignMetrics` instead
    ///
    pub const SetUseDesignMetrics = setUseDesignMetrics;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#setUseDesignMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    /// ` b: bool `
    ///
    pub fn setUseDesignMetrics(self: QTextOption, b: bool) void {
        qtc.QTextOption_SetUseDesignMetrics(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `useDesignMetrics` instead
    ///
    pub const UseDesignMetrics = useDesignMetrics;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#useDesignMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption `
    ///
    pub fn useDesignMetrics(self: QTextOption) bool {
        return qtc.QTextOption_UseDesignMetrics(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption.html#dtor.QTextOption)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextOption `
    ///
    pub fn delete(self: QTextOption) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextOption::Tab object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextOption__Tab `
    ///
    pub fn new(other: anytype) QTextOption__Tab {
        comptime _ = @TypeOf(other)._is_QTextOption__Tab;
        return .{ .ptr = qtc.QTextOption__Tab_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextOption::Tab object and invalidate the source QTextOption::Tab object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextOption__Tab `
    ///
    pub fn new2(other: anytype) QTextOption__Tab {
        comptime _ = @TypeOf(other)._is_QTextOption__Tab;
        return .{ .ptr = qtc.QTextOption__Tab_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextOption::Tab object in C++ memory
    ///
    pub fn new3() QTextOption__Tab {
        return .{ .ptr = qtc.QTextOption__Tab_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTextOption::Tab object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: f64 `
    ///
    /// ` tabType: qtextoption_enums.TabType `
    ///
    pub fn new4(pos: f64, tabType: i32) QTextOption__Tab {
        return .{ .ptr = qtc.QTextOption__Tab_new4(@bitCast(pos), @bitCast(tabType)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QTextOption::Tab object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: f64 `
    ///
    /// ` tabType: qtextoption_enums.TabType `
    ///
    /// ` delim: QChar `
    ///
    pub fn new5(pos: f64, tabType: i32, delim: anytype) QTextOption__Tab {
        comptime _ = @TypeOf(delim)._is_QChar;
        return .{ .ptr = qtc.QTextOption__Tab_new5(@bitCast(pos), @bitCast(tabType), @ptrCast(delim.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextOption__Tab `
    ///
    /// ` other: QTextOption__Tab `
    ///
    pub fn copyAssign(self: QTextOption__Tab, other: QTextOption__Tab) void {
        qtc.QTextOption__Tab_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextOption__Tab `
    ///
    /// ` other: QTextOption__Tab `
    ///
    pub fn moveAssign(self: QTextOption__Tab, other: QTextOption__Tab) void {
        qtc.QTextOption__Tab_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption__Tab `
    ///
    /// ` other: QTextOption__Tab `
    ///
    pub fn operatorEqual(self: QTextOption__Tab, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTextOption__Tab;
        return qtc.QTextOption__Tab_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption__Tab `
    ///
    /// ` other: QTextOption__Tab `
    ///
    pub fn operatorNotEqual(self: QTextOption__Tab, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTextOption__Tab;
        return qtc.QTextOption__Tab_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption__Tab `
    ///
    pub fn position(self: QTextOption__Tab) f64 {
        return qtc.QTextOption__Tab_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption__Tab `
    ///
    /// ` _position: f64 `
    ///
    pub fn setPosition(self: QTextOption__Tab, _position: f64) void {
        qtc.QTextOption__Tab_SetPosition(@ptrCast(self.ptr), @bitCast(_position));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QTextOption__Tab) i32 {
        return qtc.QTextOption__Tab_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption__Tab `
    ///
    /// ` _type: qtextoption_enums.TabType `
    ///
    pub fn setType(self: QTextOption__Tab, _type: i32) void {
        qtc.QTextOption__Tab_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `delimiter` instead
    ///
    pub const Delimiter = delimiter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#delimiter-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption__Tab `
    ///
    pub fn delimiter(self: QTextOption__Tab) QChar {
        return .{ .ptr = qtc.QTextOption__Tab_Delimiter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDelimiter` instead
    ///
    pub const SetDelimiter = setDelimiter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextoption-tab.html#delimiter-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextOption__Tab `
    ///
    /// ` _delimiter: QChar `
    ///
    pub fn setDelimiter(self: QTextOption__Tab, _delimiter: anytype) void {
        comptime _ = @TypeOf(_delimiter)._is_QChar;
        qtc.QTextOption__Tab_SetDelimiter(@ptrCast(self.ptr), @ptrCast(_delimiter.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextOption__Tab `
    ///
    pub fn delete(self: QTextOption__Tab) void {
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
