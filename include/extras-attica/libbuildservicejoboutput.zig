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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::BuildServiceJobOutput object in C++ memory
    ///
    pub fn new() Attica__BuildServiceJobOutput {
        return .{ .ptr = qtc.Attica__BuildServiceJobOutput_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::BuildServiceJobOutput object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__BuildServiceJobOutput `
    ///
    pub fn new2(other: anytype) Attica__BuildServiceJobOutput {
        comptime _ = @TypeOf(other)._is_Attica__BuildServiceJobOutput;
        return .{ .ptr = qtc.Attica__BuildServiceJobOutput_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJobOutput `
    ///
    /// ` other: Attica__BuildServiceJobOutput `
    ///
    pub fn operatorAssign(self: Attica__BuildServiceJobOutput, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__BuildServiceJobOutput;
        qtc.Attica__BuildServiceJobOutput_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setOutput` instead
    ///
    pub const SetOutput = setOutput;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#setOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJobOutput `
    ///
    /// ` _output: []const u8 `
    ///
    pub fn setOutput(self: Attica__BuildServiceJobOutput, _output: []const u8) void {
        const output_str = qtc.libqt_string{
            .len = _output.len,
            .data = _output.ptr,
        };
        qtc.Attica__BuildServiceJobOutput_SetOutput(@ptrCast(self.ptr), output_str);
    }

    /// ### DEPRECATED: Use `output` instead
    ///
    pub const Output = output;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#output)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJobOutput `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn output(self: Attica__BuildServiceJobOutput, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__BuildServiceJobOutput_Output(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__BuildServiceJobOutput.output: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isRunning` instead
    ///
    pub const IsRunning = isRunning;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJobOutput `
    ///
    pub fn isRunning(self: Attica__BuildServiceJobOutput) bool {
        return qtc.Attica__BuildServiceJobOutput_IsRunning(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCompleted` instead
    ///
    pub const IsCompleted = isCompleted;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#isCompleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJobOutput `
    ///
    pub fn isCompleted(self: Attica__BuildServiceJobOutput) bool {
        return qtc.Attica__BuildServiceJobOutput_IsCompleted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFailed` instead
    ///
    pub const IsFailed = isFailed;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#isFailed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJobOutput `
    ///
    pub fn isFailed(self: Attica__BuildServiceJobOutput) bool {
        return qtc.Attica__BuildServiceJobOutput_IsFailed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__BuildServiceJobOutput `
    ///
    pub fn isValid(self: Attica__BuildServiceJobOutput) bool {
        return qtc.Attica__BuildServiceJobOutput_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__BuildServiceJobOutput `
    ///
    pub fn delete(self: Attica__BuildServiceJobOutput) void {
        qtc.Attica__BuildServiceJobOutput_Delete(@ptrCast(self.ptr));
    }
};
