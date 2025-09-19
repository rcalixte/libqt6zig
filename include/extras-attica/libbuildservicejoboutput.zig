const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/attica-buildservicejoboutput.html
pub const attica__buildservicejoboutput = struct {
    /// New constructs a new Attica::BuildServiceJobOutput object.
    ///
    ///
    pub fn New() QtC.Attica__BuildServiceJobOutput {
        return qtc.Attica__BuildServiceJobOutput_new();
    }

    /// New2 constructs a new Attica::BuildServiceJobOutput object.
    ///
    /// ``` other: QtC.Attica__BuildServiceJobOutput ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__BuildServiceJobOutput {
        return qtc.Attica__BuildServiceJobOutput_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejoboutput.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__BuildServiceJobOutput, other: QtC.Attica__BuildServiceJobOutput ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__BuildServiceJobOutput_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejoboutput.html#setOutput)
    ///
    /// ``` self: QtC.Attica__BuildServiceJobOutput, output: []const u8 ```
    pub fn SetOutput(self: ?*anyopaque, output: []const u8) void {
        const output_str = qtc.libqt_string{
            .len = output.len,
            .data = output.ptr,
        };
        qtc.Attica__BuildServiceJobOutput_SetOutput(@ptrCast(self), output_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejoboutput.html#output)
    ///
    /// ``` self: QtC.Attica__BuildServiceJobOutput, allocator: std.mem.Allocator ```
    pub fn Output(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__BuildServiceJobOutput_Output(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::buildservicejoboutput.Output: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejoboutput.html#isRunning)
    ///
    /// ``` self: QtC.Attica__BuildServiceJobOutput ```
    pub fn IsRunning(self: ?*anyopaque) bool {
        return qtc.Attica__BuildServiceJobOutput_IsRunning(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejoboutput.html#isCompleted)
    ///
    /// ``` self: QtC.Attica__BuildServiceJobOutput ```
    pub fn IsCompleted(self: ?*anyopaque) bool {
        return qtc.Attica__BuildServiceJobOutput_IsCompleted(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejoboutput.html#isFailed)
    ///
    /// ``` self: QtC.Attica__BuildServiceJobOutput ```
    pub fn IsFailed(self: ?*anyopaque) bool {
        return qtc.Attica__BuildServiceJobOutput_IsFailed(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-buildservicejoboutput.html#isValid)
    ///
    /// ``` self: QtC.Attica__BuildServiceJobOutput ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__BuildServiceJobOutput_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__BuildServiceJobOutput ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__BuildServiceJobOutput_Delete(@ptrCast(self));
    }
};
