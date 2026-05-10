const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QTextCursor = @import("libqt6").QTextCursor;

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
pub const TextUtils__ConvertText = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextCursor `
    ///
    pub fn UpperCase(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTextCursor;
        qtc.TextUtils__ConvertText_UpperCase(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextCursor `
    ///
    pub fn LowerCase(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTextCursor;
        qtc.TextUtils__ConvertText_LowerCase(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextCursor `
    ///
    pub fn SentenceCase(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTextCursor;
        qtc.TextUtils__ConvertText_SentenceCase(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextCursor `
    ///
    pub fn ReverseCase(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTextCursor;
        qtc.TextUtils__ConvertText_ReverseCase(@ptrCast(param1.ptr));
    }
};
