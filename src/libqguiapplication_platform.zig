const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const builtin = @import("builtin");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html)
pub const QNativeInterface__QX11Application = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNativeInterface__QX11Application,

    pub const _is_QNativeInterface__QX11Application = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNativeInterface::QX11Application object in C++ memory
    ///
    pub fn new() QNativeInterface__QX11Application {
        return .{ .ptr = qtc.QNativeInterface__QX11Application_new() };
    }

    /// ### DEPRECATED: Use `display` instead
    ///
    pub const Display = display;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html#display)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QX11Application `
    ///
    pub fn display(self: QNativeInterface__QX11Application) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QX11Application_Display(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `onDisplay` instead
    ///
    pub const OnDisplay = onDisplay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html#display)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeInterface__QX11Application `
    ///
    /// ` callback: *const fn () callconv(.c) ?*anyopaque `
    ///
    pub fn onDisplay(self: QNativeInterface__QX11Application, callback: *const fn () callconv(.c) ?*anyopaque) void {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        qtc.QNativeInterface__QX11Application_OnDisplay(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDisplay` instead
    ///
    pub const SuperDisplay = superDisplay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html#display)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QX11Application `
    ///
    pub fn superDisplay(self: QNativeInterface__QX11Application) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QX11Application_SuperDisplay(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `connection` instead
    ///
    pub const Connection = connection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html#connection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QX11Application `
    ///
    /// ## Returns:
    ///
    /// ` ?*xcb_connection_t ` (NOTE: This pointer value could be `null`.)
    ///
    pub fn connection(self: QNativeInterface__QX11Application) ?*anyopaque {
        if (builtin.target.os.tag != .linux) @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QX11Application_Connection(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `onConnection` instead
    ///
    pub const OnConnection = onConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html#connection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeInterface__QX11Application `
    ///
    /// ` callback: *const fn () callconv(.c) ?*anyopaque `
    ///
    pub fn onConnection(self: QNativeInterface__QX11Application, callback: *const fn () callconv(.c) ?*anyopaque) void {
        if (builtin.target.os.tag != .linux) @compileError("Unsupported operating system");
        qtc.QNativeInterface__QX11Application_OnConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superConnection` instead
    ///
    pub const SuperConnection = superConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html#connection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QX11Application `
    ///
    /// ## Returns:
    ///
    /// ` ?*xcb_connection_t ` (NOTE: This pointer value could be `null`.)
    ///
    pub fn superConnection(self: QNativeInterface__QX11Application) ?*anyopaque {
        if (builtin.target.os.tag != .linux) @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QX11Application_SuperConnection(@ptrCast(self.ptr)));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html)
pub const QNativeInterface__QWaylandApplication = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNativeInterface__QWaylandApplication,

    pub const _is_QNativeInterface__QWaylandApplication = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNativeInterface::QWaylandApplication object in C++ memory
    ///
    pub fn new() QNativeInterface__QWaylandApplication {
        return .{ .ptr = qtc.QNativeInterface__QWaylandApplication_new() };
    }

    /// ### DEPRECATED: Use `display` instead
    ///
    pub const Display = display;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#display)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ## Returns:
    ///
    /// ` ?*wl_display ` (NOTE: This pointer value could be `null`.)
    ///
    pub fn display(self: QNativeInterface__QWaylandApplication) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QWaylandApplication_Display(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `onDisplay` instead
    ///
    pub const OnDisplay = onDisplay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#display)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ` callback: *const fn () callconv(.c) ?*anyopaque `
    ///
    pub fn onDisplay(self: QNativeInterface__QWaylandApplication, callback: *const fn () callconv(.c) ?*anyopaque) void {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        qtc.QNativeInterface__QWaylandApplication_OnDisplay(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDisplay` instead
    ///
    pub const SuperDisplay = superDisplay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#display)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ## Returns:
    ///
    /// ` ?*wl_display ` (NOTE: This pointer value could be `null`.)
    ///
    pub fn superDisplay(self: QNativeInterface__QWaylandApplication) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QWaylandApplication_SuperDisplay(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `compositor` instead
    ///
    pub const Compositor = compositor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#compositor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ## Returns:
    ///
    /// ` ?*wl_compositor ` (NOTE: This pointer value could be `null`.)
    ///
    pub fn compositor(self: QNativeInterface__QWaylandApplication) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QWaylandApplication_Compositor(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `onCompositor` instead
    ///
    pub const OnCompositor = onCompositor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#compositor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ` callback: *const fn () callconv(.c) ?*anyopaque `
    ///
    pub fn onCompositor(self: QNativeInterface__QWaylandApplication, callback: *const fn () callconv(.c) ?*anyopaque) void {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        qtc.QNativeInterface__QWaylandApplication_OnCompositor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCompositor` instead
    ///
    pub const SuperCompositor = superCompositor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#compositor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ## Returns:
    ///
    /// ` ?*wl_compositor ` (NOTE: This pointer value could be `null`.)
    ///
    pub fn superCompositor(self: QNativeInterface__QWaylandApplication) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QWaylandApplication_SuperCompositor(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `seat` instead
    ///
    pub const Seat = seat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#seat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ## Returns:
    ///
    /// ` ?*wl_seat ` (NOTE: This pointer value could be `null`.)
    ///
    pub fn seat(self: QNativeInterface__QWaylandApplication) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QWaylandApplication_Seat(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `onSeat` instead
    ///
    pub const OnSeat = onSeat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#seat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ` callback: *const fn () callconv(.c) ?*anyopaque `
    ///
    pub fn onSeat(self: QNativeInterface__QWaylandApplication, callback: *const fn () callconv(.c) ?*anyopaque) void {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        qtc.QNativeInterface__QWaylandApplication_OnSeat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSeat` instead
    ///
    pub const SuperSeat = superSeat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#seat)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ## Returns:
    ///
    /// ` ?*wl_seat ` (NOTE: This pointer value could be `null`.)
    ///
    pub fn superSeat(self: QNativeInterface__QWaylandApplication) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QWaylandApplication_SuperSeat(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `keyboard` instead
    ///
    pub const Keyboard = keyboard;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#keyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ## Returns:
    ///
    /// ` ?*wl_keyboard ` (NOTE: This pointer value could be `null`.)
    ///
    pub fn keyboard(self: QNativeInterface__QWaylandApplication) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QWaylandApplication_Keyboard(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `onKeyboard` instead
    ///
    pub const OnKeyboard = onKeyboard;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#keyboard)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ` callback: *const fn () callconv(.c) ?*anyopaque `
    ///
    pub fn onKeyboard(self: QNativeInterface__QWaylandApplication, callback: *const fn () callconv(.c) ?*anyopaque) void {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        qtc.QNativeInterface__QWaylandApplication_OnKeyboard(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyboard` instead
    ///
    pub const SuperKeyboard = superKeyboard;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#keyboard)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ## Returns:
    ///
    /// ` ?*wl_keyboard ` (NOTE: This pointer value could be `null`.)
    ///
    pub fn superKeyboard(self: QNativeInterface__QWaylandApplication) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QWaylandApplication_SuperKeyboard(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `pointer` instead
    ///
    pub const Pointer = pointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#pointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ## Returns:
    ///
    /// ` ?*wl_pointer ` (NOTE: This pointer value could be `null`.)
    ///
    pub fn pointer(self: QNativeInterface__QWaylandApplication) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QWaylandApplication_Pointer(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `onPointer` instead
    ///
    pub const OnPointer = onPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#pointer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ` callback: *const fn () callconv(.c) ?*anyopaque `
    ///
    pub fn onPointer(self: QNativeInterface__QWaylandApplication, callback: *const fn () callconv(.c) ?*anyopaque) void {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        qtc.QNativeInterface__QWaylandApplication_OnPointer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPointer` instead
    ///
    pub const SuperPointer = superPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#pointer)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ## Returns:
    ///
    /// ` ?*wl_pointer ` (NOTE: This pointer value could be `null`.)
    ///
    pub fn superPointer(self: QNativeInterface__QWaylandApplication) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QWaylandApplication_SuperPointer(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `touch` instead
    ///
    pub const Touch = touch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#touch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ## Returns:
    ///
    /// ` ?*wl_touch ` (NOTE: This pointer value could be `null`.)
    ///
    pub fn touch(self: QNativeInterface__QWaylandApplication) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QWaylandApplication_Touch(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `onTouch` instead
    ///
    pub const OnTouch = onTouch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#touch)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ` callback: *const fn () callconv(.c) ?*anyopaque `
    ///
    pub fn onTouch(self: QNativeInterface__QWaylandApplication, callback: *const fn () callconv(.c) ?*anyopaque) void {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        qtc.QNativeInterface__QWaylandApplication_OnTouch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTouch` instead
    ///
    pub const SuperTouch = superTouch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#touch)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ## Returns:
    ///
    /// ` ?*wl_touch ` (NOTE: This pointer value could be `null`.)
    ///
    pub fn superTouch(self: QNativeInterface__QWaylandApplication) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QWaylandApplication_SuperTouch(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `lastInputSerial` instead
    ///
    pub const LastInputSerial = lastInputSerial;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#lastInputSerial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    pub fn lastInputSerial(self: QNativeInterface__QWaylandApplication) u32 {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return qtc.QNativeInterface__QWaylandApplication_LastInputSerial(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLastInputSerial` instead
    ///
    pub const OnLastInputSerial = onLastInputSerial;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#lastInputSerial)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ` callback: *const fn () callconv(.c) u32 `
    ///
    pub fn onLastInputSerial(self: QNativeInterface__QWaylandApplication, callback: *const fn () callconv(.c) u32) void {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        qtc.QNativeInterface__QWaylandApplication_OnLastInputSerial(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLastInputSerial` instead
    ///
    pub const SuperLastInputSerial = superLastInputSerial;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#lastInputSerial)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    pub fn superLastInputSerial(self: QNativeInterface__QWaylandApplication) u32 {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return qtc.QNativeInterface__QWaylandApplication_SuperLastInputSerial(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastInputSeat` instead
    ///
    pub const LastInputSeat = lastInputSeat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#lastInputSeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ## Returns:
    ///
    /// ` ?*wl_seat ` (NOTE: This pointer value could be `null`.)
    ///
    pub fn lastInputSeat(self: QNativeInterface__QWaylandApplication) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QWaylandApplication_LastInputSeat(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `onLastInputSeat` instead
    ///
    pub const OnLastInputSeat = onLastInputSeat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#lastInputSeat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ` callback: *const fn () callconv(.c) ?*anyopaque `
    ///
    pub fn onLastInputSeat(self: QNativeInterface__QWaylandApplication, callback: *const fn () callconv(.c) ?*anyopaque) void {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        qtc.QNativeInterface__QWaylandApplication_OnLastInputSeat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLastInputSeat` instead
    ///
    pub const SuperLastInputSeat = superLastInputSeat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#lastInputSeat)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QWaylandApplication `
    ///
    /// ## Returns:
    ///
    /// ` ?*wl_seat ` (NOTE: This pointer value could be `null`.)
    ///
    pub fn superLastInputSeat(self: QNativeInterface__QWaylandApplication) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return @ptrCast(qtc.QNativeInterface__QWaylandApplication_SuperLastInputSeat(@ptrCast(self.ptr)));
    }
};
