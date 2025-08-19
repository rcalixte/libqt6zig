const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qscicommand_enums = enums;
const std = @import("std");

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommand.html
pub const qscicommand = struct {
    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommand.html)
    ///
    /// ``` self: QtC.QsciCommand ```
    ///
    /// Returns: ``` qscicommand_enums.Command ```
    pub fn Command(self: ?*anyopaque) i32 {
        return qtc.QsciCommand_Command(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommand.html)
    ///
    /// ``` self: QtC.QsciCommand ```
    pub fn Execute(self: ?*anyopaque) void {
        qtc.QsciCommand_Execute(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommand.html)
    ///
    /// ``` self: QtC.QsciCommand, key: i32 ```
    pub fn SetKey(self: ?*anyopaque, key: i32) void {
        qtc.QsciCommand_SetKey(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommand.html)
    ///
    /// ``` self: QtC.QsciCommand, altkey: i32 ```
    pub fn SetAlternateKey(self: ?*anyopaque, altkey: i32) void {
        qtc.QsciCommand_SetAlternateKey(@ptrCast(self), @intCast(altkey));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommand.html)
    ///
    /// ``` self: QtC.QsciCommand ```
    pub fn Key(self: ?*anyopaque) i32 {
        return qtc.QsciCommand_Key(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommand.html)
    ///
    /// ``` self: QtC.QsciCommand ```
    pub fn AlternateKey(self: ?*anyopaque) i32 {
        return qtc.QsciCommand_AlternateKey(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommand.html)
    ///
    /// ``` key: i32 ```
    pub fn ValidKey(key: i32) bool {
        return qtc.QsciCommand_ValidKey(@intCast(key));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommand.html)
    ///
    /// ``` self: QtC.QsciCommand, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QsciCommand_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscicommand.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommand.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QsciCommand ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QsciCommand_Delete(@ptrCast(self));
    }
};

pub const enums = struct {
    pub const Command = enum {
        pub const LineDown: i32 = 2300;
        pub const LineDownExtend: i32 = 2301;
        pub const LineDownRectExtend: i32 = 2426;
        pub const LineScrollDown: i32 = 2342;
        pub const LineUp: i32 = 2302;
        pub const LineUpExtend: i32 = 2303;
        pub const LineUpRectExtend: i32 = 2427;
        pub const LineScrollUp: i32 = 2343;
        pub const ScrollToStart: i32 = 2628;
        pub const ScrollToEnd: i32 = 2629;
        pub const VerticalCentreCaret: i32 = 2619;
        pub const ParaDown: i32 = 2413;
        pub const ParaDownExtend: i32 = 2414;
        pub const ParaUp: i32 = 2415;
        pub const ParaUpExtend: i32 = 2416;
        pub const CharLeft: i32 = 2304;
        pub const CharLeftExtend: i32 = 2305;
        pub const CharLeftRectExtend: i32 = 2428;
        pub const CharRight: i32 = 2306;
        pub const CharRightExtend: i32 = 2307;
        pub const CharRightRectExtend: i32 = 2429;
        pub const WordLeft: i32 = 2308;
        pub const WordLeftExtend: i32 = 2309;
        pub const WordRight: i32 = 2310;
        pub const WordRightExtend: i32 = 2311;
        pub const WordLeftEnd: i32 = 2439;
        pub const WordLeftEndExtend: i32 = 2440;
        pub const WordRightEnd: i32 = 2441;
        pub const WordRightEndExtend: i32 = 2442;
        pub const WordPartLeft: i32 = 2390;
        pub const WordPartLeftExtend: i32 = 2391;
        pub const WordPartRight: i32 = 2392;
        pub const WordPartRightExtend: i32 = 2393;
        pub const Home: i32 = 2312;
        pub const HomeExtend: i32 = 2313;
        pub const HomeRectExtend: i32 = 2430;
        pub const HomeDisplay: i32 = 2345;
        pub const HomeDisplayExtend: i32 = 2346;
        pub const HomeWrap: i32 = 2349;
        pub const HomeWrapExtend: i32 = 2450;
        pub const VCHome: i32 = 2331;
        pub const VCHomeExtend: i32 = 2332;
        pub const VCHomeRectExtend: i32 = 2431;
        pub const VCHomeWrap: i32 = 2453;
        pub const VCHomeWrapExtend: i32 = 2454;
        pub const LineEnd: i32 = 2314;
        pub const LineEndExtend: i32 = 2315;
        pub const LineEndRectExtend: i32 = 2432;
        pub const LineEndDisplay: i32 = 2347;
        pub const LineEndDisplayExtend: i32 = 2348;
        pub const LineEndWrap: i32 = 2451;
        pub const LineEndWrapExtend: i32 = 2452;
        pub const DocumentStart: i32 = 2316;
        pub const DocumentStartExtend: i32 = 2317;
        pub const DocumentEnd: i32 = 2318;
        pub const DocumentEndExtend: i32 = 2319;
        pub const PageUp: i32 = 2320;
        pub const PageUpExtend: i32 = 2321;
        pub const PageUpRectExtend: i32 = 2433;
        pub const PageDown: i32 = 2322;
        pub const PageDownExtend: i32 = 2323;
        pub const PageDownRectExtend: i32 = 2434;
        pub const StutteredPageUp: i32 = 2435;
        pub const StutteredPageUpExtend: i32 = 2436;
        pub const StutteredPageDown: i32 = 2437;
        pub const StutteredPageDownExtend: i32 = 2438;
        pub const Delete: i32 = 2180;
        pub const DeleteBack: i32 = 2326;
        pub const DeleteBackNotLine: i32 = 2344;
        pub const DeleteWordLeft: i32 = 2335;
        pub const DeleteWordRight: i32 = 2336;
        pub const DeleteWordRightEnd: i32 = 2518;
        pub const DeleteLineLeft: i32 = 2395;
        pub const DeleteLineRight: i32 = 2396;
        pub const LineDelete: i32 = 2338;
        pub const LineCut: i32 = 2337;
        pub const LineCopy: i32 = 2455;
        pub const LineTranspose: i32 = 2339;
        pub const LineDuplicate: i32 = 2404;
        pub const SelectAll: i32 = 2013;
        pub const MoveSelectedLinesUp: i32 = 2620;
        pub const MoveSelectedLinesDown: i32 = 2621;
        pub const SelectionDuplicate: i32 = 2469;
        pub const SelectionLowerCase: i32 = 2340;
        pub const SelectionUpperCase: i32 = 2341;
        pub const SelectionCut: i32 = 2177;
        pub const SelectionCopy: i32 = 2178;
        pub const Paste: i32 = 2179;
        pub const EditToggleOvertype: i32 = 2324;
        pub const Newline: i32 = 2329;
        pub const Formfeed: i32 = 2330;
        pub const Tab: i32 = 2327;
        pub const Backtab: i32 = 2328;
        pub const Cancel: i32 = 2325;
        pub const Undo: i32 = 2176;
        pub const Redo: i32 = 2011;
        pub const ZoomIn: i32 = 2333;
        pub const ZoomOut: i32 = 2334;
        pub const ReverseLines: i32 = 2354;
    };
};
