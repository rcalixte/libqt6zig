const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qwhatsthis.html
pub const qwhatsthis = struct {
    /// New constructs a new QWhatsThis object.
    ///
    /// ``` other: QtC.QWhatsThis ```
    pub fn New(other: ?*anyopaque) QtC.QWhatsThis {
        return qtc.QWhatsThis_new(@ptrCast(other));
    }

    /// New2 constructs a new QWhatsThis object and invalidates the source QWhatsThis object.
    ///
    /// ``` other: QtC.QWhatsThis ```
    pub fn New2(other: ?*anyopaque) QtC.QWhatsThis {
        return qtc.QWhatsThis_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QWhatsThis, other: QtC.QWhatsThis ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWhatsThis_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QWhatsThis, other: QtC.QWhatsThis ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWhatsThis_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#enterWhatsThisMode)
    ///
    ///
    pub fn EnterWhatsThisMode() void {
        qtc.QWhatsThis_EnterWhatsThisMode();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#inWhatsThisMode)
    ///
    ///
    pub fn InWhatsThisMode() bool {
        return qtc.QWhatsThis_InWhatsThisMode();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#leaveWhatsThisMode)
    ///
    ///
    pub fn LeaveWhatsThisMode() void {
        qtc.QWhatsThis_LeaveWhatsThisMode();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#showText)
    ///
    /// ``` pos: QtC.QPoint, text: []const u8 ```
    pub fn ShowText(pos: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QWhatsThis_ShowText(@ptrCast(pos), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#hideText)
    ///
    ///
    pub fn HideText() void {
        qtc.QWhatsThis_HideText();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#createAction)
    ///
    ///
    pub fn CreateAction() QtC.QAction {
        return qtc.QWhatsThis_CreateAction();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#showText)
    ///
    /// ``` pos: QtC.QPoint, text: []const u8, w: QtC.QWidget ```
    pub fn ShowText3(pos: ?*anyopaque, text: []const u8, w: ?*anyopaque) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QWhatsThis_ShowText3(@ptrCast(pos), text_str, @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#createAction)
    ///
    /// ``` parent: QtC.QObject ```
    pub fn CreateAction1(parent: ?*anyopaque) QtC.QAction {
        return qtc.QWhatsThis_CreateAction1(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#dtor.QWhatsThis)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWhatsThis ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWhatsThis_Delete(@ptrCast(self));
    }
};
