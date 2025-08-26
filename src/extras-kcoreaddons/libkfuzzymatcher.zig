const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api-staging.kde.org/kfuzzymatcher-result.html
pub const kfuzzymatcher__result = struct {
    /// New constructs a new KFuzzyMatcher::Result object.
    ///
    /// ``` other: QtC.KFuzzyMatcher__Result ```
    pub fn New(other: ?*anyopaque) QtC.KFuzzyMatcher__Result {
        return qtc.KFuzzyMatcher__Result_new(@ptrCast(other));
    }

    /// New2 constructs a new KFuzzyMatcher::Result object and invalidates the source KFuzzyMatcher::Result object.
    ///
    /// ``` other: QtC.KFuzzyMatcher__Result ```
    pub fn New2(other: ?*anyopaque) QtC.KFuzzyMatcher__Result {
        return qtc.KFuzzyMatcher__Result_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.KFuzzyMatcher__Result, other: QtC.KFuzzyMatcher__Result ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KFuzzyMatcher__Result_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.KFuzzyMatcher__Result, other: QtC.KFuzzyMatcher__Result ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KFuzzyMatcher__Result_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api-staging.kde.org/kfuzzymatcher-result.html#score-var)
    ///
    /// ``` self: QtC.KFuzzyMatcher__Result ```
    pub fn Score(self: ?*anyopaque) i32 {
        return qtc.KFuzzyMatcher__Result_Score(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kfuzzymatcher-result.html#score-var)
    ///
    /// ``` self: QtC.KFuzzyMatcher__Result, score: i32 ```
    pub fn SetScore(self: ?*anyopaque, score: i32) void {
        qtc.KFuzzyMatcher__Result_SetScore(@ptrCast(self), @intCast(score));
    }

    /// [Qt documentation](https://api-staging.kde.org/kfuzzymatcher-result.html#matched-var)
    ///
    /// ``` self: QtC.KFuzzyMatcher__Result ```
    pub fn Matched(self: ?*anyopaque) bool {
        return qtc.KFuzzyMatcher__Result_Matched(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kfuzzymatcher-result.html#matched-var)
    ///
    /// ``` self: QtC.KFuzzyMatcher__Result, matched: bool ```
    pub fn SetMatched(self: ?*anyopaque, matched: bool) void {
        qtc.KFuzzyMatcher__Result_SetMatched(@ptrCast(self), matched);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KFuzzyMatcher__Result ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KFuzzyMatcher__Result_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/kfuzzymatcher-range.html
pub const kfuzzymatcher__range = struct {
    /// New constructs a new KFuzzyMatcher::Range object.
    ///
    ///
    pub fn New() QtC.KFuzzyMatcher__Range {
        return qtc.KFuzzyMatcher__Range_new();
    }

    /// New2 constructs a new KFuzzyMatcher::Range object.
    ///
    /// ``` param1: QtC.KFuzzyMatcher__Range ```
    pub fn New2(param1: ?*anyopaque) QtC.KFuzzyMatcher__Range {
        return qtc.KFuzzyMatcher__Range_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kfuzzymatcher-range.html#start-var)
    ///
    /// ``` self: QtC.KFuzzyMatcher__Range ```
    pub fn Start(self: ?*anyopaque) i32 {
        return qtc.KFuzzyMatcher__Range_Start(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kfuzzymatcher-range.html#start-var)
    ///
    /// ``` self: QtC.KFuzzyMatcher__Range, start: i32 ```
    pub fn SetStart(self: ?*anyopaque, start: i32) void {
        qtc.KFuzzyMatcher__Range_SetStart(@ptrCast(self), @intCast(start));
    }

    /// [Qt documentation](https://api-staging.kde.org/kfuzzymatcher-range.html#length-var)
    ///
    /// ``` self: QtC.KFuzzyMatcher__Range ```
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.KFuzzyMatcher__Range_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kfuzzymatcher-range.html#length-var)
    ///
    /// ``` self: QtC.KFuzzyMatcher__Range, length: i32 ```
    pub fn SetLength(self: ?*anyopaque, length: i32) void {
        qtc.KFuzzyMatcher__Range_SetLength(@ptrCast(self), @intCast(length));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KFuzzyMatcher__Range ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KFuzzyMatcher__Range_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/kfuzzymatcher.html#types
pub const enums = struct {
    pub const RangeType = enum {
        pub const FullyMatched: u8 = 0;
        pub const All: u8 = 1;
    };
};
