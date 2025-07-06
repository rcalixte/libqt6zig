const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qfiledevice_enums = @import("libqfiledevice.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsavefile.html
pub const qsavefile = struct {
    /// New constructs a new QSaveFile object.
    ///
    /// ``` name: []const u8 ```
    pub fn New(name: []const u8) QtC.QSaveFile {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QSaveFile_new(name_str);
    }

    /// New2 constructs a new QSaveFile object.
    ///
    ///
    pub fn New2() QtC.QSaveFile {
        return qtc.QSaveFile_new2();
    }

    /// New3 constructs a new QSaveFile object.
    ///
    /// ``` name: []const u8, parent: QtC.QObject ```
    pub fn New3(name: []const u8, parent: ?*anyopaque) QtC.QSaveFile {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QSaveFile_new3(name_str, @ptrCast(parent));
    }

    /// New4 constructs a new QSaveFile object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New4(parent: ?*anyopaque) QtC.QSaveFile {
        return qtc.QSaveFile_new4(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QSaveFile_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QSaveFile, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSaveFile_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QSaveFile, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSaveFile_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSaveFile_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QSaveFile, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSaveFile_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QSaveFile_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsavefile.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#fileName)
    ///
    /// ``` self: QtC.QSaveFile, allocator: std.mem.Allocator ```
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSaveFile_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsavefile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#fileName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn () callconv(.c) []const u8 ```
    pub fn OnFileName(self: ?*anyopaque, slot: fn () callconv(.c) []const u8) void {
        qtc.QSaveFile_OnFileName(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#fileName)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSaveFile, allocator: std.mem.Allocator ```
    pub fn QBaseFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSaveFile_QBaseFileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsavefile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#setFileName)
    ///
    /// ``` self: QtC.QSaveFile, name: []const u8 ```
    pub fn SetFileName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSaveFile_SetFileName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#open)
    ///
    /// ``` self: QtC.QSaveFile, flags: i32 ```
    pub fn Open(self: ?*anyopaque, flags: i64) bool {
        return qtc.QSaveFile_Open(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, flags: i32) callconv(.c) bool ```
    pub fn OnOpen(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QSaveFile_OnOpen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#open)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSaveFile, flags: i32 ```
    pub fn QBaseOpen(self: ?*anyopaque, flags: i64) bool {
        return qtc.QSaveFile_QBaseOpen(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#commit)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn Commit(self: ?*anyopaque) bool {
        return qtc.QSaveFile_Commit(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#cancelWriting)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn CancelWriting(self: ?*anyopaque) void {
        qtc.QSaveFile_CancelWriting(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#setDirectWriteFallback)
    ///
    /// ``` self: QtC.QSaveFile, enabled: bool ```
    pub fn SetDirectWriteFallback(self: ?*anyopaque, enabled: bool) void {
        qtc.QSaveFile_SetDirectWriteFallback(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#directWriteFallback)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn DirectWriteFallback(self: ?*anyopaque) bool {
        return qtc.QSaveFile_DirectWriteFallback(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#writeData)
    ///
    /// ``` self: QtC.QSaveFile, data: []const u8, lenVal: i64 ```
    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSaveFile_WriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#writeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, data: []const u8, lenVal: i64) callconv(.c) i64 ```
    pub fn OnWriteData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        qtc.QSaveFile_OnWriteData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#writeData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSaveFile, data: []const u8, lenVal: i64 ```
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSaveFile_QBaseWriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSaveFile_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsavefile.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSaveFile_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsavefile.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#error)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn Error(self: ?*anyopaque) i64 {
        return qtc.QFileDevice_Error(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn UnsetError(self: ?*anyopaque) void {
        qtc.QFileDevice_UnsetError(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn Close(self: ?*anyopaque) void {
        qtc.QFileDevice_Close(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#handle)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn Handle(self: ?*anyopaque) i32 {
        return qtc.QFileDevice_Handle(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#flush)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn Flush(self: ?*anyopaque) bool {
        return qtc.QFileDevice_Flush(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
    ///
    /// ``` self: QtC.QSaveFile, offset: i64, size: i64 ```
    pub fn Map(self: ?*anyopaque, offset: i64, size: i64) ?*u8 {
        return @ptrCast(qtc.QFileDevice_Map(@ptrCast(self), @intCast(offset), @intCast(size)));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
    ///
    /// ``` self: QtC.QSaveFile, address: ?*u8 ```
    pub fn Unmap(self: ?*anyopaque, address: ?*anyopaque) bool {
        return qtc.QFileDevice_Unmap(@ptrCast(self), @intCast(address));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
    ///
    /// ``` self: QtC.QSaveFile, time: qfiledevice_enums.FileTime ```
    pub fn FileTime(self: ?*anyopaque, time: i64) QtC.QDateTime {
        return qtc.QFileDevice_FileTime(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
    ///
    /// ``` self: QtC.QSaveFile, newDate: QtC.QDateTime, fileTime: qfiledevice_enums.FileTime ```
    pub fn SetFileTime(self: ?*anyopaque, newDate: ?*anyopaque, fileTime: i64) bool {
        return qtc.QFileDevice_SetFileTime(@ptrCast(self), @ptrCast(newDate), @intCast(fileTime));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
    ///
    /// ``` self: QtC.QSaveFile, offset: i64, size: i64, flags: i32 ```
    pub fn Map3(self: ?*anyopaque, offset: i64, size: i64, flags: i64) ?*u8 {
        return @ptrCast(qtc.QFileDevice_Map3(@ptrCast(self), @intCast(offset), @intCast(size), @intCast(flags)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn OpenMode(self: ?*anyopaque) i64 {
        return qtc.QIODevice_OpenMode(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ``` self: QtC.QSaveFile, enabled: bool ```
    pub fn SetTextModeEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn IsTextModeEnabled(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn IsOpen(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn ReadChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn WriteChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn CurrentReadChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ``` self: QtC.QSaveFile, channel: i32 ```
    pub fn SetCurrentReadChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn CurrentWriteChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ``` self: QtC.QSaveFile, channel: i32 ```
    pub fn SetCurrentWriteChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: QtC.QSaveFile, data: []const u8, maxlen: i64 ```
    pub fn Read(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: QtC.QSaveFile, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn ReadWithMaxlen(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QIODevice_ReadWithMaxlen(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsavefile.ReadWithMaxlen: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ``` self: QtC.QSaveFile, allocator: std.mem.Allocator ```
    pub fn ReadAll(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsavefile.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: QtC.QSaveFile, data: []const u8, maxlen: i64 ```
    pub fn ReadLine(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: QtC.QSaveFile, allocator: std.mem.Allocator ```
    pub fn ReadLine2(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsavefile.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn StartTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn CommitTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn RollbackTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn IsTransactionStarted(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: QtC.QSaveFile, data: []const u8, lenVal: i64 ```
    pub fn Write(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: QtC.QSaveFile, data: []const u8 ```
    pub fn WriteWithData(self: ?*anyopaque, data: []const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_WriteWithData(@ptrCast(self), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: QtC.QSaveFile, data: []u8 ```
    pub fn Write2(self: ?*anyopaque, data: []u8) i64 {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write2(@ptrCast(self), data_str);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ``` self: QtC.QSaveFile, data: []const u8, maxlen: i64 ```
    pub fn Peek(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ``` self: QtC.QSaveFile, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn PeekWithMaxlen(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QIODevice_PeekWithMaxlen(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsavefile.PeekWithMaxlen: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ``` self: QtC.QSaveFile, maxSize: i64 ```
    pub fn Skip(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ``` self: QtC.QSaveFile, c: i8 ```
    pub fn UngetChar(self: ?*anyopaque, c: i8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ``` self: QtC.QSaveFile, c: i8 ```
    pub fn PutChar(self: ?*anyopaque, c: i8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ``` self: QtC.QSaveFile, c: []const u8 ```
    pub fn GetChar(self: ?*anyopaque, c: []const u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ``` self: QtC.QSaveFile, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIODevice_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsavefile.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn ReadyRead(self: ?*anyopaque) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ``` self: QtC.QIODevice, slot: fn (self: QtC.QIODevice) callconv(.c) void ```
    pub fn OnReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ``` self: QtC.QSaveFile, channel: i32 ```
    pub fn ChannelReadyRead(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ``` self: QtC.QIODevice, slot: fn (self: QtC.QIODevice, channel: i32) callconv(.c) void ```
    pub fn OnChannelReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ``` self: QtC.QSaveFile, bytes: i64 ```
    pub fn BytesWritten(self: ?*anyopaque, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self), @intCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ``` self: QtC.QIODevice, slot: fn (self: QtC.QIODevice, bytes: i64) callconv(.c) void ```
    pub fn OnBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ``` self: QtC.QSaveFile, channel: i32, bytes: i64 ```
    pub fn ChannelBytesWritten(self: ?*anyopaque, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self), @intCast(channel), @intCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ``` self: QtC.QIODevice, slot: fn (self: QtC.QIODevice, channel: i32, bytes: i64) callconv(.c) void ```
    pub fn OnChannelBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn AboutToClose(self: ?*anyopaque) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ``` self: QtC.QIODevice, slot: fn (self: QtC.QIODevice) callconv(.c) void ```
    pub fn OnAboutToClose(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn ReadChannelFinished(self: ?*anyopaque) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ``` self: QtC.QIODevice, slot: fn (self: QtC.QIODevice) callconv(.c) void ```
    pub fn OnReadChannelFinished(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: QtC.QSaveFile, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn ReadLine1(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsavefile.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QSaveFile, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsavefile.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QSaveFile, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QSaveFile, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSaveFile, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSaveFile, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSaveFile, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSaveFile, id: qnamespace_enums.TimerId ```
    pub fn KillTimerWithId(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimerWithId(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QSaveFile, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qsavefile.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QSaveFile, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QSaveFile, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QSaveFile, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QSaveFile, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QSaveFile, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QSaveFile, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QSaveFile, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsavefile.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsavefile.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QSaveFile, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSaveFile, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSaveFile, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QSaveFile, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSaveFile, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn IsSequential(self: ?*anyopaque) bool {
        return qtc.QSaveFile_IsSequential(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn QBaseIsSequential(self: ?*anyopaque) bool {
        return qtc.QSaveFile_QBaseIsSequential(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn () callconv(.c) bool ```
    pub fn OnIsSequential(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QSaveFile_OnIsSequential(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn Pos(self: ?*anyopaque) i64 {
        return qtc.QSaveFile_Pos(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn QBasePos(self: ?*anyopaque) i64 {
        return qtc.QSaveFile_QBasePos(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn () callconv(.c) i64 ```
    pub fn OnPos(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QSaveFile_OnPos(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, offset: i64 ```
    pub fn Seek(self: ?*anyopaque, offset: i64) bool {
        return qtc.QSaveFile_Seek(@ptrCast(self), @intCast(offset));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, offset: i64 ```
    pub fn QBaseSeek(self: ?*anyopaque, offset: i64) bool {
        return qtc.QSaveFile_QBaseSeek(@ptrCast(self), @intCast(offset));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, offset: i64) callconv(.c) bool ```
    pub fn OnSeek(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QSaveFile_OnSeek(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.QSaveFile_AtEnd(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn QBaseAtEnd(self: ?*anyopaque) bool {
        return qtc.QSaveFile_QBaseAtEnd(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn () callconv(.c) bool ```
    pub fn OnAtEnd(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QSaveFile_OnAtEnd(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QSaveFile_Size(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#size)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn QBaseSize(self: ?*anyopaque) i64 {
        return qtc.QSaveFile_QBaseSize(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn () callconv(.c) i64 ```
    pub fn OnSize(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QSaveFile_OnSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#resize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, sz: i64 ```
    pub fn Resize(self: ?*anyopaque, sz: i64) bool {
        return qtc.QSaveFile_Resize(@ptrCast(self), @intCast(sz));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#resize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, sz: i64 ```
    pub fn QBaseResize(self: ?*anyopaque, sz: i64) bool {
        return qtc.QSaveFile_QBaseResize(@ptrCast(self), @intCast(sz));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#resize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, sz: i64) callconv(.c) bool ```
    pub fn OnResize(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QSaveFile_OnResize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#permissions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn Permissions(self: ?*anyopaque) i64 {
        return qtc.QSaveFile_Permissions(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#permissions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn QBasePermissions(self: ?*anyopaque) i64 {
        return qtc.QSaveFile_QBasePermissions(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#permissions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn () callconv(.c) i64 ```
    pub fn OnPermissions(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QSaveFile_OnPermissions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setPermissions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, permissionSpec: i32 ```
    pub fn SetPermissions(self: ?*anyopaque, permissionSpec: i64) bool {
        return qtc.QSaveFile_SetPermissions(@ptrCast(self), @intCast(permissionSpec));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setPermissions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, permissionSpec: i32 ```
    pub fn QBaseSetPermissions(self: ?*anyopaque, permissionSpec: i64) bool {
        return qtc.QSaveFile_QBaseSetPermissions(@ptrCast(self), @intCast(permissionSpec));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setPermissions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, permissionSpec: i32) callconv(.c) bool ```
    pub fn OnSetPermissions(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QSaveFile_OnSetPermissions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, data: []const u8, maxlen: i64 ```
    pub fn ReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSaveFile_ReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSaveFile_QBaseReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, data: []const u8, maxlen: i64) callconv(.c) i64 ```
    pub fn OnReadData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        qtc.QSaveFile_OnReadData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, data: []const u8, maxlen: i64 ```
    pub fn ReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSaveFile_ReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSaveFile_QBaseReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, data: []const u8, maxlen: i64) callconv(.c) i64 ```
    pub fn OnReadLineData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        qtc.QSaveFile_OnReadLineData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn Reset(self: ?*anyopaque) bool {
        return qtc.QSaveFile_Reset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn QBaseReset(self: ?*anyopaque) bool {
        return qtc.QSaveFile_QBaseReset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn () callconv(.c) bool ```
    pub fn OnReset(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QSaveFile_OnReset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn BytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QSaveFile_BytesAvailable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn QBaseBytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QSaveFile_QBaseBytesAvailable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn () callconv(.c) i64 ```
    pub fn OnBytesAvailable(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QSaveFile_OnBytesAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn BytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QSaveFile_BytesToWrite(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn QBaseBytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QSaveFile_QBaseBytesToWrite(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn () callconv(.c) i64 ```
    pub fn OnBytesToWrite(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QSaveFile_OnBytesToWrite(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn CanReadLine(self: ?*anyopaque) bool {
        return qtc.QSaveFile_CanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn QBaseCanReadLine(self: ?*anyopaque) bool {
        return qtc.QSaveFile_QBaseCanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn () callconv(.c) bool ```
    pub fn OnCanReadLine(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QSaveFile_OnCanReadLine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, msecs: i32 ```
    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSaveFile_WaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, msecs: i32 ```
    pub fn QBaseWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSaveFile_QBaseWaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, msecs: i32) callconv(.c) bool ```
    pub fn OnWaitForReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSaveFile_OnWaitForReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, msecs: i32 ```
    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSaveFile_WaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, msecs: i32 ```
    pub fn QBaseWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSaveFile_QBaseWaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, msecs: i32) callconv(.c) bool ```
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSaveFile_OnWaitForBytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, maxSize: i64 ```
    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QSaveFile_SkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, maxSize: i64 ```
    pub fn QBaseSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QSaveFile_QBaseSkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, maxSize: i64) callconv(.c) i64 ```
    pub fn OnSkipData(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i64) void {
        qtc.QSaveFile_OnSkipData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSaveFile_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSaveFile_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSaveFile_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSaveFile_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSaveFile_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSaveFile_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSaveFile_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSaveFile_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSaveFile_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSaveFile_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSaveFile_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSaveFile_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSaveFile_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSaveFile_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSaveFile_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSaveFile_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSaveFile_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSaveFile_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSaveFile_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSaveFile_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSaveFile_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, openMode: i32 ```
    pub fn SetOpenMode(self: ?*anyopaque, openMode: i64) void {
        qtc.QSaveFile_SetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, openMode: i32 ```
    pub fn QBaseSetOpenMode(self: ?*anyopaque, openMode: i64) void {
        qtc.QSaveFile_QBaseSetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, openMode: i32) callconv(.c) void ```
    pub fn OnSetOpenMode(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QSaveFile_OnSetOpenMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, errorString: []const u8 ```
    pub fn SetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.struct_libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QSaveFile_SetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, errorString: []const u8 ```
    pub fn QBaseSetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.struct_libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QSaveFile_QBaseSetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, errorString: []const u8) callconv(.c) void ```
    pub fn OnSetErrorString(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QSaveFile_OnSetErrorString(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSaveFile_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSaveFile_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QSaveFile_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSaveFile_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSaveFile_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QSaveFile_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSaveFile_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSaveFile_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QSaveFile_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSaveFile_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSaveFile_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QSaveFile, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSaveFile_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSaveFile, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#dtor.QSaveFile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSaveFile ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSaveFile_Delete(@ptrCast(self));
    }
};
