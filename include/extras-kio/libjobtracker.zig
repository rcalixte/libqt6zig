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

    /// ### DEPRECATED: Use `getJobTracker` instead
    ///
    pub const GetJobTracker = getJobTracker;

    /// ### [Upstream resources](https://api.kde.org/kio.html#getJobTracker)
    ///
    pub fn getJobTracker() KJobTrackerInterface {
        return .{ .ptr = qtc.KIO_GetJobTracker() };
    }

    /// ### DEPRECATED: Use `setJobTracker` instead
    ///
    pub const SetJobTracker = setJobTracker;

    /// ### [Upstream resources](https://api.kde.org/kio.html#setJobTracker)
    ///
    /// ## Parameter(s):
    ///
    /// ` tracker: KJobTrackerInterface `
    ///
    pub fn setJobTracker(tracker: anytype) void {
        comptime _ = @TypeOf(tracker)._is_KJobTrackerInterface;
        qtc.KIO_SetJobTracker(@ptrCast(tracker.ptr));
    }
};
