const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const dropjob_enums = @import("libdropjob.zig").enums;
const global_enums = @import("libglobal.zig").enums;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const std = @import("std");
const workerbase_enums = enums;
pub const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// https://api.kde.org/kio-workerresult.html
pub const kio__workerresult = struct {
    /// New constructs a new KIO::WorkerResult object.
    ///
    /// ``` param1: QtC.KIO__WorkerResult ```
    pub fn New(param1: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerResult_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerresult.html#operator-eq)
    ///
    /// ``` self: QtC.KIO__WorkerResult, param1: QtC.KIO__WorkerResult ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KIO__WorkerResult_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerresult.html#success)
    ///
    /// ``` self: QtC.KIO__WorkerResult ```
    pub fn Success(self: ?*anyopaque) bool {
        return qtc.KIO__WorkerResult_Success(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerresult.html#error)
    ///
    /// ``` self: QtC.KIO__WorkerResult ```
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.KIO__WorkerResult_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerresult.html#errorString)
    ///
    /// ``` self: QtC.KIO__WorkerResult, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIO__WorkerResult_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::workerresult.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-workerresult.html#fail)
    ///
    ///
    pub fn Fail() QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerResult_Fail();
    }

    /// [Qt documentation](https://api.kde.org/kio-workerresult.html#pass)
    ///
    ///
    pub fn Pass() QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerResult_Pass();
    }

    /// [Qt documentation](https://api.kde.org/kio-workerresult.html#fail)
    ///
    /// ``` _error: i32 ```
    pub fn Fail1(_error: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerResult_Fail1(@intCast(_error));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerresult.html#fail)
    ///
    /// ``` _error: i32, _errorString: []const u8 ```
    pub fn Fail2(_error: i32, _errorString: []const u8) QtC.KIO__WorkerResult {
        const _errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        return qtc.KIO__WorkerResult_Fail2(@intCast(_error), _errorString_str);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KIO__WorkerResult ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIO__WorkerResult_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kio-workerbase.html
pub const kio__workerbase = struct {
    /// New constructs a new KIO::WorkerBase object.
    ///
    /// ``` protocol: []u8, poolSocket: []u8, appSocket: []u8 ```
    pub fn New(protocol: []u8, poolSocket: []u8, appSocket: []u8) QtC.KIO__WorkerBase {
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

        return qtc.KIO__WorkerBase_new(protocol_str, poolSocket_str, appSocket_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#exit)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn Exit(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_Exit(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#dispatchLoop)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn DispatchLoop(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_DispatchLoop(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#data)
    ///
    /// ``` self: QtC.KIO__WorkerBase, data: []u8 ```
    pub fn Data(self: ?*anyopaque, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KIO__WorkerBase_Data(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#dataReq)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn DataReq(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_DataReq(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#workerStatus)
    ///
    /// ``` self: QtC.KIO__WorkerBase, host: []const u8, connected: bool ```
    pub fn WorkerStatus(self: ?*anyopaque, host: []const u8, connected: bool) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.KIO__WorkerBase_WorkerStatus(@ptrCast(self), host_str, connected);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#statEntry)
    ///
    /// ``` self: QtC.KIO__WorkerBase, _entry: QtC.KIO__UDSEntry ```
    pub fn StatEntry(self: ?*anyopaque, _entry: ?*anyopaque) void {
        qtc.KIO__WorkerBase_StatEntry(@ptrCast(self), @ptrCast(_entry));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#listEntries)
    ///
    /// ``` self: QtC.KIO__WorkerBase, _entry: []QtC.KIO__UDSEntry ```
    pub fn ListEntries(self: ?*anyopaque, _entry: []QtC.KIO__UDSEntry) void {
        const _entry_list = qtc.libqt_list{
            .len = _entry.len,
            .data = @ptrCast(_entry.ptr),
        };
        qtc.KIO__WorkerBase_ListEntries(@ptrCast(self), _entry_list);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#canResume)
    ///
    /// ``` self: QtC.KIO__WorkerBase, offset: u64 ```
    pub fn CanResume(self: ?*anyopaque, offset: u64) bool {
        return qtc.KIO__WorkerBase_CanResume(@ptrCast(self), @intCast(offset));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#canResume)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn CanResume2(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_CanResume2(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#totalSize)
    ///
    /// ``` self: QtC.KIO__WorkerBase, _bytes: u64 ```
    pub fn TotalSize(self: ?*anyopaque, _bytes: u64) void {
        qtc.KIO__WorkerBase_TotalSize(@ptrCast(self), @intCast(_bytes));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#processedSize)
    ///
    /// ``` self: QtC.KIO__WorkerBase, _bytes: u64 ```
    pub fn ProcessedSize(self: ?*anyopaque, _bytes: u64) void {
        qtc.KIO__WorkerBase_ProcessedSize(@ptrCast(self), @intCast(_bytes));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#position)
    ///
    /// ``` self: QtC.KIO__WorkerBase, _pos: u64 ```
    pub fn Position(self: ?*anyopaque, _pos: u64) void {
        qtc.KIO__WorkerBase_Position(@ptrCast(self), @intCast(_pos));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#written)
    ///
    /// ``` self: QtC.KIO__WorkerBase, _bytes: u64 ```
    pub fn Written(self: ?*anyopaque, _bytes: u64) void {
        qtc.KIO__WorkerBase_Written(@ptrCast(self), @intCast(_bytes));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#truncated)
    ///
    /// ``` self: QtC.KIO__WorkerBase, _length: u64 ```
    pub fn Truncated(self: ?*anyopaque, _length: u64) void {
        qtc.KIO__WorkerBase_Truncated(@ptrCast(self), @intCast(_length));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#speed)
    ///
    /// ``` self: QtC.KIO__WorkerBase, _bytes_per_second: u64 ```
    pub fn Speed(self: ?*anyopaque, _bytes_per_second: u64) void {
        qtc.KIO__WorkerBase_Speed(@ptrCast(self), @intCast(_bytes_per_second));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#redirection)
    ///
    /// ``` self: QtC.KIO__WorkerBase, _url: QtC.QUrl ```
    pub fn Redirection(self: ?*anyopaque, _url: ?*anyopaque) void {
        qtc.KIO__WorkerBase_Redirection(@ptrCast(self), @ptrCast(_url));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#errorPage)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn ErrorPage(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_ErrorPage(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#mimeType)
    ///
    /// ``` self: QtC.KIO__WorkerBase, _type: []const u8 ```
    pub fn MimeType(self: ?*anyopaque, _type: []const u8) void {
        const _type_str = qtc.libqt_string{
            .len = _type.len,
            .data = _type.ptr,
        };
        qtc.KIO__WorkerBase_MimeType(@ptrCast(self), _type_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#warning)
    ///
    /// ``` self: QtC.KIO__WorkerBase, msg: []const u8 ```
    pub fn Warning(self: ?*anyopaque, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KIO__WorkerBase_Warning(@ptrCast(self), msg_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#infoMessage)
    ///
    /// ``` self: QtC.KIO__WorkerBase, msg: []const u8 ```
    pub fn InfoMessage(self: ?*anyopaque, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KIO__WorkerBase_InfoMessage(@ptrCast(self), msg_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ``` self: QtC.KIO__WorkerBase, typeVal: workerbase_enums.MessageBoxType, text: []const u8 ```
    pub fn MessageBox(self: ?*anyopaque, typeVal: i32, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox(@ptrCast(self), @intCast(typeVal), text_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ``` self: QtC.KIO__WorkerBase, text: []const u8, typeVal: workerbase_enums.MessageBoxType ```
    pub fn MessageBox2(self: ?*anyopaque, text: []const u8, typeVal: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox2(@ptrCast(self), text_str, @intCast(typeVal));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#sslError)
    ///
    /// ``` self: QtC.KIO__WorkerBase, sslData: map_constu8_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn SslError(self: ?*anyopaque, sslData: map_constu8_qtcqvariant, allocator: std.mem.Allocator) i32 {
        const sslData_keys = allocator.alloc(qtc.libqt_string, sslData.count()) catch @panic("kio::workerbase.SslError: Memory allocation failed");
        defer allocator.free(sslData_keys);
        const sslData_values = allocator.alloc(QtC.QVariant, sslData.count()) catch @panic("kio::workerbase.SslError: Memory allocation failed");
        defer allocator.free(sslData_values);
        var i: usize = 0;
        var sslData_it = sslData.iterator();
        while (sslData_it.next()) |entry| {
            const key = entry.key_ptr.*;
            sslData_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            sslData_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const sslData_map = qtc.libqt_map{
            .len = sslData.count(),
            .keys = @ptrCast(sslData_keys.ptr),
            .values = @ptrCast(sslData_values.ptr),
        };
        return qtc.KIO__WorkerBase_SslError(@ptrCast(self), sslData_map);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#setMetaData)
    ///
    /// ``` self: QtC.KIO__WorkerBase, key: []const u8, value: []const u8 ```
    pub fn SetMetaData(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KIO__WorkerBase_SetMetaData(@ptrCast(self), key_str, value_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#hasMetaData)
    ///
    /// ``` self: QtC.KIO__WorkerBase, key: []const u8 ```
    pub fn HasMetaData(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_HasMetaData(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#metaData)
    ///
    /// ``` self: QtC.KIO__WorkerBase, key: []const u8, allocator: std.mem.Allocator ```
    pub fn MetaData(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.KIO__WorkerBase_MetaData(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::workerbase.MetaData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#allMetaData)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn AllMetaData(self: ?*anyopaque) QtC.KIO__MetaData {
        return qtc.KIO__WorkerBase_AllMetaData(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#mapConfig)
    ///
    /// ``` self: QtC.KIO__WorkerBase, allocator: std.mem.Allocator ```
    pub fn MapConfig(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.KIO__WorkerBase_MapConfig(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
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
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("kio::workerbase.MapConfig: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#configValue)
    ///
    /// ``` self: QtC.KIO__WorkerBase, key: []const u8, defaultValue: bool ```
    pub fn ConfigValue(self: ?*anyopaque, key: []const u8, defaultValue: bool) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_ConfigValue(@ptrCast(self), key_str, defaultValue);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#configValue)
    ///
    /// ``` self: QtC.KIO__WorkerBase, key: []const u8, defaultValue: i32 ```
    pub fn ConfigValue2(self: ?*anyopaque, key: []const u8, defaultValue: i32) i32 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_ConfigValue2(@ptrCast(self), key_str, @intCast(defaultValue));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#configValue)
    ///
    /// ``` self: QtC.KIO__WorkerBase, key: []const u8, allocator: std.mem.Allocator ```
    pub fn ConfigValue3(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.KIO__WorkerBase_ConfigValue3(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::workerbase.ConfigValue3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#config)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn Config(self: ?*anyopaque) QtC.KConfigGroup {
        return qtc.KIO__WorkerBase_Config(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#remoteEncoding)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn RemoteEncoding(self: ?*anyopaque) QtC.KRemoteEncoding {
        return qtc.KIO__WorkerBase_RemoteEncoding(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#appConnectionMade)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn AppConnectionMade(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_AppConnectionMade(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#appConnectionMade)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn () callconv(.c) void ```
    pub fn OnAppConnectionMade(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KIO__WorkerBase_OnAppConnectionMade(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#appConnectionMade)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn QBaseAppConnectionMade(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_QBaseAppConnectionMade(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#setHost)
    ///
    /// ``` self: QtC.KIO__WorkerBase, host: []const u8, port: u16, user: []const u8, pass: []const u8 ```
    pub fn SetHost(self: ?*anyopaque, host: []const u8, port: u16, user: []const u8, pass: []const u8) void {
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
        qtc.KIO__WorkerBase_SetHost(@ptrCast(self), host_str, @intCast(port), user_str, pass_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#setHost)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, host: [*:0]const u8, port: u16, user: [*:0]const u8, pass: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetHost(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, u16, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__WorkerBase_OnSetHost(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#setHost)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, host: []const u8, port: u16, user: []const u8, pass: []const u8 ```
    pub fn QBaseSetHost(self: ?*anyopaque, host: []const u8, port: u16, user: []const u8, pass: []const u8) void {
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
        qtc.KIO__WorkerBase_QBaseSetHost(@ptrCast(self), host_str, @intCast(port), user_str, pass_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#openConnection)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn OpenConnection(self: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_OpenConnection(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#openConnection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn () callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnOpenConnection(self: ?*anyopaque, slot: fn () callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnOpenConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#openConnection)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn QBaseOpenConnection(self: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseOpenConnection(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#closeConnection)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn CloseConnection(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_CloseConnection(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#closeConnection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn () callconv(.c) void ```
    pub fn OnCloseConnection(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KIO__WorkerBase_OnCloseConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#closeConnection)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn QBaseCloseConnection(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_QBaseCloseConnection(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#get)
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl ```
    pub fn Get(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_Get(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#get)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, url: QtC.QUrl) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnGet(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnGet(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#get)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl ```
    pub fn QBaseGet(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseGet(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#open)
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl, mode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn Open(self: ?*anyopaque, url: ?*anyopaque, mode: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_Open(@ptrCast(self), @ptrCast(url), @intCast(mode));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, url: QtC.QUrl, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnOpen(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnOpen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#open)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl, mode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn QBaseOpen(self: ?*anyopaque, url: ?*anyopaque, mode: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseOpen(@ptrCast(self), @ptrCast(url), @intCast(mode));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#read)
    ///
    /// ``` self: QtC.KIO__WorkerBase, size: u64 ```
    pub fn Read(self: ?*anyopaque, size: u64) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_Read(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, size: u64) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnRead(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#read)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, size: u64 ```
    pub fn QBaseRead(self: ?*anyopaque, size: u64) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseRead(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#write)
    ///
    /// ``` self: QtC.KIO__WorkerBase, data: []u8 ```
    pub fn Write(self: ?*anyopaque, data: []u8) QtC.KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KIO__WorkerBase_Write(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, data: [*:0]u8) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnWrite(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]u8) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnWrite(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#write)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, data: []u8 ```
    pub fn QBaseWrite(self: ?*anyopaque, data: []u8) QtC.KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KIO__WorkerBase_QBaseWrite(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#seek)
    ///
    /// ``` self: QtC.KIO__WorkerBase, offset: u64 ```
    pub fn Seek(self: ?*anyopaque, offset: u64) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_Seek(@ptrCast(self), @intCast(offset));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#seek)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, offset: u64) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnSeek(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnSeek(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#seek)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, offset: u64 ```
    pub fn QBaseSeek(self: ?*anyopaque, offset: u64) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseSeek(@ptrCast(self), @intCast(offset));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#truncate)
    ///
    /// ``` self: QtC.KIO__WorkerBase, size: u64 ```
    pub fn Truncate(self: ?*anyopaque, size: u64) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_Truncate(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#truncate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, size: u64) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnTruncate(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnTruncate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#truncate)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, size: u64 ```
    pub fn QBaseTruncate(self: ?*anyopaque, size: u64) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseTruncate(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#close)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn Close(self: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_Close(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn () callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnClose(self: ?*anyopaque, slot: fn () callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#close)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn QBaseClose(self: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseClose(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#put)
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl, permissions: i32, flags: flag of dropjob_enums.JobFlag ```
    pub fn Put(self: ?*anyopaque, url: ?*anyopaque, permissions: i32, flags: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_Put(@ptrCast(self), @ptrCast(url), @intCast(permissions), @intCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#put)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, url: QtC.QUrl, permissions: i32, flags: flag of dropjob_enums.JobFlag) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnPut(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnPut(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#put)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl, permissions: i32, flags: flag of dropjob_enums.JobFlag ```
    pub fn QBasePut(self: ?*anyopaque, url: ?*anyopaque, permissions: i32, flags: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBasePut(@ptrCast(self), @ptrCast(url), @intCast(permissions), @intCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#stat)
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl ```
    pub fn Stat(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_Stat(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#stat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, url: QtC.QUrl) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnStat(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnStat(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#stat)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl ```
    pub fn QBaseStat(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseStat(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#mimetype)
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl ```
    pub fn Mimetype(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_Mimetype(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#mimetype)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, url: QtC.QUrl) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnMimetype(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnMimetype(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#mimetype)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl ```
    pub fn QBaseMimetype(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseMimetype(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#listDir)
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl ```
    pub fn ListDir(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_ListDir(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#listDir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, url: QtC.QUrl) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnListDir(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnListDir(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#listDir)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl ```
    pub fn QBaseListDir(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseListDir(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#mkdir)
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl, permissions: i32 ```
    pub fn Mkdir(self: ?*anyopaque, url: ?*anyopaque, permissions: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_Mkdir(@ptrCast(self), @ptrCast(url), @intCast(permissions));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#mkdir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, url: QtC.QUrl, permissions: i32) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnMkdir(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnMkdir(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#mkdir)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl, permissions: i32 ```
    pub fn QBaseMkdir(self: ?*anyopaque, url: ?*anyopaque, permissions: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseMkdir(@ptrCast(self), @ptrCast(url), @intCast(permissions));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#rename)
    ///
    /// ``` self: QtC.KIO__WorkerBase, src: QtC.QUrl, dest: QtC.QUrl, flags: flag of dropjob_enums.JobFlag ```
    pub fn Rename(self: ?*anyopaque, src: ?*anyopaque, dest: ?*anyopaque, flags: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_Rename(@ptrCast(self), @ptrCast(src), @ptrCast(dest), @intCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#rename)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, src: QtC.QUrl, dest: QtC.QUrl, flags: flag of dropjob_enums.JobFlag) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnRename(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnRename(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#rename)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, src: QtC.QUrl, dest: QtC.QUrl, flags: flag of dropjob_enums.JobFlag ```
    pub fn QBaseRename(self: ?*anyopaque, src: ?*anyopaque, dest: ?*anyopaque, flags: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseRename(@ptrCast(self), @ptrCast(src), @ptrCast(dest), @intCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#symlink)
    ///
    /// ``` self: QtC.KIO__WorkerBase, target: []const u8, dest: QtC.QUrl, flags: flag of dropjob_enums.JobFlag ```
    pub fn Symlink(self: ?*anyopaque, target: []const u8, dest: ?*anyopaque, flags: i32) QtC.KIO__WorkerResult {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        return qtc.KIO__WorkerBase_Symlink(@ptrCast(self), target_str, @ptrCast(dest), @intCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#symlink)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, target: [*:0]const u8, dest: QtC.QUrl, flags: flag of dropjob_enums.JobFlag) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnSymlink(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, ?*anyopaque, i32) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnSymlink(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#symlink)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, target: []const u8, dest: QtC.QUrl, flags: flag of dropjob_enums.JobFlag ```
    pub fn QBaseSymlink(self: ?*anyopaque, target: []const u8, dest: ?*anyopaque, flags: i32) QtC.KIO__WorkerResult {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        return qtc.KIO__WorkerBase_QBaseSymlink(@ptrCast(self), target_str, @ptrCast(dest), @intCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#chmod)
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl, permissions: i32 ```
    pub fn Chmod(self: ?*anyopaque, url: ?*anyopaque, permissions: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_Chmod(@ptrCast(self), @ptrCast(url), @intCast(permissions));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#chmod)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, url: QtC.QUrl, permissions: i32) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnChmod(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnChmod(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#chmod)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl, permissions: i32 ```
    pub fn QBaseChmod(self: ?*anyopaque, url: ?*anyopaque, permissions: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseChmod(@ptrCast(self), @ptrCast(url), @intCast(permissions));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#chown)
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl, owner: []const u8, group: []const u8 ```
    pub fn Chown(self: ?*anyopaque, url: ?*anyopaque, owner: []const u8, group: []const u8) QtC.KIO__WorkerResult {
        const owner_str = qtc.libqt_string{
            .len = owner.len,
            .data = owner.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KIO__WorkerBase_Chown(@ptrCast(self), @ptrCast(url), owner_str, group_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#chown)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, url: QtC.QUrl, owner: [*:0]const u8, group: [*:0]const u8) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnChown(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnChown(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#chown)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl, owner: []const u8, group: []const u8 ```
    pub fn QBaseChown(self: ?*anyopaque, url: ?*anyopaque, owner: []const u8, group: []const u8) QtC.KIO__WorkerResult {
        const owner_str = qtc.libqt_string{
            .len = owner.len,
            .data = owner.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KIO__WorkerBase_QBaseChown(@ptrCast(self), @ptrCast(url), owner_str, group_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#setModificationTime)
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl, mtime: QtC.QDateTime ```
    pub fn SetModificationTime(self: ?*anyopaque, url: ?*anyopaque, mtime: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_SetModificationTime(@ptrCast(self), @ptrCast(url), @ptrCast(mtime));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#setModificationTime)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, url: QtC.QUrl, mtime: QtC.QDateTime) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnSetModificationTime(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnSetModificationTime(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#setModificationTime)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl, mtime: QtC.QDateTime ```
    pub fn QBaseSetModificationTime(self: ?*anyopaque, url: ?*anyopaque, mtime: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseSetModificationTime(@ptrCast(self), @ptrCast(url), @ptrCast(mtime));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#copy)
    ///
    /// ``` self: QtC.KIO__WorkerBase, src: QtC.QUrl, dest: QtC.QUrl, permissions: i32, flags: flag of dropjob_enums.JobFlag ```
    pub fn Copy(self: ?*anyopaque, src: ?*anyopaque, dest: ?*anyopaque, permissions: i32, flags: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_Copy(@ptrCast(self), @ptrCast(src), @ptrCast(dest), @intCast(permissions), @intCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#copy)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, src: QtC.QUrl, dest: QtC.QUrl, permissions: i32, flags: flag of dropjob_enums.JobFlag) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnCopy(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnCopy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#copy)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, src: QtC.QUrl, dest: QtC.QUrl, permissions: i32, flags: flag of dropjob_enums.JobFlag ```
    pub fn QBaseCopy(self: ?*anyopaque, src: ?*anyopaque, dest: ?*anyopaque, permissions: i32, flags: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseCopy(@ptrCast(self), @ptrCast(src), @ptrCast(dest), @intCast(permissions), @intCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#del)
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl, isfile: bool ```
    pub fn Del(self: ?*anyopaque, url: ?*anyopaque, isfile: bool) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_Del(@ptrCast(self), @ptrCast(url), isfile);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#del)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, url: QtC.QUrl, isfile: bool) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnDel(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnDel(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#del)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl, isfile: bool ```
    pub fn QBaseDel(self: ?*anyopaque, url: ?*anyopaque, isfile: bool) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseDel(@ptrCast(self), @ptrCast(url), isfile);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#special)
    ///
    /// ``` self: QtC.KIO__WorkerBase, data: []u8 ```
    pub fn Special(self: ?*anyopaque, data: []u8) QtC.KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KIO__WorkerBase_Special(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#special)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, data: [*:0]u8) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnSpecial(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]u8) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnSpecial(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#special)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, data: []u8 ```
    pub fn QBaseSpecial(self: ?*anyopaque, data: []u8) QtC.KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KIO__WorkerBase_QBaseSpecial(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl ```
    pub fn FileSystemFreeSpace(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_FileSystemFreeSpace(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn (self: QtC.KIO__WorkerBase, url: QtC.QUrl) callconv(.c) QtC.KIO__WorkerResult ```
    pub fn OnFileSystemFreeSpace(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnFileSystemFreeSpace(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase, url: QtC.QUrl ```
    pub fn QBaseFileSystemFreeSpace(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__WorkerBase_QBaseFileSystemFreeSpace(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#worker_status)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn WorkerStatus2(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_WorkerStatus2(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#worker_status)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn () callconv(.c) void ```
    pub fn OnWorkerStatus2(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KIO__WorkerBase_OnWorkerStatus2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#worker_status)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn QBaseWorkerStatus2(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_QBaseWorkerStatus2(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn ReparseConfiguration(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_ReparseConfiguration(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__WorkerBase, slot: fn () callconv(.c) void ```
    pub fn OnReparseConfiguration(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KIO__WorkerBase_OnReparseConfiguration(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn QBaseReparseConfiguration(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_QBaseReparseConfiguration(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#connectTimeout)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn ConnectTimeout(self: ?*anyopaque) i32 {
        return qtc.KIO__WorkerBase_ConnectTimeout(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#proxyConnectTimeout)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn ProxyConnectTimeout(self: ?*anyopaque) i32 {
        return qtc.KIO__WorkerBase_ProxyConnectTimeout(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#responseTimeout)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn ResponseTimeout(self: ?*anyopaque) i32 {
        return qtc.KIO__WorkerBase_ResponseTimeout(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#readTimeout)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn ReadTimeout(self: ?*anyopaque) i32 {
        return qtc.KIO__WorkerBase_ReadTimeout(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#setTimeoutSpecialCommand)
    ///
    /// ``` self: QtC.KIO__WorkerBase, timeout: i32 ```
    pub fn SetTimeoutSpecialCommand(self: ?*anyopaque, timeout: i32) void {
        qtc.KIO__WorkerBase_SetTimeoutSpecialCommand(@ptrCast(self), @intCast(timeout));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#readData)
    ///
    /// ``` self: QtC.KIO__WorkerBase, buffer: []u8 ```
    pub fn ReadData(self: ?*anyopaque, buffer: []u8) i32 {
        const buffer_str = qtc.libqt_string{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        return qtc.KIO__WorkerBase_ReadData(@ptrCast(self), buffer_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#listEntry)
    ///
    /// ``` self: QtC.KIO__WorkerBase, entry: QtC.KIO__UDSEntry ```
    pub fn ListEntry(self: ?*anyopaque, entry: ?*anyopaque) void {
        qtc.KIO__WorkerBase_ListEntry(@ptrCast(self), @ptrCast(entry));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#connectWorker)
    ///
    /// ``` self: QtC.KIO__WorkerBase, path: []const u8 ```
    pub fn ConnectWorker(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KIO__WorkerBase_ConnectWorker(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#disconnectWorker)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn DisconnectWorker(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_DisconnectWorker(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#openPasswordDialog)
    ///
    /// ``` self: QtC.KIO__WorkerBase, info: QtC.KIO__AuthInfo ```
    pub fn OpenPasswordDialog(self: ?*anyopaque, info: ?*anyopaque) i32 {
        return qtc.KIO__WorkerBase_OpenPasswordDialog(@ptrCast(self), @ptrCast(info));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#checkCachedAuthentication)
    ///
    /// ``` self: QtC.KIO__WorkerBase, info: QtC.KIO__AuthInfo ```
    pub fn CheckCachedAuthentication(self: ?*anyopaque, info: ?*anyopaque) bool {
        return qtc.KIO__WorkerBase_CheckCachedAuthentication(@ptrCast(self), @ptrCast(info));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#cacheAuthentication)
    ///
    /// ``` self: QtC.KIO__WorkerBase, info: QtC.KIO__AuthInfo ```
    pub fn CacheAuthentication(self: ?*anyopaque, info: ?*anyopaque) bool {
        return qtc.KIO__WorkerBase_CacheAuthentication(@ptrCast(self), @ptrCast(info));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#waitForAnswer)
    ///
    /// ``` self: QtC.KIO__WorkerBase, expected1: i32, expected2: i32, data: []u8 ```
    pub fn WaitForAnswer(self: ?*anyopaque, expected1: i32, expected2: i32, data: []u8) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KIO__WorkerBase_WaitForAnswer(@ptrCast(self), @intCast(expected1), @intCast(expected2), data_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#sendMetaData)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn SendMetaData(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_SendMetaData(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#sendAndKeepMetaData)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn SendAndKeepMetaData(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_SendAndKeepMetaData(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#wasKilled)
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn WasKilled(self: ?*anyopaque) bool {
        return qtc.KIO__WorkerBase_WasKilled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#lookupHost)
    ///
    /// ``` self: QtC.KIO__WorkerBase, host: []const u8 ```
    pub fn LookupHost(self: ?*anyopaque, host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.KIO__WorkerBase_LookupHost(@ptrCast(self), host_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#waitForHostInfo)
    ///
    /// ``` self: QtC.KIO__WorkerBase, info: QtC.QHostInfo ```
    pub fn WaitForHostInfo(self: ?*anyopaque, info: ?*anyopaque) i32 {
        return qtc.KIO__WorkerBase_WaitForHostInfo(@ptrCast(self), @ptrCast(info));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#requestPrivilegeOperation)
    ///
    /// ``` self: QtC.KIO__WorkerBase, operationDetails: []const u8 ```
    ///
    /// Returns: ``` global_enums.PrivilegeOperationStatus ```
    pub fn RequestPrivilegeOperation(self: ?*anyopaque, operationDetails: []const u8) i32 {
        const operationDetails_str = qtc.libqt_string{
            .len = operationDetails.len,
            .data = operationDetails.ptr,
        };
        return qtc.KIO__WorkerBase_RequestPrivilegeOperation(@ptrCast(self), operationDetails_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#addTemporaryAuthorization)
    ///
    /// ``` self: QtC.KIO__WorkerBase, action: []const u8 ```
    pub fn AddTemporaryAuthorization(self: ?*anyopaque, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KIO__WorkerBase_AddTemporaryAuthorization(@ptrCast(self), action_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#setIncomingMetaData)
    ///
    /// ``` self: QtC.KIO__WorkerBase, metaData: QtC.KIO__MetaData ```
    pub fn SetIncomingMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.KIO__WorkerBase_SetIncomingMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ``` self: QtC.KIO__WorkerBase, typeVal: workerbase_enums.MessageBoxType, text: []const u8, title: []const u8 ```
    pub fn MessageBox3(self: ?*anyopaque, typeVal: i32, text: []const u8, title: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox3(@ptrCast(self), @intCast(typeVal), text_str, title_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ``` self: QtC.KIO__WorkerBase, typeVal: workerbase_enums.MessageBoxType, text: []const u8, title: []const u8, primaryActionText: []const u8 ```
    pub fn MessageBox4(self: ?*anyopaque, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8) i32 {
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
        return qtc.KIO__WorkerBase_MessageBox4(@ptrCast(self), @intCast(typeVal), text_str, title_str, primaryActionText_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ``` self: QtC.KIO__WorkerBase, typeVal: workerbase_enums.MessageBoxType, text: []const u8, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8 ```
    pub fn MessageBox5(self: ?*anyopaque, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8) i32 {
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
        return qtc.KIO__WorkerBase_MessageBox5(@ptrCast(self), @intCast(typeVal), text_str, title_str, primaryActionText_str, secondaryActionText_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ``` self: QtC.KIO__WorkerBase, text: []const u8, typeVal: workerbase_enums.MessageBoxType, title: []const u8 ```
    pub fn MessageBox32(self: ?*anyopaque, text: []const u8, typeVal: i32, title: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox32(@ptrCast(self), text_str, @intCast(typeVal), title_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ``` self: QtC.KIO__WorkerBase, text: []const u8, typeVal: workerbase_enums.MessageBoxType, title: []const u8, primaryActionText: []const u8 ```
    pub fn MessageBox42(self: ?*anyopaque, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8) i32 {
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
        return qtc.KIO__WorkerBase_MessageBox42(@ptrCast(self), text_str, @intCast(typeVal), title_str, primaryActionText_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ``` self: QtC.KIO__WorkerBase, text: []const u8, typeVal: workerbase_enums.MessageBoxType, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8 ```
    pub fn MessageBox52(self: ?*anyopaque, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8) i32 {
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
        return qtc.KIO__WorkerBase_MessageBox52(@ptrCast(self), text_str, @intCast(typeVal), title_str, primaryActionText_str, secondaryActionText_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ``` self: QtC.KIO__WorkerBase, text: []const u8, typeVal: workerbase_enums.MessageBoxType, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8, dontAskAgainName: []const u8 ```
    pub fn MessageBox6(self: ?*anyopaque, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8, dontAskAgainName: []const u8) i32 {
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
        return qtc.KIO__WorkerBase_MessageBox6(@ptrCast(self), text_str, @intCast(typeVal), title_str, primaryActionText_str, secondaryActionText_str, dontAskAgainName_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#configValue)
    ///
    /// ``` self: QtC.KIO__WorkerBase, key: []const u8, defaultValue: []const u8, allocator: std.mem.Allocator ```
    pub fn ConfigValue22(self: ?*anyopaque, key: []const u8, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        const _str = qtc.KIO__WorkerBase_ConfigValue22(@ptrCast(self), key_str, defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::workerbase.ConfigValue22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#setTimeoutSpecialCommand)
    ///
    /// ``` self: QtC.KIO__WorkerBase, timeout: i32, data: []u8 ```
    pub fn SetTimeoutSpecialCommand2(self: ?*anyopaque, timeout: i32, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KIO__WorkerBase_SetTimeoutSpecialCommand2(@ptrCast(self), @intCast(timeout), data_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#openPasswordDialog)
    ///
    /// ``` self: QtC.KIO__WorkerBase, info: QtC.KIO__AuthInfo, errorMsg: []const u8 ```
    pub fn OpenPasswordDialog2(self: ?*anyopaque, info: ?*anyopaque, errorMsg: []const u8) i32 {
        const errorMsg_str = qtc.libqt_string{
            .len = errorMsg.len,
            .data = errorMsg.ptr,
        };
        return qtc.KIO__WorkerBase_OpenPasswordDialog2(@ptrCast(self), @ptrCast(info), errorMsg_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-workerbase.html#waitForAnswer)
    ///
    /// ``` self: QtC.KIO__WorkerBase, expected1: i32, expected2: i32, data: []u8, pCmd: *i32 ```
    pub fn WaitForAnswer4(self: ?*anyopaque, expected1: i32, expected2: i32, data: []u8, pCmd: *i32) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KIO__WorkerBase_WaitForAnswer4(@ptrCast(self), @intCast(expected1), @intCast(expected2), data_str, @ptrCast(pCmd));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KIO__WorkerBase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kio.html
pub const kio = struct {
    /// [Qt documentation](https://api.kde.org/kio.html#unsupportedActionErrorString)
    ///
    /// ``` param1: []const u8, param2: i32, allocator: std.mem.Allocator ```
    pub fn UnsupportedActionErrorString(param1: []const u8, param2: i32, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KIO_UnsupportedActionErrorString(param1_str, @intCast(param2));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio.UnsupportedActionErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};

/// https://api.kde.org/kio-workerbase.html#types
pub const enums = struct {
    pub const MessageBoxType = enum {
        pub const QuestionTwoActions: i32 = 1;
        pub const WarningTwoActions: i32 = 2;
        pub const WarningContinueCancel: i32 = 3;
        pub const WarningTwoActionsCancel: i32 = 4;
        pub const Information: i32 = 5;
        pub const WarningContinueCancelDetailed: i32 = 10;
    };

    pub const ButtonCode = enum {
        pub const Ok: i32 = 1;
        pub const Cancel: i32 = 2;
        pub const PrimaryAction: i32 = 3;
        pub const SecondaryAction: i32 = 4;
        pub const Continue: i32 = 5;
    };
};
