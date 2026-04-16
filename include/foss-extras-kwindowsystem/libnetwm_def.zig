const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;

/// ### [Upstream resources](https://api.kde.org/netpoint.html)
pub const NETPoint = extern struct {
    /// ### [Upstream resources](https://api.kde.org/netpoint.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.NETPoint,

    pub const _is_NETPoint = {};

    /// New constructs a new NETPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETPoint `
    ///
    pub fn New(other: anytype) NETPoint {
        comptime _ = @TypeOf(other)._is_NETPoint;
        return .{ .ptr = qtc.NETPoint_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new NETPoint object and invalidates the source NETPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETPoint `
    ///
    pub fn New2(other: anytype) NETPoint {
        comptime _ = @TypeOf(other)._is_NETPoint;
        return .{ .ptr = qtc.NETPoint_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new NETPoint object.
    ///
    pub fn New3() NETPoint {
        return .{ .ptr = qtc.NETPoint_new3() };
    }

    /// New4 constructs a new NETPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPoint `
    ///
    pub fn New4(p: anytype) NETPoint {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.NETPoint_new4(@ptrCast(p.ptr)) };
    }

    /// New5 constructs a new NETPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: NETPoint `
    ///
    pub fn New5(param1: anytype) NETPoint {
        comptime _ = @TypeOf(param1)._is_NETPoint;
        return .{ .ptr = qtc.NETPoint_new5(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: NETPoint `
    ///
    /// ` other: NETPoint `
    ///
    pub fn CopyAssign(self: NETPoint, other: NETPoint) void {
        qtc.NETPoint_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: NETPoint `
    ///
    /// ` other: NETPoint `
    ///
    pub fn MoveAssign(self: NETPoint, other: NETPoint) void {
        qtc.NETPoint_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netpoint.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETPoint `
    ///
    pub fn ToPoint(self: NETPoint) QPoint {
        return .{ .ptr = qtc.NETPoint_ToPoint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/netpoint.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETPoint `
    ///
    pub fn X(self: NETPoint) i32 {
        return qtc.NETPoint_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netpoint.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETPoint `
    ///
    /// ` x: i32 `
    ///
    pub fn SetX(self: NETPoint, x: i32) void {
        qtc.NETPoint_SetX(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### [Upstream resources](https://api.kde.org/netpoint.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETPoint `
    ///
    pub fn Y(self: NETPoint) i32 {
        return qtc.NETPoint_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netpoint.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETPoint `
    ///
    /// ` y: i32 `
    ///
    pub fn SetY(self: NETPoint, y: i32) void {
        qtc.NETPoint_SetY(@ptrCast(self.ptr), @bitCast(y));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/netpoint.html#dtor.NETPoint)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: NETPoint `
    ///
    pub fn Delete(self: NETPoint) void {
        qtc.NETPoint_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/netsize.html)
pub const NETSize = extern struct {
    /// ### [Upstream resources](https://api.kde.org/netsize.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.NETSize,

    pub const _is_NETSize = {};

    /// New constructs a new NETSize object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETSize `
    ///
    pub fn New(other: anytype) NETSize {
        comptime _ = @TypeOf(other)._is_NETSize;
        return .{ .ptr = qtc.NETSize_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new NETSize object and invalidates the source NETSize object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETSize `
    ///
    pub fn New2(other: anytype) NETSize {
        comptime _ = @TypeOf(other)._is_NETSize;
        return .{ .ptr = qtc.NETSize_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new NETSize object.
    ///
    pub fn New3() NETSize {
        return .{ .ptr = qtc.NETSize_new3() };
    }

    /// New4 constructs a new NETSize object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    pub fn New4(size: anytype) NETSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.NETSize_new4(@ptrCast(size.ptr)) };
    }

    /// New5 constructs a new NETSize object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: NETSize `
    ///
    pub fn New5(param1: anytype) NETSize {
        comptime _ = @TypeOf(param1)._is_NETSize;
        return .{ .ptr = qtc.NETSize_new5(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: NETSize `
    ///
    /// ` other: NETSize `
    ///
    pub fn CopyAssign(self: NETSize, other: NETSize) void {
        qtc.NETSize_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: NETSize `
    ///
    /// ` other: NETSize `
    ///
    pub fn MoveAssign(self: NETSize, other: NETSize) void {
        qtc.NETSize_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netsize.html#toSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETSize `
    ///
    pub fn ToSize(self: NETSize) QSize {
        return .{ .ptr = qtc.NETSize_ToSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/netsize.html#width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETSize `
    ///
    pub fn Width(self: NETSize) i32 {
        return qtc.NETSize_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netsize.html#width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETSize `
    ///
    /// ` width: i32 `
    ///
    pub fn SetWidth(self: NETSize, width: i32) void {
        qtc.NETSize_SetWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://api.kde.org/netsize.html#height-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETSize `
    ///
    pub fn Height(self: NETSize) i32 {
        return qtc.NETSize_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netsize.html#height-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETSize `
    ///
    /// ` height: i32 `
    ///
    pub fn SetHeight(self: NETSize, height: i32) void {
        qtc.NETSize_SetHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/netsize.html#dtor.NETSize)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: NETSize `
    ///
    pub fn Delete(self: NETSize) void {
        qtc.NETSize_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/netrect.html)
pub const NETRect = extern struct {
    /// ### [Upstream resources](https://api.kde.org/netrect.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.NETRect,

    pub const _is_NETRect = {};

    /// New constructs a new NETRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETRect `
    ///
    pub fn New(other: anytype) NETRect {
        comptime _ = @TypeOf(other)._is_NETRect;
        return .{ .ptr = qtc.NETRect_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new NETRect object and invalidates the source NETRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETRect `
    ///
    pub fn New2(other: anytype) NETRect {
        comptime _ = @TypeOf(other)._is_NETRect;
        return .{ .ptr = qtc.NETRect_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new NETRect object.
    ///
    pub fn New3() NETRect {
        return .{ .ptr = qtc.NETRect_new3() };
    }

    /// New4 constructs a new NETRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rect: QRect `
    ///
    pub fn New4(rect: anytype) NETRect {
        comptime _ = @TypeOf(rect)._is_QRect;
        return .{ .ptr = qtc.NETRect_new4(@ptrCast(rect.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: NETRect `
    ///
    /// ` other: NETRect `
    ///
    pub fn CopyAssign(self: NETRect, other: NETRect) void {
        qtc.NETRect_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: NETRect `
    ///
    /// ` other: NETRect `
    ///
    pub fn MoveAssign(self: NETRect, other: NETRect) void {
        qtc.NETRect_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netrect.html#toRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETRect `
    ///
    pub fn ToRect(self: NETRect) QRect {
        return .{ .ptr = qtc.NETRect_ToRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/netrect.html#pos-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETRect `
    ///
    pub fn Pos(self: NETRect) NETPoint {
        return .{ .ptr = qtc.NETRect_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/netrect.html#pos-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETRect `
    ///
    /// ` pos: NETPoint `
    ///
    pub fn SetPos(self: NETRect, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_NETPoint;
        qtc.NETRect_SetPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netrect.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETRect `
    ///
    pub fn Size(self: NETRect) NETSize {
        return .{ .ptr = qtc.NETRect_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/netrect.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETRect `
    ///
    /// ` size: NETSize `
    ///
    pub fn SetSize(self: NETRect, size: anytype) void {
        comptime _ = @TypeOf(size)._is_NETSize;
        qtc.NETRect_SetSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/netrect.html#dtor.NETRect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: NETRect `
    ///
    pub fn Delete(self: NETRect) void {
        qtc.NETRect_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/neticon.html)
pub const NETIcon = extern struct {
    /// ### [Upstream resources](https://api.kde.org/neticon.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.NETIcon,

    pub const _is_NETIcon = {};

    /// New constructs a new NETIcon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETIcon `
    ///
    pub fn New(other: anytype) NETIcon {
        comptime _ = @TypeOf(other)._is_NETIcon;
        return .{ .ptr = qtc.NETIcon_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new NETIcon object and invalidates the source NETIcon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETIcon `
    ///
    pub fn New2(other: anytype) NETIcon {
        comptime _ = @TypeOf(other)._is_NETIcon;
        return .{ .ptr = qtc.NETIcon_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new NETIcon object.
    ///
    pub fn New3() NETIcon {
        return .{ .ptr = qtc.NETIcon_new3() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: NETIcon `
    ///
    /// ` other: NETIcon `
    ///
    pub fn CopyAssign(self: NETIcon, other: NETIcon) void {
        qtc.NETIcon_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: NETIcon `
    ///
    /// ` other: NETIcon `
    ///
    pub fn MoveAssign(self: NETIcon, other: NETIcon) void {
        qtc.NETIcon_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/neticon.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETIcon `
    ///
    pub fn Size(self: NETIcon) NETSize {
        return .{ .ptr = qtc.NETIcon_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/neticon.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETIcon `
    ///
    /// ` size: NETSize `
    ///
    pub fn SetSize(self: NETIcon, size: anytype) void {
        comptime _ = @TypeOf(size)._is_NETSize;
        qtc.NETIcon_SetSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/neticon.html#data-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETIcon `
    ///
    pub fn Data(self: NETIcon) ?*u8 {
        return @ptrCast(qtc.NETIcon_Data(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://api.kde.org/neticon.html#data-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETIcon `
    ///
    /// ` data: *u8 `
    ///
    pub fn SetData(self: NETIcon, data: *u8) void {
        qtc.NETIcon_SetData(@ptrCast(self.ptr), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/neticon.html#dtor.NETIcon)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: NETIcon `
    ///
    pub fn Delete(self: NETIcon) void {
        qtc.NETIcon_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/netextendedstrut.html)
pub const NETExtendedStrut = extern struct {
    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.NETExtendedStrut,

    pub const _is_NETExtendedStrut = {};

    /// New constructs a new NETExtendedStrut object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETExtendedStrut `
    ///
    pub fn New(other: anytype) NETExtendedStrut {
        comptime _ = @TypeOf(other)._is_NETExtendedStrut;
        return .{ .ptr = qtc.NETExtendedStrut_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new NETExtendedStrut object and invalidates the source NETExtendedStrut object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETExtendedStrut `
    ///
    pub fn New2(other: anytype) NETExtendedStrut {
        comptime _ = @TypeOf(other)._is_NETExtendedStrut;
        return .{ .ptr = qtc.NETExtendedStrut_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new NETExtendedStrut object.
    ///
    pub fn New3() NETExtendedStrut {
        return .{ .ptr = qtc.NETExtendedStrut_new3() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` other: NETExtendedStrut `
    ///
    pub fn CopyAssign(self: NETExtendedStrut, other: NETExtendedStrut) void {
        qtc.NETExtendedStrut_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` other: NETExtendedStrut `
    ///
    pub fn MoveAssign(self: NETExtendedStrut, other: NETExtendedStrut) void {
        qtc.NETExtendedStrut_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#left_width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn LeftWidth(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_LeftWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#left_width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` left_width: i32 `
    ///
    pub fn SetLeftWidth(self: NETExtendedStrut, left_width: i32) void {
        qtc.NETExtendedStrut_SetLeftWidth(@ptrCast(self.ptr), @bitCast(left_width));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#left_start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn LeftStart(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_LeftStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#left_start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` left_start: i32 `
    ///
    pub fn SetLeftStart(self: NETExtendedStrut, left_start: i32) void {
        qtc.NETExtendedStrut_SetLeftStart(@ptrCast(self.ptr), @bitCast(left_start));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#left_end-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn LeftEnd(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_LeftEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#left_end-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` left_end: i32 `
    ///
    pub fn SetLeftEnd(self: NETExtendedStrut, left_end: i32) void {
        qtc.NETExtendedStrut_SetLeftEnd(@ptrCast(self.ptr), @bitCast(left_end));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#right_width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn RightWidth(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_RightWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#right_width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` right_width: i32 `
    ///
    pub fn SetRightWidth(self: NETExtendedStrut, right_width: i32) void {
        qtc.NETExtendedStrut_SetRightWidth(@ptrCast(self.ptr), @bitCast(right_width));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#right_start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn RightStart(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_RightStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#right_start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` right_start: i32 `
    ///
    pub fn SetRightStart(self: NETExtendedStrut, right_start: i32) void {
        qtc.NETExtendedStrut_SetRightStart(@ptrCast(self.ptr), @bitCast(right_start));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#right_end-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn RightEnd(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_RightEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#right_end-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` right_end: i32 `
    ///
    pub fn SetRightEnd(self: NETExtendedStrut, right_end: i32) void {
        qtc.NETExtendedStrut_SetRightEnd(@ptrCast(self.ptr), @bitCast(right_end));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#top_width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn TopWidth(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_TopWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#top_width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` top_width: i32 `
    ///
    pub fn SetTopWidth(self: NETExtendedStrut, top_width: i32) void {
        qtc.NETExtendedStrut_SetTopWidth(@ptrCast(self.ptr), @bitCast(top_width));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#top_start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn TopStart(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_TopStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#top_start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` top_start: i32 `
    ///
    pub fn SetTopStart(self: NETExtendedStrut, top_start: i32) void {
        qtc.NETExtendedStrut_SetTopStart(@ptrCast(self.ptr), @bitCast(top_start));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#top_end-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn TopEnd(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_TopEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#top_end-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` top_end: i32 `
    ///
    pub fn SetTopEnd(self: NETExtendedStrut, top_end: i32) void {
        qtc.NETExtendedStrut_SetTopEnd(@ptrCast(self.ptr), @bitCast(top_end));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#bottom_width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn BottomWidth(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_BottomWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#bottom_width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` bottom_width: i32 `
    ///
    pub fn SetBottomWidth(self: NETExtendedStrut, bottom_width: i32) void {
        qtc.NETExtendedStrut_SetBottomWidth(@ptrCast(self.ptr), @bitCast(bottom_width));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#bottom_start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn BottomStart(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_BottomStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#bottom_start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` bottom_start: i32 `
    ///
    pub fn SetBottomStart(self: NETExtendedStrut, bottom_start: i32) void {
        qtc.NETExtendedStrut_SetBottomStart(@ptrCast(self.ptr), @bitCast(bottom_start));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#bottom_end-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn BottomEnd(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_BottomEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#bottom_end-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` bottom_end: i32 `
    ///
    pub fn SetBottomEnd(self: NETExtendedStrut, bottom_end: i32) void {
        qtc.NETExtendedStrut_SetBottomEnd(@ptrCast(self.ptr), @bitCast(bottom_end));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#dtor.NETExtendedStrut)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn Delete(self: NETExtendedStrut) void {
        qtc.NETExtendedStrut_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/netstrut.html)
pub const NETStrut = extern struct {
    /// ### [Upstream resources](https://api.kde.org/netstrut.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.NETStrut,

    pub const _is_NETStrut = {};

    /// New constructs a new NETStrut object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETStrut `
    ///
    pub fn New(other: anytype) NETStrut {
        comptime _ = @TypeOf(other)._is_NETStrut;
        return .{ .ptr = qtc.NETStrut_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new NETStrut object and invalidates the source NETStrut object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETStrut `
    ///
    pub fn New2(other: anytype) NETStrut {
        comptime _ = @TypeOf(other)._is_NETStrut;
        return .{ .ptr = qtc.NETStrut_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new NETStrut object.
    ///
    pub fn New3() NETStrut {
        return .{ .ptr = qtc.NETStrut_new3() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: NETStrut `
    ///
    /// ` other: NETStrut `
    ///
    pub fn CopyAssign(self: NETStrut, other: NETStrut) void {
        qtc.NETStrut_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: NETStrut `
    ///
    /// ` other: NETStrut `
    ///
    pub fn MoveAssign(self: NETStrut, other: NETStrut) void {
        qtc.NETStrut_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#left-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETStrut `
    ///
    pub fn Left(self: NETStrut) i32 {
        return qtc.NETStrut_Left(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#left-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETStrut `
    ///
    /// ` left: i32 `
    ///
    pub fn SetLeft(self: NETStrut, left: i32) void {
        qtc.NETStrut_SetLeft(@ptrCast(self.ptr), @bitCast(left));
    }

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#right-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETStrut `
    ///
    pub fn Right(self: NETStrut) i32 {
        return qtc.NETStrut_Right(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#right-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETStrut `
    ///
    /// ` right: i32 `
    ///
    pub fn SetRight(self: NETStrut, right: i32) void {
        qtc.NETStrut_SetRight(@ptrCast(self.ptr), @bitCast(right));
    }

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#top-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETStrut `
    ///
    pub fn Top(self: NETStrut) i32 {
        return qtc.NETStrut_Top(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#top-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETStrut `
    ///
    /// ` top: i32 `
    ///
    pub fn SetTop(self: NETStrut, top: i32) void {
        qtc.NETStrut_SetTop(@ptrCast(self.ptr), @bitCast(top));
    }

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#bottom-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETStrut `
    ///
    pub fn Bottom(self: NETStrut) i32 {
        return qtc.NETStrut_Bottom(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#bottom-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETStrut `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetBottom(self: NETStrut, bottom: i32) void {
        qtc.NETStrut_SetBottom(@ptrCast(self.ptr), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#dtor.NETStrut)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: NETStrut `
    ///
    pub fn Delete(self: NETStrut) void {
        qtc.NETStrut_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html)
pub const NETFullscreenMonitors = extern struct {
    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.NETFullscreenMonitors,

    pub const _is_NETFullscreenMonitors = {};

    /// New constructs a new NETFullscreenMonitors object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETFullscreenMonitors `
    ///
    pub fn New(other: anytype) NETFullscreenMonitors {
        comptime _ = @TypeOf(other)._is_NETFullscreenMonitors;
        return .{ .ptr = qtc.NETFullscreenMonitors_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new NETFullscreenMonitors object and invalidates the source NETFullscreenMonitors object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETFullscreenMonitors `
    ///
    pub fn New2(other: anytype) NETFullscreenMonitors {
        comptime _ = @TypeOf(other)._is_NETFullscreenMonitors;
        return .{ .ptr = qtc.NETFullscreenMonitors_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new NETFullscreenMonitors object.
    ///
    pub fn New3() NETFullscreenMonitors {
        return .{ .ptr = qtc.NETFullscreenMonitors_new3() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    /// ` other: NETFullscreenMonitors `
    ///
    pub fn CopyAssign(self: NETFullscreenMonitors, other: NETFullscreenMonitors) void {
        qtc.NETFullscreenMonitors_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    /// ` other: NETFullscreenMonitors `
    ///
    pub fn MoveAssign(self: NETFullscreenMonitors, other: NETFullscreenMonitors) void {
        qtc.NETFullscreenMonitors_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#top-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    pub fn Top(self: NETFullscreenMonitors) i32 {
        return qtc.NETFullscreenMonitors_Top(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#top-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    /// ` top: i32 `
    ///
    pub fn SetTop(self: NETFullscreenMonitors, top: i32) void {
        qtc.NETFullscreenMonitors_SetTop(@ptrCast(self.ptr), @bitCast(top));
    }

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#bottom-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    pub fn Bottom(self: NETFullscreenMonitors) i32 {
        return qtc.NETFullscreenMonitors_Bottom(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#bottom-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetBottom(self: NETFullscreenMonitors, bottom: i32) void {
        qtc.NETFullscreenMonitors_SetBottom(@ptrCast(self.ptr), @bitCast(bottom));
    }

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#left-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    pub fn Left(self: NETFullscreenMonitors) i32 {
        return qtc.NETFullscreenMonitors_Left(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#left-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    /// ` left: i32 `
    ///
    pub fn SetLeft(self: NETFullscreenMonitors, left: i32) void {
        qtc.NETFullscreenMonitors_SetLeft(@ptrCast(self.ptr), @bitCast(left));
    }

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#right-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    pub fn Right(self: NETFullscreenMonitors) i32 {
        return qtc.NETFullscreenMonitors_Right(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#right-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    /// ` right: i32 `
    ///
    pub fn SetRight(self: NETFullscreenMonitors, right: i32) void {
        qtc.NETFullscreenMonitors_SetRight(@ptrCast(self.ptr), @bitCast(right));
    }

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#isSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    pub fn IsSet(self: NETFullscreenMonitors) bool {
        return qtc.NETFullscreenMonitors_IsSet(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#dtor.NETFullscreenMonitors)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    pub fn Delete(self: NETFullscreenMonitors) void {
        qtc.NETFullscreenMonitors_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/net.html)
pub const NET = extern struct {
    /// ### [Upstream resources](https://api.kde.org/net.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.NET,

    pub const _is_NET = {};

    /// New constructs a new NET object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NET `
    ///
    pub fn New(other: anytype) NET {
        comptime _ = @TypeOf(other)._is_NET;
        return .{ .ptr = qtc.NET_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new NET object and invalidates the source NET object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NET `
    ///
    pub fn New2(other: anytype) NET {
        comptime _ = @TypeOf(other)._is_NET;
        return .{ .ptr = qtc.NET_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: NET `
    ///
    /// ` other: NET `
    ///
    pub fn CopyAssign(self: NET, other: NET) void {
        qtc.NET_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: NET `
    ///
    /// ` other: NET `
    ///
    pub fn MoveAssign(self: NET, other: NET) void {
        qtc.NET_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/net.html#timestampCompare)
    ///
    /// ## Parameter(s):
    ///
    /// ` time1: usize `
    ///
    /// ` time2: usize `
    ///
    pub fn TimestampCompare(time1: usize, time2: usize) i32 {
        return qtc.NET_TimestampCompare(@bitCast(time1), @bitCast(time2));
    }

    /// ### [Upstream resources](https://api.kde.org/net.html#timestampDiff)
    ///
    /// ## Parameter(s):
    ///
    /// ` time1: usize `
    ///
    /// ` time2: usize `
    ///
    pub fn TimestampDiff(time1: usize, time2: usize) i32 {
        return qtc.NET_TimestampDiff(@bitCast(time1), @bitCast(time2));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/net.html#dtor.NET)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: NET `
    ///
    pub fn Delete(self: NET) void {
        qtc.NET_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/netwm-def.html#public-types)
pub const enums = struct {
    pub const Role = enum(i32) {
        pub const Client: i32 = 0;
        pub const WindowManager: i32 = 1;
    };

    pub const WindowType = enum(i32) {
        pub const Unknown: i32 = -1;
        pub const Normal: i32 = 0;
        pub const Desktop: i32 = 1;
        pub const Dock: i32 = 2;
        pub const Toolbar: i32 = 3;
        pub const Menu: i32 = 4;
        pub const Dialog: i32 = 5;
        pub const Override: i32 = 6;
        pub const TopMenu: i32 = 7;
        pub const Utility: i32 = 8;
        pub const Splash: i32 = 9;
        pub const DropdownMenu: i32 = 10;
        pub const PopupMenu: i32 = 11;
        pub const Tooltip: i32 = 12;
        pub const Notification: i32 = 13;
        pub const ComboBox: i32 = 14;
        pub const DNDIcon: i32 = 15;
        pub const OnScreenDisplay: i32 = 16;
        pub const CriticalNotification: i32 = 17;
        pub const AppletPopup: i32 = 18;
    };

    pub const WindowTypeMask = enum(i32) {
        pub const NormalMask: i32 = 1;
        pub const DesktopMask: i32 = 2;
        pub const DockMask: i32 = 4;
        pub const ToolbarMask: i32 = 8;
        pub const MenuMask: i32 = 16;
        pub const DialogMask: i32 = 32;
        pub const OverrideMask: i32 = 64;
        pub const TopMenuMask: i32 = 128;
        pub const UtilityMask: i32 = 256;
        pub const SplashMask: i32 = 512;
        pub const DropdownMenuMask: i32 = 1024;
        pub const PopupMenuMask: i32 = 2048;
        pub const TooltipMask: i32 = 4096;
        pub const NotificationMask: i32 = 8192;
        pub const ComboBoxMask: i32 = 16384;
        pub const DNDIconMask: i32 = 32768;
        pub const OnScreenDisplayMask: i32 = 65536;
        pub const CriticalNotificationMask: i32 = 131072;
        pub const AppletPopupMask: i32 = 262144;
        pub const AllTypesMask: i32 = -1;
    };

    pub const State = enum(i32) {
        pub const Modal: i32 = 1;
        pub const Sticky: i32 = 2;
        pub const MaxVert: i32 = 4;
        pub const MaxHoriz: i32 = 8;
        pub const Max: i32 = 12;
        pub const Shaded: i32 = 16;
        pub const SkipTaskbar: i32 = 32;
        pub const KeepAbove: i32 = 64;
        pub const SkipPager: i32 = 128;
        pub const Hidden: i32 = 256;
        pub const FullScreen: i32 = 512;
        pub const KeepBelow: i32 = 1024;
        pub const DemandsAttention: i32 = 2048;
        pub const SkipSwitcher: i32 = 4096;
        pub const Focused: i32 = 8192;
    };

    pub const Direction = enum(i32) {
        pub const TopLeft: i32 = 0;
        pub const Top: i32 = 1;
        pub const TopRight: i32 = 2;
        pub const Right: i32 = 3;
        pub const BottomRight: i32 = 4;
        pub const Bottom: i32 = 5;
        pub const BottomLeft: i32 = 6;
        pub const Left: i32 = 7;
        pub const Move: i32 = 8;
        pub const KeyboardSize: i32 = 9;
        pub const KeyboardMove: i32 = 10;
        pub const MoveResizeCancel: i32 = 11;
    };

    pub const MappingState = enum(i32) {
        pub const Visible: i32 = 1;
        pub const Withdrawn: i32 = 0;
        pub const Iconic: i32 = 3;
    };

    pub const Action = enum(i32) {
        pub const ActionMove: i32 = 1;
        pub const ActionResize: i32 = 2;
        pub const ActionMinimize: i32 = 4;
        pub const ActionShade: i32 = 8;
        pub const ActionStick: i32 = 16;
        pub const ActionMaxVert: i32 = 32;
        pub const ActionMaxHoriz: i32 = 64;
        pub const ActionMax: i32 = 96;
        pub const ActionFullScreen: i32 = 128;
        pub const ActionChangeDesktop: i32 = 256;
        pub const ActionClose: i32 = 512;
    };

    pub const Property = enum(i32) {
        pub const Supported: i32 = 1;
        pub const ClientList: i32 = 2;
        pub const ClientListStacking: i32 = 4;
        pub const NumberOfDesktops: i32 = 8;
        pub const DesktopGeometry: i32 = 16;
        pub const DesktopViewport: i32 = 32;
        pub const CurrentDesktop: i32 = 64;
        pub const DesktopNames: i32 = 128;
        pub const ActiveWindow: i32 = 256;
        pub const WorkArea: i32 = 512;
        pub const SupportingWMCheck: i32 = 1024;
        pub const VirtualRoots: i32 = 2048;
        pub const CloseWindow: i32 = 8192;
        pub const WMMoveResize: i32 = 16384;
        pub const WMName: i32 = 32768;
        pub const WMVisibleName: i32 = 65536;
        pub const WMDesktop: i32 = 131072;
        pub const WMWindowType: i32 = 262144;
        pub const WMState: i32 = 524288;
        pub const WMStrut: i32 = 1048576;
        pub const WMIconGeometry: i32 = 2097152;
        pub const WMIcon: i32 = 4194304;
        pub const WMPid: i32 = 8388608;
        pub const WMHandledIcons: i32 = 16777216;
        pub const WMPing: i32 = 33554432;
        pub const XAWMState: i32 = 134217728;
        pub const WMFrameExtents: i32 = 268435456;
        pub const WMIconName: i32 = 536870912;
        pub const WMVisibleIconName: i32 = 1073741824;
        pub const WMGeometry: i32 = -2147483648;
        pub const WMAllProperties: i32 = -1;
    };

    pub const Property2 = enum(i32) {
        pub const WM2UserTime: i32 = 1;
        pub const WM2StartupId: i32 = 2;
        pub const WM2TransientFor: i32 = 4;
        pub const WM2GroupLeader: i32 = 8;
        pub const WM2AllowedActions: i32 = 16;
        pub const WM2RestackWindow: i32 = 32;
        pub const WM2MoveResizeWindow: i32 = 64;
        pub const WM2ExtendedStrut: i32 = 128;
        pub const WM2KDETemporaryRules: i32 = 256;
        pub const WM2WindowClass: i32 = 512;
        pub const WM2WindowRole: i32 = 1024;
        pub const WM2ClientMachine: i32 = 2048;
        pub const WM2ShowingDesktop: i32 = 4096;
        pub const WM2Opacity: i32 = 8192;
        pub const WM2DesktopLayout: i32 = 16384;
        pub const WM2FullPlacement: i32 = 32768;
        pub const WM2FullscreenMonitors: i32 = 65536;
        pub const WM2FrameOverlap: i32 = 131072;
        pub const WM2Activities: i32 = 262144;
        pub const WM2BlockCompositing: i32 = 524288;
        pub const WM2KDEShadow: i32 = 1048576;
        pub const WM2Urgency: i32 = 2097152;
        pub const WM2Input: i32 = 4194304;
        pub const WM2Protocols: i32 = 8388608;
        pub const WM2InitialMappingState: i32 = 16777216;
        pub const WM2IconPixmap: i32 = 33554432;
        pub const WM2OpaqueRegion: i32 = 33554432;
        pub const WM2DesktopFileName: i32 = 67108864;
        pub const WM2GTKFrameExtents: i32 = 134217728;
        pub const WM2AppMenuServiceName: i32 = 268435456;
        pub const WM2AppMenuObjectPath: i32 = 536870912;
        pub const WM2GTKApplicationId: i32 = 1073741824;
        pub const WM2GTKShowWindowMenu: i32 = -2147483648;
        pub const WM2AllProperties: i32 = -1;
    };

    pub const NET = enum(i32) {
        pub const OnAllDesktops: i32 = -1;
    };

    pub const RequestSource = enum(i32) {
        pub const FromUnknown: i32 = 0;
        pub const FromApplication: i32 = 1;
        pub const FromTool: i32 = 2;
    };

    pub const Orientation = enum(i32) {
        pub const OrientationHorizontal: i32 = 0;
        pub const OrientationVertical: i32 = 1;
    };

    pub const DesktopLayoutCorner = enum(i32) {
        pub const DesktopLayoutCornerTopLeft: i32 = 0;
        pub const DesktopLayoutCornerTopRight: i32 = 1;
        pub const DesktopLayoutCornerBottomLeft: i32 = 2;
        pub const DesktopLayoutCornerBottomRight: i32 = 3;
    };

    pub const Protocol = enum(i32) {
        pub const NoProtocol: i32 = 0;
        pub const TakeFocusProtocol: i32 = 1;
        pub const DeleteWindowProtocol: i32 = 2;
        pub const PingProtocol: i32 = 4;
        pub const SyncRequestProtocol: i32 = 8;
        pub const ContextHelpProtocol: i32 = 16;
    };
};
