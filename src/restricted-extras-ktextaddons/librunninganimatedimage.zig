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

    /// New constructs a new TextEmoticonsCore::RunningAnimatedImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn New(idx: anytype) TextEmoticonsCore__RunningAnimatedImage {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__RunningAnimatedImage_new(@ptrCast(idx.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__RunningAnimatedImage `
    ///
    pub fn Index(self: TextEmoticonsCore__RunningAnimatedImage) QPersistentModelIndex {
        return .{ .ptr = qtc.TextEmoticonsCore__RunningAnimatedImage_Index(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__RunningAnimatedImage `
    ///
    /// ` index: QPersistentModelIndex `
    ///
    pub fn SetIndex(self: TextEmoticonsCore__RunningAnimatedImage, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QPersistentModelIndex;
        qtc.TextEmoticonsCore__RunningAnimatedImage_SetIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__RunningAnimatedImage `
    ///
    pub fn Movie(self: TextEmoticonsCore__RunningAnimatedImage) QMovie {
        return .{ .ptr = qtc.TextEmoticonsCore__RunningAnimatedImage_Movie(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__RunningAnimatedImage `
    ///
    /// ` movie: QMovie `
    ///
    pub fn SetMovie(self: TextEmoticonsCore__RunningAnimatedImage, movie: anytype) void {
        comptime _ = @TypeOf(movie)._is_QMovie;
        qtc.TextEmoticonsCore__RunningAnimatedImage_SetMovie(@ptrCast(self.ptr), @ptrCast(movie.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextEmoticonsCore__RunningAnimatedImage `
    ///
    pub fn Delete(self: TextEmoticonsCore__RunningAnimatedImage) void {
        qtc.TextEmoticonsCore__RunningAnimatedImage_Delete(@ptrCast(self.ptr));
    }
};
