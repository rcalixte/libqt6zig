const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#types
pub const enums = struct {
    pub const IteratorFlag = enum {
        pub const All: i32 = 0;
        pub const Hidden: i32 = 1;
        pub const NotHidden: i32 = 2;
        pub const Selected: i32 = 4;
        pub const Unselected: i32 = 8;
        pub const Selectable: i32 = 16;
        pub const NotSelectable: i32 = 32;
        pub const DragEnabled: i32 = 64;
        pub const DragDisabled: i32 = 128;
        pub const DropEnabled: i32 = 256;
        pub const DropDisabled: i32 = 512;
        pub const HasChildren: i32 = 1024;
        pub const NoChildren: i32 = 2048;
        pub const Checked: i32 = 4096;
        pub const NotChecked: i32 = 8192;
        pub const Enabled: i32 = 16384;
        pub const Disabled: i32 = 32768;
        pub const Editable: i32 = 65536;
        pub const NotEditable: i32 = 131072;
        pub const UserFlag: i32 = 16777216;
    };
};
