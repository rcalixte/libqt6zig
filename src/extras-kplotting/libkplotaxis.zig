const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kplotaxis.html
pub const kplotaxis = struct {
    /// New constructs a new KPlotAxis object.
    ///
    ///
    pub fn New() QtC.KPlotAxis {
        return qtc.KPlotAxis_new();
    }

    /// New2 constructs a new KPlotAxis object.
    ///
    /// ``` label: []const u8 ```
    pub fn New2(label: []const u8) QtC.KPlotAxis {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };

        return qtc.KPlotAxis_new2(label_str);
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#isVisible)
    ///
    /// ``` self: QtC.KPlotAxis ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.KPlotAxis_IsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#setVisible)
    ///
    /// ``` self: QtC.KPlotAxis, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.KPlotAxis_SetVisible(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#areTickLabelsShown)
    ///
    /// ``` self: QtC.KPlotAxis ```
    pub fn AreTickLabelsShown(self: ?*anyopaque) bool {
        return qtc.KPlotAxis_AreTickLabelsShown(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#setTickLabelsShown)
    ///
    /// ``` self: QtC.KPlotAxis, b: bool ```
    pub fn SetTickLabelsShown(self: ?*anyopaque, b: bool) void {
        qtc.KPlotAxis_SetTickLabelsShown(@ptrCast(self), b);
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#setLabel)
    ///
    /// ``` self: QtC.KPlotAxis, label: []const u8 ```
    pub fn SetLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KPlotAxis_SetLabel(@ptrCast(self), label_str);
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#label)
    ///
    /// ``` self: QtC.KPlotAxis, allocator: std.mem.Allocator ```
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KPlotAxis_Label(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kplotaxis.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#tickLabel)
    ///
    /// ``` self: QtC.KPlotAxis, value: f64, allocator: std.mem.Allocator ```
    pub fn TickLabel(self: ?*anyopaque, value: f64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KPlotAxis_TickLabel(@ptrCast(self), @floatCast(value));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kplotaxis.TickLabel: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#setTickLabelFormat)
    ///
    /// ``` self: QtC.KPlotAxis ```
    pub fn SetTickLabelFormat(self: ?*anyopaque) void {
        qtc.KPlotAxis_SetTickLabelFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#tickLabelWidth)
    ///
    /// ``` self: QtC.KPlotAxis ```
    pub fn TickLabelWidth(self: ?*anyopaque) i32 {
        return qtc.KPlotAxis_TickLabelWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#tickLabelFormat)
    ///
    /// ``` self: QtC.KPlotAxis ```
    pub fn TickLabelFormat(self: ?*anyopaque) i8 {
        return qtc.KPlotAxis_TickLabelFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#tickLabelPrecision)
    ///
    /// ``` self: QtC.KPlotAxis ```
    pub fn TickLabelPrecision(self: ?*anyopaque) i32 {
        return qtc.KPlotAxis_TickLabelPrecision(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#setTickMarks)
    ///
    /// ``` self: QtC.KPlotAxis, x0: f64, length: f64 ```
    pub fn SetTickMarks(self: ?*anyopaque, x0: f64, length: f64) void {
        qtc.KPlotAxis_SetTickMarks(@ptrCast(self), @floatCast(x0), @floatCast(length));
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#majorTickMarks)
    ///
    /// ``` self: QtC.KPlotAxis, allocator: std.mem.Allocator ```
    pub fn MajorTickMarks(self: ?*anyopaque, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.KPlotAxis_MajorTickMarks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f64, _arr.len) catch @panic("kplotaxis.MajorTickMarks: Memory allocation failed");
        const _data: [*]f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#minorTickMarks)
    ///
    /// ``` self: QtC.KPlotAxis, allocator: std.mem.Allocator ```
    pub fn MinorTickMarks(self: ?*anyopaque, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.KPlotAxis_MinorTickMarks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f64, _arr.len) catch @panic("kplotaxis.MinorTickMarks: Memory allocation failed");
        const _data: [*]f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#setTickLabelFormat)
    ///
    /// ``` self: QtC.KPlotAxis, format: i8 ```
    pub fn SetTickLabelFormat1(self: ?*anyopaque, format: i8) void {
        qtc.KPlotAxis_SetTickLabelFormat1(@ptrCast(self), @intCast(format));
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#setTickLabelFormat)
    ///
    /// ``` self: QtC.KPlotAxis, format: i8, fieldWidth: i32 ```
    pub fn SetTickLabelFormat2(self: ?*anyopaque, format: i8, fieldWidth: i32) void {
        qtc.KPlotAxis_SetTickLabelFormat2(@ptrCast(self), @intCast(format), @intCast(fieldWidth));
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#setTickLabelFormat)
    ///
    /// ``` self: QtC.KPlotAxis, format: i8, fieldWidth: i32, precision: i32 ```
    pub fn SetTickLabelFormat3(self: ?*anyopaque, format: i8, fieldWidth: i32, precision: i32) void {
        qtc.KPlotAxis_SetTickLabelFormat3(@ptrCast(self), @intCast(format), @intCast(fieldWidth), @intCast(precision));
    }

    /// [Qt documentation](https://api.kde.org/kplotaxis.html#dtor.KPlotAxis)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KPlotAxis ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KPlotAxis_Delete(@ptrCast(self));
    }
};
