const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kio.html)
pub const kio = struct {
    /// ### [Upstream resources](https://api.kde.org/kio.html#getJobTracker)
    ///
    pub fn GetJobTracker() QtC.KJobTrackerInterface {
        return qtc.KIO_GetJobTracker();
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#setJobTracker)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KJobTrackerInterface `
    ///
    pub fn SetJobTracker(param1: ?*anyopaque) void {
        qtc.KIO_SetJobTracker(@ptrCast(param1));
    }
};
