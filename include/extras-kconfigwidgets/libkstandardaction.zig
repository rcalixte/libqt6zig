const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KHamburgerMenu = @import("libqt6").KHamburgerMenu;
const KRecentFilesAction = @import("libqt6").KRecentFilesAction;
const KToggleAction = @import("libqt6").KToggleAction;
const KToggleFullScreenAction = @import("libqt6").KToggleFullScreenAction;
const QAction = @import("libqt6").QAction;
const QObject = @import("libqt6").QObject;
const QWidget = @import("libqt6").QWidget;
const kstandardaction_enums = enums;
const kstandardshortcut_enums = @import("../extras-kconfig/libkstandardshortcut.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kstandardaction.html)
pub const KStandardAction = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KStandardAction,

    pub const _is_KStandardAction = {};

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: kstandardaction_enums.StandardAction `
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Create(id: i32, recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Create(@bitCast(id), @ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#_k_createInternal)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: kstandardaction_enums.StandardAction `
    ///
    /// ` parent: QObject `
    ///
    pub fn KCreateInternal(id: i32, parent: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_KCreateInternal(@bitCast(id), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` id: kstandardaction_enums.StandardAction `
    ///
    pub fn Name(allocator: std.mem.Allocator, id: i32) []const u8 {
        var _str = qtc.KStandardAction_Name(@bitCast(id));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstandardaction.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#stdNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StdNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KStandardAction_StdNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#actionIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []kstandardaction_enums.StandardAction `
    ///
    pub fn ActionIds(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KStandardAction_ActionIds();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kstandardaction.ActionIds: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#shortcutForActionId)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: kstandardaction_enums.StandardAction `
    ///
    /// ## Returns:
    ///
    /// ` kstandardshortcut_enums.StandardShortcut `
    ///
    pub fn ShortcutForActionId(id: i32) i32 {
        return qtc.KStandardAction_ShortcutForActionId(@bitCast(id));
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#openNew)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn OpenNew(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_OpenNew(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Open(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Open(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#openRecent)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn OpenRecent(recvr: anytype, slot: [:0]const u8, parent: anytype) KRecentFilesAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_OpenRecent(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Save(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Save(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#saveAs)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn SaveAs(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_SaveAs(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#revert)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Revert(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Revert(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Close(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Close(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#print)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Print(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Print(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#printPreview)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn PrintPreview(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_PrintPreview(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#mail)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Mail(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Mail(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#quit)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Quit(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Quit(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Undo(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Undo(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Redo(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Redo(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#cut)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn Cut(parent: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Cut(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn Copy(parent: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Copy(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#paste)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn Paste(parent: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Paste(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn Clear(parent: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Clear(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn SelectAll(parent: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_SelectAll(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#cut)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Cut2(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Cut2(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Copy2(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Copy2(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#paste)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Paste2(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Paste2(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Clear2(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Clear2(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn SelectAll2(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_SelectAll2(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#deselect)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Deselect(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Deselect(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Find(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Find(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#findNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn FindNext(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_FindNext(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#findPrev)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn FindPrev(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_FindPrev(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Replace(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Replace(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#actualSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn ActualSize(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_ActualSize(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#fitToPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn FitToPage(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_FitToPage(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#fitToWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn FitToWidth(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_FitToWidth(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#fitToHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn FitToHeight(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_FitToHeight(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn ZoomIn(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_ZoomIn(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn ZoomOut(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_ZoomOut(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#zoom)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Zoom(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Zoom(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#redisplay)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Redisplay(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Redisplay(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#up)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Up(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Up(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#back)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Back(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Back(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#forward)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Forward(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Forward(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#home)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Home(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Home(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#prior)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Prior(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Prior(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Next(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Next(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#goTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn GoTo(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_GoTo(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#gotoPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn GotoPage(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_GotoPage(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#gotoLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn GotoLine(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_GotoLine(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#firstPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn FirstPage(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_FirstPage(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#lastPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn LastPage(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_LastPage(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#documentBack)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn DocumentBack(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_DocumentBack(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#documentForward)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn DocumentForward(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_DocumentForward(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#addBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn AddBookmark(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_AddBookmark(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#editBookmarks)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn EditBookmarks(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_EditBookmarks(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#spelling)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Spelling(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Spelling(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#showMenubar)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn ShowMenubar(recvr: anytype, slot: [:0]const u8, parent: anytype) KToggleAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_ShowMenubar(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#showStatusbar)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn ShowStatusbar(recvr: anytype, slot: [:0]const u8, parent: anytype) KToggleAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_ShowStatusbar(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#fullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` window: QWidget `
    ///
    /// ` parent: QObject `
    ///
    pub fn FullScreen(recvr: anytype, slot: [:0]const u8, window: anytype, parent: anytype) KToggleFullScreenAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(window)._is_QWidget;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_FullScreen(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(window.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#keyBindings)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn KeyBindings(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_KeyBindings(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#preferences)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Preferences(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Preferences(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#configureToolbars)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn ConfigureToolbars(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_ConfigureToolbars(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#configureNotifications)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn ConfigureNotifications(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_ConfigureNotifications(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#switchApplicationLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn SwitchApplicationLanguage(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_SwitchApplicationLanguage(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#helpContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn HelpContents(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_HelpContents(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn WhatsThis(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_WhatsThis(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#reportBug)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn ReportBug(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_ReportBug(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#aboutApp)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn AboutApp(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_AboutApp(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#aboutKDE)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn AboutKDE(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_AboutKDE(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#deleteFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn DeleteFile(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_DeleteFile(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#renameFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn RenameFile(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_RenameFile(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#moveToTrash)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn MoveToTrash(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_MoveToTrash(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#donate)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn Donate(recvr: anytype, slot: [:0]const u8, parent: anytype) QAction {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_Donate(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardaction.html#hamburgerMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` recvr: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn HamburgerMenu(recvr: anytype, slot: [:0]const u8, parent: anytype) KHamburgerMenu {
        comptime _ = @TypeOf(recvr)._is_QObject;
        const slot_Cstring = slot.ptr;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStandardAction_HamburgerMenu(@ptrCast(recvr.ptr), slot_Cstring, @ptrCast(parent.ptr)) };
    }
};

/// ### [Upstream resources](https://api.kde.org/kstandardaction.html#public-types)
pub const enums = struct {
    pub const StandardAction = enum(i32) {
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
