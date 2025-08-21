const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcoreapplication.html
pub const qcoreapplication = struct {
    /// New constructs a new QCoreApplication object.
    ///
    /// ``` argc: usize, argv: [*][*:0]u8 ```
    pub fn New(argc: usize, argv: [*][*:0]u8) QtC.QCoreApplication {
        var argc_param: c_int = @intCast(argc);
        const argv_param: [*c][*c]u8 = @ptrCast(@alignCast(&argv[0]));

        return qtc.QCoreApplication_new(&argc_param, argv_param);
    }

    /// New2 constructs a new QCoreApplication object.
    ///
    /// ``` argc: usize, argv: [*][*:0]u8, param3: i32 ```
    pub fn New2(argc: usize, argv: [*][*:0]u8, param3: i32) QtC.QCoreApplication {
        var argc_param: c_int = @intCast(argc);
        const argv_param: [*c][*c]u8 = @ptrCast(@alignCast(&argv[0]));

        return qtc.QCoreApplication_new2(&argc_param, argv_param, @intCast(param3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QCoreApplication_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QCoreApplication, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCoreApplication_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QCoreApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QCoreApplication_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QCoreApplication_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QCoreApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QCoreApplication_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QCoreApplication_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#arguments)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Arguments(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QCoreApplication_Arguments();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
    ///
    /// ``` attribute: qnamespace_enums.ApplicationAttribute ```
    pub fn SetAttribute(attribute: i32) void {
        qtc.QCoreApplication_SetAttribute(@intCast(attribute));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#testAttribute)
    ///
    /// ``` attribute: qnamespace_enums.ApplicationAttribute ```
    pub fn TestAttribute(attribute: i32) bool {
        return qtc.QCoreApplication_TestAttribute(@intCast(attribute));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationDomain)
    ///
    /// ``` orgDomain: []const u8 ```
    pub fn SetOrganizationDomain(orgDomain: []const u8) void {
        const orgDomain_str = qtc.libqt_string{
            .len = orgDomain.len,
            .data = orgDomain.ptr,
        };
        qtc.QCoreApplication_SetOrganizationDomain(orgDomain_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomain)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn OrganizationDomain(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_OrganizationDomain();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.OrganizationDomain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationName)
    ///
    /// ``` orgName: []const u8 ```
    pub fn SetOrganizationName(orgName: []const u8) void {
        const orgName_str = qtc.libqt_string{
            .len = orgName.len,
            .data = orgName.ptr,
        };
        qtc.QCoreApplication_SetOrganizationName(orgName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn OrganizationName(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_OrganizationName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.OrganizationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationName)
    ///
    /// ``` application: []const u8 ```
    pub fn SetApplicationName(application: []const u8) void {
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        qtc.QCoreApplication_SetApplicationName(application_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationName(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_ApplicationName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.ApplicationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationVersion)
    ///
    /// ``` version: []const u8 ```
    pub fn SetApplicationVersion(version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.QCoreApplication_SetApplicationVersion(version_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersion)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationVersion(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_ApplicationVersion();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.ApplicationVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setSetuidAllowed)
    ///
    /// ``` allow: bool ```
    pub fn SetSetuidAllowed(allow: bool) void {
        qtc.QCoreApplication_SetSetuidAllowed(allow);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isSetuidAllowed)
    ///
    ///
    pub fn IsSetuidAllowed() bool {
        return qtc.QCoreApplication_IsSetuidAllowed();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#instance)
    ///
    ///
    pub fn Instance() QtC.QCoreApplication {
        return qtc.QCoreApplication_Instance();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exec)
    ///
    ///
    pub fn Exec() i32 {
        return qtc.QCoreApplication_Exec();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    ///
    pub fn ProcessEvents() void {
        qtc.QCoreApplication_ProcessEvents();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ``` flags: flag of qeventloop_enums.ProcessEventsFlag, maxtime: i32 ```
    pub fn ProcessEvents2(flags: i64, maxtime: i32) void {
        qtc.QCoreApplication_ProcessEvents2(@intCast(flags), @intCast(maxtime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ``` flags: flag of qeventloop_enums.ProcessEventsFlag, deadline: QtC.QDeadlineTimer ```
    pub fn ProcessEvents3(flags: i64, deadline: QtC.QDeadlineTimer) void {
        qtc.QCoreApplication_ProcessEvents3(@intCast(flags), @ptrCast(deadline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
    ///
    /// ``` receiver: QtC.QObject, event: QtC.QEvent ```
    pub fn SendEvent(receiver: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCoreApplication_SendEvent(@ptrCast(receiver), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
    ///
    /// ``` receiver: QtC.QObject, event: QtC.QEvent ```
    pub fn PostEvent(receiver: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_PostEvent(@ptrCast(receiver), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    ///
    pub fn SendPostedEvents() void {
        qtc.QCoreApplication_SendPostedEvents();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
    ///
    /// ``` receiver: QtC.QObject ```
    pub fn RemovePostedEvents(receiver: ?*anyopaque) void {
        qtc.QCoreApplication_RemovePostedEvents(@ptrCast(receiver));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
    ///
    ///
    pub fn EventDispatcher() QtC.QAbstractEventDispatcher {
        return qtc.QCoreApplication_EventDispatcher();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
    ///
    /// ``` eventDispatcher: QtC.QAbstractEventDispatcher ```
    pub fn SetEventDispatcher(eventDispatcher: ?*anyopaque) void {
        qtc.QCoreApplication_SetEventDispatcher(@ptrCast(eventDispatcher));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#notify)
    ///
    /// ``` self: QtC.QCoreApplication, param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn Notify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QCoreApplication_Notify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#notify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, param1: QtC.QObject, param2: QtC.QEvent) callconv(.c) bool ```
    pub fn OnNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCoreApplication_OnNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#notify)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCoreApplication, param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn QBaseNotify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QCoreApplication_QBaseNotify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#startingUp)
    ///
    ///
    pub fn StartingUp() bool {
        return qtc.QCoreApplication_StartingUp();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#closingDown)
    ///
    ///
    pub fn ClosingDown() bool {
        return qtc.QCoreApplication_ClosingDown();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationDirPath)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationDirPath(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_ApplicationDirPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.ApplicationDirPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationFilePath)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationFilePath(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_ApplicationFilePath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.ApplicationFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationPid)
    ///
    ///
    pub fn ApplicationPid() i64 {
        return qtc.QCoreApplication_ApplicationPid();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#checkPermission)
    ///
    /// ``` self: QtC.QCoreApplication, permission: QtC.QPermission ```
    ///
    /// Returns: ``` qnamespace_enums.PermissionStatus ```
    pub fn CheckPermission(self: ?*anyopaque, permission: ?*anyopaque) i32 {
        return qtc.QCoreApplication_CheckPermission(@ptrCast(self), @ptrCast(permission));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
    ///
    /// ``` libraryPaths: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetLibraryPaths(libraryPaths: [][]const u8, allocator: std.mem.Allocator) void {
        var libraryPaths_arr = allocator.alloc(qtc.libqt_string, libraryPaths.len) catch @panic("qcoreapplication.SetLibraryPaths: Memory allocation failed");
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#libraryPaths)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn LibraryPaths(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QCoreApplication_LibraryPaths();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#addLibraryPath)
    ///
    /// ``` param1: []const u8 ```
    pub fn AddLibraryPath(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QCoreApplication_AddLibraryPath(param1_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeLibraryPath)
    ///
    /// ``` param1: []const u8 ```
    pub fn RemoveLibraryPath(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QCoreApplication_RemoveLibraryPath(param1_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installTranslator)
    ///
    /// ``` messageFile: QtC.QTranslator ```
    pub fn InstallTranslator(messageFile: ?*anyopaque) bool {
        return qtc.QCoreApplication_InstallTranslator(@ptrCast(messageFile));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
    ///
    /// ``` messageFile: QtC.QTranslator ```
    pub fn RemoveTranslator(messageFile: ?*anyopaque) bool {
        return qtc.QCoreApplication_RemoveTranslator(@ptrCast(messageFile));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ``` context: []const u8, key: []const u8, allocator: std.mem.Allocator ```
    pub fn Translate(context: []const u8, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        const _str = qtc.QCoreApplication_Translate(context_Cstring, key_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Translate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#resolveInterface)
    ///
    /// ``` self: QtC.QCoreApplication, name: []const u8, revision: i32 ```
    pub fn ResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QCoreApplication_ResolveInterface(@ptrCast(self), name_Cstring, @intCast(revision));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#resolveInterface)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, name: [*:0]const u8, revision: i32) callconv(.c) ?*anyopaque ```
    pub fn OnResolveInterface(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QCoreApplication_OnResolveInterface(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#resolveInterface)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCoreApplication, name: []const u8, revision: i32 ```
    pub fn QBaseResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QCoreApplication_QBaseResolveInterface(@ptrCast(self), name_Cstring, @intCast(revision));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
    ///
    /// ``` self: QtC.QCoreApplication, filterObj: QtC.QAbstractNativeEventFilter ```
    pub fn InstallNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QCoreApplication_InstallNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, filterObj: QtC.QAbstractNativeEventFilter) callconv(.c) void ```
    pub fn OnInstallNativeEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_InstallNativeEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
    ///
    /// ``` self: QtC.QCoreApplication, filterObj: QtC.QAbstractNativeEventFilter ```
    pub fn RemoveNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QCoreApplication_RemoveNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, filterObj: QtC.QAbstractNativeEventFilter) callconv(.c) void ```
    pub fn OnRemoveNativeEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_RemoveNativeEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isQuitLockEnabled)
    ///
    ///
    pub fn IsQuitLockEnabled() bool {
        return qtc.QCoreApplication_IsQuitLockEnabled();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setQuitLockEnabled)
    ///
    /// ``` enabled: bool ```
    pub fn SetQuitLockEnabled(enabled: bool) void {
        qtc.QCoreApplication_SetQuitLockEnabled(enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#quit)
    ///
    ///
    pub fn Quit() void {
        qtc.QCoreApplication_Quit();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
    ///
    ///
    pub fn Exit() void {
        qtc.QCoreApplication_Exit();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn OrganizationNameChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_OrganizationNameChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication) callconv(.c) void ```
    pub fn OnOrganizationNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn OrganizationDomainChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_OrganizationDomainChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication) callconv(.c) void ```
    pub fn OnOrganizationDomainChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationDomainChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn ApplicationNameChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_ApplicationNameChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication) callconv(.c) void ```
    pub fn OnApplicationNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn ApplicationVersionChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_ApplicationVersionChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication) callconv(.c) void ```
    pub fn OnApplicationVersionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationVersionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#event)
    ///
    /// ``` self: QtC.QCoreApplication, param1: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QCoreApplication_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, param1: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCoreApplication_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#event)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCoreApplication, param1: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QCoreApplication_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QCoreApplication_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QCoreApplication_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
    ///
    /// ``` attribute: qnamespace_enums.ApplicationAttribute, on: bool ```
    pub fn SetAttribute2(attribute: i32, on: bool) void {
        qtc.QCoreApplication_SetAttribute2(@intCast(attribute), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ``` flags: flag of qeventloop_enums.ProcessEventsFlag ```
    pub fn ProcessEvents1(flags: i64) void {
        qtc.QCoreApplication_ProcessEvents1(@intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
    ///
    /// ``` receiver: QtC.QObject, event: QtC.QEvent, priority: i32 ```
    pub fn PostEvent3(receiver: ?*anyopaque, event: ?*anyopaque, priority: i32) void {
        qtc.QCoreApplication_PostEvent3(@ptrCast(receiver), @ptrCast(event), @intCast(priority));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    /// ``` receiver: QtC.QObject ```
    pub fn SendPostedEvents1(receiver: ?*anyopaque) void {
        qtc.QCoreApplication_SendPostedEvents1(@ptrCast(receiver));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    /// ``` receiver: QtC.QObject, event_type: i32 ```
    pub fn SendPostedEvents2(receiver: ?*anyopaque, event_type: i32) void {
        qtc.QCoreApplication_SendPostedEvents2(@ptrCast(receiver), @intCast(event_type));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
    ///
    /// ``` receiver: QtC.QObject, eventType: i32 ```
    pub fn RemovePostedEvents2(receiver: ?*anyopaque, eventType: i32) void {
        qtc.QCoreApplication_RemovePostedEvents2(@ptrCast(receiver), @intCast(eventType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ``` context: []const u8, key: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator ```
    pub fn Translate3(context: []const u8, key: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        const _str = qtc.QCoreApplication_Translate3(context_Cstring, key_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Translate3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ``` context: []const u8, key: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Translate4(context: []const u8, key: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        const _str = qtc.QCoreApplication_Translate4(context_Cstring, key_Cstring, disambiguation_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Translate4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
    ///
    /// ``` retcode: i32 ```
    pub fn Exit1(retcode: i32) void {
        qtc.QCoreApplication_Exit1(@intCast(retcode));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QCoreApplication, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QCoreApplication, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QCoreApplication, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QCoreApplication, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QCoreApplication, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QCoreApplication, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QCoreApplication, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QCoreApplication, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QCoreApplication, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QCoreApplication, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QCoreApplication, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QCoreApplication, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QCoreApplication, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QCoreApplication, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QCoreApplication, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QCoreApplication, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QCoreApplication, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QCoreApplication, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QCoreApplication, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QCoreApplication, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCoreApplication_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCoreApplication_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCoreApplication_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCoreApplication_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCoreApplication_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCoreApplication_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCoreApplication_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCoreApplication_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCoreApplication_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QCoreApplication_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCoreApplication_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCoreApplication_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QCoreApplication_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCoreApplication_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCoreApplication_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCoreApplication_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCoreApplication_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCoreApplication_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCoreApplication_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#aboutToQuit)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication) callconv(.c) void ```
    pub fn OnAboutToQuit(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_AboutToQuit(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#dtor.QCoreApplication)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCoreApplication ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCoreApplication_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcoreapplication.html#types
pub const enums = struct {
    pub const QCoreApplication = enum {
        pub const ApplicationFlags: i32 = 395266;
    };
};
