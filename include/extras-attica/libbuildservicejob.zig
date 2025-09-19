const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/attica-buildservicejob.html
pub const attica__buildservicejob = struct {
    /// New constructs a new Attica::BuildServiceJob object.
    ///
    ///
    pub fn New() QtC.Attica__BuildServiceJob {
        return qtc.Attica__BuildServiceJob_new();
    }

    /// New2 constructs a new Attica::BuildServiceJob object.
    ///
    /// ``` other: QtC.Attica__BuildServiceJob ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__BuildServiceJob {
        return qtc.Attica__BuildServiceJob_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, other: QtC.Attica__BuildServiceJob ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__BuildServiceJob_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setId)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, id: []const u8 ```
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__BuildServiceJob_SetId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#id)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__BuildServiceJob_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::buildservicejob.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setName)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__BuildServiceJob_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#name)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__BuildServiceJob_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::buildservicejob.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setUrl)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, url: []const u8 ```
    pub fn SetUrl(self: ?*anyopaque, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.Attica__BuildServiceJob_SetUrl(@ptrCast(self), url_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#url)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, allocator: std.mem.Allocator ```
    pub fn Url(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__BuildServiceJob_Url(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::buildservicejob.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setProjectId)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, projectId: []const u8 ```
    pub fn SetProjectId(self: ?*anyopaque, projectId: []const u8) void {
        const projectId_str = qtc.libqt_string{
            .len = projectId.len,
            .data = projectId.ptr,
        };
        qtc.Attica__BuildServiceJob_SetProjectId(@ptrCast(self), projectId_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#projectId)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, allocator: std.mem.Allocator ```
    pub fn ProjectId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__BuildServiceJob_ProjectId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::buildservicejob.ProjectId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setBuildServiceId)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, buildServiceId: []const u8 ```
    pub fn SetBuildServiceId(self: ?*anyopaque, buildServiceId: []const u8) void {
        const buildServiceId_str = qtc.libqt_string{
            .len = buildServiceId.len,
            .data = buildServiceId.ptr,
        };
        qtc.Attica__BuildServiceJob_SetBuildServiceId(@ptrCast(self), buildServiceId_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#buildServiceId)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, allocator: std.mem.Allocator ```
    pub fn BuildServiceId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__BuildServiceJob_BuildServiceId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::buildservicejob.BuildServiceId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setMessage)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, message: []const u8 ```
    pub fn SetMessage(self: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.Attica__BuildServiceJob_SetMessage(@ptrCast(self), message_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#message)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, allocator: std.mem.Allocator ```
    pub fn Message(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__BuildServiceJob_Message(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::buildservicejob.Message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setTarget)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, target: []const u8 ```
    pub fn SetTarget(self: ?*anyopaque, target: []const u8) void {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        qtc.Attica__BuildServiceJob_SetTarget(@ptrCast(self), target_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#target)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, allocator: std.mem.Allocator ```
    pub fn Target(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__BuildServiceJob_Target(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::buildservicejob.Target: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setProgress)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, progress: f64 ```
    pub fn SetProgress(self: ?*anyopaque, progress: f64) void {
        qtc.Attica__BuildServiceJob_SetProgress(@ptrCast(self), progress);
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#progress)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob ```
    pub fn Progress(self: ?*anyopaque) f64 {
        return qtc.Attica__BuildServiceJob_Progress(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setStatus)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob, status: i32 ```
    pub fn SetStatus(self: ?*anyopaque, status: i32) void {
        qtc.Attica__BuildServiceJob_SetStatus(@ptrCast(self), @intCast(status));
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#isRunning)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob ```
    pub fn IsRunning(self: ?*anyopaque) bool {
        return qtc.Attica__BuildServiceJob_IsRunning(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#isCompleted)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob ```
    pub fn IsCompleted(self: ?*anyopaque) bool {
        return qtc.Attica__BuildServiceJob_IsCompleted(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#isFailed)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob ```
    pub fn IsFailed(self: ?*anyopaque) bool {
        return qtc.Attica__BuildServiceJob_IsFailed(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#isValid)
    ///
    /// ``` self: QtC.Attica__BuildServiceJob ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__BuildServiceJob_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__BuildServiceJob ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__BuildServiceJob_Delete(@ptrCast(self));
    }
};
