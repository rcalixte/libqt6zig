const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/kcolormimedata.html
pub const kcolormimedata = struct {
    /// [Qt documentation](https://api.kde.org/kcolormimedata.html#populateMimeData)
    ///
    /// ``` param1: QtC.QMimeData, param2: QtC.QColor ```
    pub fn PopulateMimeData(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.KColorMimeData_PopulateMimeData(@ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://api.kde.org/kcolormimedata.html#canDecode)
    ///
    /// ``` param1: QtC.QMimeData ```
    pub fn CanDecode(param1: ?*anyopaque) bool {
        return qtc.KColorMimeData_CanDecode(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kcolormimedata.html#fromMimeData)
    ///
    /// ``` param1: QtC.QMimeData ```
    pub fn FromMimeData(param1: ?*anyopaque) QtC.QColor {
        return qtc.KColorMimeData_FromMimeData(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kcolormimedata.html#createDrag)
    ///
    /// ``` param1: QtC.QColor, param2: QtC.QObject ```
    pub fn CreateDrag(param1: ?*anyopaque, param2: ?*anyopaque) QtC.QDrag {
        return qtc.KColorMimeData_CreateDrag(@ptrCast(param1), @ptrCast(param2));
    }
};
