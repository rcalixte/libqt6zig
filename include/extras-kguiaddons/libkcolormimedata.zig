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
    /// ` param1: QMimeData `
    ///
    /// ` param2: QColor `
    ///
    pub fn PopulateMimeData(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMimeData;
        comptime _ = @TypeOf(param2)._is_QColor;
        qtc.KColorMimeData_PopulateMimeData(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolormimedata.html#canDecode)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMimeData `
    ///
    pub fn CanDecode(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMimeData;
        return qtc.KColorMimeData_CanDecode(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcolormimedata.html#fromMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMimeData `
    ///
    pub fn FromMimeData(param1: anytype) QColor {
        comptime _ = @TypeOf(param1)._is_QMimeData;
        return .{ .ptr = qtc.KColorMimeData_FromMimeData(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcolormimedata.html#createDrag)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    /// ` param2: QObject `
    ///
    pub fn CreateDrag(param1: anytype, param2: anytype) QDrag {
        comptime _ = @TypeOf(param1)._is_QColor;
        comptime _ = @TypeOf(param2)._is_QObject;
        return .{ .ptr = qtc.KColorMimeData_CreateDrag(@ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }
};
