const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QWidget = @import("libqt6").QWidget;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html)
pub const QWhatsThis = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWhatsThis,

    pub const _is_QWhatsThis = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWhatsThis object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWhatsThis `
    ///
    pub fn new(other: anytype) QWhatsThis {
        comptime _ = @TypeOf(other)._is_QWhatsThis;
        return .{ .ptr = qtc.QWhatsThis_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWhatsThis object and invalidate the source QWhatsThis object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWhatsThis `
    ///
    pub fn new2(other: anytype) QWhatsThis {
        comptime _ = @TypeOf(other)._is_QWhatsThis;
        return .{ .ptr = qtc.QWhatsThis_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QWhatsThis `
    ///
    /// ` other: QWhatsThis `
    ///
    pub fn copyAssign(self: QWhatsThis, other: QWhatsThis) void {
        qtc.QWhatsThis_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QWhatsThis `
    ///
    /// ` other: QWhatsThis `
    ///
    pub fn moveAssign(self: QWhatsThis, other: QWhatsThis) void {
        qtc.QWhatsThis_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `enterWhatsThisMode` instead
    ///
    pub const EnterWhatsThisMode = enterWhatsThisMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#enterWhatsThisMode)
    ///
    pub fn enterWhatsThisMode() void {
        qtc.QWhatsThis_EnterWhatsThisMode();
    }

    /// ### DEPRECATED: Use `inWhatsThisMode` instead
    ///
    pub const InWhatsThisMode = inWhatsThisMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#inWhatsThisMode)
    ///
    pub fn inWhatsThisMode() bool {
        return qtc.QWhatsThis_InWhatsThisMode();
    }

    /// ### DEPRECATED: Use `leaveWhatsThisMode` instead
    ///
    pub const LeaveWhatsThisMode = leaveWhatsThisMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#leaveWhatsThisMode)
    ///
    pub fn leaveWhatsThisMode() void {
        qtc.QWhatsThis_LeaveWhatsThisMode();
    }

    /// ### DEPRECATED: Use `showText` instead
    ///
    pub const ShowText = showText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#showText)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    /// ` text: []const u8 `
    ///
    pub fn showText(pos: anytype, text: []const u8) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QWhatsThis_ShowText(@ptrCast(pos.ptr), text_str);
    }

    /// ### DEPRECATED: Use `hideText` instead
    ///
    pub const HideText = hideText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#hideText)
    ///
    pub fn hideText() void {
        qtc.QWhatsThis_HideText();
    }

    /// ### DEPRECATED: Use `createAction` instead
    ///
    pub const CreateAction = createAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#createAction)
    ///
    pub fn createAction() QAction {
        return .{ .ptr = qtc.QWhatsThis_CreateAction() };
    }

    /// ### DEPRECATED: Use `showText3` instead
    ///
    pub const ShowText3 = showText3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#showText)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    /// ` text: []const u8 `
    ///
    /// ` w: QWidget `
    ///
    pub fn showText3(pos: anytype, text: []const u8, w: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QWhatsThis_ShowText3(@ptrCast(pos.ptr), text_str, @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `createAction1` instead
    ///
    pub const CreateAction1 = createAction1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#createAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn createAction1(parent: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QWhatsThis_CreateAction1(@ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#dtor.QWhatsThis)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWhatsThis `
    ///
    pub fn delete(self: QWhatsThis) void {
        qtc.QWhatsThis_Delete(@ptrCast(self.ptr));
    }
};
