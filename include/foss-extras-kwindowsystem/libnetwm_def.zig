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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new NETPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETPoint `
    ///
    pub fn new(other: anytype) NETPoint {
        comptime _ = @TypeOf(other)._is_NETPoint;
        return .{ .ptr = qtc.NETPoint_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new NETPoint object and invalidate the source NETPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETPoint `
    ///
    pub fn new2(other: anytype) NETPoint {
        comptime _ = @TypeOf(other)._is_NETPoint;
        return .{ .ptr = qtc.NETPoint_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new NETPoint object in C++ memory
    ///
    pub fn new3() NETPoint {
        return .{ .ptr = qtc.NETPoint_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new NETPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPoint `
    ///
    pub fn new4(p: anytype) NETPoint {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.NETPoint_new4(@ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new NETPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: NETPoint `
    ///
    pub fn new5(param1: anytype) NETPoint {
        comptime _ = @TypeOf(param1)._is_NETPoint;
        return .{ .ptr = qtc.NETPoint_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: NETPoint `
    ///
    /// ` other: NETPoint `
    ///
    pub fn copyAssign(self: NETPoint, other: NETPoint) void {
        qtc.NETPoint_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: NETPoint `
    ///
    /// ` other: NETPoint `
    ///
    pub fn moveAssign(self: NETPoint, other: NETPoint) void {
        qtc.NETPoint_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toPoint` instead
    ///
    pub const ToPoint = toPoint;

    /// ### [Upstream resources](https://api.kde.org/netpoint.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETPoint `
    ///
    pub fn toPoint(self: NETPoint) QPoint {
        return .{ .ptr = qtc.NETPoint_ToPoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://api.kde.org/netpoint.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETPoint `
    ///
    pub fn x(self: NETPoint) i32 {
        return qtc.NETPoint_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://api.kde.org/netpoint.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETPoint `
    ///
    /// ` _x: i32 `
    ///
    pub fn setX(self: NETPoint, _x: i32) void {
        qtc.NETPoint_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://api.kde.org/netpoint.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETPoint `
    ///
    pub fn y(self: NETPoint) i32 {
        return qtc.NETPoint_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://api.kde.org/netpoint.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETPoint `
    ///
    /// ` _y: i32 `
    ///
    pub fn setY(self: NETPoint, _y: i32) void {
        qtc.NETPoint_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/netpoint.html#dtor.NETPoint)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: NETPoint `
    ///
    pub fn delete(self: NETPoint) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new NETSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETSize `
    ///
    pub fn new(other: anytype) NETSize {
        comptime _ = @TypeOf(other)._is_NETSize;
        return .{ .ptr = qtc.NETSize_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new NETSize object and invalidate the source NETSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETSize `
    ///
    pub fn new2(other: anytype) NETSize {
        comptime _ = @TypeOf(other)._is_NETSize;
        return .{ .ptr = qtc.NETSize_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new NETSize object in C++ memory
    ///
    pub fn new3() NETSize {
        return .{ .ptr = qtc.NETSize_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new NETSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    pub fn new4(size: anytype) NETSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.NETSize_new4(@ptrCast(size.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new NETSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: NETSize `
    ///
    pub fn new5(param1: anytype) NETSize {
        comptime _ = @TypeOf(param1)._is_NETSize;
        return .{ .ptr = qtc.NETSize_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: NETSize `
    ///
    /// ` other: NETSize `
    ///
    pub fn copyAssign(self: NETSize, other: NETSize) void {
        qtc.NETSize_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: NETSize `
    ///
    /// ` other: NETSize `
    ///
    pub fn moveAssign(self: NETSize, other: NETSize) void {
        qtc.NETSize_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toSize` instead
    ///
    pub const ToSize = toSize;

    /// ### [Upstream resources](https://api.kde.org/netsize.html#toSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETSize `
    ///
    pub fn toSize(self: NETSize) QSize {
        return .{ .ptr = qtc.NETSize_ToSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://api.kde.org/netsize.html#width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETSize `
    ///
    pub fn width(self: NETSize) i32 {
        return qtc.NETSize_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// ### [Upstream resources](https://api.kde.org/netsize.html#width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETSize `
    ///
    /// ` _width: i32 `
    ///
    pub fn setWidth(self: NETSize, _width: i32) void {
        qtc.NETSize_SetWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://api.kde.org/netsize.html#height-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETSize `
    ///
    pub fn height(self: NETSize) i32 {
        return qtc.NETSize_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

    /// ### [Upstream resources](https://api.kde.org/netsize.html#height-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETSize `
    ///
    /// ` _height: i32 `
    ///
    pub fn setHeight(self: NETSize, _height: i32) void {
        qtc.NETSize_SetHeight(@ptrCast(self.ptr), @bitCast(_height));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/netsize.html#dtor.NETSize)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: NETSize `
    ///
    pub fn delete(self: NETSize) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new NETRect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETRect `
    ///
    pub fn new(other: anytype) NETRect {
        comptime _ = @TypeOf(other)._is_NETRect;
        return .{ .ptr = qtc.NETRect_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new NETRect object and invalidate the source NETRect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETRect `
    ///
    pub fn new2(other: anytype) NETRect {
        comptime _ = @TypeOf(other)._is_NETRect;
        return .{ .ptr = qtc.NETRect_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new NETRect object in C++ memory
    ///
    pub fn new3() NETRect {
        return .{ .ptr = qtc.NETRect_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new NETRect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rect: QRect `
    ///
    pub fn new4(rect: anytype) NETRect {
        comptime _ = @TypeOf(rect)._is_QRect;
        return .{ .ptr = qtc.NETRect_new4(@ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: NETRect `
    ///
    /// ` other: NETRect `
    ///
    pub fn copyAssign(self: NETRect, other: NETRect) void {
        qtc.NETRect_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: NETRect `
    ///
    /// ` other: NETRect `
    ///
    pub fn moveAssign(self: NETRect, other: NETRect) void {
        qtc.NETRect_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toRect` instead
    ///
    pub const ToRect = toRect;

    /// ### [Upstream resources](https://api.kde.org/netrect.html#toRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETRect `
    ///
    pub fn toRect(self: NETRect) QRect {
        return .{ .ptr = qtc.NETRect_ToRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://api.kde.org/netrect.html#pos-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETRect `
    ///
    pub fn pos(self: NETRect) NETPoint {
        return .{ .ptr = qtc.NETRect_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPos` instead
    ///
    pub const SetPos = setPos;

    /// ### [Upstream resources](https://api.kde.org/netrect.html#pos-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETRect `
    ///
    /// ` _pos: NETPoint `
    ///
    pub fn setPos(self: NETRect, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_NETPoint;
        qtc.NETRect_SetPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://api.kde.org/netrect.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETRect `
    ///
    pub fn size(self: NETRect) NETSize {
        return .{ .ptr = qtc.NETRect_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// ### [Upstream resources](https://api.kde.org/netrect.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETRect `
    ///
    /// ` _size: NETSize `
    ///
    pub fn setSize(self: NETRect, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_NETSize;
        qtc.NETRect_SetSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/netrect.html#dtor.NETRect)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: NETRect `
    ///
    pub fn delete(self: NETRect) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new NETIcon object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETIcon `
    ///
    pub fn new(other: anytype) NETIcon {
        comptime _ = @TypeOf(other)._is_NETIcon;
        return .{ .ptr = qtc.NETIcon_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new NETIcon object and invalidate the source NETIcon object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETIcon `
    ///
    pub fn new2(other: anytype) NETIcon {
        comptime _ = @TypeOf(other)._is_NETIcon;
        return .{ .ptr = qtc.NETIcon_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new NETIcon object in C++ memory
    ///
    pub fn new3() NETIcon {
        return .{ .ptr = qtc.NETIcon_new3() };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: NETIcon `
    ///
    /// ` other: NETIcon `
    ///
    pub fn copyAssign(self: NETIcon, other: NETIcon) void {
        qtc.NETIcon_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: NETIcon `
    ///
    /// ` other: NETIcon `
    ///
    pub fn moveAssign(self: NETIcon, other: NETIcon) void {
        qtc.NETIcon_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://api.kde.org/neticon.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETIcon `
    ///
    pub fn size(self: NETIcon) NETSize {
        return .{ .ptr = qtc.NETIcon_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// ### [Upstream resources](https://api.kde.org/neticon.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETIcon `
    ///
    /// ` _size: NETSize `
    ///
    pub fn setSize(self: NETIcon, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_NETSize;
        qtc.NETIcon_SetSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://api.kde.org/neticon.html#data-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETIcon `
    ///
    pub fn data(self: NETIcon) ?*u8 {
        return @ptrCast(qtc.NETIcon_Data(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://api.kde.org/neticon.html#data-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETIcon `
    ///
    /// ` _data: *u8 `
    ///
    pub fn setData(self: NETIcon, _data: *u8) void {
        qtc.NETIcon_SetData(@ptrCast(self.ptr), @ptrCast(_data));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/neticon.html#dtor.NETIcon)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: NETIcon `
    ///
    pub fn delete(self: NETIcon) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new NETExtendedStrut object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETExtendedStrut `
    ///
    pub fn new(other: anytype) NETExtendedStrut {
        comptime _ = @TypeOf(other)._is_NETExtendedStrut;
        return .{ .ptr = qtc.NETExtendedStrut_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new NETExtendedStrut object and invalidate the source NETExtendedStrut object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETExtendedStrut `
    ///
    pub fn new2(other: anytype) NETExtendedStrut {
        comptime _ = @TypeOf(other)._is_NETExtendedStrut;
        return .{ .ptr = qtc.NETExtendedStrut_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new NETExtendedStrut object in C++ memory
    ///
    pub fn new3() NETExtendedStrut {
        return .{ .ptr = qtc.NETExtendedStrut_new3() };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` other: NETExtendedStrut `
    ///
    pub fn copyAssign(self: NETExtendedStrut, other: NETExtendedStrut) void {
        qtc.NETExtendedStrut_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` other: NETExtendedStrut `
    ///
    pub fn moveAssign(self: NETExtendedStrut, other: NETExtendedStrut) void {
        qtc.NETExtendedStrut_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `leftWidth` instead
    ///
    pub const LeftWidth = leftWidth;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#left_width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn leftWidth(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_LeftWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeftWidth` instead
    ///
    pub const SetLeftWidth = setLeftWidth;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#left_width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` _left_width: i32 `
    ///
    pub fn setLeftWidth(self: NETExtendedStrut, _left_width: i32) void {
        qtc.NETExtendedStrut_SetLeftWidth(@ptrCast(self.ptr), @bitCast(_left_width));
    }

    /// ### DEPRECATED: Use `leftStart` instead
    ///
    pub const LeftStart = leftStart;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#left_start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn leftStart(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_LeftStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeftStart` instead
    ///
    pub const SetLeftStart = setLeftStart;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#left_start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` _left_start: i32 `
    ///
    pub fn setLeftStart(self: NETExtendedStrut, _left_start: i32) void {
        qtc.NETExtendedStrut_SetLeftStart(@ptrCast(self.ptr), @bitCast(_left_start));
    }

    /// ### DEPRECATED: Use `leftEnd` instead
    ///
    pub const LeftEnd = leftEnd;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#left_end-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn leftEnd(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_LeftEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeftEnd` instead
    ///
    pub const SetLeftEnd = setLeftEnd;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#left_end-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` _left_end: i32 `
    ///
    pub fn setLeftEnd(self: NETExtendedStrut, _left_end: i32) void {
        qtc.NETExtendedStrut_SetLeftEnd(@ptrCast(self.ptr), @bitCast(_left_end));
    }

    /// ### DEPRECATED: Use `rightWidth` instead
    ///
    pub const RightWidth = rightWidth;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#right_width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn rightWidth(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_RightWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRightWidth` instead
    ///
    pub const SetRightWidth = setRightWidth;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#right_width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` _right_width: i32 `
    ///
    pub fn setRightWidth(self: NETExtendedStrut, _right_width: i32) void {
        qtc.NETExtendedStrut_SetRightWidth(@ptrCast(self.ptr), @bitCast(_right_width));
    }

    /// ### DEPRECATED: Use `rightStart` instead
    ///
    pub const RightStart = rightStart;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#right_start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn rightStart(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_RightStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRightStart` instead
    ///
    pub const SetRightStart = setRightStart;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#right_start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` _right_start: i32 `
    ///
    pub fn setRightStart(self: NETExtendedStrut, _right_start: i32) void {
        qtc.NETExtendedStrut_SetRightStart(@ptrCast(self.ptr), @bitCast(_right_start));
    }

    /// ### DEPRECATED: Use `rightEnd` instead
    ///
    pub const RightEnd = rightEnd;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#right_end-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn rightEnd(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_RightEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRightEnd` instead
    ///
    pub const SetRightEnd = setRightEnd;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#right_end-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` _right_end: i32 `
    ///
    pub fn setRightEnd(self: NETExtendedStrut, _right_end: i32) void {
        qtc.NETExtendedStrut_SetRightEnd(@ptrCast(self.ptr), @bitCast(_right_end));
    }

    /// ### DEPRECATED: Use `topWidth` instead
    ///
    pub const TopWidth = topWidth;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#top_width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn topWidth(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_TopWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTopWidth` instead
    ///
    pub const SetTopWidth = setTopWidth;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#top_width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` _top_width: i32 `
    ///
    pub fn setTopWidth(self: NETExtendedStrut, _top_width: i32) void {
        qtc.NETExtendedStrut_SetTopWidth(@ptrCast(self.ptr), @bitCast(_top_width));
    }

    /// ### DEPRECATED: Use `topStart` instead
    ///
    pub const TopStart = topStart;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#top_start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn topStart(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_TopStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTopStart` instead
    ///
    pub const SetTopStart = setTopStart;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#top_start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` _top_start: i32 `
    ///
    pub fn setTopStart(self: NETExtendedStrut, _top_start: i32) void {
        qtc.NETExtendedStrut_SetTopStart(@ptrCast(self.ptr), @bitCast(_top_start));
    }

    /// ### DEPRECATED: Use `topEnd` instead
    ///
    pub const TopEnd = topEnd;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#top_end-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn topEnd(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_TopEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTopEnd` instead
    ///
    pub const SetTopEnd = setTopEnd;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#top_end-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` _top_end: i32 `
    ///
    pub fn setTopEnd(self: NETExtendedStrut, _top_end: i32) void {
        qtc.NETExtendedStrut_SetTopEnd(@ptrCast(self.ptr), @bitCast(_top_end));
    }

    /// ### DEPRECATED: Use `bottomWidth` instead
    ///
    pub const BottomWidth = bottomWidth;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#bottom_width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn bottomWidth(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_BottomWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBottomWidth` instead
    ///
    pub const SetBottomWidth = setBottomWidth;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#bottom_width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` _bottom_width: i32 `
    ///
    pub fn setBottomWidth(self: NETExtendedStrut, _bottom_width: i32) void {
        qtc.NETExtendedStrut_SetBottomWidth(@ptrCast(self.ptr), @bitCast(_bottom_width));
    }

    /// ### DEPRECATED: Use `bottomStart` instead
    ///
    pub const BottomStart = bottomStart;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#bottom_start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn bottomStart(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_BottomStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBottomStart` instead
    ///
    pub const SetBottomStart = setBottomStart;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#bottom_start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` _bottom_start: i32 `
    ///
    pub fn setBottomStart(self: NETExtendedStrut, _bottom_start: i32) void {
        qtc.NETExtendedStrut_SetBottomStart(@ptrCast(self.ptr), @bitCast(_bottom_start));
    }

    /// ### DEPRECATED: Use `bottomEnd` instead
    ///
    pub const BottomEnd = bottomEnd;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#bottom_end-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn bottomEnd(self: NETExtendedStrut) i32 {
        return qtc.NETExtendedStrut_BottomEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBottomEnd` instead
    ///
    pub const SetBottomEnd = setBottomEnd;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#bottom_end-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETExtendedStrut `
    ///
    /// ` _bottom_end: i32 `
    ///
    pub fn setBottomEnd(self: NETExtendedStrut, _bottom_end: i32) void {
        qtc.NETExtendedStrut_SetBottomEnd(@ptrCast(self.ptr), @bitCast(_bottom_end));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/netextendedstrut.html#dtor.NETExtendedStrut)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: NETExtendedStrut `
    ///
    pub fn delete(self: NETExtendedStrut) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new NETStrut object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETStrut `
    ///
    pub fn new(other: anytype) NETStrut {
        comptime _ = @TypeOf(other)._is_NETStrut;
        return .{ .ptr = qtc.NETStrut_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new NETStrut object and invalidate the source NETStrut object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETStrut `
    ///
    pub fn new2(other: anytype) NETStrut {
        comptime _ = @TypeOf(other)._is_NETStrut;
        return .{ .ptr = qtc.NETStrut_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new NETStrut object in C++ memory
    ///
    pub fn new3() NETStrut {
        return .{ .ptr = qtc.NETStrut_new3() };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: NETStrut `
    ///
    /// ` other: NETStrut `
    ///
    pub fn copyAssign(self: NETStrut, other: NETStrut) void {
        qtc.NETStrut_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: NETStrut `
    ///
    /// ` other: NETStrut `
    ///
    pub fn moveAssign(self: NETStrut, other: NETStrut) void {
        qtc.NETStrut_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `left` instead
    ///
    pub const Left = left;

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#left-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETStrut `
    ///
    pub fn left(self: NETStrut) i32 {
        return qtc.NETStrut_Left(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeft` instead
    ///
    pub const SetLeft = setLeft;

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#left-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETStrut `
    ///
    /// ` _left: i32 `
    ///
    pub fn setLeft(self: NETStrut, _left: i32) void {
        qtc.NETStrut_SetLeft(@ptrCast(self.ptr), @bitCast(_left));
    }

    /// ### DEPRECATED: Use `right` instead
    ///
    pub const Right = right;

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#right-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETStrut `
    ///
    pub fn right(self: NETStrut) i32 {
        return qtc.NETStrut_Right(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRight` instead
    ///
    pub const SetRight = setRight;

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#right-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETStrut `
    ///
    /// ` _right: i32 `
    ///
    pub fn setRight(self: NETStrut, _right: i32) void {
        qtc.NETStrut_SetRight(@ptrCast(self.ptr), @bitCast(_right));
    }

    /// ### DEPRECATED: Use `top` instead
    ///
    pub const Top = top;

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#top-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETStrut `
    ///
    pub fn top(self: NETStrut) i32 {
        return qtc.NETStrut_Top(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTop` instead
    ///
    pub const SetTop = setTop;

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#top-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETStrut `
    ///
    /// ` _top: i32 `
    ///
    pub fn setTop(self: NETStrut, _top: i32) void {
        qtc.NETStrut_SetTop(@ptrCast(self.ptr), @bitCast(_top));
    }

    /// ### DEPRECATED: Use `bottom` instead
    ///
    pub const Bottom = bottom;

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#bottom-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETStrut `
    ///
    pub fn bottom(self: NETStrut) i32 {
        return qtc.NETStrut_Bottom(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBottom` instead
    ///
    pub const SetBottom = setBottom;

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#bottom-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETStrut `
    ///
    /// ` _bottom: i32 `
    ///
    pub fn setBottom(self: NETStrut, _bottom: i32) void {
        qtc.NETStrut_SetBottom(@ptrCast(self.ptr), @bitCast(_bottom));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/netstrut.html#dtor.NETStrut)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: NETStrut `
    ///
    pub fn delete(self: NETStrut) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new NETFullscreenMonitors object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETFullscreenMonitors `
    ///
    pub fn new(other: anytype) NETFullscreenMonitors {
        comptime _ = @TypeOf(other)._is_NETFullscreenMonitors;
        return .{ .ptr = qtc.NETFullscreenMonitors_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new NETFullscreenMonitors object and invalidate the source NETFullscreenMonitors object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NETFullscreenMonitors `
    ///
    pub fn new2(other: anytype) NETFullscreenMonitors {
        comptime _ = @TypeOf(other)._is_NETFullscreenMonitors;
        return .{ .ptr = qtc.NETFullscreenMonitors_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new NETFullscreenMonitors object in C++ memory
    ///
    pub fn new3() NETFullscreenMonitors {
        return .{ .ptr = qtc.NETFullscreenMonitors_new3() };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    /// ` other: NETFullscreenMonitors `
    ///
    pub fn copyAssign(self: NETFullscreenMonitors, other: NETFullscreenMonitors) void {
        qtc.NETFullscreenMonitors_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    /// ` other: NETFullscreenMonitors `
    ///
    pub fn moveAssign(self: NETFullscreenMonitors, other: NETFullscreenMonitors) void {
        qtc.NETFullscreenMonitors_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `top` instead
    ///
    pub const Top = top;

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#top-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    pub fn top(self: NETFullscreenMonitors) i32 {
        return qtc.NETFullscreenMonitors_Top(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTop` instead
    ///
    pub const SetTop = setTop;

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#top-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    /// ` _top: i32 `
    ///
    pub fn setTop(self: NETFullscreenMonitors, _top: i32) void {
        qtc.NETFullscreenMonitors_SetTop(@ptrCast(self.ptr), @bitCast(_top));
    }

    /// ### DEPRECATED: Use `bottom` instead
    ///
    pub const Bottom = bottom;

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#bottom-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    pub fn bottom(self: NETFullscreenMonitors) i32 {
        return qtc.NETFullscreenMonitors_Bottom(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBottom` instead
    ///
    pub const SetBottom = setBottom;

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#bottom-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    /// ` _bottom: i32 `
    ///
    pub fn setBottom(self: NETFullscreenMonitors, _bottom: i32) void {
        qtc.NETFullscreenMonitors_SetBottom(@ptrCast(self.ptr), @bitCast(_bottom));
    }

    /// ### DEPRECATED: Use `left` instead
    ///
    pub const Left = left;

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#left-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    pub fn left(self: NETFullscreenMonitors) i32 {
        return qtc.NETFullscreenMonitors_Left(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeft` instead
    ///
    pub const SetLeft = setLeft;

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#left-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    /// ` _left: i32 `
    ///
    pub fn setLeft(self: NETFullscreenMonitors, _left: i32) void {
        qtc.NETFullscreenMonitors_SetLeft(@ptrCast(self.ptr), @bitCast(_left));
    }

    /// ### DEPRECATED: Use `right` instead
    ///
    pub const Right = right;

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#right-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    pub fn right(self: NETFullscreenMonitors) i32 {
        return qtc.NETFullscreenMonitors_Right(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRight` instead
    ///
    pub const SetRight = setRight;

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#right-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    /// ` _right: i32 `
    ///
    pub fn setRight(self: NETFullscreenMonitors, _right: i32) void {
        qtc.NETFullscreenMonitors_SetRight(@ptrCast(self.ptr), @bitCast(_right));
    }

    /// ### DEPRECATED: Use `isSet` instead
    ///
    pub const IsSet = isSet;

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#isSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    pub fn isSet(self: NETFullscreenMonitors) bool {
        return qtc.NETFullscreenMonitors_IsSet(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/netfullscreenmonitors.html#dtor.NETFullscreenMonitors)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: NETFullscreenMonitors `
    ///
    pub fn delete(self: NETFullscreenMonitors) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new NET object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NET `
    ///
    pub fn new(other: anytype) NET {
        comptime _ = @TypeOf(other)._is_NET;
        return .{ .ptr = qtc.NET_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new NET object and invalidate the source NET object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: NET `
    ///
    pub fn new2(other: anytype) NET {
        comptime _ = @TypeOf(other)._is_NET;
        return .{ .ptr = qtc.NET_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: NET `
    ///
    /// ` other: NET `
    ///
    pub fn copyAssign(self: NET, other: NET) void {
        qtc.NET_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: NET `
    ///
    /// ` other: NET `
    ///
    pub fn moveAssign(self: NET, other: NET) void {
        qtc.NET_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `timestampCompare` instead
    ///
    pub const TimestampCompare = timestampCompare;

    /// ### [Upstream resources](https://api.kde.org/net.html#timestampCompare)
    ///
    /// ## Parameter(s):
    ///
    /// ` time1: usize `
    ///
    /// ` time2: usize `
    ///
    pub fn timestampCompare(time1: usize, time2: usize) i32 {
        return qtc.NET_TimestampCompare(@bitCast(time1), @bitCast(time2));
    }

    /// ### DEPRECATED: Use `timestampDiff` instead
    ///
    pub const TimestampDiff = timestampDiff;

    /// ### [Upstream resources](https://api.kde.org/net.html#timestampDiff)
    ///
    /// ## Parameter(s):
    ///
    /// ` time1: usize `
    ///
    /// ` time2: usize `
    ///
    pub fn timestampDiff(time1: usize, time2: usize) i32 {
        return qtc.NET_TimestampDiff(@bitCast(time1), @bitCast(time2));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/net.html#dtor.NET)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: NET `
    ///
    pub fn delete(self: NET) void {
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
