const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMetaType = @import("libqt6").QMetaType;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpermissions_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpermission.html)
pub const QPermission = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpermission.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPermission,

    pub const _is_QPermission = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPermission object in C++ memory
    ///
    pub fn new() QPermission {
        return .{ .ptr = qtc.QPermission_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPermission object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPermission `
    ///
    pub fn new2(param1: anytype) QPermission {
        comptime _ = @TypeOf(param1)._is_QPermission;
        return .{ .ptr = qtc.QPermission_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpermission.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPermission `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PermissionStatus `
    ///
    pub fn status(self: QPermission) i32 {
        return qtc.QPermission_Status(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpermission.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPermission `
    ///
    pub fn type0(self: QPermission) QMetaType {
        return .{ .ptr = qtc.QPermission_Type(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpermission.html#dtor.QPermission)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPermission `
    ///
    pub fn delete(self: QPermission) void {
        qtc.QPermission_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html)
pub const QLocationPermission = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLocationPermission,

    pub const _is_QLocationPermission = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLocationPermission object in C++ memory
    ///
    pub fn new() QLocationPermission {
        return .{ .ptr = qtc.QLocationPermission_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLocationPermission object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLocationPermission `
    ///
    pub fn new2(other: anytype) QLocationPermission {
        comptime _ = @TypeOf(other)._is_QLocationPermission;
        return .{ .ptr = qtc.QLocationPermission_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `setAccuracy` instead
    ///
    pub const SetAccuracy = setAccuracy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html#setAccuracy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocationPermission `
    ///
    /// ` _accuracy: qpermissions_enums.Accuracy `
    ///
    pub fn setAccuracy(self: QLocationPermission, _accuracy: u8) void {
        qtc.QLocationPermission_SetAccuracy(@ptrCast(self.ptr), @bitCast(_accuracy));
    }

    /// ### DEPRECATED: Use `accuracy` instead
    ///
    pub const Accuracy = accuracy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html#accuracy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocationPermission `
    ///
    /// ## Returns:
    ///
    /// ` qpermissions_enums.Accuracy `
    ///
    pub fn accuracy(self: QLocationPermission) u8 {
        return qtc.QLocationPermission_Accuracy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAvailability` instead
    ///
    pub const SetAvailability = setAvailability;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html#setAvailability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocationPermission `
    ///
    /// ` _availability: qpermissions_enums.Availability `
    ///
    pub fn setAvailability(self: QLocationPermission, _availability: u8) void {
        qtc.QLocationPermission_SetAvailability(@ptrCast(self.ptr), @bitCast(_availability));
    }

    /// ### DEPRECATED: Use `availability` instead
    ///
    pub const Availability = availability;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html#availability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocationPermission `
    ///
    /// ## Returns:
    ///
    /// ` qpermissions_enums.Availability `
    ///
    pub fn availability(self: QLocationPermission) u8 {
        return qtc.QLocationPermission_Availability(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocationPermission `
    ///
    /// ` other: QLocationPermission `
    ///
    pub fn operatorAssign(self: QLocationPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLocationPermission;
        qtc.QLocationPermission_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocationPermission `
    ///
    /// ` other: QLocationPermission `
    ///
    pub fn swap(self: QLocationPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLocationPermission;
        qtc.QLocationPermission_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html#dtor.QLocationPermission)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLocationPermission `
    ///
    pub fn delete(self: QLocationPermission) void {
        qtc.QLocationPermission_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendarpermission.html)
pub const QCalendarPermission = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendarpermission.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCalendarPermission,

    pub const _is_QCalendarPermission = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCalendarPermission object in C++ memory
    ///
    pub fn new() QCalendarPermission {
        return .{ .ptr = qtc.QCalendarPermission_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCalendarPermission object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCalendarPermission `
    ///
    pub fn new2(other: anytype) QCalendarPermission {
        comptime _ = @TypeOf(other)._is_QCalendarPermission;
        return .{ .ptr = qtc.QCalendarPermission_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `setAccessMode` instead
    ///
    pub const SetAccessMode = setAccessMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendarpermission.html#setAccessMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendarPermission `
    ///
    /// ` mode: qpermissions_enums.AccessMode `
    ///
    pub fn setAccessMode(self: QCalendarPermission, mode: u8) void {
        qtc.QCalendarPermission_SetAccessMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `accessMode` instead
    ///
    pub const AccessMode = accessMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendarpermission.html#accessMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendarPermission `
    ///
    /// ## Returns:
    ///
    /// ` qpermissions_enums.AccessMode `
    ///
    pub fn accessMode(self: QCalendarPermission) u8 {
        return qtc.QCalendarPermission_AccessMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendarpermission.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendarPermission `
    ///
    /// ` other: QCalendarPermission `
    ///
    pub fn operatorAssign(self: QCalendarPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCalendarPermission;
        qtc.QCalendarPermission_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendarpermission.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendarPermission `
    ///
    /// ` other: QCalendarPermission `
    ///
    pub fn swap(self: QCalendarPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCalendarPermission;
        qtc.QCalendarPermission_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendarpermission.html#dtor.QCalendarPermission)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCalendarPermission `
    ///
    pub fn delete(self: QCalendarPermission) void {
        qtc.QCalendarPermission_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcontactspermission.html)
pub const QContactsPermission = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontactspermission.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QContactsPermission,

    pub const _is_QContactsPermission = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QContactsPermission object in C++ memory
    ///
    pub fn new() QContactsPermission {
        return .{ .ptr = qtc.QContactsPermission_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QContactsPermission object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QContactsPermission `
    ///
    pub fn new2(other: anytype) QContactsPermission {
        comptime _ = @TypeOf(other)._is_QContactsPermission;
        return .{ .ptr = qtc.QContactsPermission_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `setAccessMode` instead
    ///
    pub const SetAccessMode = setAccessMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontactspermission.html#setAccessMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContactsPermission `
    ///
    /// ` mode: qpermissions_enums.AccessMode `
    ///
    pub fn setAccessMode(self: QContactsPermission, mode: u8) void {
        qtc.QContactsPermission_SetAccessMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `accessMode` instead
    ///
    pub const AccessMode = accessMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontactspermission.html#accessMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContactsPermission `
    ///
    /// ## Returns:
    ///
    /// ` qpermissions_enums.AccessMode `
    ///
    pub fn accessMode(self: QContactsPermission) u8 {
        return qtc.QContactsPermission_AccessMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontactspermission.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContactsPermission `
    ///
    /// ` other: QContactsPermission `
    ///
    pub fn operatorAssign(self: QContactsPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QContactsPermission;
        qtc.QContactsPermission_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontactspermission.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContactsPermission `
    ///
    /// ` other: QContactsPermission `
    ///
    pub fn swap(self: QContactsPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QContactsPermission;
        qtc.QContactsPermission_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontactspermission.html#dtor.QContactsPermission)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QContactsPermission `
    ///
    pub fn delete(self: QContactsPermission) void {
        qtc.QContactsPermission_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothpermission.html)
pub const QBluetoothPermission = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothpermission.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBluetoothPermission,

    pub const _is_QBluetoothPermission = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBluetoothPermission object in C++ memory
    ///
    pub fn new() QBluetoothPermission {
        return .{ .ptr = qtc.QBluetoothPermission_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBluetoothPermission object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBluetoothPermission `
    ///
    pub fn new2(other: anytype) QBluetoothPermission {
        comptime _ = @TypeOf(other)._is_QBluetoothPermission;
        return .{ .ptr = qtc.QBluetoothPermission_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `setCommunicationModes` instead
    ///
    pub const SetCommunicationModes = setCommunicationModes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothpermission.html#setCommunicationModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothPermission `
    ///
    /// ` modes: flag of qpermissions_enums.CommunicationMode `
    ///
    pub fn setCommunicationModes(self: QBluetoothPermission, modes: u8) void {
        qtc.QBluetoothPermission_SetCommunicationModes(@ptrCast(self.ptr), @bitCast(modes));
    }

    /// ### DEPRECATED: Use `communicationModes` instead
    ///
    pub const CommunicationModes = communicationModes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothpermission.html#communicationModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothPermission `
    ///
    /// ## Returns:
    ///
    /// ` flag of qpermissions_enums.CommunicationMode `
    ///
    pub fn communicationModes(self: QBluetoothPermission) u8 {
        return qtc.QBluetoothPermission_CommunicationModes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothpermission.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothPermission `
    ///
    /// ` other: QBluetoothPermission `
    ///
    pub fn operatorAssign(self: QBluetoothPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBluetoothPermission;
        qtc.QBluetoothPermission_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothpermission.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothPermission `
    ///
    /// ` other: QBluetoothPermission `
    ///
    pub fn swap(self: QBluetoothPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBluetoothPermission;
        qtc.QBluetoothPermission_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothpermission.html#dtor.QBluetoothPermission)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBluetoothPermission `
    ///
    pub fn delete(self: QBluetoothPermission) void {
        qtc.QBluetoothPermission_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcamerapermission.html)
pub const QCameraPermission = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamerapermission.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCameraPermission,

    pub const _is_QCameraPermission = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCameraPermission object in C++ memory
    ///
    pub fn new() QCameraPermission {
        return .{ .ptr = qtc.QCameraPermission_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCameraPermission object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCameraPermission `
    ///
    pub fn new2(other: anytype) QCameraPermission {
        comptime _ = @TypeOf(other)._is_QCameraPermission;
        return .{ .ptr = qtc.QCameraPermission_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamerapermission.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraPermission `
    ///
    /// ` other: QCameraPermission `
    ///
    pub fn operatorAssign(self: QCameraPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCameraPermission;
        qtc.QCameraPermission_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamerapermission.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraPermission `
    ///
    /// ` other: QCameraPermission `
    ///
    pub fn swap(self: QCameraPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCameraPermission;
        qtc.QCameraPermission_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamerapermission.html#dtor.QCameraPermission)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCameraPermission `
    ///
    pub fn delete(self: QCameraPermission) void {
        qtc.QCameraPermission_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmicrophonepermission.html)
pub const QMicrophonePermission = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmicrophonepermission.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMicrophonePermission,

    pub const _is_QMicrophonePermission = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMicrophonePermission object in C++ memory
    ///
    pub fn new() QMicrophonePermission {
        return .{ .ptr = qtc.QMicrophonePermission_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMicrophonePermission object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMicrophonePermission `
    ///
    pub fn new2(other: anytype) QMicrophonePermission {
        comptime _ = @TypeOf(other)._is_QMicrophonePermission;
        return .{ .ptr = qtc.QMicrophonePermission_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmicrophonepermission.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMicrophonePermission `
    ///
    /// ` other: QMicrophonePermission `
    ///
    pub fn operatorAssign(self: QMicrophonePermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMicrophonePermission;
        qtc.QMicrophonePermission_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmicrophonepermission.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMicrophonePermission `
    ///
    /// ` other: QMicrophonePermission `
    ///
    pub fn swap(self: QMicrophonePermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMicrophonePermission;
        qtc.QMicrophonePermission_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmicrophonepermission.html#dtor.QMicrophonePermission)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMicrophonePermission `
    ///
    pub fn delete(self: QMicrophonePermission) void {
        qtc.QMicrophonePermission_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpermissions.html#public-types)
pub const enums = struct {
    pub const Accuracy = enum {
        pub const Approximate: u8 = 0;
        pub const Precise: u8 = 1;
    };

    pub const Availability = enum {
        pub const WhenInUse: u8 = 0;
        pub const Always: u8 = 1;
    };

    pub const AccessMode = enum {
        pub const ReadOnly: u8 = 0;
        pub const ReadWrite: u8 = 1;
    };

    pub const CommunicationMode = enum {
        pub const Access: u8 = 1;
        pub const Advertise: u8 = 2;
        pub const Default: u8 = 3;
    };
};
