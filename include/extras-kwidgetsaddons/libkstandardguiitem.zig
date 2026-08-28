const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KGuiItem = @import("libqt6").KGuiItem;
const QPushButton = @import("libqt6").QPushButton;
const kstandardguiitem_enums = enums;
const std = @import("std");
const Struct_KGuiItem_KGuiItem = @import("libqt6").types.Struct_KGuiItem_KGuiItem; // extern struct { first: KGuiItem, second: KGuiItem }

/// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html)
pub const KStandardGuiItem = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KStandardGuiItem,

    pub const _is_KStandardGuiItem = {};

    /// ### DEPRECATED: Use `guiItem` instead
    ///
    pub const GuiItem = guiItem;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#guiItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: kstandardguiitem_enums.StandardItem `
    ///
    pub fn guiItem(id: i32) KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_GuiItem(@bitCast(id)) };
    }

    /// ### DEPRECATED: Use `standardItem` instead
    ///
    pub const StandardItem = standardItem;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#standardItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` id: kstandardguiitem_enums.StandardItem `
    ///
    pub fn standardItem(allocator: std.mem.Allocator, id: i32) []const u8 {
        var _str = qtc.KStandardGuiItem_StandardItem(@bitCast(id));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStandardGuiItem.standardItem: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `ok` instead
    ///
    pub const Ok = ok;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#ok)
    ///
    pub fn ok() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Ok() };
    }

    /// ### DEPRECATED: Use `cancel` instead
    ///
    pub const Cancel = cancel;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#cancel)
    ///
    pub fn cancel() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Cancel() };
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#insert)
    ///
    pub fn insert() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Insert() };
    }

    /// ### DEPRECATED: Use `discard` instead
    ///
    pub const Discard = discard;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#discard)
    ///
    pub fn discard() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Discard() };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#save)
    ///
    pub fn save() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Save() };
    }

    /// ### DEPRECATED: Use `help` instead
    ///
    pub const Help = help;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#help)
    ///
    pub fn help() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Help() };
    }

    /// ### DEPRECATED: Use `dontSave` instead
    ///
    pub const DontSave = dontSave;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#dontSave)
    ///
    pub fn dontSave() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_DontSave() };
    }

    /// ### DEPRECATED: Use `saveAs` instead
    ///
    pub const SaveAs = saveAs;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#saveAs)
    ///
    pub fn saveAs() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_SaveAs() };
    }

    /// ### DEPRECATED: Use `apply` instead
    ///
    pub const Apply = apply;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#apply)
    ///
    pub fn apply() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Apply() };
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#clear)
    ///
    pub fn clear() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Clear() };
    }

    /// ### DEPRECATED: Use `defaults` instead
    ///
    pub const Defaults = defaults;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#defaults)
    ///
    pub fn defaults() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Defaults() };
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#close)
    ///
    pub fn close() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Close() };
    }

    /// ### DEPRECATED: Use `closeWindow` instead
    ///
    pub const CloseWindow = closeWindow;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#closeWindow)
    ///
    pub fn closeWindow() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_CloseWindow() };
    }

    /// ### DEPRECATED: Use `closeDocument` instead
    ///
    pub const CloseDocument = closeDocument;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#closeDocument)
    ///
    pub fn closeDocument() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_CloseDocument() };
    }

    /// ### DEPRECATED: Use `print` instead
    ///
    pub const Print = print;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#print)
    ///
    pub fn print() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Print() };
    }

    /// ### DEPRECATED: Use `properties` instead
    ///
    pub const Properties = properties;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#properties)
    ///
    pub fn properties() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Properties() };
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#reset)
    ///
    pub fn reset() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Reset() };
    }

    /// ### DEPRECATED: Use `overwrite` instead
    ///
    pub const Overwrite = overwrite;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#overwrite)
    ///
    pub fn overwrite() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Overwrite() };
    }

    /// ### DEPRECATED: Use `adminMode` instead
    ///
    pub const AdminMode = adminMode;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#adminMode)
    ///
    pub fn adminMode() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_AdminMode() };
    }

    /// ### DEPRECATED: Use `cont` instead
    ///
    pub const Cont = cont;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#cont)
    ///
    pub fn cont() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Cont() };
    }

    /// ### DEPRECATED: Use `del` instead
    ///
    pub const Del = del;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#del)
    ///
    pub fn del() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Del() };
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#open)
    ///
    pub fn open() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Open() };
    }

    /// ### DEPRECATED: Use `back` instead
    ///
    pub const Back = back;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#back)
    ///
    /// ## Parameter(s):
    ///
    /// ` useBidi: kstandardguiitem_enums.BidiMode `
    ///
    pub fn back(useBidi: i32) KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Back(@bitCast(useBidi)) };
    }

    /// ### DEPRECATED: Use `forward` instead
    ///
    pub const Forward = forward;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#forward)
    ///
    /// ## Parameter(s):
    ///
    /// ` useBidi: kstandardguiitem_enums.BidiMode `
    ///
    pub fn forward(useBidi: i32) KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Forward(@bitCast(useBidi)) };
    }

    /// ### DEPRECATED: Use `configure` instead
    ///
    pub const Configure = configure;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#configure)
    ///
    pub fn configure() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Configure() };
    }

    /// ### DEPRECATED: Use `backAndForward` instead
    ///
    pub const BackAndForward = backAndForward;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#backAndForward)
    ///
    pub fn backAndForward() Struct_KGuiItem_KGuiItem {
        const _pair = qtc.KStandardGuiItem_BackAndForward();
        return .{
            .first = .{ .ptr = @ptrCast(_pair.first) },
            .second = .{ .ptr = @ptrCast(_pair.second) },
        };
    }

    /// ### DEPRECATED: Use `quit` instead
    ///
    pub const Quit = quit;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#quit)
    ///
    pub fn quit() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Quit() };
    }

    /// ### DEPRECATED: Use `find` instead
    ///
    pub const Find = find;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#find)
    ///
    pub fn find() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Find() };
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#stop)
    ///
    pub fn stop() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Stop() };
    }

    /// ### DEPRECATED: Use `add` instead
    ///
    pub const Add = add;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#add)
    ///
    pub fn add() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Add() };
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#remove)
    ///
    pub fn remove() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Remove() };
    }

    /// ### DEPRECATED: Use `test0` instead
    ///
    pub const Test = test0;

    pub const @"test" = test0;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#test)
    ///
    pub fn test0() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Test() };
    }

    /// ### DEPRECATED: Use `assign` instead
    ///
    pub const Assign = assign;

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#assign)
    ///
    /// ## Parameter(s):
    ///
    /// ` button: QPushButton `
    ///
    /// ` item: kstandardguiitem_enums.StandardItem `
    ///
    pub fn assign(button: anytype, item: i32) void {
        comptime _ = @TypeOf(button)._is_QPushButton;
        qtc.KStandardGuiItem_Assign(@ptrCast(button.ptr), @bitCast(item));
    }
};

/// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#public-types)
pub const enums = struct {
    pub const BidiMode = enum {
        pub const UseRTL: i32 = 0;
        pub const IgnoreRTL: i32 = 1;
    };

    pub const StandardItem = enum {
        pub const Ok: i32 = 1;
        pub const Cancel: i32 = 2;
        pub const Discard: i32 = 3;
        pub const Save: i32 = 4;
        pub const DontSave: i32 = 5;
        pub const SaveAs: i32 = 6;
        pub const Apply: i32 = 7;
        pub const Clear: i32 = 8;
        pub const Help: i32 = 9;
        pub const Defaults: i32 = 10;
        pub const Close: i32 = 11;
        pub const Back: i32 = 12;
        pub const Forward: i32 = 13;
        pub const Print: i32 = 14;
        pub const Continue: i32 = 15;
        pub const Open: i32 = 16;
        pub const Quit: i32 = 17;
        pub const AdminMode: i32 = 18;
        pub const Reset: i32 = 19;
        pub const Delete: i32 = 20;
        pub const Insert: i32 = 21;
        pub const Configure: i32 = 22;
        pub const Find: i32 = 23;
        pub const Stop: i32 = 24;
        pub const Add: i32 = 25;
        pub const Remove: i32 = 26;
        pub const Test: i32 = 27;
        pub const Properties: i32 = 28;
        pub const Overwrite: i32 = 29;
        pub const CloseWindow: i32 = 30;
        pub const CloseDocument: i32 = 31;
    };
};
