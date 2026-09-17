const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmalloc.html)
pub const qmalloc = extern struct {
    /// ### DEPRECATED: Use `qMallocAligned` instead
    ///
    pub const QMallocAligned = qMallocAligned;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmalloc.html#qMallocAligned)
    ///
    /// ## Parameter(s):
    ///
    /// ` size: usize `
    ///
    /// ` alignment: usize `
    ///
    pub fn qMallocAligned(size: usize, alignment: usize) ?*anyopaque {
        return qtc.qmalloc_QMallocAligned(@bitCast(size), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `qReallocAligned` instead
    ///
    pub const QReallocAligned = qReallocAligned;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmalloc.html#qReallocAligned)
    ///
    /// ## Parameter(s):
    ///
    /// ` ptr: ?*anyopaque `
    ///
    /// ` size: usize `
    ///
    /// ` oldsize: usize `
    ///
    /// ` alignment: usize `
    ///
    pub fn qReallocAligned(ptr: ?*anyopaque, size: usize, oldsize: usize, alignment: usize) ?*anyopaque {
        return qtc.qmalloc_QReallocAligned(@ptrCast(ptr), @bitCast(size), @bitCast(oldsize), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `qFreeAligned` instead
    ///
    pub const QFreeAligned = qFreeAligned;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmalloc.html#qFreeAligned)
    ///
    /// ## Parameter(s):
    ///
    /// ` ptr: ?*anyopaque `
    ///
    pub fn qFreeAligned(ptr: ?*anyopaque) void {
        qtc.qmalloc_QFreeAligned(@ptrCast(ptr));
    }
};
