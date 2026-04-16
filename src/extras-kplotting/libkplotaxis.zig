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

    /// New constructs a new KPlotAxis object.
    ///
    pub fn New() KPlotAxis {
        return .{ .ptr = qtc.KPlotAxis_new() };
    }

    /// New2 constructs a new KPlotAxis object.
    ///
    /// ## Parameter(s):
    ///
    /// ` label: []const u8 `
    ///
    pub fn New2(label: []const u8) KPlotAxis {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return .{ .ptr = qtc.KPlotAxis_new2(label_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    pub fn IsVisible(self: KPlotAxis) bool {
        return qtc.KPlotAxis_IsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KPlotAxis, visible: bool) void {
        qtc.KPlotAxis_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#areTickLabelsShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    pub fn AreTickLabelsShown(self: KPlotAxis) bool {
        return qtc.KPlotAxis_AreTickLabelsShown(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#setTickLabelsShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` b: bool `
    ///
    pub fn SetTickLabelsShown(self: KPlotAxis, b: bool) void {
        qtc.KPlotAxis_SetTickLabelsShown(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` label: []const u8 `
    ///
    pub fn SetLabel(self: KPlotAxis, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KPlotAxis_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: KPlotAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPlotAxis_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kplotaxis.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn TickLabel(self: KPlotAxis, allocator: std.mem.Allocator, value: f64) []const u8 {
        var _str = qtc.KPlotAxis_TickLabel(@ptrCast(self.ptr), @bitCast(value));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kplotaxis.TickLabel: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#setTickLabelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    pub fn SetTickLabelFormat(self: KPlotAxis) void {
        qtc.KPlotAxis_SetTickLabelFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#tickLabelWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    pub fn TickLabelWidth(self: KPlotAxis) i32 {
        return qtc.KPlotAxis_TickLabelWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#tickLabelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    pub fn TickLabelFormat(self: KPlotAxis) u8 {
        return qtc.KPlotAxis_TickLabelFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#tickLabelPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    pub fn TickLabelPrecision(self: KPlotAxis) i32 {
        return qtc.KPlotAxis_TickLabelPrecision(@ptrCast(self.ptr));
    }

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
    pub fn SetTickMarks(self: KPlotAxis, x0: f64, length: f64) void {
        qtc.KPlotAxis_SetTickMarks(@ptrCast(self.ptr), @bitCast(x0), @bitCast(length));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#majorTickMarks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MajorTickMarks(self: KPlotAxis, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.KPlotAxis_MajorTickMarks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f64, _arr.len) catch @panic("kplotaxis.MajorTickMarks: Memory allocation failed");
        const _data: [*]f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#minorTickMarks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MinorTickMarks(self: KPlotAxis, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.KPlotAxis_MinorTickMarks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f64, _arr.len) catch @panic("kplotaxis.MinorTickMarks: Memory allocation failed");
        const _data: [*]f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#setTickLabelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotAxis `
    ///
    /// ` format: u8 `
    ///
    pub fn SetTickLabelFormat1(self: KPlotAxis, format: u8) void {
        qtc.KPlotAxis_SetTickLabelFormat1(@ptrCast(self.ptr), @bitCast(format));
    }

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
    pub fn SetTickLabelFormat2(self: KPlotAxis, format: u8, fieldWidth: i32) void {
        qtc.KPlotAxis_SetTickLabelFormat2(@ptrCast(self.ptr), @bitCast(format), @bitCast(fieldWidth));
    }

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
    pub fn SetTickLabelFormat3(self: KPlotAxis, format: u8, fieldWidth: i32, precision: i32) void {
        qtc.KPlotAxis_SetTickLabelFormat3(@ptrCast(self.ptr), @bitCast(format), @bitCast(fieldWidth), @bitCast(precision));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kplotaxis.html#dtor.KPlotAxis)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KPlotAxis `
    ///
    pub fn Delete(self: KPlotAxis) void {
        qtc.KPlotAxis_Delete(@ptrCast(self.ptr));
    }
};
