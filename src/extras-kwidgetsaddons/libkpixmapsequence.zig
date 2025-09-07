const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/kpixmapsequence.html
pub const kpixmapsequence = struct {
    /// New constructs a new KPixmapSequence object.
    ///
    ///
    pub fn New() QtC.KPixmapSequence {
        return qtc.KPixmapSequence_new();
    }

    /// New2 constructs a new KPixmapSequence object.
    ///
    /// ``` other: QtC.KPixmapSequence ```
    pub fn New2(other: ?*anyopaque) QtC.KPixmapSequence {
        return qtc.KPixmapSequence_new2(@ptrCast(other));
    }

    /// New3 constructs a new KPixmapSequence object.
    ///
    /// ``` pixmap: QtC.QPixmap ```
    pub fn New3(pixmap: ?*anyopaque) QtC.KPixmapSequence {
        return qtc.KPixmapSequence_new3(@ptrCast(pixmap));
    }

    /// New4 constructs a new KPixmapSequence object.
    ///
    /// ``` fullPath: []const u8, size: i32 ```
    pub fn New4(fullPath: []const u8, size: i32) QtC.KPixmapSequence {
        const fullPath_str = qtc.libqt_string{
            .len = fullPath.len,
            .data = fullPath.ptr,
        };

        return qtc.KPixmapSequence_new4(fullPath_str, @intCast(size));
    }

    /// New5 constructs a new KPixmapSequence object.
    ///
    /// ``` pixmap: QtC.QPixmap, frameSize: QtC.QSize ```
    pub fn New5(pixmap: ?*anyopaque, frameSize: ?*anyopaque) QtC.KPixmapSequence {
        return qtc.KPixmapSequence_new5(@ptrCast(pixmap), @ptrCast(frameSize));
    }

    /// [Qt documentation](https://api.kde.org/kpixmapsequence.html#operator-eq)
    ///
    /// ``` self: QtC.KPixmapSequence, other: QtC.KPixmapSequence ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KPixmapSequence_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kpixmapsequence.html#isValid)
    ///
    /// ``` self: QtC.KPixmapSequence ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KPixmapSequence_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kpixmapsequence.html#isEmpty)
    ///
    /// ``` self: QtC.KPixmapSequence ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.KPixmapSequence_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kpixmapsequence.html#frameSize)
    ///
    /// ``` self: QtC.KPixmapSequence ```
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.KPixmapSequence_FrameSize(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kpixmapsequence.html#frameCount)
    ///
    /// ``` self: QtC.KPixmapSequence ```
    pub fn FrameCount(self: ?*anyopaque) i32 {
        return qtc.KPixmapSequence_FrameCount(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kpixmapsequence.html#frameAt)
    ///
    /// ``` self: QtC.KPixmapSequence, index: i32 ```
    pub fn FrameAt(self: ?*anyopaque, index: i32) QtC.QPixmap {
        return qtc.KPixmapSequence_FrameAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kpixmapsequence.html#dtor.KPixmapSequence)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KPixmapSequence ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KPixmapSequence_Delete(@ptrCast(self));
    }
};
