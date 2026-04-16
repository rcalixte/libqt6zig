const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KGuiItem = @import("libqt6").KGuiItem;
const QPushButton = @import("libqt6").QPushButton;
const kstandardguiitem_enums = enums;
const std = @import("std");
const Struct_KGuiItem_KGuiItem = extern struct { first: KGuiItem, second: KGuiItem };

/// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html)
pub const KStandardGuiItem = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KStandardGuiItem,

    pub const _is_KStandardGuiItem = {};

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#guiItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kstandardguiitem_enums.StandardItem `
    ///
    pub fn GuiItem(param1: i32) KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_GuiItem(@bitCast(param1)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#standardItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: kstandardguiitem_enums.StandardItem `
    ///
    pub fn StandardItem(allocator: std.mem.Allocator, param1: i32) []const u8 {
        var _str = qtc.KStandardGuiItem_StandardItem(@bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstandardguiitem.StandardItem: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#ok)
    ///
    pub fn Ok() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Ok() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#cancel)
    ///
    pub fn Cancel() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Cancel() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#insert)
    ///
    pub fn Insert() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Insert() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#discard)
    ///
    pub fn Discard() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Discard() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#save)
    ///
    pub fn Save() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Save() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#help)
    ///
    pub fn Help() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Help() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#dontSave)
    ///
    pub fn DontSave() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_DontSave() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#saveAs)
    ///
    pub fn SaveAs() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_SaveAs() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#apply)
    ///
    pub fn Apply() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Apply() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#clear)
    ///
    pub fn Clear() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Clear() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#defaults)
    ///
    pub fn Defaults() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Defaults() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#close)
    ///
    pub fn Close() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Close() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#closeWindow)
    ///
    pub fn CloseWindow() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_CloseWindow() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#closeDocument)
    ///
    pub fn CloseDocument() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_CloseDocument() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#print)
    ///
    pub fn Print() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Print() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#properties)
    ///
    pub fn Properties() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Properties() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#reset)
    ///
    pub fn Reset() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Reset() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#overwrite)
    ///
    pub fn Overwrite() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Overwrite() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#adminMode)
    ///
    pub fn AdminMode() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_AdminMode() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#cont)
    ///
    pub fn Cont() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Cont() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#del)
    ///
    pub fn Del() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Del() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#open)
    ///
    pub fn Open() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Open() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#back)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kstandardguiitem_enums.BidiMode `
    ///
    pub fn Back(param1: i32) KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Back(@bitCast(param1)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#forward)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kstandardguiitem_enums.BidiMode `
    ///
    pub fn Forward(param1: i32) KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Forward(@bitCast(param1)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#configure)
    ///
    pub fn Configure() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Configure() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#backAndForward)
    ///
    pub fn BackAndForward() Struct_KGuiItem_KGuiItem {
        const _pair = qtc.KStandardGuiItem_BackAndForward();
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#quit)
    ///
    pub fn Quit() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Quit() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#find)
    ///
    pub fn Find() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Find() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#stop)
    ///
    pub fn Stop() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Stop() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#add)
    ///
    pub fn Add() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Add() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#remove)
    ///
    pub fn Remove() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Remove() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#test)
    ///
    pub fn Test() KGuiItem {
        return .{ .ptr = qtc.KStandardGuiItem_Test() };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#assign)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPushButton `
    ///
    /// ` param2: kstandardguiitem_enums.StandardItem `
    ///
    pub fn Assign(param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QPushButton;
        qtc.KStandardGuiItem_Assign(@ptrCast(param1.ptr), @bitCast(param2));
    }
};

/// ### [Upstream resources](https://api.kde.org/kstandardguiitem.html#public-types)
pub const enums = struct {
    pub const BidiMode = enum(i32) {
        pub const UseRTL: i32 = 0;
        pub const IgnoreRTL: i32 = 1;
    };

    pub const StandardItem = enum(i32) {
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
