const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QDateTime = @import("libqt6").QDateTime;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const deviceinterface_enums = @import("libdeviceinterface.zig").enums;
const opticaldrive_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const solidnamespace_enums = @import("libsolidnamespace.zig").enums;
const std = @import("std");
const storagedrive_enums = @import("libstoragedrive.zig").enums;

/// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html)
pub const Solid__OpticalDrive = extern struct {
    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Solid__OpticalDrive,

    pub const _is_Solid__OpticalDrive = {};
    pub const _is_Solid__StorageDrive = {};
    pub const _is_Solid__DeviceInterface = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn metaObject(self: Solid__OpticalDrive) QMetaObject {
        return .{ .ptr = qtc.Solid__OpticalDrive_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Solid__OpticalDrive, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Solid__OpticalDrive_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: Solid__OpticalDrive, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Solid__OpticalDrive_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Solid__OpticalDrive.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `deviceInterfaceType` instead
    ///
    pub const DeviceInterfaceType = deviceInterfaceType;

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#deviceInterfaceType)
    ///
    /// ## Returns:
    ///
    /// ` deviceinterface_enums.Type `
    ///
    pub fn deviceInterfaceType() i32 {
        return qtc.Solid__OpticalDrive_DeviceInterfaceType();
    }

    /// ### DEPRECATED: Use `supportedMedia` instead
    ///
    pub const SupportedMedia = supportedMedia;

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#supportedMedia)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ## Returns:
    ///
    /// ` flag of opticaldrive_enums.MediumType `
    ///
    pub fn supportedMedia(self: Solid__OpticalDrive) i32 {
        return qtc.Solid__OpticalDrive_SupportedMedia(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readSpeed` instead
    ///
    pub const ReadSpeed = readSpeed;

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#readSpeed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn readSpeed(self: Solid__OpticalDrive) i32 {
        return qtc.Solid__OpticalDrive_ReadSpeed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeSpeed` instead
    ///
    pub const WriteSpeed = writeSpeed;

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#writeSpeed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn writeSpeed(self: Solid__OpticalDrive) i32 {
        return qtc.Solid__OpticalDrive_WriteSpeed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeSpeeds` instead
    ///
    pub const WriteSpeeds = writeSpeeds;

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#writeSpeeds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn writeSpeeds(self: Solid__OpticalDrive, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.Solid__OpticalDrive_WriteSpeeds(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("Solid__OpticalDrive.writeSpeeds: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `eject` instead
    ///
    pub const Eject = eject;

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#eject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn eject(self: Solid__OpticalDrive) bool {
        return qtc.Solid__OpticalDrive_Eject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ejectPressed` instead
    ///
    pub const EjectPressed = ejectPressed;

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn ejectPressed(self: Solid__OpticalDrive, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__OpticalDrive_EjectPressed(@ptrCast(self.ptr), udi_str);
    }

    /// ### DEPRECATED: Use `onEjectPressed` instead
    ///
    pub const OnEjectPressed = onEjectPressed;

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` callback: *const fn (self: Solid__OpticalDrive, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onEjectPressed(self: Solid__OpticalDrive, callback: *const fn (Solid__OpticalDrive, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__OpticalDrive_Connect_EjectPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `ejectDone` instead
    ///
    pub const EjectDone = ejectDone;

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectDone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` errorVal: solidnamespace_enums.ErrorType `
    ///
    /// ` errorData: QVariant `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn ejectDone(self: Solid__OpticalDrive, errorVal: i32, errorData: anytype, udi: []const u8) void {
        comptime _ = @TypeOf(errorData)._is_QVariant;
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__OpticalDrive_EjectDone(@ptrCast(self.ptr), @bitCast(errorVal), @ptrCast(errorData.ptr), udi_str);
    }

    /// ### DEPRECATED: Use `onEjectDone` instead
    ///
    pub const OnEjectDone = onEjectDone;

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectDone)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` callback: *const fn (self: Solid__OpticalDrive, errorVal: solidnamespace_enums.ErrorType, errorData: QVariant, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onEjectDone(self: Solid__OpticalDrive, callback: *const fn (Solid__OpticalDrive, i32, QVariant, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__OpticalDrive_Connect_EjectDone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `ejectRequested` instead
    ///
    pub const EjectRequested = ejectRequested;

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn ejectRequested(self: Solid__OpticalDrive, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__OpticalDrive_EjectRequested(@ptrCast(self.ptr), udi_str);
    }

    /// ### DEPRECATED: Use `onEjectRequested` instead
    ///
    pub const OnEjectRequested = onEjectRequested;

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` callback: *const fn (self: Solid__OpticalDrive, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onEjectRequested(self: Solid__OpticalDrive, callback: *const fn (Solid__OpticalDrive, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__OpticalDrive_Connect_EjectRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Solid__OpticalDrive.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Solid__OpticalDrive.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `bus` instead
    ///
    pub const Bus = bus;

    /// Inherited from Solid::StorageDrive
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-storagedrive.html#bus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ## Returns:
    ///
    /// ` storagedrive_enums.Bus `
    ///
    pub fn bus(self: Solid__OpticalDrive) i32 {
        return qtc.Solid__StorageDrive_Bus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `driveType` instead
    ///
    pub const DriveType = driveType;

    /// Inherited from Solid::StorageDrive
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-storagedrive.html#driveType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ## Returns:
    ///
    /// ` storagedrive_enums.DriveType `
    ///
    pub fn driveType(self: Solid__OpticalDrive) i32 {
        return qtc.Solid__StorageDrive_DriveType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRemovable` instead
    ///
    pub const IsRemovable = isRemovable;

    /// Inherited from Solid::StorageDrive
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-storagedrive.html#isRemovable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn isRemovable(self: Solid__OpticalDrive) bool {
        return qtc.Solid__StorageDrive_IsRemovable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isHotpluggable` instead
    ///
    pub const IsHotpluggable = isHotpluggable;

    /// Inherited from Solid::StorageDrive
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-storagedrive.html#isHotpluggable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn isHotpluggable(self: Solid__OpticalDrive) bool {
        return qtc.Solid__StorageDrive_IsHotpluggable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from Solid::StorageDrive
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-storagedrive.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn size(self: Solid__OpticalDrive) usize {
        return qtc.Solid__StorageDrive_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInUse` instead
    ///
    pub const IsInUse = isInUse;

    /// Inherited from Solid::StorageDrive
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-storagedrive.html#isInUse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn isInUse(self: Solid__OpticalDrive) bool {
        return qtc.Solid__StorageDrive_IsInUse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `timeDetected` instead
    ///
    pub const TimeDetected = timeDetected;

    /// Inherited from Solid::StorageDrive
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-storagedrive.html#timeDetected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn timeDetected(self: Solid__OpticalDrive) QDateTime {
        return .{ .ptr = qtc.Solid__StorageDrive_TimeDetected(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `timeMediaDetected` instead
    ///
    pub const TimeMediaDetected = timeMediaDetected;

    /// Inherited from Solid::StorageDrive
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-storagedrive.html#timeMediaDetected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn timeMediaDetected(self: Solid__OpticalDrive) QDateTime {
        return .{ .ptr = qtc.Solid__StorageDrive_TimeMediaDetected(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// Inherited from Solid::DeviceInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-deviceinterface.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn isValid(self: Solid__OpticalDrive) bool {
        return qtc.Solid__DeviceInterface_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `typeToString` instead
    ///
    pub const TypeToString = typeToString;

    /// Inherited from Solid::DeviceInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: deviceinterface_enums.Type `
    ///
    pub fn typeToString(allocator: std.mem.Allocator, typeVal: i32) []const u8 {
        var _str = qtc.Solid__DeviceInterface_TypeToString(@bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Solid__OpticalDrive.typeToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `stringToType` instead
    ///
    pub const StringToType = stringToType;

    /// Inherited from Solid::DeviceInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-deviceinterface.html#stringToType)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` deviceinterface_enums.Type `
    ///
    pub fn stringToType(typeVal: []const u8) i32 {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        return qtc.Solid__DeviceInterface_StringToType(typeVal_str);
    }

    /// ### DEPRECATED: Use `typeDescription` instead
    ///
    pub const TypeDescription = typeDescription;

    /// Inherited from Solid::DeviceInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: deviceinterface_enums.Type `
    ///
    pub fn typeDescription(allocator: std.mem.Allocator, typeVal: i32) []const u8 {
        var _str = qtc.Solid__DeviceInterface_TypeDescription(@bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Solid__OpticalDrive.typeDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: Solid__OpticalDrive, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: Solid__OpticalDrive, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: Solid__OpticalDrive, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Solid__OpticalDrive.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: Solid__OpticalDrive, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn isWidgetType(self: Solid__OpticalDrive) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn isWindowType(self: Solid__OpticalDrive) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn isQuickItemType(self: Solid__OpticalDrive) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn signalsBlocked(self: Solid__OpticalDrive) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: Solid__OpticalDrive, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn thread(self: Solid__OpticalDrive) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Solid__OpticalDrive, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: Solid__OpticalDrive, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: Solid__OpticalDrive, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: Solid__OpticalDrive, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: Solid__OpticalDrive, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Solid__OpticalDrive, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Solid__OpticalDrive.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: Solid__OpticalDrive, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: Solid__OpticalDrive, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: Solid__OpticalDrive, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Solid__OpticalDrive, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn disconnect3(self: Solid__OpticalDrive) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: Solid__OpticalDrive, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn dumpObjectTree(self: Solid__OpticalDrive) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn dumpObjectInfo(self: Solid__OpticalDrive) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: Solid__OpticalDrive, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: Solid__OpticalDrive, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: Solid__OpticalDrive, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Solid__OpticalDrive.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Solid__OpticalDrive.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn bindingStorage(self: Solid__OpticalDrive) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn bindingStorage2(self: Solid__OpticalDrive) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn destroyed(self: Solid__OpticalDrive) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` callback: *const fn (self: Solid__OpticalDrive) callconv(.c) void `
    ///
    pub fn onDestroyed(self: Solid__OpticalDrive, callback: *const fn (Solid__OpticalDrive) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn parent(self: Solid__OpticalDrive) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: Solid__OpticalDrive, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn deleteLater(self: Solid__OpticalDrive) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: Solid__OpticalDrive, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: Solid__OpticalDrive, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Solid__OpticalDrive, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: Solid__OpticalDrive, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: Solid__OpticalDrive, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: Solid__OpticalDrive, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: Solid__OpticalDrive, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: Solid__OpticalDrive, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` callback: *const fn (self: Solid__OpticalDrive, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: Solid__OpticalDrive, callback: *const fn (Solid__OpticalDrive, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` callback: *const fn (self: Solid__OpticalDrive, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: Solid__OpticalDrive, callback: *const fn (Solid__OpticalDrive, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn delete(self: Solid__OpticalDrive) void {
        qtc.Solid__OpticalDrive_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#public-types)
pub const enums = struct {
    pub const MediumType = enum(i32) {
        pub const UnknownMediumType: i32 = 0;
        pub const Cdr: i32 = 1;
        pub const Cdrw: i32 = 2;
        pub const Dvd: i32 = 4;
        pub const Dvdr: i32 = 8;
        pub const Dvdrw: i32 = 16;
        pub const Dvdram: i32 = 32;
        pub const Dvdplusr: i32 = 64;
        pub const Dvdplusrw: i32 = 128;
        pub const Dvdplusdl: i32 = 256;
        pub const Dvdplusdlrw: i32 = 512;
        pub const Bd: i32 = 1024;
        pub const Bdr: i32 = 2048;
        pub const Bdre: i32 = 4096;
        pub const HdDvd: i32 = 8192;
        pub const HdDvdr: i32 = 16384;
        pub const HdDvdrw: i32 = 32768;
    };
};
