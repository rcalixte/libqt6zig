const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QKeySequence = @import("libqt6").QKeySequence;
const kstandardshortcut_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html)
pub const KStandardShortcut = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KStandardShortcut,

    pub const _is_KStandardShortcut = {};

    /// ### DEPRECATED: Use `shortcut` instead
    ///
    pub const Shortcut = shortcut;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#shortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` id: kstandardshortcut_enums.StandardShortcut `
    ///
    pub fn shortcut(allocator: std.mem.Allocator, id: i32) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Shortcut(@bitCast(id));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.shortcut: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` id: kstandardshortcut_enums.StandardShortcut `
    ///
    pub fn name(allocator: std.mem.Allocator, id: i32) []const u8 {
        var _str = qtc.KStandardShortcut_Name(@bitCast(id));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStandardShortcut.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `label` instead
    ///
    pub const Label = label;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` id: kstandardshortcut_enums.StandardShortcut `
    ///
    pub fn label(allocator: std.mem.Allocator, id: i32) []const u8 {
        var _str = qtc.KStandardShortcut_Label(@bitCast(id));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStandardShortcut.label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` id: kstandardshortcut_enums.StandardShortcut `
    ///
    pub fn whatsThis(allocator: std.mem.Allocator, id: i32) []const u8 {
        var _str = qtc.KStandardShortcut_WhatsThis(@bitCast(id));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStandardShortcut.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `find` instead
    ///
    pub const Find = find;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` keySeq: QKeySequence `
    ///
    /// ## Returns:
    ///
    /// ` kstandardshortcut_enums.StandardShortcut `
    ///
    pub fn find(keySeq: anytype) i32 {
        comptime _ = @TypeOf(keySeq)._is_QKeySequence;
        return qtc.KStandardShortcut_Find(@ptrCast(keySeq.ptr));
    }

    /// ### DEPRECATED: Use `findByName` instead
    ///
    pub const FindByName = findByName;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#findByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` kstandardshortcut_enums.StandardShortcut `
    ///
    pub fn findByName(_name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return qtc.KStandardShortcut_FindByName(name_str);
    }

    /// ### DEPRECATED: Use `hardcodedDefaultShortcut` instead
    ///
    pub const HardcodedDefaultShortcut = hardcodedDefaultShortcut;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#hardcodedDefaultShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` id: kstandardshortcut_enums.StandardShortcut `
    ///
    pub fn hardcodedDefaultShortcut(allocator: std.mem.Allocator, id: i32) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_HardcodedDefaultShortcut(@bitCast(id));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.hardcodedDefaultShortcut: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `saveShortcut` instead
    ///
    pub const SaveShortcut = saveShortcut;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#saveShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: kstandardshortcut_enums.StandardShortcut `
    ///
    /// ` newShortcut: []QKeySequence `
    ///
    pub fn saveShortcut(id: i32, newShortcut: []QKeySequence) void {
        const newShortcut_list = qtc.libqt_list{
            .len = newShortcut.len,
            .data = @ptrCast(newShortcut.ptr),
        };
        qtc.KStandardShortcut_SaveShortcut(@bitCast(id), newShortcut_list);
    }

    /// ### DEPRECATED: Use `category` instead
    ///
    pub const Category = category;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: kstandardshortcut_enums.StandardShortcut `
    ///
    /// ## Returns:
    ///
    /// ` kstandardshortcut_enums.Category `
    ///
    pub fn category(id: i32) i32 {
        return qtc.KStandardShortcut_Category(@bitCast(id));
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn open(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Open();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.open: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `openNew` instead
    ///
    pub const OpenNew = openNew;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#openNew)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn openNew(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_OpenNew();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.openNew: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn close(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Close();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.close: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn save(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Save();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.save: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `print` instead
    ///
    pub const Print = print;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#print)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn print(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Print();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.print: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `quit` instead
    ///
    pub const Quit = quit;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#quit)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn quit(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Quit();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.quit: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `undo` instead
    ///
    pub const Undo = undo;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn undo(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Undo();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.undo: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `redo` instead
    ///
    pub const Redo = redo;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn redo(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Redo();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.redo: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `cut` instead
    ///
    pub const Cut = cut;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#cut)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn cut(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Cut();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.cut: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `copy` instead
    ///
    pub const Copy = copy;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn copy(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Copy();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.copy: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `paste` instead
    ///
    pub const Paste = paste;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#paste)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn paste(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Paste();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.paste: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `pasteSelection` instead
    ///
    pub const PasteSelection = pasteSelection;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#pasteSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pasteSelection(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_PasteSelection();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.pasteSelection: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `selectAll` instead
    ///
    pub const SelectAll = selectAll;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectAll(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_SelectAll();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.selectAll: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `deleteWordBack` instead
    ///
    pub const DeleteWordBack = deleteWordBack;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#deleteWordBack)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn deleteWordBack(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_DeleteWordBack();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.deleteWordBack: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `deleteWordForward` instead
    ///
    pub const DeleteWordForward = deleteWordForward;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#deleteWordForward)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn deleteWordForward(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_DeleteWordForward();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.deleteWordForward: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `find2` instead
    ///
    pub const Find2 = find2;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn find2(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Find2();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.find2: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `findNext` instead
    ///
    pub const FindNext = findNext;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#findNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn findNext(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_FindNext();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.findNext: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `findPrev` instead
    ///
    pub const FindPrev = findPrev;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#findPrev)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn findPrev(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_FindPrev();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.findPrev: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `replace` instead
    ///
    pub const Replace = replace;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn replace(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Replace();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.replace: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `zoomIn` instead
    ///
    pub const ZoomIn = zoomIn;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn zoomIn(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_ZoomIn();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.zoomIn: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `zoomOut` instead
    ///
    pub const ZoomOut = zoomOut;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn zoomOut(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_ZoomOut();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.zoomOut: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `home` instead
    ///
    pub const Home = home;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#home)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn home(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Home();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.home: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn begin(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Begin();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.begin: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn end(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_End();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.end: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `beginningOfLine` instead
    ///
    pub const BeginningOfLine = beginningOfLine;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#beginningOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn beginningOfLine(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_BeginningOfLine();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.beginningOfLine: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `endOfLine` instead
    ///
    pub const EndOfLine = endOfLine;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#endOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn endOfLine(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_EndOfLine();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.endOfLine: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `prior` instead
    ///
    pub const Prior = prior;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#prior)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn prior(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Prior();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.prior: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `next` instead
    ///
    pub const Next = next;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn next(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Next();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.next: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `gotoLine` instead
    ///
    pub const GotoLine = gotoLine;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#gotoLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn gotoLine(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_GotoLine();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.gotoLine: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addBookmark` instead
    ///
    pub const AddBookmark = addBookmark;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#addBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn addBookmark(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_AddBookmark();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.addBookmark: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `tabNext` instead
    ///
    pub const TabNext = tabNext;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#tabNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tabNext(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_TabNext();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.tabNext: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `tabPrev` instead
    ///
    pub const TabPrev = tabPrev;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#tabPrev)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tabPrev(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_TabPrev();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.tabPrev: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `fullScreen` instead
    ///
    pub const FullScreen = fullScreen;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#fullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fullScreen(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_FullScreen();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.fullScreen: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `help` instead
    ///
    pub const Help = help;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#help)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn help(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Help();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.help: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `completion` instead
    ///
    pub const Completion = completion;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#completion)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn completion(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Completion();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.completion: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `prevCompletion` instead
    ///
    pub const PrevCompletion = prevCompletion;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#prevCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn prevCompletion(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_PrevCompletion();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.prevCompletion: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `nextCompletion` instead
    ///
    pub const NextCompletion = nextCompletion;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#nextCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nextCompletion(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_NextCompletion();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.nextCompletion: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `substringCompletion` instead
    ///
    pub const SubstringCompletion = substringCompletion;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#substringCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn substringCompletion(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_SubstringCompletion();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.substringCompletion: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `rotateUp` instead
    ///
    pub const RotateUp = rotateUp;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#rotateUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rotateUp(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_RotateUp();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.rotateUp: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `rotateDown` instead
    ///
    pub const RotateDown = rotateDown;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#rotateDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rotateDown(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_RotateDown();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.rotateDown: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `whatsThis2` instead
    ///
    pub const WhatsThis2 = whatsThis2;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis2(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_WhatsThis2();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.whatsThis2: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `reload` instead
    ///
    pub const Reload = reload;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#reload)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn reload(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Reload();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.reload: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `up` instead
    ///
    pub const Up = up;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#up)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn up(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Up();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.up: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `back` instead
    ///
    pub const Back = back;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#back)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn back(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Back();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.back: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `forward` instead
    ///
    pub const Forward = forward;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#forward)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn forward(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Forward();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.forward: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `backwardWord` instead
    ///
    pub const BackwardWord = backwardWord;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#backwardWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn backwardWord(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_BackwardWord();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.backwardWord: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `forwardWord` instead
    ///
    pub const ForwardWord = forwardWord;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#forwardWord)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn forwardWord(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_ForwardWord();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.forwardWord: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `showMenubar` instead
    ///
    pub const ShowMenubar = showMenubar;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#showMenubar)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn showMenubar(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_ShowMenubar();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.showMenubar: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `deleteFile` instead
    ///
    pub const DeleteFile = deleteFile;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#deleteFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn deleteFile(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_DeleteFile();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.deleteFile: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `renameFile` instead
    ///
    pub const RenameFile = renameFile;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#renameFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn renameFile(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_RenameFile();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.renameFile: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `createFolder` instead
    ///
    pub const CreateFolder = createFolder;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#createFolder)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn createFolder(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_CreateFolder();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.createFolder: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `moveToTrash` instead
    ///
    pub const MoveToTrash = moveToTrash;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#moveToTrash)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn moveToTrash(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_MoveToTrash();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.moveToTrash: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `preferences` instead
    ///
    pub const Preferences = preferences;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#preferences)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn preferences(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_Preferences();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.preferences: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `showHideHiddenFiles` instead
    ///
    pub const ShowHideHiddenFiles = showHideHiddenFiles;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#showHideHiddenFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn showHideHiddenFiles(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_ShowHideHiddenFiles();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.showHideHiddenFiles: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `openMainMenu` instead
    ///
    pub const OpenMainMenu = openMainMenu;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#openMainMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn openMainMenu(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_OpenMainMenu();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.openMainMenu: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `openContextMenu` instead
    ///
    pub const OpenContextMenu = openContextMenu;

    /// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#openContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn openContextMenu(allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KStandardShortcut_OpenContextMenu();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KStandardShortcut.openContextMenu: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }
};

/// ### [Upstream resources](https://api.kde.org/kstandardshortcut.html#public-types)
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
