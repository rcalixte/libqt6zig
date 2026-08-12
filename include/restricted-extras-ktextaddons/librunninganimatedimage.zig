const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QModelIndex = @import("libqt6").QModelIndex;
const QMovie = @import("libqt6").QMovie;
const QPersistentModelIndex = @import("libqt6").QPersistentModelIndex;

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
pub const TextEmoticonsCore__RunningAnimatedImage = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextEmoticonsCore__RunningAnimatedImage,

    pub const _is_TextEmoticonsCore__RunningAnimatedImage = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextEmoticonsCore::RunningAnimatedImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn new(idx: anytype) TextEmoticonsCore__RunningAnimatedImage {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__RunningAnimatedImage_new(@ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__RunningAnimatedImage `
    ///
    pub fn index(self: TextEmoticonsCore__RunningAnimatedImage) QPersistentModelIndex {
        return .{ .ptr = qtc.TextEmoticonsCore__RunningAnimatedImage_Index(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIndex` instead
    ///
    pub const SetIndex = setIndex;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__RunningAnimatedImage `
    ///
    /// ` _index: QPersistentModelIndex `
    ///
    pub fn setIndex(self: TextEmoticonsCore__RunningAnimatedImage, _index: anytype) void {
        comptime _ = @TypeOf(_index)._is_QPersistentModelIndex;
        qtc.TextEmoticonsCore__RunningAnimatedImage_SetIndex(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `movie` instead
    ///
    pub const Movie = movie;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__RunningAnimatedImage `
    ///
    pub fn movie(self: TextEmoticonsCore__RunningAnimatedImage) QMovie {
        return .{ .ptr = qtc.TextEmoticonsCore__RunningAnimatedImage_Movie(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMovie` instead
    ///
    pub const SetMovie = setMovie;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__RunningAnimatedImage `
    ///
    /// ` _movie: QMovie `
    ///
    pub fn setMovie(self: TextEmoticonsCore__RunningAnimatedImage, _movie: anytype) void {
        comptime _ = @TypeOf(_movie)._is_QMovie;
        qtc.TextEmoticonsCore__RunningAnimatedImage_SetMovie(@ptrCast(self.ptr), @ptrCast(_movie.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextEmoticonsCore__RunningAnimatedImage `
    ///
    pub fn delete(self: TextEmoticonsCore__RunningAnimatedImage) void {
        qtc.TextEmoticonsCore__RunningAnimatedImage_Delete(@ptrCast(self.ptr));
    }
};
