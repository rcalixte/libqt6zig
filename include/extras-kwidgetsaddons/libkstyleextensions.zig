const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qstyle_enums = @import("../libqstyle.zig").enums;

/// https://api-staging.kde.org/kstyleextensions.html
pub const kstyleextensions = struct {
    /// [Qt documentation](https://api-staging.kde.org/kstyleextensions.html#customControlElement)
    ///
    /// ``` param1: []const u8, param2: QtC.QWidget ```
    ///
    /// Returns: ``` qstyle_enums.ControlElement ```
    pub fn CustomControlElement(param1: []const u8, param2: ?*anyopaque) i64 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KStyleExtensions_CustomControlElement(param1_str, @ptrCast(param2));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstyleextensions.html#customStyleHint)
    ///
    /// ``` param1: []const u8, param2: QtC.QWidget ```
    ///
    /// Returns: ``` qstyle_enums.StyleHint ```
    pub fn CustomStyleHint(param1: []const u8, param2: ?*anyopaque) i64 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KStyleExtensions_CustomStyleHint(param1_str, @ptrCast(param2));
    }

    /// [Qt documentation](https://api-staging.kde.org/kstyleextensions.html#customSubElement)
    ///
    /// ``` param1: []const u8, param2: QtC.QWidget ```
    ///
    /// Returns: ``` qstyle_enums.SubElement ```
    pub fn CustomSubElement(param1: []const u8, param2: ?*anyopaque) i64 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KStyleExtensions_CustomSubElement(param1_str, @ptrCast(param2));
    }
};
