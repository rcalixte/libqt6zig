const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qprinter_enums = @import("libqprinter.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qprinterinfo.html
pub const qprinterinfo = struct {
    /// New constructs a new QPrinterInfo object.
    ///
    ///
    pub fn New() QtC.QPrinterInfo {
        return qtc.QPrinterInfo_new();
    }

    /// New2 constructs a new QPrinterInfo object.
    ///
    /// ``` other: QtC.QPrinterInfo ```
    pub fn New2(other: ?*anyopaque) QtC.QPrinterInfo {
        return qtc.QPrinterInfo_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPrinterInfo object.
    ///
    /// ``` printer: QtC.QPrinter ```
    pub fn New3(printer: ?*anyopaque) QtC.QPrinterInfo {
        return qtc.QPrinterInfo_new3(@ptrCast(printer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#operator=)
    ///
    /// ``` self: QtC.QPrinterInfo, other: QtC.QPrinterInfo ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPrinterInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#printerName)
    ///
    /// ``` self: QtC.QPrinterInfo, allocator: std.mem.Allocator ```
    pub fn PrinterName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinterInfo_PrinterName(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinterinfo.PrinterName: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#description)
    ///
    /// ``` self: QtC.QPrinterInfo, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinterInfo_Description(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinterinfo.Description: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#location)
    ///
    /// ``` self: QtC.QPrinterInfo, allocator: std.mem.Allocator ```
    pub fn Location(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinterInfo_Location(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinterinfo.Location: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#makeAndModel)
    ///
    /// ``` self: QtC.QPrinterInfo, allocator: std.mem.Allocator ```
    pub fn MakeAndModel(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinterInfo_MakeAndModel(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinterinfo.MakeAndModel: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#isNull)
    ///
    /// ``` self: QtC.QPrinterInfo ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QPrinterInfo_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#isDefault)
    ///
    /// ``` self: QtC.QPrinterInfo ```
    pub fn IsDefault(self: ?*anyopaque) bool {
        return qtc.QPrinterInfo_IsDefault(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#isRemote)
    ///
    /// ``` self: QtC.QPrinterInfo ```
    pub fn IsRemote(self: ?*anyopaque) bool {
        return qtc.QPrinterInfo_IsRemote(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#state)
    ///
    /// ``` self: QtC.QPrinterInfo ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QPrinterInfo_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#supportedPageSizes)
    ///
    /// ``` self: QtC.QPrinterInfo, allocator: std.mem.Allocator ```
    pub fn SupportedPageSizes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QPageSize {
        const _arr: qtc.struct_libqt_list = qtc.QPrinterInfo_SupportedPageSizes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPageSize, _arr.len) catch @panic("qprinterinfo.SupportedPageSizes: Memory allocation failed");
        const _data: [*]QtC.QPageSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPageSize)
    ///
    /// ``` self: QtC.QPrinterInfo ```
    pub fn DefaultPageSize(self: ?*anyopaque) QtC.QPageSize {
        return qtc.QPrinterInfo_DefaultPageSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#supportsCustomPageSizes)
    ///
    /// ``` self: QtC.QPrinterInfo ```
    pub fn SupportsCustomPageSizes(self: ?*anyopaque) bool {
        return qtc.QPrinterInfo_SupportsCustomPageSizes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#minimumPhysicalPageSize)
    ///
    /// ``` self: QtC.QPrinterInfo ```
    pub fn MinimumPhysicalPageSize(self: ?*anyopaque) QtC.QPageSize {
        return qtc.QPrinterInfo_MinimumPhysicalPageSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#maximumPhysicalPageSize)
    ///
    /// ``` self: QtC.QPrinterInfo ```
    pub fn MaximumPhysicalPageSize(self: ?*anyopaque) QtC.QPageSize {
        return qtc.QPrinterInfo_MaximumPhysicalPageSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#supportedResolutions)
    ///
    /// ``` self: QtC.QPrinterInfo, allocator: std.mem.Allocator ```
    pub fn SupportedResolutions(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.struct_libqt_list = qtc.QPrinterInfo_SupportedResolutions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qprinterinfo.SupportedResolutions: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#defaultDuplexMode)
    ///
    /// ``` self: QtC.QPrinterInfo ```
    pub fn DefaultDuplexMode(self: ?*anyopaque) i64 {
        return qtc.QPrinterInfo_DefaultDuplexMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#supportedDuplexModes)
    ///
    /// ``` self: QtC.QPrinterInfo, allocator: std.mem.Allocator ```
    pub fn SupportedDuplexModes(self: ?*anyopaque, allocator: std.mem.Allocator) []i64 {
        const _arr: qtc.struct_libqt_list = qtc.QPrinterInfo_SupportedDuplexModes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(qprinter_enums.DuplexMode, _arr.len) catch @panic("qprinterinfo.SupportedDuplexModes: Memory allocation failed");
        const _data: [*]qprinter_enums.DuplexMode = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#defaultColorMode)
    ///
    /// ``` self: QtC.QPrinterInfo ```
    pub fn DefaultColorMode(self: ?*anyopaque) i64 {
        return qtc.QPrinterInfo_DefaultColorMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#supportedColorModes)
    ///
    /// ``` self: QtC.QPrinterInfo, allocator: std.mem.Allocator ```
    pub fn SupportedColorModes(self: ?*anyopaque, allocator: std.mem.Allocator) []i64 {
        const _arr: qtc.struct_libqt_list = qtc.QPrinterInfo_SupportedColorModes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(qprinter_enums.ColorMode, _arr.len) catch @panic("qprinterinfo.SupportedColorModes: Memory allocation failed");
        const _data: [*]qprinter_enums.ColorMode = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#availablePrinterNames)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AvailablePrinterNames(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QPrinterInfo_AvailablePrinterNames();
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qprinterinfo.AvailablePrinterNames: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qprinterinfo.AvailablePrinterNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#availablePrinters)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AvailablePrinters(allocator: std.mem.Allocator) []QtC.QPrinterInfo {
        const _arr: qtc.struct_libqt_list = qtc.QPrinterInfo_AvailablePrinters();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPrinterInfo, _arr.len) catch @panic("qprinterinfo.AvailablePrinters: Memory allocation failed");
        const _data: [*]QtC.QPrinterInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPrinterName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn DefaultPrinterName(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinterInfo_DefaultPrinterName();
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinterinfo.DefaultPrinterName: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPrinter)
    ///
    ///
    pub fn DefaultPrinter() QtC.QPrinterInfo {
        return qtc.QPrinterInfo_DefaultPrinter();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#printerInfo)
    ///
    /// ``` printerName: []const u8 ```
    pub fn PrinterInfo(printerName: []const u8) QtC.QPrinterInfo {
        const printerName_str = qtc.struct_libqt_string{
            .len = printerName.len,
            .data = @constCast(printerName.ptr),
        };
        return qtc.QPrinterInfo_PrinterInfo(printerName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#dtor.QPrinterInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPrinterInfo ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPrinterInfo_Delete(@ptrCast(self));
    }
};
