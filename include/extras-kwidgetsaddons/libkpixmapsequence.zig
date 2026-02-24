const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html)
pub const kpixmapsequence = struct {
    /// New constructs a new KPixmapSequence object.
    ///
    pub fn New() QtC.KPixmapSequence {
        return qtc.KPixmapSequence_new();
    }

    /// New2 constructs a new KPixmapSequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KPixmapSequence `
    ///
    pub fn New2(other: ?*anyopaque) QtC.KPixmapSequence {
        return qtc.KPixmapSequence_new2(@ptrCast(other));
    }

    /// New3 constructs a new KPixmapSequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn New3(pixmap: ?*anyopaque) QtC.KPixmapSequence {
        return qtc.KPixmapSequence_new3(@ptrCast(pixmap));
    }

    /// New4 constructs a new KPixmapSequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fullPath: []const u8 `
    ///
    /// ` size: i32 `
    ///
    pub fn New4(fullPath: []const u8, size: i32) QtC.KPixmapSequence {
        const fullPath_str = qtc.libqt_string{
            .len = fullPath.len,
            .data = fullPath.ptr,
        };

        return qtc.KPixmapSequence_new4(fullPath_str, @bitCast(size));
    }

    /// New5 constructs a new KPixmapSequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    /// ` frameSize: QtC.QSize `
    ///
    pub fn New5(pixmap: ?*anyopaque, frameSize: ?*anyopaque) QtC.KPixmapSequence {
        return qtc.KPixmapSequence_new5(@ptrCast(pixmap), @ptrCast(frameSize));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPixmapSequence `
    ///
    /// ` other: QtC.KPixmapSequence `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KPixmapSequence_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPixmapSequence `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KPixmapSequence_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPixmapSequence `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.KPixmapSequence_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPixmapSequence `
    ///
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.KPixmapSequence_FrameSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#frameCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPixmapSequence `
    ///
    pub fn FrameCount(self: ?*anyopaque) i32 {
        return qtc.KPixmapSequence_FrameCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#frameAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPixmapSequence `
    ///
    /// ` index: i32 `
    ///
    pub fn FrameAt(self: ?*anyopaque, index: i32) QtC.QPixmap {
        return qtc.KPixmapSequence_FrameAt(@ptrCast(self), @bitCast(index));
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
    /// ` self: QtC.KPixmapSequence `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KPixmapSequence_Delete(@ptrCast(self));
    }
};
