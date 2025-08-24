const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kstandardshortcut_enums = enums;
const std = @import("std");

/// https://api-staging.kde.org/kstandardshortcut.html
pub const kstandardshortcut = struct {
    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#shortcut)
    ///
    /// ``` param1: kstandardshortcut_enums.StandardShortcut, allocator: std.mem.Allocator ```
    pub fn Shortcut(param1: i32, allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Shortcut(@intCast(param1));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Shortcut: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#name)
    ///
    /// ``` param1: kstandardshortcut_enums.StandardShortcut, allocator: std.mem.Allocator ```
    pub fn Name(param1: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KStandardShortcut_Name(@intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstandardshortcut.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#label)
    ///
    /// ``` param1: kstandardshortcut_enums.StandardShortcut, allocator: std.mem.Allocator ```
    pub fn Label(param1: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KStandardShortcut_Label(@intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstandardshortcut.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#whatsThis)
    ///
    /// ``` param1: kstandardshortcut_enums.StandardShortcut, allocator: std.mem.Allocator ```
    pub fn WhatsThis(param1: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KStandardShortcut_WhatsThis(@intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstandardshortcut.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#find)
    ///
    /// ``` param1: QtC.QKeySequence ```
    ///
    /// Returns: ``` kstandardshortcut_enums.StandardShortcut ```
    pub fn Find(param1: ?*anyopaque) i32 {
        return qtc.KStandardShortcut_Find(@ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#findByName)
    ///
    /// ``` param1: []const u8 ```
    ///
    /// Returns: ``` kstandardshortcut_enums.StandardShortcut ```
    pub fn FindByName(param1: []const u8) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KStandardShortcut_FindByName(param1_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#hardcodedDefaultShortcut)
    ///
    /// ``` param1: kstandardshortcut_enums.StandardShortcut, allocator: std.mem.Allocator ```
    pub fn HardcodedDefaultShortcut(param1: i32, allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_HardcodedDefaultShortcut(@intCast(param1));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.HardcodedDefaultShortcut: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#saveShortcut)
    ///
    /// ``` param1: kstandardshortcut_enums.StandardShortcut, param2: []QtC.QKeySequence ```
    pub fn SaveShortcut(param1: i32, param2: []QtC.QKeySequence) void {
        const param2_list = qtc.libqt_list{
            .len = param2.len,
            .data = @ptrCast(param2.ptr),
        };
        qtc.KStandardShortcut_SaveShortcut(@intCast(param1), param2_list);
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#category)
    ///
    /// ``` param1: kstandardshortcut_enums.StandardShortcut ```
    ///
    /// Returns: ``` kstandardshortcut_enums.Category ```
    pub fn Category(param1: i32) i32 {
        return qtc.KStandardShortcut_Category(@intCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#open)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Open(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Open();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Open: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#openNew)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn OpenNew(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_OpenNew();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.OpenNew: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#close)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Close(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Close();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Close: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#save)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Save(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Save();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Save: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#print)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Print(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Print();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Print: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#quit)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Quit(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Quit();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Quit: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#undo)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Undo(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Undo();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Undo: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#redo)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Redo(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Redo();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Redo: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#cut)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Cut(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Cut();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Cut: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#copy)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Copy(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Copy();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Copy: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#paste)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Paste(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Paste();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Paste: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#pasteSelection)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn PasteSelection(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_PasteSelection();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.PasteSelection: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#selectAll)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SelectAll(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_SelectAll();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.SelectAll: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#deleteWordBack)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn DeleteWordBack(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_DeleteWordBack();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.DeleteWordBack: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#deleteWordForward)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn DeleteWordForward(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_DeleteWordForward();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.DeleteWordForward: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#find)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Find2(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Find2();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Find2: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#findNext)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn FindNext(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_FindNext();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.FindNext: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#findPrev)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn FindPrev(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_FindPrev();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.FindPrev: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#replace)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Replace(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Replace();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Replace: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#zoomIn)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ZoomIn(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_ZoomIn();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.ZoomIn: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#zoomOut)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ZoomOut(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_ZoomOut();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.ZoomOut: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#home)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Home(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Home();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Home: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#begin)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Begin(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Begin();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Begin: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#end)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn End(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_End();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.End: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#beginningOfLine)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn BeginningOfLine(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_BeginningOfLine();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.BeginningOfLine: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#endOfLine)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn EndOfLine(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_EndOfLine();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.EndOfLine: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#prior)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Prior(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Prior();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Prior: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#next)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Next(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Next();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Next: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#gotoLine)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn GotoLine(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_GotoLine();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.GotoLine: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#addBookmark)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AddBookmark(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_AddBookmark();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.AddBookmark: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#tabNext)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn TabNext(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_TabNext();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.TabNext: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#tabPrev)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn TabPrev(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_TabPrev();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.TabPrev: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#fullScreen)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn FullScreen(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_FullScreen();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.FullScreen: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#help)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Help(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Help();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Help: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#completion)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Completion(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Completion();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Completion: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#prevCompletion)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn PrevCompletion(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_PrevCompletion();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.PrevCompletion: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#nextCompletion)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn NextCompletion(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_NextCompletion();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.NextCompletion: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#substringCompletion)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SubstringCompletion(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_SubstringCompletion();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.SubstringCompletion: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#rotateUp)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn RotateUp(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_RotateUp();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.RotateUp: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#rotateDown)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn RotateDown(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_RotateDown();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.RotateDown: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#whatsThis)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn WhatsThis2(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_WhatsThis2();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.WhatsThis2: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#reload)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Reload(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Reload();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Reload: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#up)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Up(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Up();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Up: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#back)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Back(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Back();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Back: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#forward)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Forward(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Forward();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Forward: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#backwardWord)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn BackwardWord(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_BackwardWord();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.BackwardWord: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#forwardWord)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ForwardWord(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_ForwardWord();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.ForwardWord: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#showMenubar)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ShowMenubar(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_ShowMenubar();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.ShowMenubar: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#deleteFile)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn DeleteFile(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_DeleteFile();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.DeleteFile: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#renameFile)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn RenameFile(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_RenameFile();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.RenameFile: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#createFolder)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn CreateFolder(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_CreateFolder();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.CreateFolder: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#moveToTrash)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn MoveToTrash(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_MoveToTrash();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.MoveToTrash: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#preferences)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Preferences(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Preferences();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.Preferences: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#showHideHiddenFiles)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ShowHideHiddenFiles(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_ShowHideHiddenFiles();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.ShowHideHiddenFiles: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#openMainMenu)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn OpenMainMenu(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_OpenMainMenu();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.OpenMainMenu: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#openContextMenu)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn OpenContextMenu(allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_OpenContextMenu();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kstandardshortcut.OpenContextMenu: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }
};

/// https://api-staging.kde.org/kstandardshortcut.html#types
pub const enums = struct {
    pub const StandardShortcut = enum {
        pub const AccelNone: i32 = 0;
        pub const Open: i32 = 1;
        pub const New: i32 = 2;
        pub const Close: i32 = 3;
        pub const Save: i32 = 4;
        pub const Print: i32 = 5;
        pub const Quit: i32 = 6;
        pub const Undo: i32 = 7;
        pub const Redo: i32 = 8;
        pub const Cut: i32 = 9;
        pub const Copy: i32 = 10;
        pub const Paste: i32 = 11;
        pub const PasteSelection: i32 = 12;
        pub const SelectAll: i32 = 13;
        pub const Deselect: i32 = 14;
        pub const DeleteWordBack: i32 = 15;
        pub const DeleteWordForward: i32 = 16;
        pub const Find: i32 = 17;
        pub const FindNext: i32 = 18;
        pub const FindPrev: i32 = 19;
        pub const Replace: i32 = 20;
        pub const Home: i32 = 21;
        pub const Begin: i32 = 22;
        pub const End: i32 = 23;
        pub const Prior: i32 = 24;
        pub const Next: i32 = 25;
        pub const Up: i32 = 26;
        pub const Back: i32 = 27;
        pub const Forward: i32 = 28;
        pub const Reload: i32 = 29;
        pub const BeginningOfLine: i32 = 30;
        pub const EndOfLine: i32 = 31;
        pub const GotoLine: i32 = 32;
        pub const BackwardWord: i32 = 33;
        pub const ForwardWord: i32 = 34;
        pub const AddBookmark: i32 = 35;
        pub const ZoomIn: i32 = 36;
        pub const ZoomOut: i32 = 37;
        pub const FullScreen: i32 = 38;
        pub const ShowMenubar: i32 = 39;
        pub const TabNext: i32 = 40;
        pub const TabPrev: i32 = 41;
        pub const Help: i32 = 42;
        pub const WhatsThis: i32 = 43;
        pub const TextCompletion: i32 = 44;
        pub const PrevCompletion: i32 = 45;
        pub const NextCompletion: i32 = 46;
        pub const SubstringCompletion: i32 = 47;
        pub const RotateUp: i32 = 48;
        pub const RotateDown: i32 = 49;
        pub const OpenRecent: i32 = 50;
        pub const SaveAs: i32 = 51;
        pub const Revert: i32 = 52;
        pub const PrintPreview: i32 = 53;
        pub const Mail: i32 = 54;
        pub const Clear: i32 = 55;
        pub const ActualSize: i32 = 56;
        pub const FitToPage: i32 = 57;
        pub const FitToWidth: i32 = 58;
        pub const FitToHeight: i32 = 59;
        pub const Zoom: i32 = 60;
        pub const Goto: i32 = 61;
        pub const GotoPage: i32 = 62;
        pub const DocumentBack: i32 = 63;
        pub const DocumentForward: i32 = 64;
        pub const EditBookmarks: i32 = 65;
        pub const Spelling: i32 = 66;
        pub const ShowToolbar: i32 = 67;
        pub const ShowStatusbar: i32 = 68;
        pub const KeyBindings: i32 = 69;
        pub const Preferences: i32 = 70;
        pub const ConfigureToolbars: i32 = 71;
        pub const ConfigureNotifications: i32 = 72;
        pub const ReportBug: i32 = 73;
        pub const SwitchApplicationLanguage: i32 = 74;
        pub const AboutApp: i32 = 75;
        pub const AboutKDE: i32 = 76;
        pub const DeleteFile: i32 = 77;
        pub const RenameFile: i32 = 78;
        pub const MoveToTrash: i32 = 79;
        pub const Donate: i32 = 80;
        pub const ShowHideHiddenFiles: i32 = 81;
        pub const CreateFolder: i32 = 82;
        pub const OpenMainMenu: i32 = 83;
        pub const OpenContextMenu: i32 = 84;
        pub const StandardShortcutCount: i32 = 85;
    };

    pub const Category = enum {
        pub const InvalidCategory: i32 = -1;
        pub const File: i32 = 0;
        pub const Edit: i32 = 1;
        pub const Navigation: i32 = 2;
        pub const View: i32 = 3;
        pub const Settings: i32 = 4;
        pub const Help: i32 = 5;
    };
};
