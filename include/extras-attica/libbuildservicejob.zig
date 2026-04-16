const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html)
pub const Attica__BuildServiceJob = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__BuildServiceJob,

    pub const _is_Attica__BuildServiceJob = {};

    /// New constructs a new Attica::BuildServiceJob object.
    ///
    pub fn New() Attica__BuildServiceJob {
        return .{ .ptr = qtc.Attica__BuildServiceJob_new() };
    }

    /// New2 constructs a new Attica::BuildServiceJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__BuildServiceJob `
    ///
    pub fn New2(other: anytype) Attica__BuildServiceJob {
        comptime _ = @TypeOf(other)._is_Attica__BuildServiceJob;
        return .{ .ptr = qtc.Attica__BuildServiceJob_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` other: Attica__BuildServiceJob `
    ///
    pub fn OperatorAssign(self: Attica__BuildServiceJob, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__BuildServiceJob;
        qtc.Attica__BuildServiceJob_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__BuildServiceJob, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__BuildServiceJob_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__BuildServiceJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildServiceJob_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__buildservicejob.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: Attica__BuildServiceJob, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__BuildServiceJob_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__BuildServiceJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildServiceJob_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__buildservicejob.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` url: []const u8 `
    ///
    pub fn SetUrl(self: Attica__BuildServiceJob, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.Attica__BuildServiceJob_SetUrl(@ptrCast(self.ptr), url_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Url(self: Attica__BuildServiceJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildServiceJob_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__buildservicejob.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setProjectId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` projectId: []const u8 `
    ///
    pub fn SetProjectId(self: Attica__BuildServiceJob, projectId: []const u8) void {
        const projectId_str = qtc.libqt_string{
            .len = projectId.len,
            .data = projectId.ptr,
        };
        qtc.Attica__BuildServiceJob_SetProjectId(@ptrCast(self.ptr), projectId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#projectId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProjectId(self: Attica__BuildServiceJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildServiceJob_ProjectId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__buildservicejob.ProjectId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setBuildServiceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` buildServiceId: []const u8 `
    ///
    pub fn SetBuildServiceId(self: Attica__BuildServiceJob, buildServiceId: []const u8) void {
        const buildServiceId_str = qtc.libqt_string{
            .len = buildServiceId.len,
            .data = buildServiceId.ptr,
        };
        qtc.Attica__BuildServiceJob_SetBuildServiceId(@ptrCast(self.ptr), buildServiceId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#buildServiceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BuildServiceId(self: Attica__BuildServiceJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildServiceJob_BuildServiceId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__buildservicejob.BuildServiceId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn SetMessage(self: Attica__BuildServiceJob, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.Attica__BuildServiceJob_SetMessage(@ptrCast(self.ptr), message_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#message)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Message(self: Attica__BuildServiceJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildServiceJob_Message(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__buildservicejob.Message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` target: []const u8 `
    ///
    pub fn SetTarget(self: Attica__BuildServiceJob, target: []const u8) void {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        qtc.Attica__BuildServiceJob_SetTarget(@ptrCast(self.ptr), target_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#target)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Target(self: Attica__BuildServiceJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildServiceJob_Target(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__buildservicejob.Target: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` progress: f64 `
    ///
    pub fn SetProgress(self: Attica__BuildServiceJob, progress: f64) void {
        qtc.Attica__BuildServiceJob_SetProgress(@ptrCast(self.ptr), progress);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#progress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    pub fn Progress(self: Attica__BuildServiceJob) f64 {
        return qtc.Attica__BuildServiceJob_Progress(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` status: i32 `
    ///
    pub fn SetStatus(self: Attica__BuildServiceJob, status: i32) void {
        qtc.Attica__BuildServiceJob_SetStatus(@ptrCast(self.ptr), @bitCast(status));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    pub fn IsRunning(self: Attica__BuildServiceJob) bool {
        return qtc.Attica__BuildServiceJob_IsRunning(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#isCompleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    pub fn IsCompleted(self: Attica__BuildServiceJob) bool {
        return qtc.Attica__BuildServiceJob_IsCompleted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#isFailed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    pub fn IsFailed(self: Attica__BuildServiceJob) bool {
        return qtc.Attica__BuildServiceJob_IsFailed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    pub fn IsValid(self: Attica__BuildServiceJob) bool {
        return qtc.Attica__BuildServiceJob_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    pub fn Delete(self: Attica__BuildServiceJob) void {
        qtc.Attica__BuildServiceJob_Delete(@ptrCast(self.ptr));
    }
};
