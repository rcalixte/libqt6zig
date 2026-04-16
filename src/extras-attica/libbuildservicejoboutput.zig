const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html)
pub const Attica__BuildServiceJobOutput = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__BuildServiceJobOutput,

    pub const _is_Attica__BuildServiceJobOutput = {};

    /// New constructs a new Attica::BuildServiceJobOutput object.
    ///
    pub fn New() Attica__BuildServiceJobOutput {
        return .{ .ptr = qtc.Attica__BuildServiceJobOutput_new() };
    }

    /// New2 constructs a new Attica::BuildServiceJobOutput object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__BuildServiceJobOutput `
    ///
    pub fn New2(other: anytype) Attica__BuildServiceJobOutput {
        comptime _ = @TypeOf(other)._is_Attica__BuildServiceJobOutput;
        return .{ .ptr = qtc.Attica__BuildServiceJobOutput_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJobOutput `
    ///
    /// ` other: Attica__BuildServiceJobOutput `
    ///
    pub fn OperatorAssign(self: Attica__BuildServiceJobOutput, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__BuildServiceJobOutput;
        qtc.Attica__BuildServiceJobOutput_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#setOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJobOutput `
    ///
    /// ` output: []const u8 `
    ///
    pub fn SetOutput(self: Attica__BuildServiceJobOutput, output: []const u8) void {
        const output_str = qtc.libqt_string{
            .len = output.len,
            .data = output.ptr,
        };
        qtc.Attica__BuildServiceJobOutput_SetOutput(@ptrCast(self.ptr), output_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#output)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJobOutput `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Output(self: Attica__BuildServiceJobOutput, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildServiceJobOutput_Output(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__buildservicejoboutput.Output: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJobOutput `
    ///
    pub fn IsRunning(self: Attica__BuildServiceJobOutput) bool {
        return qtc.Attica__BuildServiceJobOutput_IsRunning(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#isCompleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJobOutput `
    ///
    pub fn IsCompleted(self: Attica__BuildServiceJobOutput) bool {
        return qtc.Attica__BuildServiceJobOutput_IsCompleted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#isFailed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJobOutput `
    ///
    pub fn IsFailed(self: Attica__BuildServiceJobOutput) bool {
        return qtc.Attica__BuildServiceJobOutput_IsFailed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJobOutput `
    ///
    pub fn IsValid(self: Attica__BuildServiceJobOutput) bool {
        return qtc.Attica__BuildServiceJobOutput_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__BuildServiceJobOutput `
    ///
    pub fn Delete(self: Attica__BuildServiceJobOutput) void {
        qtc.Attica__BuildServiceJobOutput_Delete(@ptrCast(self.ptr));
    }
};
