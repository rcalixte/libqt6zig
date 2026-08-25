const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kfuzzymatcher_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html)
pub const KFuzzyMatcher__Result = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFuzzyMatcher__Result,

    pub const _is_KFuzzyMatcher__Result = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFuzzyMatcher::Result object in C++ memory
    ///
    pub fn new() KFuzzyMatcher__Result {
        return .{ .ptr = qtc.KFuzzyMatcher__Result_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KFuzzyMatcher::Result object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KFuzzyMatcher__Result `
    ///
    pub fn new2(other: anytype) KFuzzyMatcher__Result {
        comptime _ = @TypeOf(other)._is_KFuzzyMatcher__Result;
        return .{ .ptr = qtc.KFuzzyMatcher__Result_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KFuzzyMatcher::Result object and invalidate the source KFuzzyMatcher::Result object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KFuzzyMatcher__Result `
    ///
    pub fn new3(other: anytype) KFuzzyMatcher__Result {
        comptime _ = @TypeOf(other)._is_KFuzzyMatcher__Result;
        return .{ .ptr = qtc.KFuzzyMatcher__Result_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KFuzzyMatcher__Result `
    ///
    /// ` other: KFuzzyMatcher__Result `
    ///
    pub fn copyAssign(self: KFuzzyMatcher__Result, other: KFuzzyMatcher__Result) void {
        qtc.KFuzzyMatcher__Result_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KFuzzyMatcher__Result `
    ///
    /// ` other: KFuzzyMatcher__Result `
    ///
    pub fn moveAssign(self: KFuzzyMatcher__Result, other: KFuzzyMatcher__Result) void {
        qtc.KFuzzyMatcher__Result_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `score` instead
    ///
    pub const Score = score;

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html#score-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFuzzyMatcher__Result `
    ///
    pub fn score(self: KFuzzyMatcher__Result) i32 {
        return qtc.KFuzzyMatcher__Result_Score(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScore` instead
    ///
    pub const SetScore = setScore;

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html#score-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFuzzyMatcher__Result `
    ///
    /// ` _score: i32 `
    ///
    pub fn setScore(self: KFuzzyMatcher__Result, _score: i32) void {
        qtc.KFuzzyMatcher__Result_SetScore(@ptrCast(self.ptr), @bitCast(_score));
    }

    /// ### DEPRECATED: Use `matched` instead
    ///
    pub const Matched = matched;

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html#matched-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFuzzyMatcher__Result `
    ///
    pub fn matched(self: KFuzzyMatcher__Result) bool {
        return qtc.KFuzzyMatcher__Result_Matched(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMatched` instead
    ///
    pub const SetMatched = setMatched;

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-result.html#matched-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFuzzyMatcher__Result `
    ///
    /// ` _matched: bool `
    ///
    pub fn setMatched(self: KFuzzyMatcher__Result, _matched: bool) void {
        qtc.KFuzzyMatcher__Result_SetMatched(@ptrCast(self.ptr), _matched);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFuzzyMatcher__Result `
    ///
    pub fn delete(self: KFuzzyMatcher__Result) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFuzzyMatcher::Range object in C++ memory
    ///
    pub fn new() KFuzzyMatcher__Range {
        return .{ .ptr = qtc.KFuzzyMatcher__Range_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KFuzzyMatcher::Range object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KFuzzyMatcher__Range `
    ///
    pub fn new2(param1: anytype) KFuzzyMatcher__Range {
        comptime _ = @TypeOf(param1)._is_KFuzzyMatcher__Range;
        return .{ .ptr = qtc.KFuzzyMatcher__Range_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-range.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFuzzyMatcher__Range `
    ///
    pub fn start(self: KFuzzyMatcher__Range) i32 {
        return qtc.KFuzzyMatcher__Range_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStart` instead
    ///
    pub const SetStart = setStart;

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-range.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFuzzyMatcher__Range `
    ///
    /// ` _start: i32 `
    ///
    pub fn setStart(self: KFuzzyMatcher__Range, _start: i32) void {
        qtc.KFuzzyMatcher__Range_SetStart(@ptrCast(self.ptr), @bitCast(_start));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-range.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFuzzyMatcher__Range `
    ///
    pub fn length(self: KFuzzyMatcher__Range) i32 {
        return qtc.KFuzzyMatcher__Range_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLength` instead
    ///
    pub const SetLength = setLength;

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher-range.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFuzzyMatcher__Range `
    ///
    /// ` _length: i32 `
    ///
    pub fn setLength(self: KFuzzyMatcher__Range, _length: i32) void {
        qtc.KFuzzyMatcher__Range_SetLength(@ptrCast(self.ptr), @bitCast(_length));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFuzzyMatcher__Range `
    ///
    pub fn delete(self: KFuzzyMatcher__Range) void {
        qtc.KFuzzyMatcher__Range_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfuzzymatcher.html)
pub const KFuzzyMatcher = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFuzzyMatcher,

    pub const _is_KFuzzyMatcher = {};

    /// ### DEPRECATED: Use `matchSimple` instead
    ///
    pub const MatchSimple = matchSimple;

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher.html#matchSimple)
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []const u8 `
    ///
    /// ` str: []const u8 `
    ///
    pub fn matchSimple(pattern: []const u8, str: []const u8) bool {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.KFuzzyMatcher_MatchSimple(pattern_str, str_str);
    }

    /// ### DEPRECATED: Use `match` instead
    ///
    pub const Match = match;

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` pattern: []const u8 `
    ///
    /// ` str: []const u8 `
    ///
    pub fn match(pattern: []const u8, str: []const u8) KFuzzyMatcher__Result {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.KFuzzyMatcher_Match(pattern_str, str_str) };
    }

    /// ### DEPRECATED: Use `matchedRanges` instead
    ///
    pub const MatchedRanges = matchedRanges;

    /// ### [Upstream resources](https://api.kde.org/kfuzzymatcher.html#matchedRanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pattern: []const u8 `
    ///
    /// ` str: []const u8 `
    ///
    /// ` _type: kfuzzymatcher_enums.RangeType `
    ///
    pub fn matchedRanges(allocator: std.mem.Allocator, pattern: []const u8, str: []const u8, _type: u8) []KFuzzyMatcher__Range {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KFuzzyMatcher_MatchedRanges(pattern_str, str_str, @bitCast(_type));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KFuzzyMatcher__Range, _arr.len) catch @panic("KFuzzyMatcher.matchedRanges: Memory allocation failed");
        const _data_val: [*]QtC.KFuzzyMatcher__Range = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }
};

/// ### [Upstream resources](https://api.kde.org/kfuzzymatcher.html#public-types)
pub const enums = struct {
    pub const RangeType = enum {
        pub const FullyMatched: u8 = 0;
        pub const All: u8 = 1;
    };
};
