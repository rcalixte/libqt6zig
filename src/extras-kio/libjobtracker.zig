const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KJobTrackerInterface = @import("libqt6").KJobTrackerInterface;

/// ### [Upstream resources](https://api.kde.org/kio.html)
pub const KIO = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO,

    pub const _is_KIO = {};

    /// ### [Upstream resources](https://api.kde.org/kio.html#getJobTracker)
    ///
    pub fn GetJobTracker() KJobTrackerInterface {
        return .{ .ptr = qtc.KIO_GetJobTracker() };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#setJobTracker)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KJobTrackerInterface `
    ///
    pub fn SetJobTracker(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KJobTrackerInterface;
        qtc.KIO_SetJobTracker(@ptrCast(param1.ptr));
    }
};
