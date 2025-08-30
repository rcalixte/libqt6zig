const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kstandardaction_enums = enums;
const kstandardshortcut_enums = @import("../extras-kconfig/libkstandardshortcut.zig").enums;
const std = @import("std");

/// https://api-staging.kde.org/kstandardaction.html
pub const kstandardaction = struct {
    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#create)
    ///
    /// ``` param1: kstandardaction_enums.StandardAction, param2: QtC.QObject, param3: []const u8, param4: QtC.QObject ```
    pub fn Create(param1: i32, param2: ?*anyopaque, param3: []const u8, param4: ?*anyopaque) QtC.QAction {
        const param3_Cstring = param3.ptr;
        return qtc.KStandardAction_Create(@intCast(param1), @ptrCast(param2), param3_Cstring, @ptrCast(param4));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#_k_createInternal)
    ///
    /// ``` param1: kstandardaction_enums.StandardAction, param2: QtC.QObject ```
    pub fn KCreateInternal(param1: i32, param2: ?*anyopaque) QtC.QAction {
        return qtc.KStandardAction_KCreateInternal(@intCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#name)
    ///
    /// ``` param1: kstandardaction_enums.StandardAction, allocator: std.mem.Allocator ```
    pub fn Name(param1: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KStandardAction_Name(@intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstandardaction.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#stdNames)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn StdNames(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KStandardAction_StdNames();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kstandardaction.StdNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kstandardaction.StdNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#actionIds)
    ///
    /// ``` allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` []kstandardaction_enums.StandardAction ```
    pub fn ActionIds(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KStandardAction_ActionIds();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kstandardaction.ActionIds: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#shortcutForActionId)
    ///
    /// ``` param1: kstandardaction_enums.StandardAction ```
    ///
    /// Returns: ``` kstandardshortcut_enums.StandardShortcut ```
    pub fn ShortcutForActionId(param1: i32) i32 {
        return qtc.KStandardAction_ShortcutForActionId(@intCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#openNew)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn OpenNew(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_OpenNew(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#open)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Open(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Open(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#openRecent)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn OpenRecent(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.KRecentFilesAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_OpenRecent(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#save)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Save(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Save(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#saveAs)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn SaveAs(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_SaveAs(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#revert)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Revert(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Revert(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#close)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Close(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Close(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#print)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Print(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Print(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#printPreview)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn PrintPreview(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_PrintPreview(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#mail)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Mail(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Mail(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#quit)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Quit(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Quit(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#undo)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Undo(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Undo(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#redo)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Redo(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Redo(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#cut)
    ///
    /// ``` param1: QtC.QObject ```
    pub fn Cut(param1: ?*anyopaque) QtC.QAction {
        return qtc.KStandardAction_Cut(@ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#copy)
    ///
    /// ``` param1: QtC.QObject ```
    pub fn Copy(param1: ?*anyopaque) QtC.QAction {
        return qtc.KStandardAction_Copy(@ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#paste)
    ///
    /// ``` param1: QtC.QObject ```
    pub fn Paste(param1: ?*anyopaque) QtC.QAction {
        return qtc.KStandardAction_Paste(@ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#clear)
    ///
    /// ``` param1: QtC.QObject ```
    pub fn Clear(param1: ?*anyopaque) QtC.QAction {
        return qtc.KStandardAction_Clear(@ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#selectAll)
    ///
    /// ``` param1: QtC.QObject ```
    pub fn SelectAll(param1: ?*anyopaque) QtC.QAction {
        return qtc.KStandardAction_SelectAll(@ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#cut)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Cut2(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Cut2(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#copy)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Copy2(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Copy2(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#paste)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Paste2(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Paste2(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#clear)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Clear2(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Clear2(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#selectAll)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn SelectAll2(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_SelectAll2(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#deselect)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Deselect(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Deselect(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#find)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Find(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Find(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#findNext)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn FindNext(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_FindNext(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#findPrev)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn FindPrev(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_FindPrev(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#replace)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Replace(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Replace(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#actualSize)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn ActualSize(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_ActualSize(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#fitToPage)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn FitToPage(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_FitToPage(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#fitToWidth)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn FitToWidth(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_FitToWidth(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#fitToHeight)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn FitToHeight(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_FitToHeight(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#zoomIn)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn ZoomIn(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_ZoomIn(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#zoomOut)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn ZoomOut(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_ZoomOut(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#zoom)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Zoom(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Zoom(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#redisplay)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Redisplay(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Redisplay(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#up)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Up(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Up(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#back)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Back(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Back(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#forward)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Forward(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Forward(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#home)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Home(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Home(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#prior)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Prior(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Prior(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#next)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Next(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Next(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#goTo)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn GoTo(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_GoTo(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#gotoPage)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn GotoPage(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_GotoPage(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#gotoLine)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn GotoLine(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_GotoLine(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#firstPage)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn FirstPage(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_FirstPage(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#lastPage)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn LastPage(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_LastPage(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#documentBack)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn DocumentBack(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_DocumentBack(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#documentForward)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn DocumentForward(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_DocumentForward(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#addBookmark)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn AddBookmark(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_AddBookmark(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#editBookmarks)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn EditBookmarks(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_EditBookmarks(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#spelling)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Spelling(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Spelling(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#showMenubar)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn ShowMenubar(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.KToggleAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_ShowMenubar(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#showStatusbar)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn ShowStatusbar(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.KToggleAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_ShowStatusbar(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#fullScreen)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QWidget, param4: QtC.QObject ```
    pub fn FullScreen(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque, param4: ?*anyopaque) QtC.KToggleFullScreenAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_FullScreen(@ptrCast(param1), param2_Cstring, @ptrCast(param3), @ptrCast(param4));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#keyBindings)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn KeyBindings(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_KeyBindings(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#preferences)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Preferences(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Preferences(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#configureToolbars)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn ConfigureToolbars(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_ConfigureToolbars(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#configureNotifications)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn ConfigureNotifications(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_ConfigureNotifications(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#switchApplicationLanguage)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn SwitchApplicationLanguage(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_SwitchApplicationLanguage(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#helpContents)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn HelpContents(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_HelpContents(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#whatsThis)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn WhatsThis(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_WhatsThis(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#reportBug)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn ReportBug(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_ReportBug(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#aboutApp)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn AboutApp(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_AboutApp(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#aboutKDE)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn AboutKDE(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_AboutKDE(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#deleteFile)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn DeleteFile(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_DeleteFile(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#renameFile)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn RenameFile(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_RenameFile(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#moveToTrash)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn MoveToTrash(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_MoveToTrash(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#donate)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn Donate(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.QAction {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_Donate(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardaction.html#hamburgerMenu)
    ///
    /// ``` param1: QtC.QObject, param2: []const u8, param3: QtC.QObject ```
    pub fn HamburgerMenu(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque) QtC.KHamburgerMenu {
        const param2_Cstring = param2.ptr;
        return qtc.KStandardAction_HamburgerMenu(@ptrCast(param1), param2_Cstring, @ptrCast(param3));
    }
};

/// https://api-staging.kde.org/kstandardaction.html#types
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
