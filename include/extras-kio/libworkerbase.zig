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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KIO::WorkerResult object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KIO__WorkerResult `
    ///
    pub fn new(param1: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(param1)._is_KIO__WorkerResult;
        return .{ .ptr = qtc.KIO__WorkerResult_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerResult `
    ///
    /// ` param1: KIO__WorkerResult `
    ///
    pub fn operatorAssign(self: KIO__WorkerResult, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KIO__WorkerResult;
        qtc.KIO__WorkerResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `success` instead
    ///
    pub const Success = success;

    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html#success)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerResult `
    ///
    pub fn success(self: KIO__WorkerResult) bool {
        return qtc.KIO__WorkerResult_Success(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerResult `
    ///
    pub fn error0(self: KIO__WorkerResult) i32 {
        return qtc.KIO__WorkerResult_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: KIO__WorkerResult, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__WorkerResult_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__WorkerResult.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fail` instead
    ///
    pub const Fail = fail;

    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html#fail)
    ///
    pub fn fail() KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerResult_Fail() };
    }

    /// ### DEPRECATED: Use `pass` instead
    ///
    pub const Pass = pass;

    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html#pass)
    ///
    pub fn pass() KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerResult_Pass() };
    }

    /// ### DEPRECATED: Use `fail1` instead
    ///
    pub const Fail1 = fail1;

    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html#fail)
    ///
    /// ## Parameter(s):
    ///
    /// ` _error: i32 `
    ///
    pub fn fail1(_error: i32) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerResult_Fail1(@bitCast(_error)) };
    }

    /// ### DEPRECATED: Use `fail2` instead
    ///
    pub const Fail2 = fail2;

    /// ### [Upstream resources](https://api.kde.org/kio-workerresult.html#fail)
    ///
    /// ## Parameter(s):
    ///
    /// ` _error: i32 `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn fail2(_error: i32, _errorString: []const u8) KIO__WorkerResult {
        const _errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        return .{ .ptr = qtc.KIO__WorkerResult_Fail2(@bitCast(_error), _errorString_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__WorkerResult `
    ///
    pub fn delete(self: KIO__WorkerResult) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KIO::WorkerBase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []u8 `
    ///
    /// ` poolSocket: []u8 `
    ///
    /// ` appSocket: []u8 `
    ///
    pub fn new(protocol: []u8, poolSocket: []u8, appSocket: []u8) KIO__WorkerBase {
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

    /// ### DEPRECATED: Use `exit` instead
    ///
    pub const Exit = exit;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#exit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn exit(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_Exit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dispatchLoop` instead
    ///
    pub const DispatchLoop = dispatchLoop;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#dispatchLoop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn dispatchLoop(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_DispatchLoop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _data: []u8 `
    ///
    pub fn data(self: KIO__WorkerBase, _data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        qtc.KIO__WorkerBase_Data(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `dataReq` instead
    ///
    pub const DataReq = dataReq;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#dataReq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn dataReq(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_DataReq(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `workerStatus` instead
    ///
    pub const WorkerStatus = workerStatus;

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
    pub fn workerStatus(self: KIO__WorkerBase, host: []const u8, connected: bool) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.KIO__WorkerBase_WorkerStatus(@ptrCast(self.ptr), host_str, connected);
    }

    /// ### DEPRECATED: Use `statEntry` instead
    ///
    pub const StatEntry = statEntry;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#statEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _entry: KIO__UDSEntry `
    ///
    pub fn statEntry(self: KIO__WorkerBase, _entry: anytype) void {
        comptime _ = @TypeOf(_entry)._is_KIO__UDSEntry;
        qtc.KIO__WorkerBase_StatEntry(@ptrCast(self.ptr), @ptrCast(_entry.ptr));
    }

    /// ### DEPRECATED: Use `listEntries` instead
    ///
    pub const ListEntries = listEntries;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#listEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _entry: []KIO__UDSEntry `
    ///
    pub fn listEntries(self: KIO__WorkerBase, _entry: []KIO__UDSEntry) void {
        const _entry_list = qtc.libqt_list{
            .len = _entry.len,
            .data = @ptrCast(_entry.ptr),
        };
        qtc.KIO__WorkerBase_ListEntries(@ptrCast(self.ptr), _entry_list);
    }

    /// ### DEPRECATED: Use `canResume` instead
    ///
    pub const CanResume = canResume;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#canResume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` offset: usize `
    ///
    pub fn canResume(self: KIO__WorkerBase, offset: usize) bool {
        return qtc.KIO__WorkerBase_CanResume(@ptrCast(self.ptr), @bitCast(offset));
    }

    /// ### DEPRECATED: Use `canResume2` instead
    ///
    pub const CanResume2 = canResume2;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#canResume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn canResume2(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_CanResume2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `totalSize` instead
    ///
    pub const TotalSize = totalSize;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _bytes: usize `
    ///
    pub fn totalSize(self: KIO__WorkerBase, _bytes: usize) void {
        qtc.KIO__WorkerBase_TotalSize(@ptrCast(self.ptr), @bitCast(_bytes));
    }

    /// ### DEPRECATED: Use `processedSize` instead
    ///
    pub const ProcessedSize = processedSize;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#processedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _bytes: usize `
    ///
    pub fn processedSize(self: KIO__WorkerBase, _bytes: usize) void {
        qtc.KIO__WorkerBase_ProcessedSize(@ptrCast(self.ptr), @bitCast(_bytes));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _pos: usize `
    ///
    pub fn position(self: KIO__WorkerBase, _pos: usize) void {
        qtc.KIO__WorkerBase_Position(@ptrCast(self.ptr), @bitCast(_pos));
    }

    /// ### DEPRECATED: Use `written` instead
    ///
    pub const Written = written;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#written)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _bytes: usize `
    ///
    pub fn written(self: KIO__WorkerBase, _bytes: usize) void {
        qtc.KIO__WorkerBase_Written(@ptrCast(self.ptr), @bitCast(_bytes));
    }

    /// ### DEPRECATED: Use `truncated` instead
    ///
    pub const Truncated = truncated;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#truncated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _length: usize `
    ///
    pub fn truncated(self: KIO__WorkerBase, _length: usize) void {
        qtc.KIO__WorkerBase_Truncated(@ptrCast(self.ptr), @bitCast(_length));
    }

    /// ### DEPRECATED: Use `speed` instead
    ///
    pub const Speed = speed;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _bytes_per_second: usize `
    ///
    pub fn speed(self: KIO__WorkerBase, _bytes_per_second: usize) void {
        qtc.KIO__WorkerBase_Speed(@ptrCast(self.ptr), @bitCast(_bytes_per_second));
    }

    /// ### DEPRECATED: Use `redirection` instead
    ///
    pub const Redirection = redirection;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#redirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _url: QUrl `
    ///
    pub fn redirection(self: KIO__WorkerBase, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KIO__WorkerBase_Redirection(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `errorPage` instead
    ///
    pub const ErrorPage = errorPage;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#errorPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn errorPage(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_ErrorPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mimeType` instead
    ///
    pub const MimeType = mimeType;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _type: []const u8 `
    ///
    pub fn mimeType(self: KIO__WorkerBase, _type: []const u8) void {
        const _type_str = qtc.libqt_string{
            .len = _type.len,
            .data = _type.ptr,
        };
        qtc.KIO__WorkerBase_MimeType(@ptrCast(self.ptr), _type_str);
    }

    /// ### DEPRECATED: Use `warning` instead
    ///
    pub const Warning = warning;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn warning(self: KIO__WorkerBase, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KIO__WorkerBase_Warning(@ptrCast(self.ptr), msg_str);
    }

    /// ### DEPRECATED: Use `infoMessage` instead
    ///
    pub const InfoMessage = infoMessage;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn infoMessage(self: KIO__WorkerBase, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KIO__WorkerBase_InfoMessage(@ptrCast(self.ptr), msg_str);
    }

    /// ### DEPRECATED: Use `messageBox` instead
    ///
    pub const MessageBox = messageBox;

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
    pub fn messageBox(self: KIO__WorkerBase, typeVal: i32, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox(@ptrCast(self.ptr), @bitCast(typeVal), text_str);
    }

    /// ### DEPRECATED: Use `messageBox2` instead
    ///
    pub const MessageBox2 = messageBox2;

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
    pub fn messageBox2(self: KIO__WorkerBase, text: []const u8, typeVal: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox2(@ptrCast(self.ptr), text_str, @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `sslError` instead
    ///
    pub const SslError = sslError;

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
    pub fn sslError(self: KIO__WorkerBase, allocator: std.mem.Allocator, sslData: ArrayMap_constu8_QVariant) i32 {
        const sslData_count = sslData.count();
        const sslData_keys = allocator.alloc(qtc.libqt_string, sslData_count) catch @panic("KIO__WorkerBase.sslError: Memory allocation failed");
        defer allocator.free(sslData_keys);
        const sslData_values = allocator.alloc(QtC.QVariant, sslData_count) catch @panic("KIO__WorkerBase.sslError: Memory allocation failed");
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

    /// ### DEPRECATED: Use `setMetaData` instead
    ///
    pub const SetMetaData = setMetaData;

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
    pub fn setMetaData(self: KIO__WorkerBase, key: []const u8, value: []const u8) void {
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

    /// ### DEPRECATED: Use `hasMetaData` instead
    ///
    pub const HasMetaData = hasMetaData;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#hasMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` key: []const u8 `
    ///
    pub fn hasMetaData(self: KIO__WorkerBase, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_HasMetaData(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `metaData` instead
    ///
    pub const MetaData = metaData;

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
    pub fn metaData(self: KIO__WorkerBase, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KIO__WorkerBase_MetaData(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__WorkerBase.metaData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `allMetaData` instead
    ///
    pub const AllMetaData = allMetaData;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#allMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn allMetaData(self: KIO__WorkerBase) KIO__MetaData {
        return .{ .ptr = qtc.KIO__WorkerBase_AllMetaData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mapConfig` instead
    ///
    pub const MapConfig = mapConfig;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#mapConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mapConfig(self: KIO__WorkerBase, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.KIO__WorkerBase_MapConfig(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KIO__WorkerBase.mapConfig: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("KIO__WorkerBase.mapConfig: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `configValue` instead
    ///
    pub const ConfigValue = configValue;

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
    pub fn configValue(self: KIO__WorkerBase, key: []const u8, defaultValue: bool) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_ConfigValue(@ptrCast(self.ptr), key_str, defaultValue);
    }

    /// ### DEPRECATED: Use `configValue2` instead
    ///
    pub const ConfigValue2 = configValue2;

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
    pub fn configValue2(self: KIO__WorkerBase, key: []const u8, defaultValue: i32) i32 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_ConfigValue2(@ptrCast(self.ptr), key_str, @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `configValue3` instead
    ///
    pub const ConfigValue3 = configValue3;

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
    pub fn configValue3(self: KIO__WorkerBase, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KIO__WorkerBase_ConfigValue3(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__WorkerBase.configValue3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `config` instead
    ///
    pub const Config = config;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn config(self: KIO__WorkerBase) KConfigGroup {
        return .{ .ptr = qtc.KIO__WorkerBase_Config(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `remoteEncoding` instead
    ///
    pub const RemoteEncoding = remoteEncoding;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#remoteEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn remoteEncoding(self: KIO__WorkerBase) KRemoteEncoding {
        return .{ .ptr = qtc.KIO__WorkerBase_RemoteEncoding(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `appConnectionMade` instead
    ///
    pub const AppConnectionMade = appConnectionMade;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn appConnectionMade(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_AppConnectionMade(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAppConnectionMade` instead
    ///
    pub const OnAppConnectionMade = onAppConnectionMade;

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
    pub fn onAppConnectionMade(self: KIO__WorkerBase, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__WorkerBase_OnAppConnectionMade(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAppConnectionMade` instead
    ///
    pub const SuperAppConnectionMade = superAppConnectionMade;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn superAppConnectionMade(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_SuperAppConnectionMade(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHost` instead
    ///
    pub const SetHost = setHost;

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
    /// ` _pass: []const u8 `
    ///
    pub fn setHost(self: KIO__WorkerBase, host: []const u8, port: u16, user: []const u8, _pass: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const pass_str = qtc.libqt_string{
            .len = _pass.len,
            .data = _pass.ptr,
        };
        qtc.KIO__WorkerBase_SetHost(@ptrCast(self.ptr), host_str, @bitCast(port), user_str, pass_str);
    }

    /// ### DEPRECATED: Use `onSetHost` instead
    ///
    pub const OnSetHost = onSetHost;

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
    pub fn onSetHost(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, [*:0]const u8, u16, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__WorkerBase_OnSetHost(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetHost` instead
    ///
    pub const SuperSetHost = superSetHost;

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
    /// ` _pass: []const u8 `
    ///
    pub fn superSetHost(self: KIO__WorkerBase, host: []const u8, port: u16, user: []const u8, _pass: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const pass_str = qtc.libqt_string{
            .len = _pass.len,
            .data = _pass.ptr,
        };
        qtc.KIO__WorkerBase_SuperSetHost(@ptrCast(self.ptr), host_str, @bitCast(port), user_str, pass_str);
    }

    /// ### DEPRECATED: Use `openConnection` instead
    ///
    pub const OpenConnection = openConnection;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn openConnection(self: KIO__WorkerBase) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_OpenConnection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onOpenConnection` instead
    ///
    pub const OnOpenConnection = onOpenConnection;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onOpenConnection(self: KIO__WorkerBase, callback: *const fn () callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnOpenConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOpenConnection` instead
    ///
    pub const SuperOpenConnection = superOpenConnection;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn superOpenConnection(self: KIO__WorkerBase) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_SuperOpenConnection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `closeConnection` instead
    ///
    pub const CloseConnection = closeConnection;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn closeConnection(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_CloseConnection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCloseConnection` instead
    ///
    pub const OnCloseConnection = onCloseConnection;

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
    pub fn onCloseConnection(self: KIO__WorkerBase, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__WorkerBase_OnCloseConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCloseConnection` instead
    ///
    pub const SuperCloseConnection = superCloseConnection;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn superCloseConnection(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_SuperCloseConnection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `get` instead
    ///
    pub const Get = get;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn get(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Get(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `onGet` instead
    ///
    pub const OnGet = onGet;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGet(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnGet(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGet` instead
    ///
    pub const SuperGet = superGet;

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
    pub fn superGet(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperGet(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

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
    pub fn open(self: KIO__WorkerBase, url: anytype, mode: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Open(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `onOpen` instead
    ///
    pub const OnOpen = onOpen;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onOpen(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOpen` instead
    ///
    pub const SuperOpen = superOpen;

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
    pub fn superOpen(self: KIO__WorkerBase, url: anytype, mode: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperOpen(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` size: usize `
    ///
    pub fn read(self: KIO__WorkerBase, size: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_Read(@ptrCast(self.ptr), @bitCast(size)) };
    }

    /// ### DEPRECATED: Use `onRead` instead
    ///
    pub const OnRead = onRead;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onRead(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, usize) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRead` instead
    ///
    pub const SuperRead = superRead;

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
    pub fn superRead(self: KIO__WorkerBase, size: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_SuperRead(@ptrCast(self.ptr), @bitCast(size)) };
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _data: []u8 `
    ///
    pub fn write(self: KIO__WorkerBase, _data: []u8) KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        return .{ .ptr = qtc.KIO__WorkerBase_Write(@ptrCast(self.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `onWrite` instead
    ///
    pub const OnWrite = onWrite;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onWrite(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, qtc.libqt_string) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWrite` instead
    ///
    pub const SuperWrite = superWrite;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _data: []u8 `
    ///
    pub fn superWrite(self: KIO__WorkerBase, _data: []u8) KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        return .{ .ptr = qtc.KIO__WorkerBase_SuperWrite(@ptrCast(self.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `seek` instead
    ///
    pub const Seek = seek;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#seek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` offset: usize `
    ///
    pub fn seek(self: KIO__WorkerBase, offset: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_Seek(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `onSeek` instead
    ///
    pub const OnSeek = onSeek;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSeek(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, usize) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSeek` instead
    ///
    pub const SuperSeek = superSeek;

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
    pub fn superSeek(self: KIO__WorkerBase, offset: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_SuperSeek(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `truncate` instead
    ///
    pub const Truncate = truncate;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#truncate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` size: usize `
    ///
    pub fn truncate(self: KIO__WorkerBase, size: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_Truncate(@ptrCast(self.ptr), @bitCast(size)) };
    }

    /// ### DEPRECATED: Use `onTruncate` instead
    ///
    pub const OnTruncate = onTruncate;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onTruncate(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, usize) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnTruncate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTruncate` instead
    ///
    pub const SuperTruncate = superTruncate;

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
    pub fn superTruncate(self: KIO__WorkerBase, size: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_SuperTruncate(@ptrCast(self.ptr), @bitCast(size)) };
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn close(self: KIO__WorkerBase) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_Close(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClose` instead
    ///
    pub const OnClose = onClose;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onClose(self: KIO__WorkerBase, callback: *const fn () callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClose` instead
    ///
    pub const SuperClose = superClose;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn superClose(self: KIO__WorkerBase) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__WorkerBase_SuperClose(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `put` instead
    ///
    pub const Put = put;

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
    pub fn put(self: KIO__WorkerBase, url: anytype, permissions: i32, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Put(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `onPut` instead
    ///
    pub const OnPut = onPut;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onPut(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, i32, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnPut(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPut` instead
    ///
    pub const SuperPut = superPut;

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
    pub fn superPut(self: KIO__WorkerBase, url: anytype, permissions: i32, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperPut(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `stat` instead
    ///
    pub const Stat = stat;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#stat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn stat(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Stat(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `onStat` instead
    ///
    pub const OnStat = onStat;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onStat(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnStat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStat` instead
    ///
    pub const SuperStat = superStat;

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
    pub fn superStat(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperStat(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `mimetype` instead
    ///
    pub const Mimetype = mimetype;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#mimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn mimetype(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Mimetype(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `onMimetype` instead
    ///
    pub const OnMimetype = onMimetype;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMimetype(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnMimetype(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMimetype` instead
    ///
    pub const SuperMimetype = superMimetype;

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
    pub fn superMimetype(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperMimetype(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `listDir` instead
    ///
    pub const ListDir = listDir;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#listDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn listDir(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_ListDir(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `onListDir` instead
    ///
    pub const OnListDir = onListDir;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onListDir(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnListDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superListDir` instead
    ///
    pub const SuperListDir = superListDir;

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
    pub fn superListDir(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperListDir(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `mkdir` instead
    ///
    pub const Mkdir = mkdir;

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
    pub fn mkdir(self: KIO__WorkerBase, url: anytype, permissions: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Mkdir(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions)) };
    }

    /// ### DEPRECATED: Use `onMkdir` instead
    ///
    pub const OnMkdir = onMkdir;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMkdir(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnMkdir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMkdir` instead
    ///
    pub const SuperMkdir = superMkdir;

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
    pub fn superMkdir(self: KIO__WorkerBase, url: anytype, permissions: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperMkdir(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions)) };
    }

    /// ### DEPRECATED: Use `rename` instead
    ///
    pub const Rename = rename;

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
    pub fn rename(self: KIO__WorkerBase, src: anytype, dest: anytype, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Rename(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `onRename` instead
    ///
    pub const OnRename = onRename;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onRename(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnRename(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRename` instead
    ///
    pub const SuperRename = superRename;

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
    pub fn superRename(self: KIO__WorkerBase, src: anytype, dest: anytype, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperRename(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `symlink` instead
    ///
    pub const Symlink = symlink;

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
    pub fn symlink(self: KIO__WorkerBase, target: []const u8, dest: anytype, flags: i32) KIO__WorkerResult {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Symlink(@ptrCast(self.ptr), target_str, @ptrCast(dest.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `onSymlink` instead
    ///
    pub const OnSymlink = onSymlink;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSymlink(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, [*:0]const u8, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnSymlink(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSymlink` instead
    ///
    pub const SuperSymlink = superSymlink;

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
    pub fn superSymlink(self: KIO__WorkerBase, target: []const u8, dest: anytype, flags: i32) KIO__WorkerResult {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperSymlink(@ptrCast(self.ptr), target_str, @ptrCast(dest.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `chmod` instead
    ///
    pub const Chmod = chmod;

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
    pub fn chmod(self: KIO__WorkerBase, url: anytype, permissions: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Chmod(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions)) };
    }

    /// ### DEPRECATED: Use `onChmod` instead
    ///
    pub const OnChmod = onChmod;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onChmod(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnChmod(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChmod` instead
    ///
    pub const SuperChmod = superChmod;

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
    pub fn superChmod(self: KIO__WorkerBase, url: anytype, permissions: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperChmod(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions)) };
    }

    /// ### DEPRECATED: Use `chown` instead
    ///
    pub const Chown = chown;

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
    pub fn chown(self: KIO__WorkerBase, url: anytype, owner: []const u8, group: []const u8) KIO__WorkerResult {
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

    /// ### DEPRECATED: Use `onChown` instead
    ///
    pub const OnChown = onChown;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onChown(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, [*:0]const u8, [*:0]const u8) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnChown(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChown` instead
    ///
    pub const SuperChown = superChown;

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
    pub fn superChown(self: KIO__WorkerBase, url: anytype, owner: []const u8, group: []const u8) KIO__WorkerResult {
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

    /// ### DEPRECATED: Use `setModificationTime` instead
    ///
    pub const SetModificationTime = setModificationTime;

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
    pub fn setModificationTime(self: KIO__WorkerBase, url: anytype, mtime: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        return .{ .ptr = qtc.KIO__WorkerBase_SetModificationTime(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(mtime.ptr)) };
    }

    /// ### DEPRECATED: Use `onSetModificationTime` instead
    ///
    pub const OnSetModificationTime = onSetModificationTime;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSetModificationTime(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, QDateTime) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnSetModificationTime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetModificationTime` instead
    ///
    pub const SuperSetModificationTime = superSetModificationTime;

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
    pub fn superSetModificationTime(self: KIO__WorkerBase, url: anytype, mtime: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperSetModificationTime(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(mtime.ptr)) };
    }

    /// ### DEPRECATED: Use `copy` instead
    ///
    pub const Copy = copy;

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
    pub fn copy(self: KIO__WorkerBase, src: anytype, dest: anytype, permissions: i32, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Copy(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(permissions), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `onCopy` instead
    ///
    pub const OnCopy = onCopy;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCopy(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, QUrl, i32, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnCopy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCopy` instead
    ///
    pub const SuperCopy = superCopy;

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
    pub fn superCopy(self: KIO__WorkerBase, src: anytype, dest: anytype, permissions: i32, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperCopy(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(permissions), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `del` instead
    ///
    pub const Del = del;

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
    pub fn del(self: KIO__WorkerBase, url: anytype, isfile: bool) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_Del(@ptrCast(self.ptr), @ptrCast(url.ptr), isfile) };
    }

    /// ### DEPRECATED: Use `onDel` instead
    ///
    pub const OnDel = onDel;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDel(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl, bool) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnDel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDel` instead
    ///
    pub const SuperDel = superDel;

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
    pub fn superDel(self: KIO__WorkerBase, url: anytype, isfile: bool) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperDel(@ptrCast(self.ptr), @ptrCast(url.ptr), isfile) };
    }

    /// ### DEPRECATED: Use `special` instead
    ///
    pub const Special = special;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _data: []u8 `
    ///
    pub fn special(self: KIO__WorkerBase, _data: []u8) KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        return .{ .ptr = qtc.KIO__WorkerBase_Special(@ptrCast(self.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `onSpecial` instead
    ///
    pub const OnSpecial = onSpecial;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSpecial(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, qtc.libqt_string) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnSpecial(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSpecial` instead
    ///
    pub const SuperSpecial = superSpecial;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _data: []u8 `
    ///
    pub fn superSpecial(self: KIO__WorkerBase, _data: []u8) KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        return .{ .ptr = qtc.KIO__WorkerBase_SuperSpecial(@ptrCast(self.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `fileSystemFreeSpace` instead
    ///
    pub const FileSystemFreeSpace = fileSystemFreeSpace;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn fileSystemFreeSpace(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_FileSystemFreeSpace(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `onFileSystemFreeSpace` instead
    ///
    pub const OnFileSystemFreeSpace = onFileSystemFreeSpace;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFileSystemFreeSpace(self: KIO__WorkerBase, callback: *const fn (KIO__WorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__WorkerBase_OnFileSystemFreeSpace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFileSystemFreeSpace` instead
    ///
    pub const SuperFileSystemFreeSpace = superFileSystemFreeSpace;

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
    pub fn superFileSystemFreeSpace(self: KIO__WorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__WorkerBase_SuperFileSystemFreeSpace(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `workerStatus2` instead
    ///
    pub const WorkerStatus2 = workerStatus2;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn workerStatus2(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_WorkerStatus2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWorkerStatus2` instead
    ///
    pub const OnWorkerStatus2 = onWorkerStatus2;

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
    pub fn onWorkerStatus2(self: KIO__WorkerBase, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__WorkerBase_OnWorkerStatus2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWorkerStatus2` instead
    ///
    pub const SuperWorkerStatus2 = superWorkerStatus2;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn superWorkerStatus2(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_SuperWorkerStatus2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reparseConfiguration` instead
    ///
    pub const ReparseConfiguration = reparseConfiguration;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn reparseConfiguration(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_ReparseConfiguration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReparseConfiguration` instead
    ///
    pub const OnReparseConfiguration = onReparseConfiguration;

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
    pub fn onReparseConfiguration(self: KIO__WorkerBase, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__WorkerBase_OnReparseConfiguration(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReparseConfiguration` instead
    ///
    pub const SuperReparseConfiguration = superReparseConfiguration;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn superReparseConfiguration(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_SuperReparseConfiguration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `connectTimeout` instead
    ///
    pub const ConnectTimeout = connectTimeout;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#connectTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn connectTimeout(self: KIO__WorkerBase) i32 {
        return qtc.KIO__WorkerBase_ConnectTimeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `proxyConnectTimeout` instead
    ///
    pub const ProxyConnectTimeout = proxyConnectTimeout;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#proxyConnectTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn proxyConnectTimeout(self: KIO__WorkerBase) i32 {
        return qtc.KIO__WorkerBase_ProxyConnectTimeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `responseTimeout` instead
    ///
    pub const ResponseTimeout = responseTimeout;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#responseTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn responseTimeout(self: KIO__WorkerBase) i32 {
        return qtc.KIO__WorkerBase_ResponseTimeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readTimeout` instead
    ///
    pub const ReadTimeout = readTimeout;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#readTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn readTimeout(self: KIO__WorkerBase) i32 {
        return qtc.KIO__WorkerBase_ReadTimeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimeoutSpecialCommand` instead
    ///
    pub const SetTimeoutSpecialCommand = setTimeoutSpecialCommand;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setTimeoutSpecialCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` timeout: i32 `
    ///
    pub fn setTimeoutSpecialCommand(self: KIO__WorkerBase, timeout: i32) void {
        qtc.KIO__WorkerBase_SetTimeoutSpecialCommand(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `readData` instead
    ///
    pub const ReadData = readData;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#readData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` buffer: []u8 `
    ///
    pub fn readData(self: KIO__WorkerBase, buffer: []u8) i32 {
        const buffer_str = qtc.libqt_string{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        return qtc.KIO__WorkerBase_ReadData(@ptrCast(self.ptr), buffer_str);
    }

    /// ### DEPRECATED: Use `listEntry` instead
    ///
    pub const ListEntry = listEntry;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#listEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` entry: KIO__UDSEntry `
    ///
    pub fn listEntry(self: KIO__WorkerBase, entry: anytype) void {
        comptime _ = @TypeOf(entry)._is_KIO__UDSEntry;
        qtc.KIO__WorkerBase_ListEntry(@ptrCast(self.ptr), @ptrCast(entry.ptr));
    }

    /// ### DEPRECATED: Use `connectWorker` instead
    ///
    pub const ConnectWorker = connectWorker;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#connectWorker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` path: []const u8 `
    ///
    pub fn connectWorker(self: KIO__WorkerBase, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KIO__WorkerBase_ConnectWorker(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `disconnectWorker` instead
    ///
    pub const DisconnectWorker = disconnectWorker;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#disconnectWorker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn disconnectWorker(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_DisconnectWorker(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `openPasswordDialog` instead
    ///
    pub const OpenPasswordDialog = openPasswordDialog;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openPasswordDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` info: KIO__AuthInfo `
    ///
    pub fn openPasswordDialog(self: KIO__WorkerBase, info: anytype) i32 {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        return qtc.KIO__WorkerBase_OpenPasswordDialog(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### DEPRECATED: Use `checkCachedAuthentication` instead
    ///
    pub const CheckCachedAuthentication = checkCachedAuthentication;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#checkCachedAuthentication)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` info: KIO__AuthInfo `
    ///
    pub fn checkCachedAuthentication(self: KIO__WorkerBase, info: anytype) bool {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        return qtc.KIO__WorkerBase_CheckCachedAuthentication(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### DEPRECATED: Use `cacheAuthentication` instead
    ///
    pub const CacheAuthentication = cacheAuthentication;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#cacheAuthentication)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` info: KIO__AuthInfo `
    ///
    pub fn cacheAuthentication(self: KIO__WorkerBase, info: anytype) bool {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        return qtc.KIO__WorkerBase_CacheAuthentication(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### DEPRECATED: Use `waitForAnswer` instead
    ///
    pub const WaitForAnswer = waitForAnswer;

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
    /// ` _data: []u8 `
    ///
    pub fn waitForAnswer(self: KIO__WorkerBase, expected1: i32, expected2: i32, _data: []u8) i32 {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        return qtc.KIO__WorkerBase_WaitForAnswer(@ptrCast(self.ptr), @bitCast(expected1), @bitCast(expected2), data_str);
    }

    /// ### DEPRECATED: Use `sendMetaData` instead
    ///
    pub const SendMetaData = sendMetaData;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#sendMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn sendMetaData(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_SendMetaData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sendAndKeepMetaData` instead
    ///
    pub const SendAndKeepMetaData = sendAndKeepMetaData;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#sendAndKeepMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn sendAndKeepMetaData(self: KIO__WorkerBase) void {
        qtc.KIO__WorkerBase_SendAndKeepMetaData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `wasKilled` instead
    ///
    pub const WasKilled = wasKilled;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#wasKilled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn wasKilled(self: KIO__WorkerBase) bool {
        return qtc.KIO__WorkerBase_WasKilled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lookupHost` instead
    ///
    pub const LookupHost = lookupHost;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#lookupHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` host: []const u8 `
    ///
    pub fn lookupHost(self: KIO__WorkerBase, host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.KIO__WorkerBase_LookupHost(@ptrCast(self.ptr), host_str);
    }

    /// ### DEPRECATED: Use `waitForHostInfo` instead
    ///
    pub const WaitForHostInfo = waitForHostInfo;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#waitForHostInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` info: QHostInfo `
    ///
    pub fn waitForHostInfo(self: KIO__WorkerBase, info: anytype) i32 {
        comptime _ = @TypeOf(info)._is_QHostInfo;
        return qtc.KIO__WorkerBase_WaitForHostInfo(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### DEPRECATED: Use `requestPrivilegeOperation` instead
    ///
    pub const RequestPrivilegeOperation = requestPrivilegeOperation;

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
    pub fn requestPrivilegeOperation(self: KIO__WorkerBase, operationDetails: []const u8) i32 {
        const operationDetails_str = qtc.libqt_string{
            .len = operationDetails.len,
            .data = operationDetails.ptr,
        };
        return qtc.KIO__WorkerBase_RequestPrivilegeOperation(@ptrCast(self.ptr), operationDetails_str);
    }

    /// ### DEPRECATED: Use `addTemporaryAuthorization` instead
    ///
    pub const AddTemporaryAuthorization = addTemporaryAuthorization;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#addTemporaryAuthorization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` action: []const u8 `
    ///
    pub fn addTemporaryAuthorization(self: KIO__WorkerBase, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KIO__WorkerBase_AddTemporaryAuthorization(@ptrCast(self.ptr), action_str);
    }

    /// ### DEPRECATED: Use `setIncomingMetaData` instead
    ///
    pub const SetIncomingMetaData = setIncomingMetaData;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setIncomingMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` _metaData: KIO__MetaData `
    ///
    pub fn setIncomingMetaData(self: KIO__WorkerBase, _metaData: anytype) void {
        comptime _ = @TypeOf(_metaData)._is_KIO__MetaData;
        qtc.KIO__WorkerBase_SetIncomingMetaData(@ptrCast(self.ptr), @ptrCast(_metaData.ptr));
    }

    /// ### DEPRECATED: Use `messageBox3` instead
    ///
    pub const MessageBox3 = messageBox3;

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
    pub fn messageBox3(self: KIO__WorkerBase, typeVal: i32, text: []const u8, title: []const u8) i32 {
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

    /// ### DEPRECATED: Use `messageBox4` instead
    ///
    pub const MessageBox4 = messageBox4;

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
    pub fn messageBox4(self: KIO__WorkerBase, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8) i32 {
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

    /// ### DEPRECATED: Use `messageBox5` instead
    ///
    pub const MessageBox5 = messageBox5;

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
    pub fn messageBox5(self: KIO__WorkerBase, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8) i32 {
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

    /// ### DEPRECATED: Use `messageBox32` instead
    ///
    pub const MessageBox32 = messageBox32;

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
    pub fn messageBox32(self: KIO__WorkerBase, text: []const u8, typeVal: i32, title: []const u8) i32 {
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

    /// ### DEPRECATED: Use `messageBox42` instead
    ///
    pub const MessageBox42 = messageBox42;

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
    pub fn messageBox42(self: KIO__WorkerBase, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8) i32 {
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

    /// ### DEPRECATED: Use `messageBox52` instead
    ///
    pub const MessageBox52 = messageBox52;

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
    pub fn messageBox52(self: KIO__WorkerBase, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8) i32 {
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

    /// ### DEPRECATED: Use `messageBox6` instead
    ///
    pub const MessageBox6 = messageBox6;

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
    pub fn messageBox6(self: KIO__WorkerBase, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8, dontAskAgainName: []const u8) i32 {
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

    /// ### DEPRECATED: Use `configValue22` instead
    ///
    pub const ConfigValue22 = configValue22;

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
    pub fn configValue22(self: KIO__WorkerBase, allocator: std.mem.Allocator, key: []const u8, defaultValue: []const u8) []const u8 {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__WorkerBase.configValue22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTimeoutSpecialCommand2` instead
    ///
    pub const SetTimeoutSpecialCommand2 = setTimeoutSpecialCommand2;

    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setTimeoutSpecialCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WorkerBase `
    ///
    /// ` timeout: i32 `
    ///
    /// ` _data: []u8 `
    ///
    pub fn setTimeoutSpecialCommand2(self: KIO__WorkerBase, timeout: i32, _data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        qtc.KIO__WorkerBase_SetTimeoutSpecialCommand2(@ptrCast(self.ptr), @bitCast(timeout), data_str);
    }

    /// ### DEPRECATED: Use `openPasswordDialog2` instead
    ///
    pub const OpenPasswordDialog2 = openPasswordDialog2;

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
    pub fn openPasswordDialog2(self: KIO__WorkerBase, info: anytype, errorMsg: []const u8) i32 {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        const errorMsg_str = qtc.libqt_string{
            .len = errorMsg.len,
            .data = errorMsg.ptr,
        };
        return qtc.KIO__WorkerBase_OpenPasswordDialog2(@ptrCast(self.ptr), @ptrCast(info.ptr), errorMsg_str);
    }

    /// ### DEPRECATED: Use `waitForAnswer4` instead
    ///
    pub const WaitForAnswer4 = waitForAnswer4;

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
    /// ` _data: []u8 `
    ///
    /// ` pCmd: *i32 `
    ///
    pub fn waitForAnswer4(self: KIO__WorkerBase, expected1: i32, expected2: i32, _data: []u8, pCmd: *i32) i32 {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        return qtc.KIO__WorkerBase_WaitForAnswer4(@ptrCast(self.ptr), @bitCast(expected1), @bitCast(expected2), data_str, @ptrCast(pCmd));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__WorkerBase `
    ///
    pub fn delete(self: KIO__WorkerBase) void {
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

    /// ### DEPRECATED: Use `unsupportedActionErrorString` instead
    ///
    pub const UnsupportedActionErrorString = unsupportedActionErrorString;

    /// ### [Upstream resources](https://api.kde.org/kio.html#unsupportedActionErrorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` protocol: []const u8 `
    ///
    /// ` cmd: i32 `
    ///
    pub fn unsupportedActionErrorString(allocator: std.mem.Allocator, protocol: []const u8, cmd: i32) []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        var _str = qtc.KIO_UnsupportedActionErrorString(protocol_str, @bitCast(cmd));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO.unsupportedActionErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#public-types)
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
