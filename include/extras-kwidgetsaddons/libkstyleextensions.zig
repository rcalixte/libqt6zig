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
    /// ` element: []const u8 `
    ///
    /// ` widget: QWidget `
    ///
    /// ## Returns:
    ///
    /// ` qstyle_enums.ControlElement `
    ///
    pub fn CustomControlElement(element: []const u8, widget: anytype) i32 {
        const element_str = qtc.libqt_string{
            .len = element.len,
            .data = element.ptr,
        };
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.KStyleExtensions_CustomControlElement(element_str, @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstyleextensions.html#customStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` element: []const u8 `
    ///
    /// ` widget: QWidget `
    ///
    /// ## Returns:
    ///
    /// ` qstyle_enums.StyleHint `
    ///
    pub fn CustomStyleHint(element: []const u8, widget: anytype) i32 {
        const element_str = qtc.libqt_string{
            .len = element.len,
            .data = element.ptr,
        };
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.KStyleExtensions_CustomStyleHint(element_str, @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstyleextensions.html#customSubElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` element: []const u8 `
    ///
    /// ` widget: QWidget `
    ///
    /// ## Returns:
    ///
    /// ` qstyle_enums.SubElement `
    ///
    pub fn CustomSubElement(element: []const u8, widget: anytype) i32 {
        const element_str = qtc.libqt_string{
            .len = element.len,
            .data = element.ptr,
        };
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.KStyleExtensions_CustomSubElement(element_str, @ptrCast(widget.ptr));
    }
};
