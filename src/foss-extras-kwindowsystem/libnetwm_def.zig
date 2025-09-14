const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/netpoint.html
pub const netpoint = struct {
    /// New constructs a new NETPoint object.
    ///
    /// ``` other: QtC.NETPoint ```
    pub fn New(other: ?*anyopaque) QtC.NETPoint {
        return qtc.NETPoint_new(@ptrCast(other));
    }

    /// New2 constructs a new NETPoint object and invalidates the source NETPoint object.
    ///
    /// ``` other: QtC.NETPoint ```
    pub fn New2(other: ?*anyopaque) QtC.NETPoint {
        return qtc.NETPoint_new2(@ptrCast(other));
    }

    /// New3 constructs a new NETPoint object.
    ///
    ///
    pub fn New3() QtC.NETPoint {
        return qtc.NETPoint_new3();
    }

    /// New4 constructs a new NETPoint object.
    ///
    /// ``` p: QtC.QPoint ```
    pub fn New4(p: ?*anyopaque) QtC.NETPoint {
        return qtc.NETPoint_new4(@ptrCast(p));
    }

    /// New5 constructs a new NETPoint object.
    ///
    /// ``` param1: QtC.NETPoint ```
    pub fn New5(param1: ?*anyopaque) QtC.NETPoint {
        return qtc.NETPoint_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.NETPoint, other: QtC.NETPoint ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.NETPoint_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.NETPoint, other: QtC.NETPoint ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.NETPoint_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/netpoint.html#toPoint)
    ///
    /// ``` self: QtC.NETPoint ```
    pub fn ToPoint(self: ?*anyopaque) QtC.QPoint {
        return qtc.NETPoint_ToPoint(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netpoint.html#x-var)
    ///
    /// ``` self: QtC.NETPoint ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.NETPoint_X(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netpoint.html#x-var)
    ///
    /// ``` self: QtC.NETPoint, x: i32 ```
    pub fn SetX(self: ?*anyopaque, x: i32) void {
        qtc.NETPoint_SetX(@ptrCast(self), @intCast(x));
    }

    /// [Qt documentation](https://api.kde.org/netpoint.html#y-var)
    ///
    /// ``` self: QtC.NETPoint ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.NETPoint_Y(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netpoint.html#y-var)
    ///
    /// ``` self: QtC.NETPoint, y: i32 ```
    pub fn SetY(self: ?*anyopaque, y: i32) void {
        qtc.NETPoint_SetY(@ptrCast(self), @intCast(y));
    }

    /// [Qt documentation](https://api.kde.org/netpoint.html#dtor.NETPoint)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.NETPoint ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.NETPoint_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/netsize.html
pub const netsize = struct {
    /// New constructs a new NETSize object.
    ///
    /// ``` other: QtC.NETSize ```
    pub fn New(other: ?*anyopaque) QtC.NETSize {
        return qtc.NETSize_new(@ptrCast(other));
    }

    /// New2 constructs a new NETSize object and invalidates the source NETSize object.
    ///
    /// ``` other: QtC.NETSize ```
    pub fn New2(other: ?*anyopaque) QtC.NETSize {
        return qtc.NETSize_new2(@ptrCast(other));
    }

    /// New3 constructs a new NETSize object.
    ///
    ///
    pub fn New3() QtC.NETSize {
        return qtc.NETSize_new3();
    }

    /// New4 constructs a new NETSize object.
    ///
    /// ``` size: QtC.QSize ```
    pub fn New4(size: ?*anyopaque) QtC.NETSize {
        return qtc.NETSize_new4(@ptrCast(size));
    }

    /// New5 constructs a new NETSize object.
    ///
    /// ``` param1: QtC.NETSize ```
    pub fn New5(param1: ?*anyopaque) QtC.NETSize {
        return qtc.NETSize_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.NETSize, other: QtC.NETSize ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.NETSize_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.NETSize, other: QtC.NETSize ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.NETSize_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/netsize.html#toSize)
    ///
    /// ``` self: QtC.NETSize ```
    pub fn ToSize(self: ?*anyopaque) QtC.QSize {
        return qtc.NETSize_ToSize(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netsize.html#width-var)
    ///
    /// ``` self: QtC.NETSize ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.NETSize_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netsize.html#width-var)
    ///
    /// ``` self: QtC.NETSize, width: i32 ```
    pub fn SetWidth(self: ?*anyopaque, width: i32) void {
        qtc.NETSize_SetWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://api.kde.org/netsize.html#height-var)
    ///
    /// ``` self: QtC.NETSize ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.NETSize_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netsize.html#height-var)
    ///
    /// ``` self: QtC.NETSize, height: i32 ```
    pub fn SetHeight(self: ?*anyopaque, height: i32) void {
        qtc.NETSize_SetHeight(@ptrCast(self), @intCast(height));
    }

    /// [Qt documentation](https://api.kde.org/netsize.html#dtor.NETSize)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.NETSize ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.NETSize_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/netrect.html
pub const netrect = struct {
    /// New constructs a new NETRect object.
    ///
    /// ``` other: QtC.NETRect ```
    pub fn New(other: ?*anyopaque) QtC.NETRect {
        return qtc.NETRect_new(@ptrCast(other));
    }

    /// New2 constructs a new NETRect object and invalidates the source NETRect object.
    ///
    /// ``` other: QtC.NETRect ```
    pub fn New2(other: ?*anyopaque) QtC.NETRect {
        return qtc.NETRect_new2(@ptrCast(other));
    }

    /// New3 constructs a new NETRect object.
    ///
    ///
    pub fn New3() QtC.NETRect {
        return qtc.NETRect_new3();
    }

    /// New4 constructs a new NETRect object.
    ///
    /// ``` rect: QtC.QRect ```
    pub fn New4(rect: ?*anyopaque) QtC.NETRect {
        return qtc.NETRect_new4(@ptrCast(rect));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.NETRect, other: QtC.NETRect ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.NETRect_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.NETRect, other: QtC.NETRect ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.NETRect_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/netrect.html#toRect)
    ///
    /// ``` self: QtC.NETRect ```
    pub fn ToRect(self: ?*anyopaque) QtC.QRect {
        return qtc.NETRect_ToRect(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netrect.html#pos-var)
    ///
    /// ``` self: QtC.NETRect ```
    pub fn Pos(self: ?*anyopaque) QtC.NETPoint {
        return qtc.NETRect_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netrect.html#pos-var)
    ///
    /// ``` self: QtC.NETRect, pos: QtC.NETPoint ```
    pub fn SetPos(self: ?*anyopaque, pos: QtC.NETPoint) void {
        qtc.NETRect_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://api.kde.org/netrect.html#size-var)
    ///
    /// ``` self: QtC.NETRect ```
    pub fn Size(self: ?*anyopaque) QtC.NETSize {
        return qtc.NETRect_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netrect.html#size-var)
    ///
    /// ``` self: QtC.NETRect, size: QtC.NETSize ```
    pub fn SetSize(self: ?*anyopaque, size: QtC.NETSize) void {
        qtc.NETRect_SetSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://api.kde.org/netrect.html#dtor.NETRect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.NETRect ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.NETRect_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/neticon.html
pub const neticon = struct {
    /// New constructs a new NETIcon object.
    ///
    /// ``` other: QtC.NETIcon ```
    pub fn New(other: ?*anyopaque) QtC.NETIcon {
        return qtc.NETIcon_new(@ptrCast(other));
    }

    /// New2 constructs a new NETIcon object and invalidates the source NETIcon object.
    ///
    /// ``` other: QtC.NETIcon ```
    pub fn New2(other: ?*anyopaque) QtC.NETIcon {
        return qtc.NETIcon_new2(@ptrCast(other));
    }

    /// New3 constructs a new NETIcon object.
    ///
    ///
    pub fn New3() QtC.NETIcon {
        return qtc.NETIcon_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.NETIcon, other: QtC.NETIcon ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.NETIcon_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.NETIcon, other: QtC.NETIcon ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.NETIcon_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/neticon.html#size-var)
    ///
    /// ``` self: QtC.NETIcon ```
    pub fn Size(self: ?*anyopaque) QtC.NETSize {
        return qtc.NETIcon_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/neticon.html#size-var)
    ///
    /// ``` self: QtC.NETIcon, size: QtC.NETSize ```
    pub fn SetSize(self: ?*anyopaque, size: QtC.NETSize) void {
        qtc.NETIcon_SetSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://api.kde.org/neticon.html#data-var)
    ///
    /// ``` self: QtC.NETIcon ```
    pub fn Data(self: ?*anyopaque) ?*u8 {
        return @ptrCast(qtc.NETIcon_Data(@ptrCast(self)));
    }

    /// [Qt documentation](https://api.kde.org/neticon.html#data-var)
    ///
    /// ``` self: QtC.NETIcon, data: *u8 ```
    pub fn SetData(self: ?*anyopaque, data: *u8) void {
        qtc.NETIcon_SetData(@ptrCast(self), @ptrCast(data));
    }

    /// [Qt documentation](https://api.kde.org/neticon.html#dtor.NETIcon)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.NETIcon ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.NETIcon_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/netextendedstrut.html
pub const netextendedstrut = struct {
    /// New constructs a new NETExtendedStrut object.
    ///
    /// ``` other: QtC.NETExtendedStrut ```
    pub fn New(other: ?*anyopaque) QtC.NETExtendedStrut {
        return qtc.NETExtendedStrut_new(@ptrCast(other));
    }

    /// New2 constructs a new NETExtendedStrut object and invalidates the source NETExtendedStrut object.
    ///
    /// ``` other: QtC.NETExtendedStrut ```
    pub fn New2(other: ?*anyopaque) QtC.NETExtendedStrut {
        return qtc.NETExtendedStrut_new2(@ptrCast(other));
    }

    /// New3 constructs a new NETExtendedStrut object.
    ///
    ///
    pub fn New3() QtC.NETExtendedStrut {
        return qtc.NETExtendedStrut_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.NETExtendedStrut, other: QtC.NETExtendedStrut ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.NETExtendedStrut_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.NETExtendedStrut, other: QtC.NETExtendedStrut ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.NETExtendedStrut_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#left_width-var)
    ///
    /// ``` self: QtC.NETExtendedStrut ```
    pub fn LeftWidth(self: ?*anyopaque) i32 {
        return qtc.NETExtendedStrut_LeftWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#left_width-var)
    ///
    /// ``` self: QtC.NETExtendedStrut, left_width: i32 ```
    pub fn SetLeftWidth(self: ?*anyopaque, left_width: i32) void {
        qtc.NETExtendedStrut_SetLeftWidth(@ptrCast(self), @intCast(left_width));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#left_start-var)
    ///
    /// ``` self: QtC.NETExtendedStrut ```
    pub fn LeftStart(self: ?*anyopaque) i32 {
        return qtc.NETExtendedStrut_LeftStart(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#left_start-var)
    ///
    /// ``` self: QtC.NETExtendedStrut, left_start: i32 ```
    pub fn SetLeftStart(self: ?*anyopaque, left_start: i32) void {
        qtc.NETExtendedStrut_SetLeftStart(@ptrCast(self), @intCast(left_start));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#left_end-var)
    ///
    /// ``` self: QtC.NETExtendedStrut ```
    pub fn LeftEnd(self: ?*anyopaque) i32 {
        return qtc.NETExtendedStrut_LeftEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#left_end-var)
    ///
    /// ``` self: QtC.NETExtendedStrut, left_end: i32 ```
    pub fn SetLeftEnd(self: ?*anyopaque, left_end: i32) void {
        qtc.NETExtendedStrut_SetLeftEnd(@ptrCast(self), @intCast(left_end));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#right_width-var)
    ///
    /// ``` self: QtC.NETExtendedStrut ```
    pub fn RightWidth(self: ?*anyopaque) i32 {
        return qtc.NETExtendedStrut_RightWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#right_width-var)
    ///
    /// ``` self: QtC.NETExtendedStrut, right_width: i32 ```
    pub fn SetRightWidth(self: ?*anyopaque, right_width: i32) void {
        qtc.NETExtendedStrut_SetRightWidth(@ptrCast(self), @intCast(right_width));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#right_start-var)
    ///
    /// ``` self: QtC.NETExtendedStrut ```
    pub fn RightStart(self: ?*anyopaque) i32 {
        return qtc.NETExtendedStrut_RightStart(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#right_start-var)
    ///
    /// ``` self: QtC.NETExtendedStrut, right_start: i32 ```
    pub fn SetRightStart(self: ?*anyopaque, right_start: i32) void {
        qtc.NETExtendedStrut_SetRightStart(@ptrCast(self), @intCast(right_start));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#right_end-var)
    ///
    /// ``` self: QtC.NETExtendedStrut ```
    pub fn RightEnd(self: ?*anyopaque) i32 {
        return qtc.NETExtendedStrut_RightEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#right_end-var)
    ///
    /// ``` self: QtC.NETExtendedStrut, right_end: i32 ```
    pub fn SetRightEnd(self: ?*anyopaque, right_end: i32) void {
        qtc.NETExtendedStrut_SetRightEnd(@ptrCast(self), @intCast(right_end));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#top_width-var)
    ///
    /// ``` self: QtC.NETExtendedStrut ```
    pub fn TopWidth(self: ?*anyopaque) i32 {
        return qtc.NETExtendedStrut_TopWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#top_width-var)
    ///
    /// ``` self: QtC.NETExtendedStrut, top_width: i32 ```
    pub fn SetTopWidth(self: ?*anyopaque, top_width: i32) void {
        qtc.NETExtendedStrut_SetTopWidth(@ptrCast(self), @intCast(top_width));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#top_start-var)
    ///
    /// ``` self: QtC.NETExtendedStrut ```
    pub fn TopStart(self: ?*anyopaque) i32 {
        return qtc.NETExtendedStrut_TopStart(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#top_start-var)
    ///
    /// ``` self: QtC.NETExtendedStrut, top_start: i32 ```
    pub fn SetTopStart(self: ?*anyopaque, top_start: i32) void {
        qtc.NETExtendedStrut_SetTopStart(@ptrCast(self), @intCast(top_start));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#top_end-var)
    ///
    /// ``` self: QtC.NETExtendedStrut ```
    pub fn TopEnd(self: ?*anyopaque) i32 {
        return qtc.NETExtendedStrut_TopEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#top_end-var)
    ///
    /// ``` self: QtC.NETExtendedStrut, top_end: i32 ```
    pub fn SetTopEnd(self: ?*anyopaque, top_end: i32) void {
        qtc.NETExtendedStrut_SetTopEnd(@ptrCast(self), @intCast(top_end));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#bottom_width-var)
    ///
    /// ``` self: QtC.NETExtendedStrut ```
    pub fn BottomWidth(self: ?*anyopaque) i32 {
        return qtc.NETExtendedStrut_BottomWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#bottom_width-var)
    ///
    /// ``` self: QtC.NETExtendedStrut, bottom_width: i32 ```
    pub fn SetBottomWidth(self: ?*anyopaque, bottom_width: i32) void {
        qtc.NETExtendedStrut_SetBottomWidth(@ptrCast(self), @intCast(bottom_width));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#bottom_start-var)
    ///
    /// ``` self: QtC.NETExtendedStrut ```
    pub fn BottomStart(self: ?*anyopaque) i32 {
        return qtc.NETExtendedStrut_BottomStart(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#bottom_start-var)
    ///
    /// ``` self: QtC.NETExtendedStrut, bottom_start: i32 ```
    pub fn SetBottomStart(self: ?*anyopaque, bottom_start: i32) void {
        qtc.NETExtendedStrut_SetBottomStart(@ptrCast(self), @intCast(bottom_start));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#bottom_end-var)
    ///
    /// ``` self: QtC.NETExtendedStrut ```
    pub fn BottomEnd(self: ?*anyopaque) i32 {
        return qtc.NETExtendedStrut_BottomEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#bottom_end-var)
    ///
    /// ``` self: QtC.NETExtendedStrut, bottom_end: i32 ```
    pub fn SetBottomEnd(self: ?*anyopaque, bottom_end: i32) void {
        qtc.NETExtendedStrut_SetBottomEnd(@ptrCast(self), @intCast(bottom_end));
    }

    /// [Qt documentation](https://api.kde.org/netextendedstrut.html#dtor.NETExtendedStrut)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.NETExtendedStrut ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.NETExtendedStrut_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/netstrut.html
pub const netstrut = struct {
    /// New constructs a new NETStrut object.
    ///
    /// ``` other: QtC.NETStrut ```
    pub fn New(other: ?*anyopaque) QtC.NETStrut {
        return qtc.NETStrut_new(@ptrCast(other));
    }

    /// New2 constructs a new NETStrut object and invalidates the source NETStrut object.
    ///
    /// ``` other: QtC.NETStrut ```
    pub fn New2(other: ?*anyopaque) QtC.NETStrut {
        return qtc.NETStrut_new2(@ptrCast(other));
    }

    /// New3 constructs a new NETStrut object.
    ///
    ///
    pub fn New3() QtC.NETStrut {
        return qtc.NETStrut_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.NETStrut, other: QtC.NETStrut ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.NETStrut_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.NETStrut, other: QtC.NETStrut ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.NETStrut_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/netstrut.html#left-var)
    ///
    /// ``` self: QtC.NETStrut ```
    pub fn Left(self: ?*anyopaque) i32 {
        return qtc.NETStrut_Left(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netstrut.html#left-var)
    ///
    /// ``` self: QtC.NETStrut, left: i32 ```
    pub fn SetLeft(self: ?*anyopaque, left: i32) void {
        qtc.NETStrut_SetLeft(@ptrCast(self), @intCast(left));
    }

    /// [Qt documentation](https://api.kde.org/netstrut.html#right-var)
    ///
    /// ``` self: QtC.NETStrut ```
    pub fn Right(self: ?*anyopaque) i32 {
        return qtc.NETStrut_Right(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netstrut.html#right-var)
    ///
    /// ``` self: QtC.NETStrut, right: i32 ```
    pub fn SetRight(self: ?*anyopaque, right: i32) void {
        qtc.NETStrut_SetRight(@ptrCast(self), @intCast(right));
    }

    /// [Qt documentation](https://api.kde.org/netstrut.html#top-var)
    ///
    /// ``` self: QtC.NETStrut ```
    pub fn Top(self: ?*anyopaque) i32 {
        return qtc.NETStrut_Top(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netstrut.html#top-var)
    ///
    /// ``` self: QtC.NETStrut, top: i32 ```
    pub fn SetTop(self: ?*anyopaque, top: i32) void {
        qtc.NETStrut_SetTop(@ptrCast(self), @intCast(top));
    }

    /// [Qt documentation](https://api.kde.org/netstrut.html#bottom-var)
    ///
    /// ``` self: QtC.NETStrut ```
    pub fn Bottom(self: ?*anyopaque) i32 {
        return qtc.NETStrut_Bottom(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netstrut.html#bottom-var)
    ///
    /// ``` self: QtC.NETStrut, bottom: i32 ```
    pub fn SetBottom(self: ?*anyopaque, bottom: i32) void {
        qtc.NETStrut_SetBottom(@ptrCast(self), @intCast(bottom));
    }

    /// [Qt documentation](https://api.kde.org/netstrut.html#dtor.NETStrut)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.NETStrut ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.NETStrut_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/netfullscreenmonitors.html
pub const netfullscreenmonitors = struct {
    /// New constructs a new NETFullscreenMonitors object.
    ///
    /// ``` other: QtC.NETFullscreenMonitors ```
    pub fn New(other: ?*anyopaque) QtC.NETFullscreenMonitors {
        return qtc.NETFullscreenMonitors_new(@ptrCast(other));
    }

    /// New2 constructs a new NETFullscreenMonitors object and invalidates the source NETFullscreenMonitors object.
    ///
    /// ``` other: QtC.NETFullscreenMonitors ```
    pub fn New2(other: ?*anyopaque) QtC.NETFullscreenMonitors {
        return qtc.NETFullscreenMonitors_new2(@ptrCast(other));
    }

    /// New3 constructs a new NETFullscreenMonitors object.
    ///
    ///
    pub fn New3() QtC.NETFullscreenMonitors {
        return qtc.NETFullscreenMonitors_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.NETFullscreenMonitors, other: QtC.NETFullscreenMonitors ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.NETFullscreenMonitors_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.NETFullscreenMonitors, other: QtC.NETFullscreenMonitors ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.NETFullscreenMonitors_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#top-var)
    ///
    /// ``` self: QtC.NETFullscreenMonitors ```
    pub fn Top(self: ?*anyopaque) i32 {
        return qtc.NETFullscreenMonitors_Top(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#top-var)
    ///
    /// ``` self: QtC.NETFullscreenMonitors, top: i32 ```
    pub fn SetTop(self: ?*anyopaque, top: i32) void {
        qtc.NETFullscreenMonitors_SetTop(@ptrCast(self), @intCast(top));
    }

    /// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#bottom-var)
    ///
    /// ``` self: QtC.NETFullscreenMonitors ```
    pub fn Bottom(self: ?*anyopaque) i32 {
        return qtc.NETFullscreenMonitors_Bottom(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#bottom-var)
    ///
    /// ``` self: QtC.NETFullscreenMonitors, bottom: i32 ```
    pub fn SetBottom(self: ?*anyopaque, bottom: i32) void {
        qtc.NETFullscreenMonitors_SetBottom(@ptrCast(self), @intCast(bottom));
    }

    /// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#left-var)
    ///
    /// ``` self: QtC.NETFullscreenMonitors ```
    pub fn Left(self: ?*anyopaque) i32 {
        return qtc.NETFullscreenMonitors_Left(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#left-var)
    ///
    /// ``` self: QtC.NETFullscreenMonitors, left: i32 ```
    pub fn SetLeft(self: ?*anyopaque, left: i32) void {
        qtc.NETFullscreenMonitors_SetLeft(@ptrCast(self), @intCast(left));
    }

    /// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#right-var)
    ///
    /// ``` self: QtC.NETFullscreenMonitors ```
    pub fn Right(self: ?*anyopaque) i32 {
        return qtc.NETFullscreenMonitors_Right(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#right-var)
    ///
    /// ``` self: QtC.NETFullscreenMonitors, right: i32 ```
    pub fn SetRight(self: ?*anyopaque, right: i32) void {
        qtc.NETFullscreenMonitors_SetRight(@ptrCast(self), @intCast(right));
    }

    /// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#isSet)
    ///
    /// ``` self: QtC.NETFullscreenMonitors ```
    pub fn IsSet(self: ?*anyopaque) bool {
        return qtc.NETFullscreenMonitors_IsSet(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#dtor.NETFullscreenMonitors)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.NETFullscreenMonitors ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.NETFullscreenMonitors_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/net.html
pub const net = struct {
    /// New constructs a new NET object.
    ///
    /// ``` other: QtC.NET ```
    pub fn New(other: ?*anyopaque) QtC.NET {
        return qtc.NET_new(@ptrCast(other));
    }

    /// New2 constructs a new NET object and invalidates the source NET object.
    ///
    /// ``` other: QtC.NET ```
    pub fn New2(other: ?*anyopaque) QtC.NET {
        return qtc.NET_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.NET, other: QtC.NET ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.NET_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.NET, other: QtC.NET ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.NET_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/net.html#timestampCompare)
    ///
    /// ``` time1: u64, time2: u64 ```
    pub fn TimestampCompare(time1: u64, time2: u64) i32 {
        return qtc.NET_TimestampCompare(@intCast(time1), @intCast(time2));
    }

    /// [Qt documentation](https://api.kde.org/net.html#timestampDiff)
    ///
    /// ``` time1: u64, time2: u64 ```
    pub fn TimestampDiff(time1: u64, time2: u64) i32 {
        return qtc.NET_TimestampDiff(@intCast(time1), @intCast(time2));
    }

    /// [Qt documentation](https://api.kde.org/net.html#dtor.NET)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.NET ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.NET_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/netwm_def.html#types
pub const enums = struct {
    pub const Role = enum {
        pub const Client: i32 = 0;
        pub const WindowManager: i32 = 1;
    };

    pub const WindowType = enum {
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

    pub const WindowTypeMask = enum {
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
        pub const AllTypesMask: i64 = 4294967295;
    };

    pub const State = enum {
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

    pub const Direction = enum {
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

    pub const MappingState = enum {
        pub const Visible: i32 = 1;
        pub const Withdrawn: i32 = 0;
        pub const Iconic: i32 = 3;
    };

    pub const Action = enum {
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

    pub const Property = enum {
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
        pub const WMGeometry: i64 = 2147483648;
        pub const WMAllProperties: i64 = 4294967295;
    };

    pub const Property2 = enum {
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
        pub const WM2GTKShowWindowMenu: i64 = 2147483648;
        pub const WM2AllProperties: i64 = 4294967295;
    };

    pub const NET = enum {
        pub const OnAllDesktops: i32 = -1;
    };

    pub const RequestSource = enum {
        pub const FromUnknown: i32 = 0;
        pub const FromApplication: i32 = 1;
        pub const FromTool: i32 = 2;
    };

    pub const Orientation = enum {
        pub const OrientationHorizontal: i32 = 0;
        pub const OrientationVertical: i32 = 1;
    };

    pub const DesktopLayoutCorner = enum {
        pub const DesktopLayoutCornerTopLeft: i32 = 0;
        pub const DesktopLayoutCornerTopRight: i32 = 1;
        pub const DesktopLayoutCornerBottomLeft: i32 = 2;
        pub const DesktopLayoutCornerBottomRight: i32 = 3;
    };

    pub const Protocol = enum {
        pub const NoProtocol: i32 = 0;
        pub const TakeFocusProtocol: i32 = 1;
        pub const DeleteWindowProtocol: i32 = 2;
        pub const PingProtocol: i32 = 4;
        pub const SyncRequestProtocol: i32 = 8;
        pub const ContextHelpProtocol: i32 = 16;
    };
};
