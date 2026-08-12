const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kplotaxis.html)
pub const KPlotAxis = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KPlotAxis,

    pub const _is_KPlotAxis = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KPlotAxis object in C++ memory
    ///
    pub fn new() KPlotAxis {
        return .{ .ptr = qtc.KPlotAxis_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KPlotAxis object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _label: []const u8 `
    ///
    pub fn new2(_label: []const u8) KPlotAxis {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        return .{ .ptr = qtc.KPlotAxis_new2(label_str) };
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    pub fn isVisible(self: KPlotAxis) bool {
        return qtc.KPlotAxis_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: KPlotAxis, visible: bool) void {
        qtc.KPlotAxis_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `areTickLabelsShown` instead
    ///
    pub const AreTickLabelsShown = areTickLabelsShown;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#areTickLabelsShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    pub fn areTickLabelsShown(self: KPlotAxis) bool {
        return qtc.KPlotAxis_AreTickLabelsShown(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTickLabelsShown` instead
    ///
    pub const SetTickLabelsShown = setTickLabelsShown;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#setTickLabelsShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` b: bool `
    ///
    pub fn setTickLabelsShown(self: KPlotAxis, b: bool) void {
        qtc.KPlotAxis_SetTickLabelsShown(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setLabel` instead
    ///
    pub const SetLabel = setLabel;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` _label: []const u8 `
    ///
    pub fn setLabel(self: KPlotAxis, _label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        qtc.KPlotAxis_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### DEPRECATED: Use `label` instead
    ///
    pub const Label = label;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn label(self: KPlotAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPlotAxis_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPlotAxis.label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tickLabel` instead
    ///
    pub const TickLabel = tickLabel;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#tickLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    pub fn tickLabel(self: KPlotAxis, allocator: std.mem.Allocator, value: f64) []const u8 {
        var _str = qtc.KPlotAxis_TickLabel(@ptrCast(self.ptr), @bitCast(value));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPlotAxis.tickLabel: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTickLabelFormat` instead
    ///
    pub const SetTickLabelFormat = setTickLabelFormat;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#setTickLabelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    pub fn setTickLabelFormat(self: KPlotAxis) void {
        qtc.KPlotAxis_SetTickLabelFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tickLabelWidth` instead
    ///
    pub const TickLabelWidth = tickLabelWidth;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#tickLabelWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    pub fn tickLabelWidth(self: KPlotAxis) i32 {
        return qtc.KPlotAxis_TickLabelWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tickLabelFormat` instead
    ///
    pub const TickLabelFormat = tickLabelFormat;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#tickLabelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    pub fn tickLabelFormat(self: KPlotAxis) u8 {
        return qtc.KPlotAxis_TickLabelFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tickLabelPrecision` instead
    ///
    pub const TickLabelPrecision = tickLabelPrecision;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#tickLabelPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    pub fn tickLabelPrecision(self: KPlotAxis) i32 {
        return qtc.KPlotAxis_TickLabelPrecision(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTickMarks` instead
    ///
    pub const SetTickMarks = setTickMarks;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#setTickMarks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` x0: f64 `
    ///
    /// ` length: f64 `
    ///
    pub fn setTickMarks(self: KPlotAxis, x0: f64, length: f64) void {
        qtc.KPlotAxis_SetTickMarks(@ptrCast(self.ptr), @bitCast(x0), @bitCast(length));
    }

    /// ### DEPRECATED: Use `majorTickMarks` instead
    ///
    pub const MajorTickMarks = majorTickMarks;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#majorTickMarks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn majorTickMarks(self: KPlotAxis, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.KPlotAxis_MajorTickMarks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f64, _arr.len) catch @panic("KPlotAxis.majorTickMarks: Memory allocation failed");
        const _data_val: [*]f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `minorTickMarks` instead
    ///
    pub const MinorTickMarks = minorTickMarks;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#minorTickMarks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn minorTickMarks(self: KPlotAxis, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.KPlotAxis_MinorTickMarks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f64, _arr.len) catch @panic("KPlotAxis.minorTickMarks: Memory allocation failed");
        const _data_val: [*]f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTickLabelFormat1` instead
    ///
    pub const SetTickLabelFormat1 = setTickLabelFormat1;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#setTickLabelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` format: u8 `
    ///
    pub fn setTickLabelFormat1(self: KPlotAxis, format: u8) void {
        qtc.KPlotAxis_SetTickLabelFormat1(@ptrCast(self.ptr), @bitCast(format));
    }

    /// ### DEPRECATED: Use `setTickLabelFormat2` instead
    ///
    pub const SetTickLabelFormat2 = setTickLabelFormat2;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#setTickLabelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` format: u8 `
    ///
    /// ` fieldWidth: i32 `
    ///
    pub fn setTickLabelFormat2(self: KPlotAxis, format: u8, fieldWidth: i32) void {
        qtc.KPlotAxis_SetTickLabelFormat2(@ptrCast(self.ptr), @bitCast(format), @bitCast(fieldWidth));
    }

    /// ### DEPRECATED: Use `setTickLabelFormat3` instead
    ///
    pub const SetTickLabelFormat3 = setTickLabelFormat3;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#setTickLabelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` format: u8 `
    ///
    /// ` fieldWidth: i32 `
    ///
    /// ` precision: i32 `
    ///
    pub fn setTickLabelFormat3(self: KPlotAxis, format: u8, fieldWidth: i32, precision: i32) void {
        qtc.KPlotAxis_SetTickLabelFormat3(@ptrCast(self.ptr), @bitCast(format), @bitCast(fieldWidth), @bitCast(precision));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#dtor.KPlotAxis)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KPlotAxis `
    ///
    pub fn delete(self: KPlotAxis) void {
        qtc.KPlotAxis_Delete(@ptrCast(self.ptr));
    }
};
