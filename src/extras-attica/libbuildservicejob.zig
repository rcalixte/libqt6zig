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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::BuildServiceJob object in C++ memory
    ///
    pub fn new() Attica__BuildServiceJob {
        return .{ .ptr = qtc.Attica__BuildServiceJob_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::BuildServiceJob object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__BuildServiceJob `
    ///
    pub fn new2(other: anytype) Attica__BuildServiceJob {
        comptime _ = @TypeOf(other)._is_Attica__BuildServiceJob;
        return .{ .ptr = qtc.Attica__BuildServiceJob_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` other: Attica__BuildServiceJob `
    ///
    pub fn operatorAssign(self: Attica__BuildServiceJob, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__BuildServiceJob;
        qtc.Attica__BuildServiceJob_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__BuildServiceJob, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__BuildServiceJob_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__BuildServiceJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildServiceJob_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__BuildServiceJob.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__BuildServiceJob, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__BuildServiceJob_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__BuildServiceJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildServiceJob_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__BuildServiceJob.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` _url: []const u8 `
    ///
    pub fn setUrl(self: Attica__BuildServiceJob, _url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = _url.len,
            .data = _url.ptr,
        };
        qtc.Attica__BuildServiceJob_SetUrl(@ptrCast(self.ptr), url_str);
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn url(self: Attica__BuildServiceJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildServiceJob_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__BuildServiceJob.url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setProjectId` instead
    ///
    pub const SetProjectId = setProjectId;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setProjectId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` _projectId: []const u8 `
    ///
    pub fn setProjectId(self: Attica__BuildServiceJob, _projectId: []const u8) void {
        const projectId_str = qtc.libqt_string{
            .len = _projectId.len,
            .data = _projectId.ptr,
        };
        qtc.Attica__BuildServiceJob_SetProjectId(@ptrCast(self.ptr), projectId_str);
    }

    /// ### DEPRECATED: Use `projectId` instead
    ///
    pub const ProjectId = projectId;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#projectId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn projectId(self: Attica__BuildServiceJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildServiceJob_ProjectId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__BuildServiceJob.projectId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setBuildServiceId` instead
    ///
    pub const SetBuildServiceId = setBuildServiceId;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setBuildServiceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` _buildServiceId: []const u8 `
    ///
    pub fn setBuildServiceId(self: Attica__BuildServiceJob, _buildServiceId: []const u8) void {
        const buildServiceId_str = qtc.libqt_string{
            .len = _buildServiceId.len,
            .data = _buildServiceId.ptr,
        };
        qtc.Attica__BuildServiceJob_SetBuildServiceId(@ptrCast(self.ptr), buildServiceId_str);
    }

    /// ### DEPRECATED: Use `buildServiceId` instead
    ///
    pub const BuildServiceId = buildServiceId;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#buildServiceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn buildServiceId(self: Attica__BuildServiceJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildServiceJob_BuildServiceId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__BuildServiceJob.buildServiceId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMessage` instead
    ///
    pub const SetMessage = setMessage;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` _message: []const u8 `
    ///
    pub fn setMessage(self: Attica__BuildServiceJob, _message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = _message.len,
            .data = _message.ptr,
        };
        qtc.Attica__BuildServiceJob_SetMessage(@ptrCast(self.ptr), message_str);
    }

    /// ### DEPRECATED: Use `message` instead
    ///
    pub const Message = message;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#message)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn message(self: Attica__BuildServiceJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildServiceJob_Message(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__BuildServiceJob.message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTarget` instead
    ///
    pub const SetTarget = setTarget;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` _target: []const u8 `
    ///
    pub fn setTarget(self: Attica__BuildServiceJob, _target: []const u8) void {
        const target_str = qtc.libqt_string{
            .len = _target.len,
            .data = _target.ptr,
        };
        qtc.Attica__BuildServiceJob_SetTarget(@ptrCast(self.ptr), target_str);
    }

    /// ### DEPRECATED: Use `target` instead
    ///
    pub const Target = target;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#target)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn target(self: Attica__BuildServiceJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildServiceJob_Target(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__BuildServiceJob.target: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setProgress` instead
    ///
    pub const SetProgress = setProgress;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` _progress: f64 `
    ///
    pub fn setProgress(self: Attica__BuildServiceJob, _progress: f64) void {
        qtc.Attica__BuildServiceJob_SetProgress(@ptrCast(self.ptr), _progress);
    }

    /// ### DEPRECATED: Use `progress` instead
    ///
    pub const Progress = progress;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#progress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    pub fn progress(self: Attica__BuildServiceJob) f64 {
        return qtc.Attica__BuildServiceJob_Progress(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStatus` instead
    ///
    pub const SetStatus = setStatus;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    /// ` status: i32 `
    ///
    pub fn setStatus(self: Attica__BuildServiceJob, status: i32) void {
        qtc.Attica__BuildServiceJob_SetStatus(@ptrCast(self.ptr), @bitCast(status));
    }

    /// ### DEPRECATED: Use `isRunning` instead
    ///
    pub const IsRunning = isRunning;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    pub fn isRunning(self: Attica__BuildServiceJob) bool {
        return qtc.Attica__BuildServiceJob_IsRunning(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCompleted` instead
    ///
    pub const IsCompleted = isCompleted;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#isCompleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    pub fn isCompleted(self: Attica__BuildServiceJob) bool {
        return qtc.Attica__BuildServiceJob_IsCompleted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFailed` instead
    ///
    pub const IsFailed = isFailed;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#isFailed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    pub fn isFailed(self: Attica__BuildServiceJob) bool {
        return qtc.Attica__BuildServiceJob_IsFailed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejob.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    pub fn isValid(self: Attica__BuildServiceJob) bool {
        return qtc.Attica__BuildServiceJob_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__BuildServiceJob `
    ///
    pub fn delete(self: Attica__BuildServiceJob) void {
        qtc.Attica__BuildServiceJob_Delete(@ptrCast(self.ptr));
    }
};
