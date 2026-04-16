const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QWidget = @import("libqt6").QWidget;
const qstyle_enums = @import("../libqstyle.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kstyleextensions.html)
pub const KStyleExtensions = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kstyleextensions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KStyleExtensions,

    pub const _is_KStyleExtensions = {};

    /// ### [Upstream resources](https://api.kde.org/kstyleextensions.html#customControlElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: QWidget `
    ///
    /// ## Returns:
    ///
    /// ` qstyle_enums.ControlElement `
    ///
    pub fn CustomControlElement(param1: []const u8, param2: anytype) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        comptime _ = @TypeOf(param2)._is_QWidget;
        return qtc.KStyleExtensions_CustomControlElement(param1_str, @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstyleextensions.html#customStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: QWidget `
    ///
    /// ## Returns:
    ///
    /// ` qstyle_enums.StyleHint `
    ///
    pub fn CustomStyleHint(param1: []const u8, param2: anytype) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        comptime _ = @TypeOf(param2)._is_QWidget;
        return qtc.KStyleExtensions_CustomStyleHint(param1_str, @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstyleextensions.html#customSubElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: QWidget `
    ///
    /// ## Returns:
    ///
    /// ` qstyle_enums.SubElement `
    ///
    pub fn CustomSubElement(param1: []const u8, param2: anytype) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        comptime _ = @TypeOf(param2)._is_QWidget;
        return qtc.KStyleExtensions_CustomSubElement(param1_str, @ptrCast(param2.ptr));
    }
};
