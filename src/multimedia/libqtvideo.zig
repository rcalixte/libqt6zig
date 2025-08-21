const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qtvideo_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qtvideo.html
pub const qtvideo = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qtvideo.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: qtvideo_enums.Rotation ```
    pub fn GetEnumMetaObject(param1: i32) QtC.QMetaObject {
        return qtc.QtVideo_GetEnumMetaObject(@intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtvideo.html#qt_getEnumName)
    ///
    /// ``` param1: qtvideo_enums.Rotation ```
    pub fn GetEnumName(param1: i32) []const u8 {
        const _ret = qtc.QtVideo_GetEnumName(@intCast(param1));
        return std.mem.span(_ret);
    }
};

/// https://doc.qt.io/qt-6/qtvideo.html#types
pub const enums = struct {
    pub const Rotation = enum {
        pub const None: i32 = 0;
        pub const Clockwise90: i32 = 90;
        pub const Clockwise180: i32 = 180;
        pub const Clockwise270: i32 = 270;
    };
};
