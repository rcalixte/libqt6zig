const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPageSize = @import("libqt6").QPageSize;
const QPrinter = @import("libqt6").QPrinter;
const qprinter_enums = @import("libqprinter.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html)
pub const QPrinterInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPrinterInfo,

    pub const _is_QPrinterInfo = {};

    /// New constructs a new QPrinterInfo object.
    ///
    pub fn New() QPrinterInfo {
        return .{ .ptr = qtc.QPrinterInfo_new() };
    }

    /// New2 constructs a new QPrinterInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPrinterInfo `
    ///
    pub fn New2(other: anytype) QPrinterInfo {
        comptime _ = @TypeOf(other)._is_QPrinterInfo;
        return .{ .ptr = qtc.QPrinterInfo_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QPrinterInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` printer: QPrinter `
    ///
    pub fn New3(printer: anytype) QPrinterInfo {
        comptime _ = @TypeOf(printer)._is_QPrinter;
        return .{ .ptr = qtc.QPrinterInfo_new3(@ptrCast(printer.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ` other: QPrinterInfo `
    ///
    pub fn OperatorAssign(self: QPrinterInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPrinterInfo;
        qtc.QPrinterInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#printerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrinterName(self: QPrinterInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinterInfo_PrinterName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinterinfo.PrinterName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: QPrinterInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinterInfo_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinterinfo.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#location)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Location(self: QPrinterInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinterInfo_Location(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinterinfo.Location: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#makeAndModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MakeAndModel(self: QPrinterInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinterInfo_MakeAndModel(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinterinfo.MakeAndModel: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    pub fn IsNull(self: QPrinterInfo) bool {
        return qtc.QPrinterInfo_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    pub fn IsDefault(self: QPrinterInfo) bool {
        return qtc.QPrinterInfo_IsDefault(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#isRemote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    pub fn IsRemote(self: QPrinterInfo) bool {
        return qtc.QPrinterInfo_IsRemote(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.PrinterState `
    ///
    pub fn State(self: QPrinterInfo) i32 {
        return qtc.QPrinterInfo_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportedPageSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedPageSizes(self: QPrinterInfo, allocator: std.mem.Allocator) []QPageSize {
        const _arr: qtc.libqt_list = qtc.QPrinterInfo_SupportedPageSizes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPageSize, _arr.len) catch @panic("qprinterinfo.SupportedPageSizes: Memory allocation failed");
        const _data: [*]QtC.QPageSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    pub fn DefaultPageSize(self: QPrinterInfo) QPageSize {
        return .{ .ptr = qtc.QPrinterInfo_DefaultPageSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportsCustomPageSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    pub fn SupportsCustomPageSizes(self: QPrinterInfo) bool {
        return qtc.QPrinterInfo_SupportsCustomPageSizes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#minimumPhysicalPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    pub fn MinimumPhysicalPageSize(self: QPrinterInfo) QPageSize {
        return .{ .ptr = qtc.QPrinterInfo_MinimumPhysicalPageSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#maximumPhysicalPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    pub fn MaximumPhysicalPageSize(self: QPrinterInfo) QPageSize {
        return .{ .ptr = qtc.QPrinterInfo_MaximumPhysicalPageSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportedResolutions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedResolutions(self: QPrinterInfo, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QPrinterInfo_SupportedResolutions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qprinterinfo.SupportedResolutions: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultDuplexMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.DuplexMode `
    ///
    pub fn DefaultDuplexMode(self: QPrinterInfo) i32 {
        return qtc.QPrinterInfo_DefaultDuplexMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportedDuplexModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qprinter_enums.DuplexMode `
    ///
    pub fn SupportedDuplexModes(self: QPrinterInfo, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QPrinterInfo_SupportedDuplexModes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qprinterinfo.SupportedDuplexModes: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultColorMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.ColorMode `
    ///
    pub fn DefaultColorMode(self: QPrinterInfo) i32 {
        return qtc.QPrinterInfo_DefaultColorMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportedColorModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qprinter_enums.ColorMode `
    ///
    pub fn SupportedColorModes(self: QPrinterInfo, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QPrinterInfo_SupportedColorModes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qprinterinfo.SupportedColorModes: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#availablePrinterNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailablePrinterNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QPrinterInfo_AvailablePrinterNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qprinterinfo.AvailablePrinterNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qprinterinfo.AvailablePrinterNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#availablePrinters)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailablePrinters(allocator: std.mem.Allocator) []QPrinterInfo {
        const _arr: qtc.libqt_list = qtc.QPrinterInfo_AvailablePrinters();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPrinterInfo, _arr.len) catch @panic("qprinterinfo.AvailablePrinters: Memory allocation failed");
        const _data: [*]QtC.QPrinterInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPrinterName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultPrinterName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinterInfo_DefaultPrinterName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinterinfo.DefaultPrinterName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPrinter)
    ///
    pub fn DefaultPrinter() QPrinterInfo {
        return .{ .ptr = qtc.QPrinterInfo_DefaultPrinter() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#printerInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` printerName: []const u8 `
    ///
    pub fn PrinterInfo(printerName: []const u8) QPrinterInfo {
        const printerName_str = qtc.libqt_string{
            .len = printerName.len,
            .data = printerName.ptr,
        };
        return .{ .ptr = qtc.QPrinterInfo_PrinterInfo(printerName_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#dtor.QPrinterInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPrinterInfo `
    ///
    pub fn Delete(self: QPrinterInfo) void {
        qtc.QPrinterInfo_Delete(@ptrCast(self.ptr));
    }
};
