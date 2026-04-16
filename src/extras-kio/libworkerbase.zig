const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfigGroup = @import("libqt6").KConfigGroup;
const KIO__AuthInfo = @import("libqt6").KIO__AuthInfo;
const KIO__MetaData = @import("libqt6").KIO__MetaData;
const KIO__UDSEntry = @import("libqt6").KIO__UDSEntry;
const KRemoteEncoding = @import("libqt6").KRemoteEncoding;
const QDateTime = @import("libqt6").QDateTime;
const QHostInfo = @import("libqt6").QHostInfo;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const global_enums = @import("libglobal.zig").enums;
const job_base_enums = @import("libjob_base.zig").enums;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const std = @import("std");
const workerbase_enums = enums;
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://api.kde.org/kio-workerresult.html)
pub const KIO__WorkerResult = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__WorkerResult,

    pub const _is_KIO__WorkerResult = {};

    /// New constructs a new KIO::WorkerResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KIO__WorkerResult `
    ///
    pub fn New(param1: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(param1)._is_KIO__WorkerResult;
        return .{ .ptr = qtc.KIO__WorkerResult_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerResult `
    ///
    /// ` param1: KIO__WorkerResult `
    ///
    pub fn OperatorAssign(self: KIO__WorkerResult, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KIO__WorkerResult;
        qtc.KIO__WorkerResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html#success)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerResult `
    ///
    pub fn Success(self: KIO__WorkerResult) bool {
        return qtc.KIO__WorkerResult_Success(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerResult `
    ///
    pub fn Error(self: KIO__WorkerResult) i32 {
        return qtc.KIO__WorkerResult_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: KIO__WorkerResult, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__WorkerResult_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__workerresult.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html#fail)
    ///
    pub fn Fail() KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerResult_Fail() };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html#pass)
    ///
    pub fn Pass() KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerResult_Pass() };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html#fail)
    ///
    /// ## Parameter(s):
    ///
    /// ` _error: i32 `
    ///
    pub fn Fail1(_error: i32) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerResult_Fail1(@bitCast(_error)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html#fail)
    ///
    /// ## Parameter(s):
    ///
    /// ` _error: i32 `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn Fail2(_error: i32, _errorString: []const u8) KIO__WorkerResult {
        const _errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        return .{ .ptr = qtc.KIO__WorkerResult_Fail2(@bitCast(_error), _errorString_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__WorkerResult `
    ///
    pub fn Delete(self: KIO__WorkerResult) void {
        qtc.KIO__WorkerResult_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-workerbase.html)
pub const KIO__WorkerBase = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__WorkerBase,

    pub const _is_KIO__WorkerBase = {};

    /// New constructs a new KIO::WorkerBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []u8 `
    ///
    /// ` poolSocket: []u8 `
    ///
    /// ` appSocket: []u8 `
    ///
    pub fn New(protocol: []u8, poolSocket: []u8, appSocket: []u8) KIO__WorkerBase {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        const poolSocket_str = qtc.libqt_string{
            .len = poolSocket.len,
            .data = poolSocket.ptr,
        };
        const appSocket_str = qtc.libqt_string{
            .len = appSocket.len,
            .data = appSocket.ptr,
        };
        return .{ .ptr = qtc.KIO__WorkerBase_new(protocol_str, poolSocket_str, appSocket_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#exit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn Exit(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_Exit(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#dispatchLoop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn DispatchLoop(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_DispatchLoop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` data: []u8 `
    ///
    pub fn Data(self: KIO__WorkerBase, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KIO__WorkerBase_Data(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#dataReq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn DataReq(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_DataReq(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#workerStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` host: []const u8 `
    ///
    /// ` connected: bool `
    ///
    pub fn WorkerStatus(self: KIO__WorkerBase, host: []const u8, connected: bool) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.KIO__WorkerBase_WorkerStatus(@ptrCast(self.ptr), host_str, connected);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#statEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _entry: KIO__UDSEntry `
    ///
    pub fn StatEntry(self: KIO__WorkerBase, _entry: anytype) void {
        comptime _ = @TypeOf(_entry)._is_KIO__UDSEntry;
        qtc.KIO__WorkerBase_StatEntry(@ptrCast(self.ptr), @ptrCast(_entry.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#listEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _entry: []KIO__UDSEntry `
    ///
    pub fn ListEntries(self: KIO__WorkerBase, _entry: []KIO__UDSEntry) void {
        const _entry_list = qtc.libqt_list{
            .len = _entry.len,
            .data = @ptrCast(_entry.ptr),
        };
        qtc.KIO__WorkerBase_ListEntries(@ptrCast(self.ptr), _entry_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#canResume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` offset: usize `
    ///
    pub fn CanResume(self: KIO__WorkerBase, offset: usize) bool {
        return qtc.KIO__WorkerBase_CanResume(@ptrCast(self.ptr), @bitCast(offset));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#canResume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn CanResume2(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_CanResume2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _bytes: usize `
    ///
    pub fn TotalSize(self: KIO__WorkerBase, _bytes: usize) void {
        qtc.KIO__WorkerBase_TotalSize(@ptrCast(self.ptr), @bitCast(_bytes));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#processedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _bytes: usize `
    ///
    pub fn ProcessedSize(self: KIO__WorkerBase, _bytes: usize) void {
        qtc.KIO__WorkerBase_ProcessedSize(@ptrCast(self.ptr), @bitCast(_bytes));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _pos: usize `
    ///
    pub fn Position(self: KIO__WorkerBase, _pos: usize) void {
        qtc.KIO__WorkerBase_Position(@ptrCast(self.ptr), @bitCast(_pos));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#written)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _bytes: usize `
    ///
    pub fn Written(self: KIO__WorkerBase, _bytes: usize) void {
        qtc.KIO__WorkerBase_Written(@ptrCast(self.ptr), @bitCast(_bytes));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#truncated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _length: usize `
    ///
    pub fn Truncated(self: KIO__WorkerBase, _length: usize) void {
        qtc.KIO__WorkerBase_Truncated(@ptrCast(self.ptr), @bitCast(_length));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _bytes_per_second: usize `
    ///
    pub fn Speed(self: KIO__WorkerBase, _bytes_per_second: usize) void {
        qtc.KIO__WorkerBase_Speed(@ptrCast(self.ptr), @bitCast(_bytes_per_second));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#redirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _url: QUrl `
    ///
    pub fn Redirection(self: KIO__WorkerBase, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KIO__WorkerBase_Redirection(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#errorPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn ErrorPage(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_ErrorPage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _type: []const u8 `
    ///
    pub fn MimeType(self: KIO__WorkerBase, _type: []const u8) void {
        const _type_str = qtc.libqt_string{
            .len = _type.len,
            .data = _type.ptr,
        };
        qtc.KIO__WorkerBase_MimeType(@ptrCast(self.ptr), _type_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn Warning(self: KIO__WorkerBase, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KIO__WorkerBase_Warning(@ptrCast(self.ptr), msg_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn InfoMessage(self: KIO__WorkerBase, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KIO__WorkerBase_InfoMessage(@ptrCast(self.ptr), msg_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` text: []const u8 `
    ///
    pub fn MessageBox(self: KIO__WorkerBase, typeVal: i32, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox(@ptrCast(self.ptr), @bitCast(typeVal), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    pub fn MessageBox2(self: KIO__WorkerBase, text: []const u8, typeVal: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox2(@ptrCast(self.ptr), text_str, @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#sslError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sslData: ArrayMap_constu8_QVariant `
    ///
    pub fn SslError(self: KIO__WorkerBase, allocator: std.mem.Allocator, sslData: ArrayMap_constu8_QVariant) i32 {
        const sslData_count = sslData.count();
        const sslData_keys = allocator.alloc(qtc.libqt_string, sslData_count) catch @panic("kio__workerbase.SslError: Memory allocation failed");
        defer allocator.free(sslData_keys);
        const sslData_values = allocator.alloc(QtC.QVariant, sslData_count) catch @panic("kio__workerbase.SslError: Memory allocation failed");
        defer allocator.free(sslData_values);
        var i: usize = 0;
        var sslData_it = sslData.iterator();
        while (sslData_it.next()) |it_entry| : (i += 1) {
            const sslData_key = it_entry.key_ptr.*;
            sslData_keys[i] = qtc.libqt_string{
                .len = sslData_key.len,
                .data = sslData_key.ptr,
            };
            sslData_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const sslData_map = qtc.libqt_map{
            .len = sslData_count,
            .keys = @ptrCast(sslData_keys.ptr),
            .values = @ptrCast(sslData_values.ptr),
        };
        return qtc.KIO__WorkerBase_SslError(@ptrCast(self.ptr), sslData_map);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetMetaData(self: KIO__WorkerBase, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KIO__WorkerBase_SetMetaData(@ptrCast(self.ptr), key_str, value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#hasMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` key: []const u8 `
    ///
    pub fn HasMetaData(self: KIO__WorkerBase, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_HasMetaData(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn MetaData(self: KIO__WorkerBase, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KIO__WorkerBase_MetaData(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__workerbase.MetaData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#allMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn AllMetaData(self: KIO__WorkerBase) KIO__MetaData {
        return .{ .ptr = qtc.KIO__WorkerBase_AllMetaData(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#mapConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MapConfig(self: KIO__WorkerBase, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.KIO__WorkerBase_MapConfig(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("kio__workerbase.MapConfig: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("kio__workerbase.MapConfig: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn ConfigValue(self: KIO__WorkerBase, key: []const u8, defaultValue: bool) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_ConfigValue(@ptrCast(self.ptr), key_str, defaultValue);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn ConfigValue2(self: KIO__WorkerBase, key: []const u8, defaultValue: i32) i32 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_ConfigValue2(@ptrCast(self.ptr), key_str, @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ConfigValue3(self: KIO__WorkerBase, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KIO__WorkerBase_ConfigValue3(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__workerbase.ConfigValue3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn Config(self: KIO__WorkerBase) KConfigGroup {
        return .{ .ptr = qtc.KIO__WorkerBase_Config(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#remoteEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn RemoteEncoding(self: KIO__WorkerBase) KRemoteEncoding {
        return .{ .ptr = qtc.KIO__WorkerBase_RemoteEncoding(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn AppConnectionMade(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_AppConnectionMade(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAppConnectionMade(self: KIO__WorkerBase, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__WorkerBase_OnAppConnectionMade(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAppConnectionMade` instead
    ///
    pub const QBaseAppConnectionMade = SuperAppConnectionMade;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn SuperAppConnectionMade(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_SuperAppConnectionMade(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` host: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` pass: []const u8 `
    ///
    pub fn SetHost(self: KIO__WorkerBase, host: []const u8, port: u16, user: []const u8, pass: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const pass_str = qtc.libqt_string{
            .len = pass.len,
            .data = pass.ptr,
        };
        qtc.KIO__WorkerBase_SetHost(@ptrCast(self.ptr), host_str, @bitCast(port), user_str, pass_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setHost)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, host: [*:0]const u8, port: u16, user: [*:0]const u8, pass: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetHost(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, [*:0]const u8, u16, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__WorkerBase_OnSetHost(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetHost` instead
    ///
    pub const QBaseSetHost = SuperSetHost;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setHost)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` host: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` pass: []const u8 `
    ///
    pub fn SuperSetHost(self: KIO__WorkerBase, host: []const u8, port: u16, user: []const u8, pass: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const pass_str = qtc.libqt_string{
            .len = pass.len,
            .data = pass.ptr,
        };
        qtc.KIO__WorkerBase_SuperSetHost(@ptrCast(self.ptr), host_str, @bitCast(port), user_str, pass_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn OpenConnection(self: KIO__WorkerBase) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_OpenConnection(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn () callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnOpenConnection(self: KIO__WorkerBase, callback: *const fn () callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnOpenConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOpenConnection` instead
    ///
    pub const QBaseOpenConnection = SuperOpenConnection;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn SuperOpenConnection(self: KIO__WorkerBase) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_SuperOpenConnection(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn CloseConnection(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_CloseConnection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCloseConnection(self: KIO__WorkerBase, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__WorkerBase_OnCloseConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCloseConnection` instead
    ///
    pub const QBaseCloseConnection = SuperCloseConnection;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn SuperCloseConnection(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_SuperCloseConnection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn Get(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Get(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#get)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, url: QUrl) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnGet(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnGet(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGet` instead
    ///
    pub const QBaseGet = SuperGet;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#get)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn SuperGet(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperGet(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: KIO__WorkerBase, url: anytype, mode: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Open(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, url: QUrl, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnOpen(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOpen` instead
    ///
    pub const QBaseOpen = SuperOpen;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#open)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperOpen(self: KIO__WorkerBase, url: anytype, mode: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperOpen(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` size: usize `
    ///
    pub fn Read(self: KIO__WorkerBase, size: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_Read(@ptrCast(self.ptr), @bitCast(size)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, size: usize) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnRead(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, usize) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRead` instead
    ///
    pub const QBaseRead = SuperRead;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#read)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` size: usize `
    ///
    pub fn SuperRead(self: KIO__WorkerBase, size: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_SuperRead(@ptrCast(self.ptr), @bitCast(size)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` data: []u8 `
    ///
    pub fn Write(self: KIO__WorkerBase, data: []u8) KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.KIO__WorkerBase_Write(@ptrCast(self.ptr), data_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, data: qtc.libqt_string) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnWrite(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, qtc.libqt_string) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWrite` instead
    ///
    pub const QBaseWrite = SuperWrite;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` data: []u8 `
    ///
    pub fn SuperWrite(self: KIO__WorkerBase, data: []u8) KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.KIO__WorkerBase_SuperWrite(@ptrCast(self.ptr), data_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#seek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` offset: usize `
    ///
    pub fn Seek(self: KIO__WorkerBase, offset: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_Seek(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#seek)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, offset: usize) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnSeek(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, usize) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSeek` instead
    ///
    pub const QBaseSeek = SuperSeek;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#seek)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` offset: usize `
    ///
    pub fn SuperSeek(self: KIO__WorkerBase, offset: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_SuperSeek(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#truncate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` size: usize `
    ///
    pub fn Truncate(self: KIO__WorkerBase, size: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_Truncate(@ptrCast(self.ptr), @bitCast(size)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#truncate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, size: usize) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnTruncate(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, usize) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnTruncate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTruncate` instead
    ///
    pub const QBaseTruncate = SuperTruncate;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#truncate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` size: usize `
    ///
    pub fn SuperTruncate(self: KIO__WorkerBase, size: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_SuperTruncate(@ptrCast(self.ptr), @bitCast(size)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn Close(self: KIO__WorkerBase) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_Close(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn () callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnClose(self: KIO__WorkerBase, callback: *const fn () callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClose` instead
    ///
    pub const QBaseClose = SuperClose;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn SuperClose(self: KIO__WorkerBase) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_SuperClose(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` permissions: i32 `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn Put(self: KIO__WorkerBase, url: anytype, permissions: i32, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Put(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#put)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, url: QUrl, permissions: i32, flags: flag of job_base_enums.JobFlag) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnPut(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, i32, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnPut(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPut` instead
    ///
    pub const QBasePut = SuperPut;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#put)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` permissions: i32 `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn SuperPut(self: KIO__WorkerBase, url: anytype, permissions: i32, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperPut(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#stat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn Stat(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Stat(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#stat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, url: QUrl) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnStat(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnStat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStat` instead
    ///
    pub const QBaseStat = SuperStat;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#stat)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn SuperStat(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperStat(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#mimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn Mimetype(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Mimetype(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#mimetype)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, url: QUrl) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnMimetype(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnMimetype(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMimetype` instead
    ///
    pub const QBaseMimetype = SuperMimetype;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#mimetype)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn SuperMimetype(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperMimetype(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#listDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn ListDir(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_ListDir(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#listDir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, url: QUrl) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnListDir(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnListDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperListDir` instead
    ///
    pub const QBaseListDir = SuperListDir;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#listDir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn SuperListDir(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperListDir(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#mkdir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` permissions: i32 `
    ///
    pub fn Mkdir(self: KIO__WorkerBase, url: anytype, permissions: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Mkdir(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#mkdir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, url: QUrl, permissions: i32) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnMkdir(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnMkdir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMkdir` instead
    ///
    pub const QBaseMkdir = SuperMkdir;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#mkdir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` permissions: i32 `
    ///
    pub fn SuperMkdir(self: KIO__WorkerBase, url: anytype, permissions: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperMkdir(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#rename)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` src: QUrl `
    ///
    /// ` dest: QUrl `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn Rename(self: KIO__WorkerBase, src: anytype, dest: anytype, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Rename(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#rename)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, src: QUrl, dest: QUrl, flags: flag of job_base_enums.JobFlag) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnRename(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnRename(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRename` instead
    ///
    pub const QBaseRename = SuperRename;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#rename)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` src: QUrl `
    ///
    /// ` dest: QUrl `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn SuperRename(self: KIO__WorkerBase, src: anytype, dest: anytype, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperRename(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#symlink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` target: []const u8 `
    ///
    /// ` dest: QUrl `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn Symlink(self: KIO__WorkerBase, target: []const u8, dest: anytype, flags: i32) KIO__WorkerResult {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Symlink(@ptrCast(self.ptr), target_str, @ptrCast(dest.ptr), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#symlink)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, target: [*:0]const u8, dest: QUrl, flags: flag of job_base_enums.JobFlag) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnSymlink(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, [*:0]const u8, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnSymlink(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSymlink` instead
    ///
    pub const QBaseSymlink = SuperSymlink;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#symlink)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` target: []const u8 `
    ///
    /// ` dest: QUrl `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn SuperSymlink(self: KIO__WorkerBase, target: []const u8, dest: anytype, flags: i32) KIO__WorkerResult {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperSymlink(@ptrCast(self.ptr), target_str, @ptrCast(dest.ptr), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#chmod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` permissions: i32 `
    ///
    pub fn Chmod(self: KIO__WorkerBase, url: anytype, permissions: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Chmod(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#chmod)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, url: QUrl, permissions: i32) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnChmod(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnChmod(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChmod` instead
    ///
    pub const QBaseChmod = SuperChmod;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#chmod)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` permissions: i32 `
    ///
    pub fn SuperChmod(self: KIO__WorkerBase, url: anytype, permissions: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperChmod(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#chown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` owner: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn Chown(self: KIO__WorkerBase, url: anytype, owner: []const u8, group: []const u8) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        const owner_str = qtc.libqt_string{
            .len = owner.len,
            .data = owner.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return .{ .ptr = qtc.KIO__WorkerBase_Chown(@ptrCast(self.ptr), @ptrCast(url.ptr), owner_str, group_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#chown)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, url: QUrl, owner: [*:0]const u8, group: [*:0]const u8) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnChown(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, [*:0]const u8, [*:0]const u8) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnChown(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChown` instead
    ///
    pub const QBaseChown = SuperChown;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#chown)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` owner: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn SuperChown(self: KIO__WorkerBase, url: anytype, owner: []const u8, group: []const u8) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        const owner_str = qtc.libqt_string{
            .len = owner.len,
            .data = owner.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return .{ .ptr = qtc.KIO__WorkerBase_SuperChown(@ptrCast(self.ptr), @ptrCast(url.ptr), owner_str, group_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setModificationTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` mtime: QDateTime `
    ///
    pub fn SetModificationTime(self: KIO__WorkerBase, url: anytype, mtime: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        return .{ .ptr = qtc.KIO__WorkerBase_SetModificationTime(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(mtime.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setModificationTime)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, url: QUrl, mtime: QDateTime) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnSetModificationTime(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, QDateTime) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnSetModificationTime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetModificationTime` instead
    ///
    pub const QBaseSetModificationTime = SuperSetModificationTime;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setModificationTime)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` mtime: QDateTime `
    ///
    pub fn SuperSetModificationTime(self: KIO__WorkerBase, url: anytype, mtime: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperSetModificationTime(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(mtime.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` src: QUrl `
    ///
    /// ` dest: QUrl `
    ///
    /// ` permissions: i32 `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn Copy(self: KIO__WorkerBase, src: anytype, dest: anytype, permissions: i32, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Copy(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(permissions), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#copy)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, src: QUrl, dest: QUrl, permissions: i32, flags: flag of job_base_enums.JobFlag) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnCopy(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, QUrl, i32, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnCopy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCopy` instead
    ///
    pub const QBaseCopy = SuperCopy;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#copy)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` src: QUrl `
    ///
    /// ` dest: QUrl `
    ///
    /// ` permissions: i32 `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn SuperCopy(self: KIO__WorkerBase, src: anytype, dest: anytype, permissions: i32, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperCopy(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(permissions), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#del)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` isfile: bool `
    ///
    pub fn Del(self: KIO__WorkerBase, url: anytype, isfile: bool) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Del(@ptrCast(self.ptr), @ptrCast(url.ptr), isfile) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#del)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, url: QUrl, isfile: bool) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnDel(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, bool) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnDel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDel` instead
    ///
    pub const QBaseDel = SuperDel;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#del)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` isfile: bool `
    ///
    pub fn SuperDel(self: KIO__WorkerBase, url: anytype, isfile: bool) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperDel(@ptrCast(self.ptr), @ptrCast(url.ptr), isfile) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` data: []u8 `
    ///
    pub fn Special(self: KIO__WorkerBase, data: []u8) KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.KIO__WorkerBase_Special(@ptrCast(self.ptr), data_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, data: qtc.libqt_string) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnSpecial(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, qtc.libqt_string) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnSpecial(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSpecial` instead
    ///
    pub const QBaseSpecial = SuperSpecial;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` data: []u8 `
    ///
    pub fn SuperSpecial(self: KIO__WorkerBase, data: []u8) KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.KIO__WorkerBase_SuperSpecial(@ptrCast(self.ptr), data_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn FileSystemFreeSpace(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_FileSystemFreeSpace(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__WorkerBase, url: QUrl) callconv(.c) KIO__WorkerResult `
    ///
    pub fn OnFileSystemFreeSpace(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnFileSystemFreeSpace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFileSystemFreeSpace` instead
    ///
    pub const QBaseFileSystemFreeSpace = SuperFileSystemFreeSpace;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn SuperFileSystemFreeSpace(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperFileSystemFreeSpace(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn WorkerStatus2(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_WorkerStatus2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnWorkerStatus2(self: KIO__WorkerBase, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__WorkerBase_OnWorkerStatus2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWorkerStatus2` instead
    ///
    pub const QBaseWorkerStatus2 = SuperWorkerStatus2;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn SuperWorkerStatus2(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_SuperWorkerStatus2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn ReparseConfiguration(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_ReparseConfiguration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReparseConfiguration(self: KIO__WorkerBase, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__WorkerBase_OnReparseConfiguration(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReparseConfiguration` instead
    ///
    pub const QBaseReparseConfiguration = SuperReparseConfiguration;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn SuperReparseConfiguration(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_SuperReparseConfiguration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#connectTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn ConnectTimeout(self: KIO__WorkerBase) i32 {
        return qtc.KIO__WorkerBase_ConnectTimeout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#proxyConnectTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn ProxyConnectTimeout(self: KIO__WorkerBase) i32 {
        return qtc.KIO__WorkerBase_ProxyConnectTimeout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#responseTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn ResponseTimeout(self: KIO__WorkerBase) i32 {
        return qtc.KIO__WorkerBase_ResponseTimeout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#readTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn ReadTimeout(self: KIO__WorkerBase) i32 {
        return qtc.KIO__WorkerBase_ReadTimeout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setTimeoutSpecialCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` timeout: i32 `
    ///
    pub fn SetTimeoutSpecialCommand(self: KIO__WorkerBase, timeout: i32) void {
        qtc.KIO__WorkerBase_SetTimeoutSpecialCommand(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#readData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` buffer: []u8 `
    ///
    pub fn ReadData(self: KIO__WorkerBase, buffer: []u8) i32 {
        const buffer_str = qtc.libqt_string{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        return qtc.KIO__WorkerBase_ReadData(@ptrCast(self.ptr), buffer_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#listEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` entry: KIO__UDSEntry `
    ///
    pub fn ListEntry(self: KIO__WorkerBase, entry: anytype) void {
        comptime _ = @TypeOf(entry)._is_KIO__UDSEntry;
        qtc.KIO__WorkerBase_ListEntry(@ptrCast(self.ptr), @ptrCast(entry.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#connectWorker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` path: []const u8 `
    ///
    pub fn ConnectWorker(self: KIO__WorkerBase, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KIO__WorkerBase_ConnectWorker(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#disconnectWorker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn DisconnectWorker(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_DisconnectWorker(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openPasswordDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` info: KIO__AuthInfo `
    ///
    pub fn OpenPasswordDialog(self: KIO__WorkerBase, info: anytype) i32 {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        return qtc.KIO__WorkerBase_OpenPasswordDialog(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#checkCachedAuthentication)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` info: KIO__AuthInfo `
    ///
    pub fn CheckCachedAuthentication(self: KIO__WorkerBase, info: anytype) bool {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        return qtc.KIO__WorkerBase_CheckCachedAuthentication(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#cacheAuthentication)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` info: KIO__AuthInfo `
    ///
    pub fn CacheAuthentication(self: KIO__WorkerBase, info: anytype) bool {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        return qtc.KIO__WorkerBase_CacheAuthentication(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#waitForAnswer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` expected1: i32 `
    ///
    /// ` expected2: i32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn WaitForAnswer(self: KIO__WorkerBase, expected1: i32, expected2: i32, data: []u8) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KIO__WorkerBase_WaitForAnswer(@ptrCast(self.ptr), @bitCast(expected1), @bitCast(expected2), data_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#sendMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn SendMetaData(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_SendMetaData(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#sendAndKeepMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn SendAndKeepMetaData(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_SendAndKeepMetaData(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#wasKilled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn WasKilled(self: KIO__WorkerBase) bool {
        return qtc.KIO__WorkerBase_WasKilled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#lookupHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` host: []const u8 `
    ///
    pub fn LookupHost(self: KIO__WorkerBase, host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.KIO__WorkerBase_LookupHost(@ptrCast(self.ptr), host_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#waitForHostInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` info: QHostInfo `
    ///
    pub fn WaitForHostInfo(self: KIO__WorkerBase, info: anytype) i32 {
        comptime _ = @TypeOf(info)._is_QHostInfo;
        return qtc.KIO__WorkerBase_WaitForHostInfo(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#requestPrivilegeOperation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` operationDetails: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` global_enums.PrivilegeOperationStatus `
    ///
    pub fn RequestPrivilegeOperation(self: KIO__WorkerBase, operationDetails: []const u8) i32 {
        const operationDetails_str = qtc.libqt_string{
            .len = operationDetails.len,
            .data = operationDetails.ptr,
        };
        return qtc.KIO__WorkerBase_RequestPrivilegeOperation(@ptrCast(self.ptr), operationDetails_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#addTemporaryAuthorization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` action: []const u8 `
    ///
    pub fn AddTemporaryAuthorization(self: KIO__WorkerBase, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KIO__WorkerBase_AddTemporaryAuthorization(@ptrCast(self.ptr), action_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setIncomingMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` metaData: KIO__MetaData `
    ///
    pub fn SetIncomingMetaData(self: KIO__WorkerBase, metaData: anytype) void {
        comptime _ = @TypeOf(metaData)._is_KIO__MetaData;
        qtc.KIO__WorkerBase_SetIncomingMetaData(@ptrCast(self.ptr), @ptrCast(metaData.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    pub fn MessageBox3(self: KIO__WorkerBase, typeVal: i32, text: []const u8, title: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox3(@ptrCast(self.ptr), @bitCast(typeVal), text_str, title_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryActionText: []const u8 `
    ///
    pub fn MessageBox4(self: KIO__WorkerBase, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const primaryActionText_str = qtc.libqt_string{
            .len = primaryActionText.len,
            .data = primaryActionText.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox4(@ptrCast(self.ptr), @bitCast(typeVal), text_str, title_str, primaryActionText_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryActionText: []const u8 `
    ///
    /// ` secondaryActionText: []const u8 `
    ///
    pub fn MessageBox5(self: KIO__WorkerBase, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const primaryActionText_str = qtc.libqt_string{
            .len = primaryActionText.len,
            .data = primaryActionText.ptr,
        };
        const secondaryActionText_str = qtc.libqt_string{
            .len = secondaryActionText.len,
            .data = secondaryActionText.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox5(@ptrCast(self.ptr), @bitCast(typeVal), text_str, title_str, primaryActionText_str, secondaryActionText_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` title: []const u8 `
    ///
    pub fn MessageBox32(self: KIO__WorkerBase, text: []const u8, typeVal: i32, title: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox32(@ptrCast(self.ptr), text_str, @bitCast(typeVal), title_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryActionText: []const u8 `
    ///
    pub fn MessageBox42(self: KIO__WorkerBase, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const primaryActionText_str = qtc.libqt_string{
            .len = primaryActionText.len,
            .data = primaryActionText.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox42(@ptrCast(self.ptr), text_str, @bitCast(typeVal), title_str, primaryActionText_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryActionText: []const u8 `
    ///
    /// ` secondaryActionText: []const u8 `
    ///
    pub fn MessageBox52(self: KIO__WorkerBase, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const primaryActionText_str = qtc.libqt_string{
            .len = primaryActionText.len,
            .data = primaryActionText.ptr,
        };
        const secondaryActionText_str = qtc.libqt_string{
            .len = secondaryActionText.len,
            .data = secondaryActionText.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox52(@ptrCast(self.ptr), text_str, @bitCast(typeVal), title_str, primaryActionText_str, secondaryActionText_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryActionText: []const u8 `
    ///
    /// ` secondaryActionText: []const u8 `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    pub fn MessageBox6(self: KIO__WorkerBase, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8, dontAskAgainName: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const primaryActionText_str = qtc.libqt_string{
            .len = primaryActionText.len,
            .data = primaryActionText.ptr,
        };
        const secondaryActionText_str = qtc.libqt_string{
            .len = secondaryActionText.len,
            .data = secondaryActionText.ptr,
        };
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox6(@ptrCast(self.ptr), text_str, @bitCast(typeVal), title_str, primaryActionText_str, secondaryActionText_str, dontAskAgainName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn ConfigValue22(self: KIO__WorkerBase, allocator: std.mem.Allocator, key: []const u8, defaultValue: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.KIO__WorkerBase_ConfigValue22(@ptrCast(self.ptr), key_str, defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__workerbase.ConfigValue22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setTimeoutSpecialCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` timeout: i32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn SetTimeoutSpecialCommand2(self: KIO__WorkerBase, timeout: i32, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KIO__WorkerBase_SetTimeoutSpecialCommand2(@ptrCast(self.ptr), @bitCast(timeout), data_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openPasswordDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` info: KIO__AuthInfo `
    ///
    /// ` errorMsg: []const u8 `
    ///
    pub fn OpenPasswordDialog2(self: KIO__WorkerBase, info: anytype, errorMsg: []const u8) i32 {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        const errorMsg_str = qtc.libqt_string{
            .len = errorMsg.len,
            .data = errorMsg.ptr,
        };
        return qtc.KIO__WorkerBase_OpenPasswordDialog2(@ptrCast(self.ptr), @ptrCast(info.ptr), errorMsg_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#waitForAnswer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` expected1: i32 `
    ///
    /// ` expected2: i32 `
    ///
    /// ` data: []u8 `
    ///
    /// ` pCmd: *i32 `
    ///
    pub fn WaitForAnswer4(self: KIO__WorkerBase, expected1: i32, expected2: i32, data: []u8, pCmd: *i32) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KIO__WorkerBase_WaitForAnswer4(@ptrCast(self.ptr), @bitCast(expected1), @bitCast(expected2), data_str, @ptrCast(pCmd));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn Delete(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio.html)
pub const KIO = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO,

    pub const _is_KIO = {};

    /// ### [Upstream resources](https://api.kde.org/kio.html#unsupportedActionErrorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: i32 `
    ///
    pub fn UnsupportedActionErrorString(allocator: std.mem.Allocator, param1: []const u8, param2: i32) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KIO_UnsupportedActionErrorString(param1_str, @bitCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio.UnsupportedActionErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#public-types)
pub const enums = struct {
    pub const MessageBoxType = enum(i32) {
        pub const QuestionTwoActions: i32 = 1;
        pub const WarningTwoActions: i32 = 2;
        pub const WarningContinueCancel: i32 = 3;
        pub const WarningTwoActionsCancel: i32 = 4;
        pub const Information: i32 = 5;
        pub const WarningContinueCancelDetailed: i32 = 10;
    };

    pub const ButtonCode = enum(i32) {
        pub const Ok: i32 = 1;
        pub const Cancel: i32 = 2;
        pub const PrimaryAction: i32 = 3;
        pub const SecondaryAction: i32 = 4;
        pub const Continue: i32 = 5;
    };
};
