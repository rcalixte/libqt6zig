const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const QDrag = @import("libqt6").QDrag;
const QMimeData = @import("libqt6").QMimeData;
const QObject = @import("libqt6").QObject;

/// ### [Upstream resources](https://api.kde.org/kcolormimedata.html)
pub const KColorMimeData = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcolormimedata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KColorMimeData,

    pub const _is_KColorMimeData = {};

    /// ### [Upstream resources](https://api.kde.org/kcolormimedata.html#populateMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` mimeData: QMimeData `
    ///
    /// ` color: QColor `
    ///
    pub fn PopulateMimeData(mimeData: anytype, color: anytype) void {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KColorMimeData_PopulateMimeData(@ptrCast(mimeData.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolormimedata.html#canDecode)
    ///
    /// ## Parameter(s):
    ///
    /// ` mimeData: QMimeData `
    ///
    pub fn CanDecode(mimeData: anytype) bool {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        return qtc.KColorMimeData_CanDecode(@ptrCast(mimeData.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolormimedata.html#fromMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` mimeData: QMimeData `
    ///
    pub fn FromMimeData(mimeData: anytype) QColor {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        return .{ .ptr = qtc.KColorMimeData_FromMimeData(@ptrCast(mimeData.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcolormimedata.html#createDrag)
    ///
    /// ## Parameter(s):
    ///
    /// ` color: QColor `
    ///
    /// ` dragsource: QObject `
    ///
    pub fn CreateDrag(color: anytype, dragsource: anytype) QDrag {
        comptime _ = @TypeOf(color)._is_QColor;
        comptime _ = @TypeOf(dragsource)._is_QObject;
        return .{ .ptr = qtc.KColorMimeData_CreateDrag(@ptrCast(color.ptr), @ptrCast(dragsource.ptr)) };
    }
};
