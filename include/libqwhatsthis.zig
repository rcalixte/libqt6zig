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

    /// New constructs a new QWhatsThis object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWhatsThis `
    ///
    pub fn New(other: anytype) QWhatsThis {
        comptime _ = @TypeOf(other)._is_QWhatsThis;
        return .{ .ptr = qtc.QWhatsThis_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QWhatsThis object and invalidates the source QWhatsThis object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWhatsThis `
    ///
    pub fn New2(other: anytype) QWhatsThis {
        comptime _ = @TypeOf(other)._is_QWhatsThis;
        return .{ .ptr = qtc.QWhatsThis_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QWhatsThis `
    ///
    /// ` other: QWhatsThis `
    ///
    pub fn CopyAssign(self: QWhatsThis, other: QWhatsThis) void {
        qtc.QWhatsThis_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QWhatsThis `
    ///
    /// ` other: QWhatsThis `
    ///
    pub fn MoveAssign(self: QWhatsThis, other: QWhatsThis) void {
        qtc.QWhatsThis_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#enterWhatsThisMode)
    ///
    pub fn EnterWhatsThisMode() void {
        qtc.QWhatsThis_EnterWhatsThisMode();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#inWhatsThisMode)
    ///
    pub fn InWhatsThisMode() bool {
        return qtc.QWhatsThis_InWhatsThisMode();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#leaveWhatsThisMode)
    ///
    pub fn LeaveWhatsThisMode() void {
        qtc.QWhatsThis_LeaveWhatsThisMode();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#showText)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ShowText(pos: anytype, text: []const u8) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QWhatsThis_ShowText(@ptrCast(pos.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#hideText)
    ///
    pub fn HideText() void {
        qtc.QWhatsThis_HideText();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#createAction)
    ///
    pub fn CreateAction() QAction {
        return .{ .ptr = qtc.QWhatsThis_CreateAction() };
    }

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
    pub fn ShowText3(pos: anytype, text: []const u8, w: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QWhatsThis_ShowText3(@ptrCast(pos.ptr), text_str, @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#createAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateAction1(parent: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QWhatsThis_CreateAction1(@ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwhatsthis.html#dtor.QWhatsThis)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWhatsThis `
    ///
    pub fn Delete(self: QWhatsThis) void {
        qtc.QWhatsThis_Delete(@ptrCast(self.ptr));
    }
};
