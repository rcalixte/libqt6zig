const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qeventloop_enums = @import("libqeventloop.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html)
pub const qcoreapplication = struct {
    /// New constructs a new QCoreApplication object.
    ///
    /// ## Parameter(s):
    ///
    /// ` argc: usize `
    ///
    /// ` argv: [*][*:0]u8 `
    ///
    pub fn New(argc: usize, argv: [*][*:0]u8) QtC.QCoreApplication {
        var argc_param: c_int = @intCast(argc);
        const argv_param: [*c][*c]u8 = @ptrCast(@alignCast(&argv[0]));

        return qtc.QCoreApplication_new(&argc_param, argv_param);
    }

    /// New2 constructs a new QCoreApplication object.
    ///
    /// ## Parameter(s):
    ///
    /// ` argc: usize `
    ///
    /// ` argv: [*][*:0]u8 `
    ///
    /// ` param3: i32 `
    ///
    pub fn New2(argc: usize, argv: [*][*:0]u8, param3: i32) QtC.QCoreApplication {
        var argc_param: c_int = @intCast(argc);
        const argv_param: [*c][*c]u8 = @ptrCast(@alignCast(&argv[0]));

        return qtc.QCoreApplication_new2(&argc_param, argv_param, @bitCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QCoreApplication_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QCoreApplication_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QCoreApplication_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCoreApplication_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCoreApplication_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCoreApplication_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCoreApplication_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCoreApplication_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCoreApplication_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Arguments(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCoreApplication_Arguments();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qcoreapplication.Arguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcoreapplication.Arguments: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` attribute: qnamespace_enums.ApplicationAttribute `
    ///
    pub fn SetAttribute(attribute: i32) void {
        qtc.QCoreApplication_SetAttribute(@bitCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` attribute: qnamespace_enums.ApplicationAttribute `
    ///
    pub fn TestAttribute(attribute: i32) bool {
        return qtc.QCoreApplication_TestAttribute(@bitCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` orgDomain: []const u8 `
    ///
    pub fn SetOrganizationDomain(orgDomain: []const u8) void {
        const orgDomain_str = qtc.libqt_string{
            .len = orgDomain.len,
            .data = orgDomain.ptr,
        };
        qtc.QCoreApplication_SetOrganizationDomain(orgDomain_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OrganizationDomain(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_OrganizationDomain();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.OrganizationDomain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` orgName: []const u8 `
    ///
    pub fn SetOrganizationName(orgName: []const u8) void {
        const orgName_str = qtc.libqt_string{
            .len = orgName.len,
            .data = orgName.ptr,
        };
        qtc.QCoreApplication_SetOrganizationName(orgName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OrganizationName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_OrganizationName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.OrganizationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` application: []const u8 `
    ///
    pub fn SetApplicationName(application: []const u8) void {
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        qtc.QCoreApplication_SetApplicationName(application_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_ApplicationName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.ApplicationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` version: []const u8 `
    ///
    pub fn SetApplicationVersion(version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.QCoreApplication_SetApplicationVersion(version_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationVersion(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_ApplicationVersion();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.ApplicationVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setSetuidAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` allow: bool `
    ///
    pub fn SetSetuidAllowed(allow: bool) void {
        qtc.QCoreApplication_SetSetuidAllowed(allow);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#isSetuidAllowed)
    ///
    pub fn IsSetuidAllowed() bool {
        return qtc.QCoreApplication_IsSetuidAllowed();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#instance)
    ///
    pub fn Instance() QtC.QCoreApplication {
        return qtc.QCoreApplication_Instance();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#exec)
    ///
    pub fn Exec() i32 {
        return qtc.QCoreApplication_Exec();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    pub fn ProcessEvents() void {
        qtc.QCoreApplication_ProcessEvents();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: flag of qeventloop_enums.ProcessEventsFlag `
    ///
    /// ` maxtime: i32 `
    ///
    pub fn ProcessEvents2(flags: i32, maxtime: i32) void {
        qtc.QCoreApplication_ProcessEvents2(@bitCast(flags), @bitCast(maxtime));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: flag of qeventloop_enums.ProcessEventsFlag `
    ///
    /// ` deadline: QtC.QDeadlineTimer `
    ///
    pub fn ProcessEvents3(flags: i32, deadline: QtC.QDeadlineTimer) void {
        qtc.QCoreApplication_ProcessEvents3(@bitCast(flags), @ptrCast(deadline));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SendEvent(receiver: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCoreApplication_SendEvent(@ptrCast(receiver), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn PostEvent(receiver: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_PostEvent(@ptrCast(receiver), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    pub fn SendPostedEvents() void {
        qtc.QCoreApplication_SendPostedEvents();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn RemovePostedEvents(receiver: ?*anyopaque) void {
        qtc.QCoreApplication_RemovePostedEvents(@ptrCast(receiver));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
    ///
    pub fn EventDispatcher() QtC.QAbstractEventDispatcher {
        return qtc.QCoreApplication_EventDispatcher();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventDispatcher: QtC.QAbstractEventDispatcher `
    ///
    pub fn SetEventDispatcher(eventDispatcher: ?*anyopaque) void {
        qtc.QCoreApplication_SetEventDispatcher(@ptrCast(eventDispatcher));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#notify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` param1: QtC.QObject `
    ///
    /// ` param2: QtC.QEvent `
    ///
    pub fn Notify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QCoreApplication_Notify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#notify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, param1: QtC.QObject, param2: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCoreApplication_OnNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperNotify` instead
    ///
    pub const QBaseNotify = SuperNotify;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#notify)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` param1: QtC.QObject `
    ///
    /// ` param2: QtC.QEvent `
    ///
    pub fn SuperNotify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QCoreApplication_SuperNotify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#startingUp)
    ///
    pub fn StartingUp() bool {
        return qtc.QCoreApplication_StartingUp();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#closingDown)
    ///
    pub fn ClosingDown() bool {
        return qtc.QCoreApplication_ClosingDown();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationDirPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationDirPath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_ApplicationDirPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.ApplicationDirPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationFilePath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_ApplicationFilePath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.ApplicationFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationPid)
    ///
    pub fn ApplicationPid() i64 {
        return qtc.QCoreApplication_ApplicationPid();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#checkPermission)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` permission: QtC.QPermission `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PermissionStatus `
    ///
    pub fn CheckPermission(self: ?*anyopaque, permission: ?*anyopaque) i32 {
        return qtc.QCoreApplication_CheckPermission(@ptrCast(self), @ptrCast(permission));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` libraryPaths: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetLibraryPaths(libraryPaths: []const []const u8, allocator: std.mem.Allocator) void {
        const libraryPaths_arr = allocator.alloc(qtc.libqt_string, libraryPaths.len) catch @panic("qcoreapplication.SetLibraryPaths: Memory allocation failed");
        defer allocator.free(libraryPaths_arr);
        for (libraryPaths, 0..libraryPaths.len) |item, i| {
            libraryPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const libraryPaths_list = qtc.libqt_list{
            .len = libraryPaths.len,
            .data = libraryPaths_arr.ptr,
        };
        qtc.QCoreApplication_SetLibraryPaths(libraryPaths_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#libraryPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LibraryPaths(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCoreApplication_LibraryPaths();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qcoreapplication.LibraryPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcoreapplication.LibraryPaths: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#addLibraryPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn AddLibraryPath(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QCoreApplication_AddLibraryPath(param1_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeLibraryPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn RemoveLibraryPath(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QCoreApplication_RemoveLibraryPath(param1_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#installTranslator)
    ///
    /// ## Parameter(s):
    ///
    /// ` messageFile: QtC.QTranslator `
    ///
    pub fn InstallTranslator(messageFile: ?*anyopaque) bool {
        return qtc.QCoreApplication_InstallTranslator(@ptrCast(messageFile));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
    ///
    /// ## Parameter(s):
    ///
    /// ` messageFile: QtC.QTranslator `
    ///
    pub fn RemoveTranslator(messageFile: ?*anyopaque) bool {
        return qtc.QCoreApplication_RemoveTranslator(@ptrCast(messageFile));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` context: [:0]const u8 `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Translate(context: [:0]const u8, key: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        var _str = qtc.QCoreApplication_Translate(context_Cstring, key_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Translate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#resolveInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn ResolveInterface(self: ?*anyopaque, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QCoreApplication_ResolveInterface(@ptrCast(self), name_Cstring, @bitCast(revision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#resolveInterface)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, name: [*:0]const u8, revision: i32) callconv(.c) ?*anyopaque `
    ///
    pub fn OnResolveInterface(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QCoreApplication_OnResolveInterface(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResolveInterface` instead
    ///
    pub const QBaseResolveInterface = SuperResolveInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#resolveInterface)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn SuperResolveInterface(self: ?*anyopaque, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QCoreApplication_SuperResolveInterface(@ptrCast(self), name_Cstring, @bitCast(revision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` filterObj: QtC.QAbstractNativeEventFilter `
    ///
    pub fn InstallNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QCoreApplication_InstallNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, filterObj: QtC.QAbstractNativeEventFilter) callconv(.c) void `
    ///
    pub fn OnInstallNativeEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_InstallNativeEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` filterObj: QtC.QAbstractNativeEventFilter `
    ///
    pub fn RemoveNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QCoreApplication_RemoveNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, filterObj: QtC.QAbstractNativeEventFilter) callconv(.c) void `
    ///
    pub fn OnRemoveNativeEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_RemoveNativeEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#isQuitLockEnabled)
    ///
    pub fn IsQuitLockEnabled() bool {
        return qtc.QCoreApplication_IsQuitLockEnabled();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setQuitLockEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` enabled: bool `
    ///
    pub fn SetQuitLockEnabled(enabled: bool) void {
        qtc.QCoreApplication_SetQuitLockEnabled(enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#quit)
    ///
    pub fn Quit() void {
        qtc.QCoreApplication_Quit();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
    ///
    pub fn Exit() void {
        qtc.QCoreApplication_Exit();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn OrganizationNameChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_OrganizationNameChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication) callconv(.c) void `
    ///
    pub fn OnOrganizationNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn OrganizationDomainChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_OrganizationDomainChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication) callconv(.c) void `
    ///
    pub fn OnOrganizationDomainChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationDomainChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn ApplicationNameChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_ApplicationNameChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication) callconv(.c) void `
    ///
    pub fn OnApplicationNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn ApplicationVersionChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_ApplicationVersionChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication) callconv(.c) void `
    ///
    pub fn OnApplicationVersionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationVersionChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QCoreApplication_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, param1: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCoreApplication_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QCoreApplication_SuperEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` attribute: qnamespace_enums.ApplicationAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(attribute: i32, on: bool) void {
        qtc.QCoreApplication_SetAttribute2(@bitCast(attribute), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: flag of qeventloop_enums.ProcessEventsFlag `
    ///
    pub fn ProcessEvents1(flags: i32) void {
        qtc.QCoreApplication_ProcessEvents1(@bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    /// ` priority: i32 `
    ///
    pub fn PostEvent3(receiver: ?*anyopaque, event: ?*anyopaque, priority: i32) void {
        qtc.QCoreApplication_PostEvent3(@ptrCast(receiver), @ptrCast(event), @bitCast(priority));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn SendPostedEvents1(receiver: ?*anyopaque) void {
        qtc.QCoreApplication_SendPostedEvents1(@ptrCast(receiver));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` event_type: i32 `
    ///
    pub fn SendPostedEvents2(receiver: ?*anyopaque, event_type: i32) void {
        qtc.QCoreApplication_SendPostedEvents2(@ptrCast(receiver), @bitCast(event_type));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` eventType: i32 `
    ///
    pub fn RemovePostedEvents2(receiver: ?*anyopaque, eventType: i32) void {
        qtc.QCoreApplication_RemovePostedEvents2(@ptrCast(receiver), @bitCast(eventType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` context: [:0]const u8 `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Translate3(context: [:0]const u8, key: [:0]const u8, disambiguation: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QCoreApplication_Translate3(context_Cstring, key_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Translate3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` context: [:0]const u8 `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Translate4(context: [:0]const u8, key: [:0]const u8, disambiguation: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QCoreApplication_Translate4(context_Cstring, key_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Translate4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
    ///
    /// ## Parameter(s):
    ///
    /// ` retcode: i32 `
    ///
    pub fn Exit1(retcode: i32) void {
        qtc.QCoreApplication_Exit1(@bitCast(retcode));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qcoreapplication.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qcoreapplication.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcoreapplication.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCoreApplication_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCoreApplication_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication`
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCoreApplication_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication`
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication`
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication`
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCoreApplication_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCoreApplication_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication`
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCoreApplication_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCoreApplication_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication`
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCoreApplication_Sender(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCoreApplication_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QCoreApplication_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCoreApplication_SenderSignalIndex(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCoreApplication_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QCoreApplication_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCoreApplication_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCoreApplication_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication`
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCoreApplication_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCoreApplication_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCoreApplication_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication`
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCoreApplication_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#aboutToQuit)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication) callconv(.c) void `
    ///
    pub fn OnAboutToQuit(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_AboutToQuit(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    /// ` callback: *const fn (self: QtC.QCoreApplication, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#dtor.QCoreApplication)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QCoreApplication `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QCoreApplication_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#public-types)
pub const enums = struct {
    pub const QCoreApplication = enum(i32) {
        pub const ApplicationFlags: i32 = 395266;
    };
};
