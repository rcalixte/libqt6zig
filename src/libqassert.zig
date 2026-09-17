const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qassert.html)
pub const qassert = extern struct {
    /// ### DEPRECATED: Use `assert` instead
    ///
    pub const Assert = assert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qassert.html#qt_assert)
    ///
    /// ## Parameter(s):
    ///
    /// ` assertion: [:0]const u8 `
    ///
    /// ` file: [:0]const u8 `
    ///
    /// ` line: i32 `
    ///
    pub fn assert(assertion: [:0]const u8, file: [:0]const u8, line: i32) void {
        const assertion_Cstring = assertion.ptr;
        const file_Cstring = file.ptr;
        qtc.qassert_Assert(assertion_Cstring, file_Cstring, @bitCast(line));
    }

    /// ### DEPRECATED: Use `assertX` instead
    ///
    pub const AssertX = assertX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qassert.html#qt_assert_x)
    ///
    /// ## Parameter(s):
    ///
    /// ` where: [:0]const u8 `
    ///
    /// ` what: [:0]const u8 `
    ///
    /// ` file: [:0]const u8 `
    ///
    /// ` line: i32 `
    ///
    pub fn assertX(where: [:0]const u8, what: [:0]const u8, file: [:0]const u8, line: i32) void {
        const where_Cstring = where.ptr;
        const what_Cstring = what.ptr;
        const file_Cstring = file.ptr;
        qtc.qassert_AssertX(where_Cstring, what_Cstring, file_Cstring, @bitCast(line));
    }

    /// ### DEPRECATED: Use `checkPointer` instead
    ///
    pub const CheckPointer = checkPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qassert.html#qt_check_pointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: [:0]const u8 `
    ///
    /// ` param2: i32 `
    ///
    pub fn checkPointer(param1: [:0]const u8, param2: i32) void {
        const param1_Cstring = param1.ptr;
        qtc.qassert_CheckPointer(param1_Cstring, @bitCast(param2));
    }

    /// ### DEPRECATED: Use `qBadAlloc` instead
    ///
    pub const QBadAlloc = qBadAlloc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qassert.html#qBadAlloc)
    ///
    pub fn qBadAlloc() void {
        qtc.qassert_QBadAlloc();
    }

    /// ### DEPRECATED: Use `assumeIsDeprecated` instead
    ///
    pub const AssumeIsDeprecated = assumeIsDeprecated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qassert.html#qt_assume_is_deprecated)
    ///
    /// ## Parameter(s):
    ///
    /// ` cond: bool `
    ///
    pub fn assumeIsDeprecated(cond: bool) bool {
        return qtc.qassert_AssumeIsDeprecated(cond);
    }
};
