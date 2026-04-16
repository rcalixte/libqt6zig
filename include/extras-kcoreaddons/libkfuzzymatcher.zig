const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html)
pub const KFuzzyMatcher__Result = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFuzzyMatcher__Result,

    pub const _is_KFuzzyMatcher__Result = {};

    /// New constructs a new KFuzzyMatcher::Result object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KFuzzyMatcher__Result `
    ///
    pub fn New(other: anytype) KFuzzyMatcher__Result {
        comptime _ = @TypeOf(other)._is_KFuzzyMatcher__Result;
        return .{ .ptr = qtc.KFuzzyMatcher__Result_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KFuzzyMatcher::Result object and invalidates the source KFuzzyMatcher::Result object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KFuzzyMatcher__Result `
    ///
    pub fn New2(other: anytype) KFuzzyMatcher__Result {
        comptime _ = @TypeOf(other)._is_KFuzzyMatcher__Result;
        return .{ .ptr = qtc.KFuzzyMatcher__Result_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KFuzzyMatcher__Result `
    ///
    /// ` other: KFuzzyMatcher__Result `
    ///
    pub fn CopyAssign(self: KFuzzyMatcher__Result, other: KFuzzyMatcher__Result) void {
        qtc.KFuzzyMatcher__Result_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KFuzzyMatcher__Result `
    ///
    /// ` other: KFuzzyMatcher__Result `
    ///
    pub fn MoveAssign(self: KFuzzyMatcher__Result, other: KFuzzyMatcher__Result) void {
        qtc.KFuzzyMatcher__Result_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html#score-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFuzzyMatcher__Result `
    ///
    pub fn Score(self: KFuzzyMatcher__Result) i32 {
        return qtc.KFuzzyMatcher__Result_Score(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html#score-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFuzzyMatcher__Result `
    ///
    /// ` score: i32 `
    ///
    pub fn SetScore(self: KFuzzyMatcher__Result, score: i32) void {
        qtc.KFuzzyMatcher__Result_SetScore(@ptrCast(self.ptr), @bitCast(score));
    }

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html#matched-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFuzzyMatcher__Result `
    ///
    pub fn Matched(self: KFuzzyMatcher__Result) bool {
        return qtc.KFuzzyMatcher__Result_Matched(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html#matched-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFuzzyMatcher__Result `
    ///
    /// ` matched: bool `
    ///
    pub fn SetMatched(self: KFuzzyMatcher__Result, matched: bool) void {
        qtc.KFuzzyMatcher__Result_SetMatched(@ptrCast(self.ptr), matched);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFuzzyMatcher__Result `
    ///
    pub fn Delete(self: KFuzzyMatcher__Result) void {
        qtc.KFuzzyMatcher__Result_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-range.html)
pub const KFuzzyMatcher__Range = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-range.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFuzzyMatcher__Range,

    pub const _is_KFuzzyMatcher__Range = {};

    /// New constructs a new KFuzzyMatcher::Range object.
    ///
    pub fn New() KFuzzyMatcher__Range {
        return .{ .ptr = qtc.KFuzzyMatcher__Range_new() };
    }

    /// New2 constructs a new KFuzzyMatcher::Range object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KFuzzyMatcher__Range `
    ///
    pub fn New2(param1: anytype) KFuzzyMatcher__Range {
        comptime _ = @TypeOf(param1)._is_KFuzzyMatcher__Range;
        return .{ .ptr = qtc.KFuzzyMatcher__Range_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-range.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFuzzyMatcher__Range `
    ///
    pub fn Start(self: KFuzzyMatcher__Range) i32 {
        return qtc.KFuzzyMatcher__Range_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-range.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFuzzyMatcher__Range `
    ///
    /// ` start: i32 `
    ///
    pub fn SetStart(self: KFuzzyMatcher__Range, start: i32) void {
        qtc.KFuzzyMatcher__Range_SetStart(@ptrCast(self.ptr), @bitCast(start));
    }

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-range.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFuzzyMatcher__Range `
    ///
    pub fn Length(self: KFuzzyMatcher__Range) i32 {
        return qtc.KFuzzyMatcher__Range_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-range.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFuzzyMatcher__Range `
    ///
    /// ` length: i32 `
    ///
    pub fn SetLength(self: KFuzzyMatcher__Range, length: i32) void {
        qtc.KFuzzyMatcher__Range_SetLength(@ptrCast(self.ptr), @bitCast(length));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFuzzyMatcher__Range `
    ///
    pub fn Delete(self: KFuzzyMatcher__Range) void {
        qtc.KFuzzyMatcher__Range_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfuzzymatcher.html#public-types)
pub const enums = struct {
    pub const RangeType = enum(u8) {
        pub const FullyMatched: u8 = 0;
        pub const All: u8 = 1;
    };
};
