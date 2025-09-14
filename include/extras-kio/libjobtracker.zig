const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/kio.html
pub const kio = struct {
    /// [Qt documentation](https://api.kde.org/kio.html#getJobTracker)
    ///
    ///
    pub fn GetJobTracker() QtC.KJobTrackerInterface {
        return qtc.KIO_GetJobTracker();
    }

    /// [Qt documentation](https://api.kde.org/kio.html#setJobTracker)
    ///
    /// ``` param1: QtC.KJobTrackerInterface ```
    pub fn SetJobTracker(param1: ?*anyopaque) void {
        qtc.KIO_SetJobTracker(@ptrCast(param1));
    }
};
