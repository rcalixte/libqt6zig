const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtsqlglobal.html#public-types)
pub const enums = struct {
    pub const Location = enum(i32) {
        pub const BeforeFirstRow: i32 = -1;
        pub const AfterLastRow: i32 = -2;
    };

    pub const ParamTypeFlag = enum(i32) {
        pub const In: i32 = 1;
        pub const Out: i32 = 2;
        pub const InOut: i32 = 3;
        pub const Binary: i32 = 4;
    };

    pub const TableType = enum(i32) {
        pub const Tables: i32 = 1;
        pub const SystemTables: i32 = 2;
        pub const Views: i32 = 4;
        pub const AllTables: i32 = 255;
    };

    pub const NumericalPrecisionPolicy = enum(i32) {
        pub const LowPrecisionInt32: i32 = 1;
        pub const LowPrecisionInt64: i32 = 2;
        pub const LowPrecisionDouble: i32 = 4;
        pub const HighPrecision: i32 = 0;
    };
};
