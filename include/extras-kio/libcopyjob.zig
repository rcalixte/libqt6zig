const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const copyjob_enums = enums;
const job_base_enums = @import("libjob_base.zig").enums;
const kjob_enums = @import("../extras-kcoreaddons/libkjob.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// https://api.kde.org/kio-copyjob.html
pub const kio__copyjob = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KIO__CopyJob_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KIO__CopyJob, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__CopyJob_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KIO__CopyJob, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KIO__CopyJob_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KIO__CopyJob_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::copyjob.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#operationMode)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    ///
    /// Returns: ``` copyjob_enums.CopyMode ```
    pub fn OperationMode(self: ?*anyopaque) i32 {
        return qtc.KIO__CopyJob_OperationMode(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#srcUrls)
    ///
    /// ``` self: QtC.KIO__CopyJob, allocator: std.mem.Allocator ```
    pub fn SrcUrls(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QUrl {
        const _arr: qtc.libqt_list = qtc.KIO__CopyJob_SrcUrls(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("kio::copyjob.SrcUrls: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#destUrl)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn DestUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.KIO__CopyJob_DestUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#setDefaultPermissions)
    ///
    /// ``` self: QtC.KIO__CopyJob, b: bool ```
    pub fn SetDefaultPermissions(self: ?*anyopaque, b: bool) void {
        qtc.KIO__CopyJob_SetDefaultPermissions(@ptrCast(self), b);
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#setAutoSkip)
    ///
    /// ``` self: QtC.KIO__CopyJob, autoSkip: bool ```
    pub fn SetAutoSkip(self: ?*anyopaque, autoSkip: bool) void {
        qtc.KIO__CopyJob_SetAutoSkip(@ptrCast(self), autoSkip);
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#setAutoRename)
    ///
    /// ``` self: QtC.KIO__CopyJob, autoRename: bool ```
    pub fn SetAutoRename(self: ?*anyopaque, autoRename: bool) void {
        qtc.KIO__CopyJob_SetAutoRename(@ptrCast(self), autoRename);
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#setWriteIntoExistingDirectories)
    ///
    /// ``` self: QtC.KIO__CopyJob, overwriteAllDirs: bool ```
    pub fn SetWriteIntoExistingDirectories(self: ?*anyopaque, overwriteAllDirs: bool) void {
        qtc.KIO__CopyJob_SetWriteIntoExistingDirectories(@ptrCast(self), overwriteAllDirs);
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#doSuspend)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn DoSuspend(self: ?*anyopaque) bool {
        return qtc.KIO__CopyJob_DoSuspend(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#doResume)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn DoResume(self: ?*anyopaque) bool {
        return qtc.KIO__CopyJob_DoResume(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#processedFiles)
    ///
    /// ``` self: QtC.KIO__CopyJob, job: QtC.KIO__Job, files: u64 ```
    pub fn ProcessedFiles(self: ?*anyopaque, job: ?*anyopaque, files: u64) void {
        qtc.KIO__CopyJob_ProcessedFiles(@ptrCast(self), @ptrCast(job), @intCast(files));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#processedFiles)
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KIO__Job, files: u64) callconv(.c) void ```
    pub fn OnProcessedFiles(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_ProcessedFiles(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#processedDirs)
    ///
    /// ``` self: QtC.KIO__CopyJob, job: QtC.KIO__Job, dirs: u64 ```
    pub fn ProcessedDirs(self: ?*anyopaque, job: ?*anyopaque, dirs: u64) void {
        qtc.KIO__CopyJob_ProcessedDirs(@ptrCast(self), @ptrCast(job), @intCast(dirs));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#processedDirs)
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KIO__Job, dirs: u64) callconv(.c) void ```
    pub fn OnProcessedDirs(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_ProcessedDirs(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#copying)
    ///
    /// ``` self: QtC.KIO__CopyJob, job: QtC.KIO__Job, src: QtC.QUrl, dest: QtC.QUrl ```
    pub fn Copying(self: ?*anyopaque, job: ?*anyopaque, src: ?*anyopaque, dest: ?*anyopaque) void {
        qtc.KIO__CopyJob_Copying(@ptrCast(self), @ptrCast(job), @ptrCast(src), @ptrCast(dest));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#copying)
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KIO__Job, src: QtC.QUrl, dest: QtC.QUrl) callconv(.c) void ```
    pub fn OnCopying(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_Copying(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#linking)
    ///
    /// ``` self: QtC.KIO__CopyJob, job: QtC.KIO__Job, target: []const u8, to: QtC.QUrl ```
    pub fn Linking(self: ?*anyopaque, job: ?*anyopaque, target: []const u8, to: ?*anyopaque) void {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        qtc.KIO__CopyJob_Linking(@ptrCast(self), @ptrCast(job), target_str, @ptrCast(to));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#linking)
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KIO__Job, target: [*:0]const u8, to: QtC.QUrl) callconv(.c) void ```
    pub fn OnLinking(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_Linking(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#moving)
    ///
    /// ``` self: QtC.KIO__CopyJob, job: QtC.KIO__Job, from: QtC.QUrl, to: QtC.QUrl ```
    pub fn Moving(self: ?*anyopaque, job: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.KIO__CopyJob_Moving(@ptrCast(self), @ptrCast(job), @ptrCast(from), @ptrCast(to));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#moving)
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KIO__Job, from: QtC.QUrl, to: QtC.QUrl) callconv(.c) void ```
    pub fn OnMoving(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_Moving(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#creatingDir)
    ///
    /// ``` self: QtC.KIO__CopyJob, job: QtC.KIO__Job, dir: QtC.QUrl ```
    pub fn CreatingDir(self: ?*anyopaque, job: ?*anyopaque, dir: ?*anyopaque) void {
        qtc.KIO__CopyJob_CreatingDir(@ptrCast(self), @ptrCast(job), @ptrCast(dir));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#creatingDir)
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KIO__Job, dir: QtC.QUrl) callconv(.c) void ```
    pub fn OnCreatingDir(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_CreatingDir(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#renamed)
    ///
    /// ``` self: QtC.KIO__CopyJob, job: QtC.KIO__Job, from: QtC.QUrl, to: QtC.QUrl ```
    pub fn Renamed(self: ?*anyopaque, job: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.KIO__CopyJob_Renamed(@ptrCast(self), @ptrCast(job), @ptrCast(from), @ptrCast(to));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#renamed)
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KIO__Job, from: QtC.QUrl, to: QtC.QUrl) callconv(.c) void ```
    pub fn OnRenamed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_Renamed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#copyingDone)
    ///
    /// ``` self: QtC.KIO__CopyJob, job: QtC.KIO__Job, from: QtC.QUrl, to: QtC.QUrl, mtime: QtC.QDateTime, directory: bool, renamed: bool ```
    pub fn CopyingDone(self: ?*anyopaque, job: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, mtime: ?*anyopaque, directory: bool, renamed: bool) void {
        qtc.KIO__CopyJob_CopyingDone(@ptrCast(self), @ptrCast(job), @ptrCast(from), @ptrCast(to), @ptrCast(mtime), directory, renamed);
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#copyingDone)
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KIO__Job, from: QtC.QUrl, to: QtC.QUrl, mtime: QtC.QDateTime, directory: bool, renamed: bool) callconv(.c) void ```
    pub fn OnCopyingDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, bool, bool) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_CopyingDone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#copyingLinkDone)
    ///
    /// ``` self: QtC.KIO__CopyJob, job: QtC.KIO__Job, from: QtC.QUrl, target: []const u8, to: QtC.QUrl ```
    pub fn CopyingLinkDone(self: ?*anyopaque, job: ?*anyopaque, from: ?*anyopaque, target: []const u8, to: ?*anyopaque) void {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        qtc.KIO__CopyJob_CopyingLinkDone(@ptrCast(self), @ptrCast(job), @ptrCast(from), target_str, @ptrCast(to));
    }

    /// [Qt documentation](https://api.kde.org/kio-copyjob.html#copyingLinkDone)
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KIO__Job, from: QtC.QUrl, target: [*:0]const u8, to: QtC.QUrl) callconv(.c) void ```
    pub fn OnCopyingLinkDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_CopyingLinkDone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KIO__CopyJob_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::copyjob.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KIO__CopyJob_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::copyjob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#start)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn Start(self: ?*anyopaque) void {
        qtc.KIO__Job_Start(@ptrCast(self));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#uiDelegateExtension)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn UiDelegateExtension(self: ?*anyopaque) QtC.KIO__JobUiDelegateExtension {
        return qtc.KIO__Job_UiDelegateExtension(@ptrCast(self));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#setUiDelegateExtension)
    ///
    /// ``` self: QtC.KIO__CopyJob, extension: QtC.KIO__JobUiDelegateExtension ```
    pub fn SetUiDelegateExtension(self: ?*anyopaque, extension: ?*anyopaque) void {
        qtc.KIO__Job_SetUiDelegateExtension(@ptrCast(self), @ptrCast(extension));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#errorString)
    ///
    /// ``` self: QtC.KIO__CopyJob, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIO__Job_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::copyjob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ``` self: QtC.KIO__CopyJob, allocator: std.mem.Allocator ```
    pub fn DetailedErrorStrings(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kio::copyjob.DetailedErrorStrings: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio::copyjob.DetailedErrorStrings: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#setParentJob)
    ///
    /// ``` self: QtC.KIO__CopyJob, parentJob: QtC.KIO__Job ```
    pub fn SetParentJob(self: ?*anyopaque, parentJob: ?*anyopaque) void {
        qtc.KIO__Job_SetParentJob(@ptrCast(self), @ptrCast(parentJob));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#parentJob)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn ParentJob(self: ?*anyopaque) QtC.KIO__Job {
        return qtc.KIO__Job_ParentJob(@ptrCast(self));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#setMetaData)
    ///
    /// ``` self: QtC.KIO__CopyJob, metaData: QtC.KIO__MetaData ```
    pub fn SetMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.KIO__Job_SetMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#addMetaData)
    ///
    /// ``` self: QtC.KIO__CopyJob, key: []const u8, value: []const u8 ```
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
    /// ``` self: QtC.KIO__CopyJob, values: map_constu8_constu8, allocator: std.mem.Allocator ```
    pub fn AddMetaData2(self: ?*anyopaque, values: map_constu8_constu8, allocator: std.mem.Allocator) void {
        const values_keys = allocator.alloc(qtc.libqt_string, values.count()) catch @panic("kio::copyjob.AddMetaData2: Memory allocation failed");
        defer allocator.free(values_keys);
        const values_values = allocator.alloc([]const u8, values.count()) catch @panic("kio::copyjob.AddMetaData2: Memory allocation failed");
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
    /// ``` self: QtC.KIO__CopyJob, values: map_constu8_constu8, allocator: std.mem.Allocator ```
    pub fn MergeMetaData(self: ?*anyopaque, values: map_constu8_constu8, allocator: std.mem.Allocator) void {
        const values_keys = allocator.alloc(qtc.libqt_string, values.count()) catch @panic("kio::copyjob.MergeMetaData: Memory allocation failed");
        defer allocator.free(values_keys);
        const values_values = allocator.alloc([]const u8, values.count()) catch @panic("kio::copyjob.MergeMetaData: Memory allocation failed");
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
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn OutgoingMetaData(self: ?*anyopaque) QtC.KIO__MetaData {
        return qtc.KIO__Job_OutgoingMetaData(@ptrCast(self));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#metaData)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn MetaData(self: ?*anyopaque) QtC.KIO__MetaData {
        return qtc.KIO__Job_MetaData(@ptrCast(self));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#queryMetaData)
    ///
    /// ``` self: QtC.KIO__CopyJob, key: []const u8, allocator: std.mem.Allocator ```
    pub fn QueryMetaData(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.KIO__Job_QueryMetaData(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::copyjob.QueryMetaData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#connected)
    ///
    /// ``` self: QtC.KIO__CopyJob, job: QtC.KIO__Job ```
    pub fn Connected(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KIO__Job_Connected(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#connected)
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KIO__Job) callconv(.c) void ```
    pub fn OnConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__Job_Connect_Connected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ``` self: QtC.KIO__CopyJob, reqUrl: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn DetailedErrorStrings1(self: ?*anyopaque, reqUrl: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings1(@ptrCast(self), @ptrCast(reqUrl));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kio::copyjob.DetailedErrorStrings1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio::copyjob.DetailedErrorStrings1: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ``` self: QtC.KIO__CopyJob, reqUrl: QtC.QUrl, method: i32, allocator: std.mem.Allocator ```
    pub fn DetailedErrorStrings2(self: ?*anyopaque, reqUrl: ?*anyopaque, method: i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings2(@ptrCast(self), @ptrCast(reqUrl), @intCast(method));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kio::copyjob.DetailedErrorStrings2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio::copyjob.DetailedErrorStrings2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setUiDelegate)
    ///
    /// ``` self: QtC.KIO__CopyJob, delegate: QtC.KJobUiDelegate ```
    pub fn SetUiDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.KJob_SetUiDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#uiDelegate)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn UiDelegate(self: ?*anyopaque) QtC.KJobUiDelegate {
        return qtc.KJob_UiDelegate(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#capabilities)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    ///
    /// Returns: ``` flag of kjob_enums.Capability ```
    pub fn Capabilities(self: ?*anyopaque) i32 {
        return qtc.KJob_Capabilities(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isSuspended)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn IsSuspended(self: ?*anyopaque) bool {
        return qtc.KJob_IsSuspended(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#kill)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn Kill(self: ?*anyopaque) bool {
        return qtc.KJob_Kill(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#suspend)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn Suspend(self: ?*anyopaque) bool {
        return qtc.KJob_Suspend(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#resume)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn Resume(self: ?*anyopaque) bool {
        return qtc.KJob_Resume(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#exec)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn Exec(self: ?*anyopaque) bool {
        return qtc.KJob_Exec(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#error)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.KJob_Error(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#errorText)
    ///
    /// ``` self: QtC.KIO__CopyJob, allocator: std.mem.Allocator ```
    pub fn ErrorText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KJob_ErrorText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::copyjob.ErrorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#processedAmount)
    ///
    /// ``` self: QtC.KIO__CopyJob, unit: kjob_enums.Unit ```
    pub fn ProcessedAmount(self: ?*anyopaque, unit: i32) u64 {
        return qtc.KJob_ProcessedAmount(@ptrCast(self), @intCast(unit));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#totalAmount)
    ///
    /// ``` self: QtC.KIO__CopyJob, unit: kjob_enums.Unit ```
    pub fn TotalAmount(self: ?*anyopaque, unit: i32) u64 {
        return qtc.KJob_TotalAmount(@ptrCast(self), @intCast(unit));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#percent)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn Percent(self: ?*anyopaque) u64 {
        return qtc.KJob_Percent(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setAutoDelete)
    ///
    /// ``` self: QtC.KIO__CopyJob, autodelete: bool ```
    pub fn SetAutoDelete(self: ?*anyopaque, autodelete: bool) void {
        qtc.KJob_SetAutoDelete(@ptrCast(self), autodelete);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isAutoDelete)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn IsAutoDelete(self: ?*anyopaque) bool {
        return qtc.KJob_IsAutoDelete(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn SetFinishedNotificationHidden(self: ?*anyopaque) void {
        qtc.KJob_SetFinishedNotificationHidden(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn IsFinishedNotificationHidden(self: ?*anyopaque) bool {
        return qtc.KJob_IsFinishedNotificationHidden(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isStartedWithExec)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn IsStartedWithExec(self: ?*anyopaque) bool {
        return qtc.KJob_IsStartedWithExec(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#elapsedTime)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn ElapsedTime(self: ?*anyopaque) i64 {
        return qtc.KJob_ElapsedTime(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ``` self: QtC.KIO__CopyJob, job: QtC.KJob, message: []const u8 ```
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
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnInfoMessage(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_InfoMessage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#warning)
    ///
    /// ``` self: QtC.KIO__CopyJob, job: QtC.KJob, message: []const u8 ```
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
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnWarning(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Warning(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ``` self: QtC.KIO__CopyJob, job: QtC.KJob, size: u64 ```
    pub fn TotalSize(self: ?*anyopaque, job: ?*anyopaque, size: u64) void {
        qtc.KJob_TotalSize(@ptrCast(self), @ptrCast(job), @intCast(size));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KJob, size: u64) callconv(.c) void ```
    pub fn OnTotalSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_TotalSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ``` self: QtC.KIO__CopyJob, job: QtC.KJob, size: u64 ```
    pub fn ProcessedSize(self: ?*anyopaque, job: ?*anyopaque, size: u64) void {
        qtc.KJob_ProcessedSize(@ptrCast(self), @ptrCast(job), @intCast(size));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KJob, size: u64) callconv(.c) void ```
    pub fn OnProcessedSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#speed)
    ///
    /// ``` self: QtC.KIO__CopyJob, job: QtC.KJob, speed: u64 ```
    pub fn Speed(self: ?*anyopaque, job: ?*anyopaque, speed: u64) void {
        qtc.KJob_Speed(@ptrCast(self), @ptrCast(job), @intCast(speed));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#speed)
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KJob, speed: u64) callconv(.c) void ```
    pub fn OnSpeed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_Speed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#kill)
    ///
    /// ``` self: QtC.KIO__CopyJob, verbosity: kjob_enums.KillVerbosity ```
    pub fn Kill1(self: ?*anyopaque, verbosity: i32) bool {
        return qtc.KJob_Kill1(@ptrCast(self), @intCast(verbosity));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ``` self: QtC.KIO__CopyJob, hide: bool ```
    pub fn SetFinishedNotificationHidden1(self: ?*anyopaque, hide: bool) void {
        qtc.KJob_SetFinishedNotificationHidden1(@ptrCast(self), hide);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.KIO__CopyJob, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.KIO__CopyJob, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KIO__CopyJob, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::copyjob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KIO__CopyJob, name: []const u8 ```
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
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KIO__CopyJob, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KIO__CopyJob, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KIO__CopyJob, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KIO__CopyJob, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KIO__CopyJob, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KIO__CopyJob, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kio::copyjob.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KIO__CopyJob, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KIO__CopyJob, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KIO__CopyJob, obj: QtC.QObject ```
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
    /// ``` self: QtC.KIO__CopyJob, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KIO__CopyJob, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KIO__CopyJob, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KIO__CopyJob, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kio::copyjob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio::copyjob.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KIO__CopyJob, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KIO__CopyJob, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KIO__CopyJob, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KIO__CopyJob, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KIO__CopyJob, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#finished)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#suspended)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnSuspended(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Suspended(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#resumed)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnResumed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Resumed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#result)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnResult(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Result(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#totalAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnTotalAmountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KJob_Connect_TotalAmountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#processedAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnProcessedAmountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedAmountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#percentChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, job: QtC.KJob, percent: u64) callconv(.c) void ```
    pub fn OnPercentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_PercentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__CopyJob, callback: *const fn (self: QtC.KIO__CopyJob, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KIO__CopyJob ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIO__CopyJob_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kio.html
pub const kio = struct {
    /// [Qt documentation](https://api.kde.org/kio.html#copy)
    ///
    /// ``` param1: QtC.QUrl, param2: QtC.QUrl, param3: flag of job_base_enums.JobFlag ```
    pub fn Copy(param1: ?*anyopaque, param2: ?*anyopaque, param3: i32) QtC.KIO__CopyJob {
        return qtc.KIO_Copy(@ptrCast(param1), @ptrCast(param2), @intCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kio.html#copyAs)
    ///
    /// ``` param1: QtC.QUrl, param2: QtC.QUrl, param3: flag of job_base_enums.JobFlag ```
    pub fn CopyAs(param1: ?*anyopaque, param2: ?*anyopaque, param3: i32) QtC.KIO__CopyJob {
        return qtc.KIO_CopyAs(@ptrCast(param1), @ptrCast(param2), @intCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kio.html#copy)
    ///
    /// ``` param1: []QtC.QUrl, param2: QtC.QUrl, param3: flag of job_base_enums.JobFlag ```
    pub fn Copy2(param1: []QtC.QUrl, param2: ?*anyopaque, param3: i32) QtC.KIO__CopyJob {
        const param1_list = qtc.libqt_list{
            .len = param1.len,
            .data = @ptrCast(param1.ptr),
        };
        return qtc.KIO_Copy2(param1_list, @ptrCast(param2), @intCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kio.html#move)
    ///
    /// ``` param1: QtC.QUrl, param2: QtC.QUrl, param3: flag of job_base_enums.JobFlag ```
    pub fn Move(param1: ?*anyopaque, param2: ?*anyopaque, param3: i32) QtC.KIO__CopyJob {
        return qtc.KIO_Move(@ptrCast(param1), @ptrCast(param2), @intCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kio.html#moveAs)
    ///
    /// ``` param1: QtC.QUrl, param2: QtC.QUrl, param3: flag of job_base_enums.JobFlag ```
    pub fn MoveAs(param1: ?*anyopaque, param2: ?*anyopaque, param3: i32) QtC.KIO__CopyJob {
        return qtc.KIO_MoveAs(@ptrCast(param1), @ptrCast(param2), @intCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kio.html#move)
    ///
    /// ``` param1: []QtC.QUrl, param2: QtC.QUrl, param3: flag of job_base_enums.JobFlag ```
    pub fn Move2(param1: []QtC.QUrl, param2: ?*anyopaque, param3: i32) QtC.KIO__CopyJob {
        const param1_list = qtc.libqt_list{
            .len = param1.len,
            .data = @ptrCast(param1.ptr),
        };
        return qtc.KIO_Move2(param1_list, @ptrCast(param2), @intCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kio.html#link)
    ///
    /// ``` param1: QtC.QUrl, param2: QtC.QUrl, param3: flag of job_base_enums.JobFlag ```
    pub fn Link(param1: ?*anyopaque, param2: ?*anyopaque, param3: i32) QtC.KIO__CopyJob {
        return qtc.KIO_Link(@ptrCast(param1), @ptrCast(param2), @intCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kio.html#link)
    ///
    /// ``` param1: []QtC.QUrl, param2: QtC.QUrl, param3: flag of job_base_enums.JobFlag ```
    pub fn Link2(param1: []QtC.QUrl, param2: ?*anyopaque, param3: i32) QtC.KIO__CopyJob {
        const param1_list = qtc.libqt_list{
            .len = param1.len,
            .data = @ptrCast(param1.ptr),
        };
        return qtc.KIO_Link2(param1_list, @ptrCast(param2), @intCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kio.html#linkAs)
    ///
    /// ``` param1: QtC.QUrl, param2: QtC.QUrl, param3: flag of job_base_enums.JobFlag ```
    pub fn LinkAs(param1: ?*anyopaque, param2: ?*anyopaque, param3: i32) QtC.KIO__CopyJob {
        return qtc.KIO_LinkAs(@ptrCast(param1), @ptrCast(param2), @intCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kio.html#trash)
    ///
    /// ``` param1: QtC.QUrl, param2: flag of job_base_enums.JobFlag ```
    pub fn Trash(param1: ?*anyopaque, param2: i32) QtC.KIO__CopyJob {
        return qtc.KIO_Trash(@ptrCast(param1), @intCast(param2));
    }

    /// [Qt documentation](https://api.kde.org/kio.html#trash)
    ///
    /// ``` param1: []QtC.QUrl, param2: flag of job_base_enums.JobFlag ```
    pub fn Trash2(param1: []QtC.QUrl, param2: i32) QtC.KIO__CopyJob {
        const param1_list = qtc.libqt_list{
            .len = param1.len,
            .data = @ptrCast(param1.ptr),
        };
        return qtc.KIO_Trash2(param1_list, @intCast(param2));
    }
};

/// https://api.kde.org/kio-copyjob.html#types
pub const enums = struct {
    pub const CopyMode = enum {
        pub const Copy: i32 = 0;
        pub const Move: i32 = 1;
        pub const Link: i32 = 2;
    };
};
