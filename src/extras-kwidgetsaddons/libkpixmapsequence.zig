const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPixmap = @import("libqt6").QPixmap;
const QSize = @import("libqt6").QSize;

/// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html)
pub const KPixmapSequence = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KPixmapSequence,

    pub const _is_KPixmapSequence = {};

    /// New constructs a new KPixmapSequence object.
    ///
    pub fn New() KPixmapSequence {
        return .{ .ptr = qtc.KPixmapSequence_new() };
    }

    /// New2 constructs a new KPixmapSequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KPixmapSequence `
    ///
    pub fn New2(other: anytype) KPixmapSequence {
        comptime _ = @TypeOf(other)._is_KPixmapSequence;
        return .{ .ptr = qtc.KPixmapSequence_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new KPixmapSequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn New3(pixmap: anytype) KPixmapSequence {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KPixmapSequence_new3(@ptrCast(pixmap.ptr)) };
    }

    /// New4 constructs a new KPixmapSequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fullPath: []const u8 `
    ///
    /// ` size: i32 `
    ///
    pub fn New4(fullPath: []const u8, size: i32) KPixmapSequence {
        const fullPath_str = qtc.libqt_string{
            .len = fullPath.len,
            .data = fullPath.ptr,
        };
        return .{ .ptr = qtc.KPixmapSequence_new4(fullPath_str, @bitCast(size)) };
    }

    /// New5 constructs a new KPixmapSequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` frameSize: QSize `
    ///
    pub fn New5(pixmap: anytype, frameSize: anytype) KPixmapSequence {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(frameSize)._is_QSize;
        return .{ .ptr = qtc.KPixmapSequence_new5(@ptrCast(pixmap.ptr), @ptrCast(frameSize.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequence `
    ///
    /// ` other: KPixmapSequence `
    ///
    pub fn OperatorAssign(self: KPixmapSequence, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KPixmapSequence;
        qtc.KPixmapSequence_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequence `
    ///
    pub fn IsValid(self: KPixmapSequence) bool {
        return qtc.KPixmapSequence_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequence `
    ///
    pub fn IsEmpty(self: KPixmapSequence) bool {
        return qtc.KPixmapSequence_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequence `
    ///
    pub fn FrameSize(self: KPixmapSequence) QSize {
        return .{ .ptr = qtc.KPixmapSequence_FrameSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#frameCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequence `
    ///
    pub fn FrameCount(self: KPixmapSequence) i32 {
        return qtc.KPixmapSequence_FrameCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#frameAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequence `
    ///
    /// ` index: i32 `
    ///
    pub fn FrameAt(self: KPixmapSequence, index: i32) QPixmap {
        return .{ .ptr = qtc.KPixmapSequence_FrameAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#dtor.KPixmapSequence)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KPixmapSequence `
    ///
    pub fn Delete(self: KPixmapSequence) void {
        qtc.KPixmapSequence_Delete(@ptrCast(self.ptr));
    }
};
