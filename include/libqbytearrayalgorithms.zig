const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html)
pub const qbytearrayalgorithms_h = extern struct {
    /// ### DEPRECATED: Use `qmemrchr` instead
    ///
    pub const Qmemrchr = qmemrchr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qmemrchr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: ?*const anyopaque `
    ///
    /// ` needle: i32 `
    ///
    /// ` n: usize `
    ///
    pub fn qmemrchr(s: ?*const anyopaque, needle: i32, n: usize) ?*const anyopaque {
        return qtc.qbytearrayalgorithms_h_Qmemrchr(@ptrCast(s), @bitCast(needle), @bitCast(n));
    }

    /// ### DEPRECATED: Use `qstrdup` instead
    ///
    pub const Qstrdup = qstrdup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrdup)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn qstrdup(param1: [:0]const u8) [:0]u8 {
        const param1_Cstring = param1.ptr;
        const _ret = qtc.qbytearrayalgorithms_h_Qstrdup(param1_Cstring);
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `qstrlen` instead
    ///
    pub const Qstrlen = qstrlen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrlen)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: [:0]const u8 `
    ///
    pub fn qstrlen(str: [:0]const u8) usize {
        const str_Cstring = str.ptr;
        return qtc.qbytearrayalgorithms_h_Qstrlen(str_Cstring);
    }

    /// ### DEPRECATED: Use `qstrnlen` instead
    ///
    pub const Qstrnlen = qstrnlen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrnlen)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: [:0]const u8 `
    ///
    /// ` maxlen: usize `
    ///
    pub fn qstrnlen(str: [:0]const u8, maxlen: usize) usize {
        const str_Cstring = str.ptr;
        return qtc.qbytearrayalgorithms_h_Qstrnlen(str_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `qstrcpy` instead
    ///
    pub const Qstrcpy = qstrcpy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrcpy)
    ///
    /// ## Parameter(s):
    ///
    /// ` dst: [:0]u8 `
    ///
    /// ` src: [:0]const u8 `
    ///
    pub fn qstrcpy(dst: [:0]u8, src: [:0]const u8) [:0]u8 {
        const dst_Cstring = dst.ptr;
        const src_Cstring = src.ptr;
        const _ret = qtc.qbytearrayalgorithms_h_Qstrcpy(dst_Cstring, src_Cstring);
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `qstrncpy` instead
    ///
    pub const Qstrncpy = qstrncpy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrncpy)
    ///
    /// ## Parameter(s):
    ///
    /// ` dst: [:0]u8 `
    ///
    /// ` src: [:0]const u8 `
    ///
    /// ` len: usize `
    ///
    pub fn qstrncpy(dst: [:0]u8, src: [:0]const u8, len: usize) [:0]u8 {
        const dst_Cstring = dst.ptr;
        const src_Cstring = src.ptr;
        const _ret = qtc.qbytearrayalgorithms_h_Qstrncpy(dst_Cstring, src_Cstring, @bitCast(len));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `qstrcmp` instead
    ///
    pub const Qstrcmp = qstrcmp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrcmp)
    ///
    /// ## Parameter(s):
    ///
    /// ` str1: [:0]const u8 `
    ///
    /// ` str2: [:0]const u8 `
    ///
    pub fn qstrcmp(str1: [:0]const u8, str2: [:0]const u8) i32 {
        const str1_Cstring = str1.ptr;
        const str2_Cstring = str2.ptr;
        return qtc.qbytearrayalgorithms_h_Qstrcmp(str1_Cstring, str2_Cstring);
    }

    /// ### DEPRECATED: Use `qstrncmp` instead
    ///
    pub const Qstrncmp = qstrncmp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrncmp)
    ///
    /// ## Parameter(s):
    ///
    /// ` str1: [:0]const u8 `
    ///
    /// ` str2: [:0]const u8 `
    ///
    /// ` len: usize `
    ///
    pub fn qstrncmp(str1: [:0]const u8, str2: [:0]const u8, len: usize) i32 {
        const str1_Cstring = str1.ptr;
        const str2_Cstring = str2.ptr;
        return qtc.qbytearrayalgorithms_h_Qstrncmp(str1_Cstring, str2_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `qstricmp` instead
    ///
    pub const Qstricmp = qstricmp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstricmp)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: [:0]const u8 `
    ///
    /// ` param2: [:0]const u8 `
    ///
    pub fn qstricmp(param1: [:0]const u8, param2: [:0]const u8) i32 {
        const param1_Cstring = param1.ptr;
        const param2_Cstring = param2.ptr;
        return qtc.qbytearrayalgorithms_h_Qstricmp(param1_Cstring, param2_Cstring);
    }

    /// ### DEPRECATED: Use `qstrnicmp` instead
    ///
    pub const Qstrnicmp = qstrnicmp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrnicmp)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: [:0]const u8 `
    ///
    /// ` param2: [:0]const u8 `
    ///
    /// ` len: usize `
    ///
    pub fn qstrnicmp(param1: [:0]const u8, param2: [:0]const u8, len: usize) i32 {
        const param1_Cstring = param1.ptr;
        const param2_Cstring = param2.ptr;
        return qtc.qbytearrayalgorithms_h_Qstrnicmp(param1_Cstring, param2_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `qstrnicmp2` instead
    ///
    pub const Qstrnicmp2 = qstrnicmp2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrnicmp)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: [:0]const u8 `
    ///
    /// ` param2: isize `
    ///
    /// ` param3: [:0]const u8 `
    ///
    /// ` param4: isize `
    ///
    pub fn qstrnicmp2(param1: [:0]const u8, param2: isize, param3: [:0]const u8, param4: isize) i32 {
        const param1_Cstring = param1.ptr;
        const param3_Cstring = param3.ptr;
        return qtc.qbytearrayalgorithms_h_Qstrnicmp2(param1_Cstring, @bitCast(param2), param3_Cstring, @bitCast(param4));
    }
};
