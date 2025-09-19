const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kjob_enums = @import("../extras-kcoreaddons/libkjob.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);
pub const struct_constu8_constu8 = extern struct { first: []const u8, second: []const u8 };

/// https://api.kde.org/kio-specialjob.html
pub const kio__specialjob = struct {
    /// New constructs a new KIO::SpecialJob object.
    ///
    /// ``` url: QtC.QUrl ```
    pub fn New(url: ?*anyopaque) QtC.KIO__SpecialJob {
        return qtc.KIO__SpecialJob_new(@ptrCast(url));
    }

    /// New2 constructs a new KIO::SpecialJob object.
    ///
    /// ``` url: QtC.QUrl, data: []u8 ```
    pub fn New2(url: ?*anyopaque, data: []u8) QtC.KIO__SpecialJob {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };

        return qtc.KIO__SpecialJob_new2(@ptrCast(url), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KIO__SpecialJob_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KIO__SpecialJob, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__SpecialJob_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KIO__SpecialJob, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KIO__SpecialJob_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KIO__SpecialJob_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KIO__SpecialJob, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KIO__SpecialJob_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KIO__SpecialJob_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::specialjob.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-specialjob.html#setArguments)
    ///
    /// ``` self: QtC.KIO__SpecialJob, data: []u8 ```
    pub fn SetArguments(self: ?*anyopaque, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KIO__SpecialJob_SetArguments(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-specialjob.html#arguments)
    ///
    /// ``` self: QtC.KIO__SpecialJob, allocator: std.mem.Allocator ```
    pub fn Arguments(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KIO__SpecialJob_Arguments(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kio::specialjob.Arguments: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KIO__SpecialJob_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::specialjob.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KIO__SpecialJob_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::specialjob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#setModificationTime)
    ///
    /// ``` self: QtC.KIO__SpecialJob, mtime: QtC.QDateTime ```
    pub fn SetModificationTime(self: ?*anyopaque, mtime: ?*anyopaque) void {
        qtc.KIO__TransferJob_SetModificationTime(@ptrCast(self), @ptrCast(mtime));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#isErrorPage)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn IsErrorPage(self: ?*anyopaque) bool {
        return qtc.KIO__TransferJob_IsErrorPage(@ptrCast(self));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#setAsyncDataEnabled)
    ///
    /// ``` self: QtC.KIO__SpecialJob, enabled: bool ```
    pub fn SetAsyncDataEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.KIO__TransferJob_SetAsyncDataEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#sendAsyncData)
    ///
    /// ``` self: QtC.KIO__SpecialJob, data: []u8 ```
    pub fn SendAsyncData(self: ?*anyopaque, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KIO__TransferJob_SendAsyncData(@ptrCast(self), data_str);
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#mimetype)
    ///
    /// ``` self: QtC.KIO__SpecialJob, allocator: std.mem.Allocator ```
    pub fn Mimetype(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIO__TransferJob_Mimetype(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::specialjob.Mimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#redirectUrl)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn RedirectUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.KIO__TransferJob_RedirectUrl(@ptrCast(self));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#setTotalSize)
    ///
    /// ``` self: QtC.KIO__SpecialJob, bytes: u64 ```
    pub fn SetTotalSize(self: ?*anyopaque, bytes: u64) void {
        qtc.KIO__TransferJob_SetTotalSize(@ptrCast(self), @intCast(bytes));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#data)
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KIO__Job, data: []u8 ```
    pub fn Data(self: ?*anyopaque, job: ?*anyopaque, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KIO__TransferJob_Data(@ptrCast(self), @ptrCast(job), data_str);
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#data)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KIO__Job, data: [*:0]u8) callconv(.c) void ```
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]u8) callconv(.c) void) void {
        qtc.KIO__TransferJob_Connect_Data(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#dataReq)
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KIO__Job, data: []u8 ```
    pub fn DataReq(self: ?*anyopaque, job: ?*anyopaque, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KIO__TransferJob_DataReq(@ptrCast(self), @ptrCast(job), data_str);
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#dataReq)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KIO__Job, data: [*:0]u8) callconv(.c) void ```
    pub fn OnDataReq(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]u8) callconv(.c) void) void {
        qtc.KIO__TransferJob_Connect_DataReq(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#redirection)
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KIO__Job, url: QtC.QUrl ```
    pub fn Redirection(self: ?*anyopaque, job: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KIO__TransferJob_Redirection(@ptrCast(self), @ptrCast(job), @ptrCast(url));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#redirection)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KIO__Job, url: QtC.QUrl) callconv(.c) void ```
    pub fn OnRedirection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__TransferJob_Connect_Redirection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#permanentRedirection)
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KIO__Job, fromUrl: QtC.QUrl, toUrl: QtC.QUrl ```
    pub fn PermanentRedirection(self: ?*anyopaque, job: ?*anyopaque, fromUrl: ?*anyopaque, toUrl: ?*anyopaque) void {
        qtc.KIO__TransferJob_PermanentRedirection(@ptrCast(self), @ptrCast(job), @ptrCast(fromUrl), @ptrCast(toUrl));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#permanentRedirection)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KIO__Job, fromUrl: QtC.QUrl, toUrl: QtC.QUrl) callconv(.c) void ```
    pub fn OnPermanentRedirection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__TransferJob_Connect_PermanentRedirection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#mimeTypeFound)
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KIO__Job, mimeType: []const u8 ```
    pub fn MimeTypeFound(self: ?*anyopaque, job: ?*anyopaque, mimeType: []const u8) void {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        qtc.KIO__TransferJob_MimeTypeFound(@ptrCast(self), @ptrCast(job), mimeType_str);
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#mimeTypeFound)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KIO__Job, mimeType: [*:0]const u8) callconv(.c) void ```
    pub fn OnMimeTypeFound(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__TransferJob_Connect_MimeTypeFound(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#canResume)
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KIO__Job, offset: u64 ```
    pub fn CanResume(self: ?*anyopaque, job: ?*anyopaque, offset: u64) void {
        qtc.KIO__TransferJob_CanResume(@ptrCast(self), @ptrCast(job), @intCast(offset));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#canResume)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KIO__Job, offset: u64) callconv(.c) void ```
    pub fn OnCanResume(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KIO__TransferJob_Connect_CanResume(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#url)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.KIO__SimpleJob_Url(@ptrCast(self));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#removeOnHold)
    ///
    ///
    pub fn RemoveOnHold() void {
        qtc.KIO__SimpleJob_RemoveOnHold();
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#isRedirectionHandlingEnabled)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn IsRedirectionHandlingEnabled(self: ?*anyopaque) bool {
        return qtc.KIO__SimpleJob_IsRedirectionHandlingEnabled(@ptrCast(self));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#setRedirectionHandlingEnabled)
    ///
    /// ``` self: QtC.KIO__SpecialJob, handle: bool ```
    pub fn SetRedirectionHandlingEnabled(self: ?*anyopaque, handle: bool) void {
        qtc.KIO__SimpleJob_SetRedirectionHandlingEnabled(@ptrCast(self), handle);
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#slotError)
    ///
    /// ``` self: QtC.KIO__SpecialJob, param1: i32, param2: []const u8 ```
    pub fn SlotError(self: ?*anyopaque, param1: i32, param2: []const u8) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.KIO__SimpleJob_SlotError(@ptrCast(self), @intCast(param1), param2_str);
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#uiDelegateExtension)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn UiDelegateExtension(self: ?*anyopaque) QtC.KIO__JobUiDelegateExtension {
        return qtc.KIO__Job_UiDelegateExtension(@ptrCast(self));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#setUiDelegateExtension)
    ///
    /// ``` self: QtC.KIO__SpecialJob, extension: QtC.KIO__JobUiDelegateExtension ```
    pub fn SetUiDelegateExtension(self: ?*anyopaque, extension: ?*anyopaque) void {
        qtc.KIO__Job_SetUiDelegateExtension(@ptrCast(self), @ptrCast(extension));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ``` self: QtC.KIO__SpecialJob, allocator: std.mem.Allocator ```
    pub fn DetailedErrorStrings(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kio::specialjob.DetailedErrorStrings: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio::specialjob.DetailedErrorStrings: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#setParentJob)
    ///
    /// ``` self: QtC.KIO__SpecialJob, parentJob: QtC.KIO__Job ```
    pub fn SetParentJob(self: ?*anyopaque, parentJob: ?*anyopaque) void {
        qtc.KIO__Job_SetParentJob(@ptrCast(self), @ptrCast(parentJob));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#parentJob)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn ParentJob(self: ?*anyopaque) QtC.KIO__Job {
        return qtc.KIO__Job_ParentJob(@ptrCast(self));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#setMetaData)
    ///
    /// ``` self: QtC.KIO__SpecialJob, metaData: QtC.KIO__MetaData ```
    pub fn SetMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.KIO__Job_SetMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#addMetaData)
    ///
    /// ``` self: QtC.KIO__SpecialJob, key: []const u8, value: []const u8 ```
    pub fn AddMetaData(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KIO__Job_AddMetaData(@ptrCast(self), key_str, value_str);
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#addMetaData)
    ///
    /// ``` self: QtC.KIO__SpecialJob, values: map_constu8_constu8, allocator: std.mem.Allocator ```
    pub fn AddMetaData2(self: ?*anyopaque, values: map_constu8_constu8, allocator: std.mem.Allocator) void {
        const values_keys = allocator.alloc(qtc.libqt_string, values.count()) catch @panic("kio::specialjob.AddMetaData2: Memory allocation failed");
        defer allocator.free(values_keys);
        const values_values = allocator.alloc([]const u8, values.count()) catch @panic("kio::specialjob.AddMetaData2: Memory allocation failed");
        defer allocator.free(values_values);
        var i: usize = 0;
        var values_it = values.iterator();
        while (values_it.next()) |entry| {
            const key = entry.key_ptr.*;
            values_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            values_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const values_map = qtc.libqt_map{
            .len = values.count(),
            .keys = @ptrCast(values_keys.ptr),
            .values = @ptrCast(values_values.ptr),
        };
        qtc.KIO__Job_AddMetaData2(@ptrCast(self), values_map);
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#mergeMetaData)
    ///
    /// ``` self: QtC.KIO__SpecialJob, values: map_constu8_constu8, allocator: std.mem.Allocator ```
    pub fn MergeMetaData(self: ?*anyopaque, values: map_constu8_constu8, allocator: std.mem.Allocator) void {
        const values_keys = allocator.alloc(qtc.libqt_string, values.count()) catch @panic("kio::specialjob.MergeMetaData: Memory allocation failed");
        defer allocator.free(values_keys);
        const values_values = allocator.alloc([]const u8, values.count()) catch @panic("kio::specialjob.MergeMetaData: Memory allocation failed");
        defer allocator.free(values_values);
        var i: usize = 0;
        var values_it = values.iterator();
        while (values_it.next()) |entry| {
            const key = entry.key_ptr.*;
            values_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            values_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const values_map = qtc.libqt_map{
            .len = values.count(),
            .keys = @ptrCast(values_keys.ptr),
            .values = @ptrCast(values_values.ptr),
        };
        qtc.KIO__Job_MergeMetaData(@ptrCast(self), values_map);
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#outgoingMetaData)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn OutgoingMetaData(self: ?*anyopaque) QtC.KIO__MetaData {
        return qtc.KIO__Job_OutgoingMetaData(@ptrCast(self));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#metaData)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn MetaData(self: ?*anyopaque) QtC.KIO__MetaData {
        return qtc.KIO__Job_MetaData(@ptrCast(self));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#queryMetaData)
    ///
    /// ``` self: QtC.KIO__SpecialJob, key: []const u8, allocator: std.mem.Allocator ```
    pub fn QueryMetaData(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.KIO__Job_QueryMetaData(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::specialjob.QueryMetaData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#connected)
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KIO__Job ```
    pub fn Connected(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KIO__Job_Connected(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#connected)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KIO__Job) callconv(.c) void ```
    pub fn OnConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__Job_Connect_Connected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ``` self: QtC.KIO__SpecialJob, reqUrl: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn DetailedErrorStrings1(self: ?*anyopaque, reqUrl: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings1(@ptrCast(self), @ptrCast(reqUrl));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kio::specialjob.DetailedErrorStrings1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio::specialjob.DetailedErrorStrings1: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ``` self: QtC.KIO__SpecialJob, reqUrl: QtC.QUrl, method: i32, allocator: std.mem.Allocator ```
    pub fn DetailedErrorStrings2(self: ?*anyopaque, reqUrl: ?*anyopaque, method: i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings2(@ptrCast(self), @ptrCast(reqUrl), @intCast(method));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kio::specialjob.DetailedErrorStrings2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio::specialjob.DetailedErrorStrings2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setUiDelegate)
    ///
    /// ``` self: QtC.KIO__SpecialJob, delegate: QtC.KJobUiDelegate ```
    pub fn SetUiDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.KJob_SetUiDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#uiDelegate)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn UiDelegate(self: ?*anyopaque) QtC.KJobUiDelegate {
        return qtc.KJob_UiDelegate(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#capabilities)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    ///
    /// Returns: ``` flag of kjob_enums.Capability ```
    pub fn Capabilities(self: ?*anyopaque) i32 {
        return qtc.KJob_Capabilities(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isSuspended)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn IsSuspended(self: ?*anyopaque) bool {
        return qtc.KJob_IsSuspended(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#kill)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn Kill(self: ?*anyopaque) bool {
        return qtc.KJob_Kill(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#suspend)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn Suspend(self: ?*anyopaque) bool {
        return qtc.KJob_Suspend(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#resume)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn Resume(self: ?*anyopaque) bool {
        return qtc.KJob_Resume(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#exec)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn Exec(self: ?*anyopaque) bool {
        return qtc.KJob_Exec(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#error)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.KJob_Error(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#errorText)
    ///
    /// ``` self: QtC.KIO__SpecialJob, allocator: std.mem.Allocator ```
    pub fn ErrorText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KJob_ErrorText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::specialjob.ErrorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#processedAmount)
    ///
    /// ``` self: QtC.KIO__SpecialJob, unit: kjob_enums.Unit ```
    pub fn ProcessedAmount(self: ?*anyopaque, unit: i32) u64 {
        return qtc.KJob_ProcessedAmount(@ptrCast(self), @intCast(unit));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#totalAmount)
    ///
    /// ``` self: QtC.KIO__SpecialJob, unit: kjob_enums.Unit ```
    pub fn TotalAmount(self: ?*anyopaque, unit: i32) u64 {
        return qtc.KJob_TotalAmount(@ptrCast(self), @intCast(unit));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#percent)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn Percent(self: ?*anyopaque) u64 {
        return qtc.KJob_Percent(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setAutoDelete)
    ///
    /// ``` self: QtC.KIO__SpecialJob, autodelete: bool ```
    pub fn SetAutoDelete(self: ?*anyopaque, autodelete: bool) void {
        qtc.KJob_SetAutoDelete(@ptrCast(self), autodelete);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isAutoDelete)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn IsAutoDelete(self: ?*anyopaque) bool {
        return qtc.KJob_IsAutoDelete(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn SetFinishedNotificationHidden(self: ?*anyopaque) void {
        qtc.KJob_SetFinishedNotificationHidden(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn IsFinishedNotificationHidden(self: ?*anyopaque) bool {
        return qtc.KJob_IsFinishedNotificationHidden(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isStartedWithExec)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn IsStartedWithExec(self: ?*anyopaque) bool {
        return qtc.KJob_IsStartedWithExec(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#elapsedTime)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn ElapsedTime(self: ?*anyopaque) i64 {
        return qtc.KJob_ElapsedTime(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KJob, title: []const u8 ```
    pub fn Description(self: ?*anyopaque, job: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.KJob_Description(@ptrCast(self), @ptrCast(job), title_str);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob, title: [*:0]const u8) callconv(.c) void ```
    pub fn OnDescription(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Description(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KJob, message: []const u8 ```
    pub fn InfoMessage(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_InfoMessage(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnInfoMessage(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_InfoMessage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#warning)
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KJob, message: []const u8 ```
    pub fn Warning(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_Warning(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#warning)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnWarning(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Warning(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KJob, size: u64 ```
    pub fn TotalSize(self: ?*anyopaque, job: ?*anyopaque, size: u64) void {
        qtc.KJob_TotalSize(@ptrCast(self), @ptrCast(job), @intCast(size));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob, size: u64) callconv(.c) void ```
    pub fn OnTotalSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_TotalSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KJob, size: u64 ```
    pub fn ProcessedSize(self: ?*anyopaque, job: ?*anyopaque, size: u64) void {
        qtc.KJob_ProcessedSize(@ptrCast(self), @ptrCast(job), @intCast(size));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob, size: u64) callconv(.c) void ```
    pub fn OnProcessedSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#speed)
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KJob, speed: u64 ```
    pub fn Speed(self: ?*anyopaque, job: ?*anyopaque, speed: u64) void {
        qtc.KJob_Speed(@ptrCast(self), @ptrCast(job), @intCast(speed));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#speed)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob, speed: u64) callconv(.c) void ```
    pub fn OnSpeed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_Speed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#kill)
    ///
    /// ``` self: QtC.KIO__SpecialJob, verbosity: kjob_enums.KillVerbosity ```
    pub fn Kill1(self: ?*anyopaque, verbosity: i32) bool {
        return qtc.KJob_Kill1(@ptrCast(self), @intCast(verbosity));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ``` self: QtC.KIO__SpecialJob, hide: bool ```
    pub fn SetFinishedNotificationHidden1(self: ?*anyopaque, hide: bool) void {
        qtc.KJob_SetFinishedNotificationHidden1(@ptrCast(self), hide);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KJob, title: []const u8, field1: struct_constu8_constu8 ```
    pub fn Description3(self: ?*anyopaque, job: ?*anyopaque, title: []const u8, field1: struct_constu8_constu8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const field1_pair = qtc.libqt_pair{
            .first = @ptrCast(field1.first),
            .second = @ptrCast(field1.second),
        };
        qtc.KJob_Description3(@ptrCast(self), @ptrCast(job), title_str, field1_pair);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob, title: [*:0]const u8, field1: struct_constu8_constu8) callconv(.c) void ```
    pub fn OnDescription3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8, struct_constu8_constu8) callconv(.c) void) void {
        qtc.KJob_Connect_Description3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KJob, title: []const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8 ```
    pub fn Description4(self: ?*anyopaque, job: ?*anyopaque, title: []const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const field1_pair = qtc.libqt_pair{
            .first = @ptrCast(field1.first),
            .second = @ptrCast(field1.second),
        };
        const field2_pair = qtc.libqt_pair{
            .first = @ptrCast(field2.first),
            .second = @ptrCast(field2.second),
        };
        qtc.KJob_Description4(@ptrCast(self), @ptrCast(job), title_str, field1_pair, field2_pair);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob, title: [*:0]const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8) callconv(.c) void ```
    pub fn OnDescription4(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8, struct_constu8_constu8, struct_constu8_constu8) callconv(.c) void) void {
        qtc.KJob_Connect_Description4(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KIO__SpecialJob, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::specialjob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KIO__SpecialJob, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KIO__SpecialJob, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KIO__SpecialJob, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KIO__SpecialJob, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KIO__SpecialJob, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KIO__SpecialJob, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KIO__SpecialJob, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kio::specialjob.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KIO__SpecialJob, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KIO__SpecialJob, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KIO__SpecialJob, obj: QtC.QObject ```
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
    /// ``` self: QtC.KIO__SpecialJob, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KIO__SpecialJob, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KIO__SpecialJob, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KIO__SpecialJob, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kio::specialjob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio::specialjob.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KIO__SpecialJob, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KIO__SpecialJob, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KIO__SpecialJob, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KIO__SpecialJob, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KIO__SpecialJob, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#doResume)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn DoResume(self: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_DoResume(@ptrCast(self));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#doResume)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn QBaseDoResume(self: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_QBaseDoResume(@ptrCast(self));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#doResume)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn () callconv(.c) bool ```
    pub fn OnDoResume(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__SpecialJob_OnDoResume(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotRedirection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, url: QtC.QUrl ```
    pub fn SlotRedirection(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KIO__SpecialJob_SlotRedirection(@ptrCast(self), @ptrCast(url));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotRedirection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, url: QtC.QUrl ```
    pub fn QBaseSlotRedirection(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KIO__SpecialJob_QBaseSlotRedirection(@ptrCast(self), @ptrCast(url));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotRedirection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, url: QtC.QUrl) callconv(.c) void ```
    pub fn OnSlotRedirection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnSlotRedirection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotFinished)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn SlotFinished(self: ?*anyopaque) void {
        qtc.KIO__SpecialJob_SlotFinished(@ptrCast(self));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotFinished)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn QBaseSlotFinished(self: ?*anyopaque) void {
        qtc.KIO__SpecialJob_QBaseSlotFinished(@ptrCast(self));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotFinished)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn () callconv(.c) void ```
    pub fn OnSlotFinished(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnSlotFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, data: []u8 ```
    pub fn SlotData(self: ?*anyopaque, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KIO__SpecialJob_SlotData(@ptrCast(self), data_str);
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, data: []u8 ```
    pub fn QBaseSlotData(self: ?*anyopaque, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KIO__SpecialJob_QBaseSlotData(@ptrCast(self), data_str);
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, data: [*:0]u8) callconv(.c) void ```
    pub fn OnSlotData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]u8) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnSlotData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotDataReq)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn SlotDataReq(self: ?*anyopaque) void {
        qtc.KIO__SpecialJob_SlotDataReq(@ptrCast(self));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotDataReq)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn QBaseSlotDataReq(self: ?*anyopaque) void {
        qtc.KIO__SpecialJob_QBaseSlotDataReq(@ptrCast(self));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotDataReq)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn () callconv(.c) void ```
    pub fn OnSlotDataReq(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnSlotDataReq(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotMimetype)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, mimetype: []const u8 ```
    pub fn SlotMimetype(self: ?*anyopaque, mimetype: []const u8) void {
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };
        qtc.KIO__SpecialJob_SlotMimetype(@ptrCast(self), mimetype_str);
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotMimetype)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, mimetype: []const u8 ```
    pub fn QBaseSlotMimetype(self: ?*anyopaque, mimetype: []const u8) void {
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };
        qtc.KIO__SpecialJob_QBaseSlotMimetype(@ptrCast(self), mimetype_str);
    }

    /// Inherited from KIO::TransferJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotMimetype)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, mimetype: [*:0]const u8) callconv(.c) void ```
    pub fn OnSlotMimetype(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnSlotMimetype(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#doSuspend)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn DoSuspend(self: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_DoSuspend(@ptrCast(self));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#doSuspend)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn QBaseDoSuspend(self: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_QBaseDoSuspend(@ptrCast(self));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#doSuspend)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn () callconv(.c) bool ```
    pub fn OnDoSuspend(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__SpecialJob_OnDoSuspend(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#doKill)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn DoKill(self: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_DoKill(@ptrCast(self));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#doKill)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn QBaseDoKill(self: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_QBaseDoKill(@ptrCast(self));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#doKill)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn () callconv(.c) bool ```
    pub fn OnDoKill(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__SpecialJob_OnDoKill(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#putOnHold)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn PutOnHold(self: ?*anyopaque) void {
        qtc.KIO__SpecialJob_PutOnHold(@ptrCast(self));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#putOnHold)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn QBasePutOnHold(self: ?*anyopaque) void {
        qtc.KIO__SpecialJob_QBasePutOnHold(@ptrCast(self));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#putOnHold)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn () callconv(.c) void ```
    pub fn OnPutOnHold(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnPutOnHold(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#slotWarning)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, param1: []const u8 ```
    pub fn SlotWarning(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KIO__SpecialJob_SlotWarning(@ptrCast(self), param1_str);
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#slotWarning)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, param1: []const u8 ```
    pub fn QBaseSlotWarning(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KIO__SpecialJob_QBaseSlotWarning(@ptrCast(self), param1_str);
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#slotWarning)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, param1: [*:0]const u8) callconv(.c) void ```
    pub fn OnSlotWarning(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnSlotWarning(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#slotMetaData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, _metaData: QtC.KIO__MetaData ```
    pub fn SlotMetaData(self: ?*anyopaque, _metaData: ?*anyopaque) void {
        qtc.KIO__SpecialJob_SlotMetaData(@ptrCast(self), @ptrCast(_metaData));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#slotMetaData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, _metaData: QtC.KIO__MetaData ```
    pub fn QBaseSlotMetaData(self: ?*anyopaque, _metaData: ?*anyopaque) void {
        qtc.KIO__SpecialJob_QBaseSlotMetaData(@ptrCast(self), @ptrCast(_metaData));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// [Qt documentation](https://api.kde.org/kio-simplejob.html#slotMetaData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, _metaData: QtC.KIO__MetaData) callconv(.c) void ```
    pub fn OnSlotMetaData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnSlotMetaData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#start)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn Start(self: ?*anyopaque) void {
        qtc.KIO__SpecialJob_Start(@ptrCast(self));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#start)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn QBaseStart(self: ?*anyopaque) void {
        qtc.KIO__SpecialJob_QBaseStart(@ptrCast(self));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#start)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn () callconv(.c) void ```
    pub fn OnStart(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnStart(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#errorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIO__SpecialJob_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::specialjob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#errorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, allocator: std.mem.Allocator ```
    pub fn QBaseErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIO__SpecialJob_QBaseErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::specialjob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#errorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnErrorString(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KIO__SpecialJob_OnErrorString(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#addSubjob)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KJob ```
    pub fn AddSubjob(self: ?*anyopaque, job: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_AddSubjob(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#addSubjob)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KJob ```
    pub fn QBaseAddSubjob(self: ?*anyopaque, job: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_QBaseAddSubjob(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#addSubjob)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob) callconv(.c) bool ```
    pub fn OnAddSubjob(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIO__SpecialJob_OnAddSubjob(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#removeSubjob)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KJob ```
    pub fn RemoveSubjob(self: ?*anyopaque, job: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_RemoveSubjob(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#removeSubjob)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KJob ```
    pub fn QBaseRemoveSubjob(self: ?*anyopaque, job: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_QBaseRemoveSubjob(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#removeSubjob)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob) callconv(.c) bool ```
    pub fn OnRemoveSubjob(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIO__SpecialJob_OnRemoveSubjob(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompositeJob
    ///
    /// [Qt documentation](https://api.kde.org/kcompositejob.html#slotResult)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KJob ```
    pub fn SlotResult(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KIO__SpecialJob_SlotResult(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KCompositeJob
    ///
    /// [Qt documentation](https://api.kde.org/kcompositejob.html#slotResult)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KJob ```
    pub fn QBaseSlotResult(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KIO__SpecialJob_QBaseSlotResult(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KCompositeJob
    ///
    /// [Qt documentation](https://api.kde.org/kcompositejob.html#slotResult)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnSlotResult(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnSlotResult(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompositeJob
    ///
    /// [Qt documentation](https://api.kde.org/kcompositejob.html#slotInfoMessage)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KJob, message: []const u8 ```
    pub fn SlotInfoMessage(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KIO__SpecialJob_SlotInfoMessage(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// Inherited from KCompositeJob
    ///
    /// [Qt documentation](https://api.kde.org/kcompositejob.html#slotInfoMessage)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, job: QtC.KJob, message: []const u8 ```
    pub fn QBaseSlotInfoMessage(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KIO__SpecialJob_QBaseSlotInfoMessage(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// Inherited from KCompositeJob
    ///
    /// [Qt documentation](https://api.kde.org/kcompositejob.html#slotInfoMessage)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnSlotInfoMessage(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnSlotInfoMessage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIO__SpecialJob_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIO__SpecialJob_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__SpecialJob_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__SpecialJob_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__SpecialJob_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__SpecialJob_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__SpecialJob_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__SpecialJob_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KIO__SpecialJob_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KIO__SpecialJob_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KIO__SpecialJob_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KIO__SpecialJob_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompositeJob
    ///
    /// [Qt documentation](https://api.kde.org/kcompositejob.html#hasSubjobs)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn HasSubjobs(self: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_HasSubjobs(@ptrCast(self));
    }

    /// Inherited from KCompositeJob
    ///
    /// [Qt documentation](https://api.kde.org/kcompositejob.html#hasSubjobs)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn QBaseHasSubjobs(self: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_QBaseHasSubjobs(@ptrCast(self));
    }

    /// Inherited from KCompositeJob
    ///
    /// [Qt documentation](https://api.kde.org/kcompositejob.html#hasSubjobs)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn () callconv(.c) bool ```
    pub fn OnHasSubjobs(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__SpecialJob_OnHasSubjobs(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompositeJob
    ///
    /// [Qt documentation](https://api.kde.org/kcompositejob.html#subjobs)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, allocator: std.mem.Allocator ```
    pub fn Subjobs(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KJob {
        const _arr: qtc.libqt_list = qtc.KIO__SpecialJob_Subjobs(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KJob, _arr.len) catch @panic("kio::specialjob.Subjobs: Memory allocation failed");
        const _data: [*]QtC.KJob = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KCompositeJob
    ///
    /// [Qt documentation](https://api.kde.org/kcompositejob.html#subjobs)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, allocator: std.mem.Allocator ```
    pub fn QBaseSubjobs(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KJob {
        const _arr: qtc.libqt_list = qtc.KIO__SpecialJob_QBaseSubjobs(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KJob, _arr.len) catch @panic("kio::specialjob.Subjobs: Memory allocation failed");
        const _data: [*]QtC.KJob = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KCompositeJob
    ///
    /// [Qt documentation](https://api.kde.org/kcompositejob.html#subjobs)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn () callconv(.c) [*:null]QtC.KJob ```
    pub fn OnSubjobs(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:null]QtC.KJob) void {
        qtc.KIO__SpecialJob_OnSubjobs(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompositeJob
    ///
    /// [Qt documentation](https://api.kde.org/kcompositejob.html#clearSubjobs)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn ClearSubjobs(self: ?*anyopaque) void {
        qtc.KIO__SpecialJob_ClearSubjobs(@ptrCast(self));
    }

    /// Inherited from KCompositeJob
    ///
    /// [Qt documentation](https://api.kde.org/kcompositejob.html#clearSubjobs)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn QBaseClearSubjobs(self: ?*anyopaque) void {
        qtc.KIO__SpecialJob_QBaseClearSubjobs(@ptrCast(self));
    }

    /// Inherited from KCompositeJob
    ///
    /// [Qt documentation](https://api.kde.org/kcompositejob.html#clearSubjobs)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn () callconv(.c) void ```
    pub fn OnClearSubjobs(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnClearSubjobs(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, capabilities: flag of kjob_enums.Capability ```
    pub fn SetCapabilities(self: ?*anyopaque, capabilities: i32) void {
        qtc.KIO__SpecialJob_SetCapabilities(@ptrCast(self), @intCast(capabilities));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, capabilities: flag of kjob_enums.Capability ```
    pub fn QBaseSetCapabilities(self: ?*anyopaque, capabilities: i32) void {
        qtc.KIO__SpecialJob_QBaseSetCapabilities(@ptrCast(self), @intCast(capabilities));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, capabilities: flag of kjob_enums.Capability) callconv(.c) void ```
    pub fn OnSetCapabilities(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnSetCapabilities(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn IsFinished(self: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_IsFinished(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn QBaseIsFinished(self: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_QBaseIsFinished(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn () callconv(.c) bool ```
    pub fn OnIsFinished(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__SpecialJob_OnIsFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, errorCode: i32 ```
    pub fn SetError(self: ?*anyopaque, errorCode: i32) void {
        qtc.KIO__SpecialJob_SetError(@ptrCast(self), @intCast(errorCode));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, errorCode: i32 ```
    pub fn QBaseSetError(self: ?*anyopaque, errorCode: i32) void {
        qtc.KIO__SpecialJob_QBaseSetError(@ptrCast(self), @intCast(errorCode));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, errorCode: i32) callconv(.c) void ```
    pub fn OnSetError(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnSetError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, errorText: []const u8 ```
    pub fn SetErrorText(self: ?*anyopaque, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KIO__SpecialJob_SetErrorText(@ptrCast(self), errorText_str);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, errorText: []const u8 ```
    pub fn QBaseSetErrorText(self: ?*anyopaque, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KIO__SpecialJob_QBaseSetErrorText(@ptrCast(self), errorText_str);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, errorText: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetErrorText(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnSetErrorText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn SetProcessedAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KIO__SpecialJob_SetProcessedAmount(@ptrCast(self), @intCast(unit), @intCast(amount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn QBaseSetProcessedAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KIO__SpecialJob_QBaseSetProcessedAmount(@ptrCast(self), @intCast(unit), @intCast(amount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnSetProcessedAmount(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnSetProcessedAmount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn SetTotalAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KIO__SpecialJob_SetTotalAmount(@ptrCast(self), @intCast(unit), @intCast(amount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn QBaseSetTotalAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KIO__SpecialJob_QBaseSetTotalAmount(@ptrCast(self), @intCast(unit), @intCast(amount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnSetTotalAmount(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnSetTotalAmount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, unit: kjob_enums.Unit ```
    pub fn SetProgressUnit(self: ?*anyopaque, unit: i32) void {
        qtc.KIO__SpecialJob_SetProgressUnit(@ptrCast(self), @intCast(unit));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, unit: kjob_enums.Unit ```
    pub fn QBaseSetProgressUnit(self: ?*anyopaque, unit: i32) void {
        qtc.KIO__SpecialJob_QBaseSetProgressUnit(@ptrCast(self), @intCast(unit));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, unit: kjob_enums.Unit) callconv(.c) void ```
    pub fn OnSetProgressUnit(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnSetProgressUnit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, percentage: u64 ```
    pub fn SetPercent(self: ?*anyopaque, percentage: u64) void {
        qtc.KIO__SpecialJob_SetPercent(@ptrCast(self), @intCast(percentage));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, percentage: u64 ```
    pub fn QBaseSetPercent(self: ?*anyopaque, percentage: u64) void {
        qtc.KIO__SpecialJob_QBaseSetPercent(@ptrCast(self), @intCast(percentage));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, percentage: u64) callconv(.c) void ```
    pub fn OnSetPercent(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnSetPercent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn EmitResult(self: ?*anyopaque) void {
        qtc.KIO__SpecialJob_EmitResult(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn QBaseEmitResult(self: ?*anyopaque) void {
        qtc.KIO__SpecialJob_QBaseEmitResult(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn () callconv(.c) void ```
    pub fn OnEmitResult(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnEmitResult(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, processedAmount: u64, totalAmount: u64 ```
    pub fn EmitPercent(self: ?*anyopaque, processedAmount: u64, totalAmount: u64) void {
        qtc.KIO__SpecialJob_EmitPercent(@ptrCast(self), @intCast(processedAmount), @intCast(totalAmount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, processedAmount: u64, totalAmount: u64 ```
    pub fn QBaseEmitPercent(self: ?*anyopaque, processedAmount: u64, totalAmount: u64) void {
        qtc.KIO__SpecialJob_QBaseEmitPercent(@ptrCast(self), @intCast(processedAmount), @intCast(totalAmount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, processedAmount: u64, totalAmount: u64) callconv(.c) void ```
    pub fn OnEmitPercent(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64, u64) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnEmitPercent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, speed: u64 ```
    pub fn EmitSpeed(self: ?*anyopaque, speed: u64) void {
        qtc.KIO__SpecialJob_EmitSpeed(@ptrCast(self), @intCast(speed));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, speed: u64 ```
    pub fn QBaseEmitSpeed(self: ?*anyopaque, speed: u64) void {
        qtc.KIO__SpecialJob_QBaseEmitSpeed(@ptrCast(self), @intCast(speed));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, speed: u64) callconv(.c) void ```
    pub fn OnEmitSpeed(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnEmitSpeed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn StartElapsedTimer(self: ?*anyopaque) void {
        qtc.KIO__SpecialJob_StartElapsedTimer(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn QBaseStartElapsedTimer(self: ?*anyopaque) void {
        qtc.KIO__SpecialJob_QBaseStartElapsedTimer(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn () callconv(.c) void ```
    pub fn OnStartElapsedTimer(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__SpecialJob_OnStartElapsedTimer(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KIO__SpecialJob_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KIO__SpecialJob_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KIO__SpecialJob_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KIO__SpecialJob_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KIO__SpecialJob_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KIO__SpecialJob_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__SpecialJob_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__SpecialJob_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KIO__SpecialJob_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KIO__SpecialJob_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIO__SpecialJob_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#finished)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#suspended)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnSuspended(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Suspended(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#resumed)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnResumed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Resumed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#result)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnResult(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Result(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#totalAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnTotalAmountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KJob_Connect_TotalAmountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#processedAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnProcessedAmountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedAmountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#percentChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, job: QtC.KJob, percent: u64) callconv(.c) void ```
    pub fn OnPercentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_PercentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__SpecialJob, callback: *const fn (self: QtC.KIO__SpecialJob, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KIO__SpecialJob ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIO__SpecialJob_Delete(@ptrCast(self));
    }
};
