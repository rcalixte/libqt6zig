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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KPixmapSequence object in C++ memory
    ///
    pub fn new() KPixmapSequence {
        return .{ .ptr = qtc.KPixmapSequence_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KPixmapSequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KPixmapSequence `
    ///
    pub fn new2(other: anytype) KPixmapSequence {
        comptime _ = @TypeOf(other)._is_KPixmapSequence;
        return .{ .ptr = qtc.KPixmapSequence_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KPixmapSequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn new3(pixmap: anytype) KPixmapSequence {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KPixmapSequence_new3(@ptrCast(pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KPixmapSequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fullPath: []const u8 `
    ///
    /// ` size: i32 `
    ///
    pub fn new4(fullPath: []const u8, size: i32) KPixmapSequence {
        const fullPath_str = qtc.libqt_string{
            .len = fullPath.len,
            .data = fullPath.ptr,
        };
        return .{ .ptr = qtc.KPixmapSequence_new4(fullPath_str, @bitCast(size)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KPixmapSequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` _frameSize: QSize `
    ///
    pub fn new5(pixmap: anytype, _frameSize: anytype) KPixmapSequence {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(_frameSize)._is_QSize;
        return .{ .ptr = qtc.KPixmapSequence_new5(@ptrCast(pixmap.ptr), @ptrCast(_frameSize.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequence `
    ///
    /// ` other: KPixmapSequence `
    ///
    pub fn operatorAssign(self: KPixmapSequence, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KPixmapSequence;
        qtc.KPixmapSequence_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequence `
    ///
    pub fn isValid(self: KPixmapSequence) bool {
        return qtc.KPixmapSequence_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequence `
    ///
    pub fn isEmpty(self: KPixmapSequence) bool {
        return qtc.KPixmapSequence_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `frameSize` instead
    ///
    pub const FrameSize = frameSize;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequence `
    ///
    pub fn frameSize(self: KPixmapSequence) QSize {
        return .{ .ptr = qtc.KPixmapSequence_FrameSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameCount` instead
    ///
    pub const FrameCount = frameCount;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#frameCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequence `
    ///
    pub fn frameCount(self: KPixmapSequence) i32 {
        return qtc.KPixmapSequence_FrameCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `frameAt` instead
    ///
    pub const FrameAt = frameAt;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#frameAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequence `
    ///
    /// ` index: i32 `
    ///
    pub fn frameAt(self: KPixmapSequence, index: i32) QPixmap {
        return .{ .ptr = qtc.KPixmapSequence_FrameAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequence.html#dtor.KPixmapSequence)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KPixmapSequence `
    ///
    pub fn delete(self: KPixmapSequence) void {
        qtc.KPixmapSequence_Delete(@ptrCast(self.ptr));
    }
};
