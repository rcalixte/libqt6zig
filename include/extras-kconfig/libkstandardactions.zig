const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kstandardactions_enums = enums;
const kstandardshortcut_enums = @import("libkstandardshortcut.zig").enums;
const std = @import("std");

/// https://api.kde.org/kstandardactions.html
pub const kstandardactions = struct {
    /// [Qt documentation](https://api.kde.org/kstandardactions.html#_kgui_createInternal)
    ///
    /// ``` param1: kstandardactions_enums.StandardAction, param2: QtC.QObject ```
    pub fn KguiCreateInternal(param1: i32, param2: ?*anyopaque) QtC.QAction {
        return qtc.KStandardActions_KguiCreateInternal(@intCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://api.kde.org/kstandardactions.html#name)
    ///
    /// ``` param1: kstandardactions_enums.StandardAction, allocator: std.mem.Allocator ```
    pub fn Name(param1: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KStandardActions_Name(@intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstandardactions.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstandardactions.html#actionIds)
    ///
    /// ``` allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` []kstandardactions_enums.StandardAction ```
    pub fn ActionIds(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KStandardActions_ActionIds();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kstandardactions.ActionIds: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstandardactions.html#shortcutForActionId)
    ///
    /// ``` param1: kstandardactions_enums.StandardAction ```
    ///
    /// Returns: ``` kstandardshortcut_enums.StandardShortcut ```
    pub fn ShortcutForActionId(param1: i32) i32 {
        return qtc.KStandardActions_ShortcutForActionId(@intCast(param1));
    }
};

/// https://api.kde.org/kstandardactions.html#types
pub const enums = struct {
    pub const StandardAction = enum {
        pub const ActionNone: i32 = 0;
        pub const New: i32 = 1;
        pub const Open: i32 = 2;
        pub const OpenRecent: i32 = 3;
        pub const Save: i32 = 4;
        pub const SaveAs: i32 = 5;
        pub const Revert: i32 = 6;
        pub const Close: i32 = 7;
        pub const Print: i32 = 8;
        pub const PrintPreview: i32 = 9;
        pub const Mail: i32 = 10;
        pub const Quit: i32 = 11;
        pub const Undo: i32 = 12;
        pub const Redo: i32 = 13;
        pub const Cut: i32 = 14;
        pub const Copy: i32 = 15;
        pub const Paste: i32 = 16;
        pub const SelectAll: i32 = 17;
        pub const Deselect: i32 = 18;
        pub const Find: i32 = 19;
        pub const FindNext: i32 = 20;
        pub const FindPrev: i32 = 21;
        pub const Replace: i32 = 22;
        pub const ActualSize: i32 = 23;
        pub const FitToPage: i32 = 24;
        pub const FitToWidth: i32 = 25;
        pub const FitToHeight: i32 = 26;
        pub const ZoomIn: i32 = 27;
        pub const ZoomOut: i32 = 28;
        pub const Zoom: i32 = 29;
        pub const Redisplay: i32 = 30;
        pub const Up: i32 = 31;
        pub const Back: i32 = 32;
        pub const Forward: i32 = 33;
        pub const Home: i32 = 34;
        pub const Prior: i32 = 35;
        pub const Next: i32 = 36;
        pub const Goto: i32 = 37;
        pub const GotoPage: i32 = 38;
        pub const GotoLine: i32 = 39;
        pub const FirstPage: i32 = 40;
        pub const LastPage: i32 = 41;
        pub const DocumentBack: i32 = 42;
        pub const DocumentForward: i32 = 43;
        pub const AddBookmark: i32 = 44;
        pub const EditBookmarks: i32 = 45;
        pub const Spelling: i32 = 46;
        pub const ShowMenubar: i32 = 47;
        pub const ShowToolbar: i32 = 48;
        pub const ShowStatusbar: i32 = 49;
        pub const KeyBindings: i32 = 50;
        pub const Preferences: i32 = 51;
        pub const ConfigureToolbars: i32 = 52;
        pub const HelpContents: i32 = 53;
        pub const WhatsThis: i32 = 54;
        pub const ReportBug: i32 = 55;
        pub const AboutApp: i32 = 56;
        pub const AboutKDE: i32 = 57;
        pub const ConfigureNotifications: i32 = 58;
        pub const FullScreen: i32 = 59;
        pub const Clear: i32 = 60;
        pub const SwitchApplicationLanguage: i32 = 61;
        pub const DeleteFile: i32 = 62;
        pub const RenameFile: i32 = 63;
        pub const MoveToTrash: i32 = 64;
        pub const Donate: i32 = 65;
        pub const HamburgerMenu: i32 = 66;
    };
};
