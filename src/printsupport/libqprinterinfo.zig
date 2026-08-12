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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPrinterInfo object in C++ memory
    ///
    pub fn new() QPrinterInfo {
        return .{ .ptr = qtc.QPrinterInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPrinterInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPrinterInfo `
    ///
    pub fn new2(other: anytype) QPrinterInfo {
        comptime _ = @TypeOf(other)._is_QPrinterInfo;
        return .{ .ptr = qtc.QPrinterInfo_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPrinterInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` printer: QPrinter `
    ///
    pub fn new3(printer: anytype) QPrinterInfo {
        comptime _ = @TypeOf(printer)._is_QPrinter;
        return .{ .ptr = qtc.QPrinterInfo_new3(@ptrCast(printer.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ` other: QPrinterInfo `
    ///
    pub fn operatorAssign(self: QPrinterInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPrinterInfo;
        qtc.QPrinterInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `printerName` instead
    ///
    pub const PrinterName = printerName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#printerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn printerName(self: QPrinterInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinterInfo_PrinterName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPrinterInfo.printerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: QPrinterInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinterInfo_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPrinterInfo.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `location` instead
    ///
    pub const Location = location;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#location)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn location(self: QPrinterInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinterInfo_Location(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPrinterInfo.location: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `makeAndModel` instead
    ///
    pub const MakeAndModel = makeAndModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#makeAndModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn makeAndModel(self: QPrinterInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinterInfo_MakeAndModel(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPrinterInfo.makeAndModel: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    pub fn isNull(self: QPrinterInfo) bool {
        return qtc.QPrinterInfo_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDefault` instead
    ///
    pub const IsDefault = isDefault;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    pub fn isDefault(self: QPrinterInfo) bool {
        return qtc.QPrinterInfo_IsDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRemote` instead
    ///
    pub const IsRemote = isRemote;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#isRemote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    pub fn isRemote(self: QPrinterInfo) bool {
        return qtc.QPrinterInfo_IsRemote(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: QPrinterInfo) i32 {
        return qtc.QPrinterInfo_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedPageSizes` instead
    ///
    pub const SupportedPageSizes = supportedPageSizes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportedPageSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedPageSizes(self: QPrinterInfo, allocator: std.mem.Allocator) []QPageSize {
        const _arr: qtc.libqt_list = qtc.QPrinterInfo_SupportedPageSizes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPageSize, _arr.len) catch @panic("QPrinterInfo.supportedPageSizes: Memory allocation failed");
        const _data_val: [*]QtC.QPageSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `defaultPageSize` instead
    ///
    pub const DefaultPageSize = defaultPageSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    pub fn defaultPageSize(self: QPrinterInfo) QPageSize {
        return .{ .ptr = qtc.QPrinterInfo_DefaultPageSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `supportsCustomPageSizes` instead
    ///
    pub const SupportsCustomPageSizes = supportsCustomPageSizes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportsCustomPageSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    pub fn supportsCustomPageSizes(self: QPrinterInfo) bool {
        return qtc.QPrinterInfo_SupportsCustomPageSizes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumPhysicalPageSize` instead
    ///
    pub const MinimumPhysicalPageSize = minimumPhysicalPageSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#minimumPhysicalPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    pub fn minimumPhysicalPageSize(self: QPrinterInfo) QPageSize {
        return .{ .ptr = qtc.QPrinterInfo_MinimumPhysicalPageSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maximumPhysicalPageSize` instead
    ///
    pub const MaximumPhysicalPageSize = maximumPhysicalPageSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#maximumPhysicalPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    pub fn maximumPhysicalPageSize(self: QPrinterInfo) QPageSize {
        return .{ .ptr = qtc.QPrinterInfo_MaximumPhysicalPageSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `supportedResolutions` instead
    ///
    pub const SupportedResolutions = supportedResolutions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportedResolutions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinterInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedResolutions(self: QPrinterInfo, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QPrinterInfo_SupportedResolutions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QPrinterInfo.supportedResolutions: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `defaultDuplexMode` instead
    ///
    pub const DefaultDuplexMode = defaultDuplexMode;

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
    pub fn defaultDuplexMode(self: QPrinterInfo) i32 {
        return qtc.QPrinterInfo_DefaultDuplexMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedDuplexModes` instead
    ///
    pub const SupportedDuplexModes = supportedDuplexModes;

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
    pub fn supportedDuplexModes(self: QPrinterInfo, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QPrinterInfo_SupportedDuplexModes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QPrinterInfo.supportedDuplexModes: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `defaultColorMode` instead
    ///
    pub const DefaultColorMode = defaultColorMode;

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
    pub fn defaultColorMode(self: QPrinterInfo) i32 {
        return qtc.QPrinterInfo_DefaultColorMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedColorModes` instead
    ///
    pub const SupportedColorModes = supportedColorModes;

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
    pub fn supportedColorModes(self: QPrinterInfo, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QPrinterInfo_SupportedColorModes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QPrinterInfo.supportedColorModes: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `availablePrinterNames` instead
    ///
    pub const AvailablePrinterNames = availablePrinterNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#availablePrinterNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availablePrinterNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QPrinterInfo_AvailablePrinterNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QPrinterInfo.availablePrinterNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPrinterInfo.availablePrinterNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `availablePrinters` instead
    ///
    pub const AvailablePrinters = availablePrinters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#availablePrinters)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availablePrinters(allocator: std.mem.Allocator) []QPrinterInfo {
        const _arr: qtc.libqt_list = qtc.QPrinterInfo_AvailablePrinters();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPrinterInfo, _arr.len) catch @panic("QPrinterInfo.availablePrinters: Memory allocation failed");
        const _data_val: [*]QtC.QPrinterInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `defaultPrinterName` instead
    ///
    pub const DefaultPrinterName = defaultPrinterName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPrinterName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultPrinterName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinterInfo_DefaultPrinterName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPrinterInfo.defaultPrinterName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `defaultPrinter` instead
    ///
    pub const DefaultPrinter = defaultPrinter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPrinter)
    ///
    pub fn defaultPrinter() QPrinterInfo {
        return .{ .ptr = qtc.QPrinterInfo_DefaultPrinter() };
    }

    /// ### DEPRECATED: Use `printerInfo` instead
    ///
    pub const PrinterInfo = printerInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#printerInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` _printerName: []const u8 `
    ///
    pub fn printerInfo(_printerName: []const u8) QPrinterInfo {
        const printerName_str = qtc.libqt_string{
            .len = _printerName.len,
            .data = _printerName.ptr,
        };
        return .{ .ptr = qtc.QPrinterInfo_PrinterInfo(printerName_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#dtor.QPrinterInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPrinterInfo `
    ///
    pub fn delete(self: QPrinterInfo) void {
        qtc.QPrinterInfo_Delete(@ptrCast(self.ptr));
    }
};
