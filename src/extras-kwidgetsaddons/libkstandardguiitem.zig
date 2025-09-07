const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kstandardguiitem_enums = enums;
const std = @import("std");
pub const struct_qtckguiitem_qtckguiitem = extern struct { first: QtC.KGuiItem, second: QtC.KGuiItem };

/// https://api.kde.org/kstandardguiitem.html
pub const kstandardguiitem = struct {
    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#guiItem)
    ///
    /// ``` param1: kstandardguiitem_enums.StandardItem ```
    pub fn GuiItem(param1: i32) QtC.KGuiItem {
        return qtc.KStandardGuiItem_GuiItem(@intCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#standardItem)
    ///
    /// ``` param1: kstandardguiitem_enums.StandardItem, allocator: std.mem.Allocator ```
    pub fn StandardItem(param1: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KStandardGuiItem_StandardItem(@intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstandardguiitem.StandardItem: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#ok)
    ///
    ///
    pub fn Ok() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Ok();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#cancel)
    ///
    ///
    pub fn Cancel() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Cancel();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#insert)
    ///
    ///
    pub fn Insert() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Insert();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#discard)
    ///
    ///
    pub fn Discard() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Discard();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#save)
    ///
    ///
    pub fn Save() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Save();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#help)
    ///
    ///
    pub fn Help() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Help();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#dontSave)
    ///
    ///
    pub fn DontSave() QtC.KGuiItem {
        return qtc.KStandardGuiItem_DontSave();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#saveAs)
    ///
    ///
    pub fn SaveAs() QtC.KGuiItem {
        return qtc.KStandardGuiItem_SaveAs();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#apply)
    ///
    ///
    pub fn Apply() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Apply();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#clear)
    ///
    ///
    pub fn Clear() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Clear();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#defaults)
    ///
    ///
    pub fn Defaults() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Defaults();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#close)
    ///
    ///
    pub fn Close() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Close();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#closeWindow)
    ///
    ///
    pub fn CloseWindow() QtC.KGuiItem {
        return qtc.KStandardGuiItem_CloseWindow();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#closeDocument)
    ///
    ///
    pub fn CloseDocument() QtC.KGuiItem {
        return qtc.KStandardGuiItem_CloseDocument();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#print)
    ///
    ///
    pub fn Print() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Print();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#properties)
    ///
    ///
    pub fn Properties() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Properties();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#reset)
    ///
    ///
    pub fn Reset() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Reset();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#overwrite)
    ///
    ///
    pub fn Overwrite() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Overwrite();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#adminMode)
    ///
    ///
    pub fn AdminMode() QtC.KGuiItem {
        return qtc.KStandardGuiItem_AdminMode();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#cont)
    ///
    ///
    pub fn Cont() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Cont();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#del)
    ///
    ///
    pub fn Del() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Del();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#open)
    ///
    ///
    pub fn Open() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Open();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#back)
    ///
    /// ``` param1: kstandardguiitem_enums.BidiMode ```
    pub fn Back(param1: i32) QtC.KGuiItem {
        return qtc.KStandardGuiItem_Back(@intCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#forward)
    ///
    /// ``` param1: kstandardguiitem_enums.BidiMode ```
    pub fn Forward(param1: i32) QtC.KGuiItem {
        return qtc.KStandardGuiItem_Forward(@intCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#configure)
    ///
    ///
    pub fn Configure() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Configure();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#backAndForward)
    ///
    ///
    pub fn BackAndForward() struct_qtckguiitem_qtckguiitem {
        const _pair: qtc.libqt_pair = qtc.KStandardGuiItem_BackAndForward();
        return struct_qtckguiitem_qtckguiitem{
            .first = @ptrCast(_pair.first),
            .second = @ptrCast(_pair.second),
        };
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#quit)
    ///
    ///
    pub fn Quit() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Quit();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#find)
    ///
    ///
    pub fn Find() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Find();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#stop)
    ///
    ///
    pub fn Stop() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Stop();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#add)
    ///
    ///
    pub fn Add() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Add();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#remove)
    ///
    ///
    pub fn Remove() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Remove();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#test)
    ///
    ///
    pub fn Test() QtC.KGuiItem {
        return qtc.KStandardGuiItem_Test();
    }

    /// [Qt documentation](https://api.kde.org/kstandardguiitem.html#assign)
    ///
    /// ``` param1: QtC.QPushButton, param2: kstandardguiitem_enums.StandardItem ```
    pub fn Assign(param1: ?*anyopaque, param2: i32) void {
        qtc.KStandardGuiItem_Assign(@ptrCast(param1), @intCast(param2));
    }
};

/// https://api.kde.org/kstandardguiitem.html#types
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
