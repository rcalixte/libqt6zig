const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMetaObject = @import("libqt6").QMetaObject;
const QObject = @import("libqt6").QObject;
const QQmlContext = @import("libqt6").QQmlContext;
const QQmlEngine = @import("libqt6").QQmlEngine;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html)
pub const qqml_h = extern struct {
    /// ### DEPRECATED: Use `qmlClearTypeRegistrations` instead
    ///
    pub const QmlClearTypeRegistrations = qmlClearTypeRegistrations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlClearTypeRegistrations)
    ///
    pub fn qmlClearTypeRegistrations() void {
        qtc.qqml_h_QmlClearTypeRegistrations();
    }

    /// ### DEPRECATED: Use `qmlRegisterTypeNotAvailable` instead
    ///
    pub const QmlRegisterTypeNotAvailable = qmlRegisterTypeNotAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterTypeNotAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` uri: [:0]const u8 `
    ///
    /// ` versionMajor: i32 `
    ///
    /// ` versionMinor: i32 `
    ///
    /// ` qmlName: [:0]const u8 `
    ///
    /// ` message: []const u8 `
    ///
    pub fn qmlRegisterTypeNotAvailable(uri: [:0]const u8, versionMajor: i32, versionMinor: i32, qmlName: [:0]const u8, message: []const u8) i32 {
        const uri_Cstring = uri.ptr;
        const qmlName_Cstring = qmlName.ptr;
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        return qtc.qqml_h_QmlRegisterTypeNotAvailable(uri_Cstring, @bitCast(versionMajor), @bitCast(versionMinor), qmlName_Cstring, message_str);
    }

    /// ### DEPRECATED: Use `qmlRegisterUncreatableMetaObject` instead
    ///
    pub const QmlRegisterUncreatableMetaObject = qmlRegisterUncreatableMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterUncreatableMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` staticMetaObject: QMetaObject `
    ///
    /// ` uri: [:0]const u8 `
    ///
    /// ` versionMajor: i32 `
    ///
    /// ` versionMinor: i32 `
    ///
    /// ` qmlName: [:0]const u8 `
    ///
    /// ` reason: []const u8 `
    ///
    pub fn qmlRegisterUncreatableMetaObject(staticMetaObject: anytype, uri: [:0]const u8, versionMajor: i32, versionMinor: i32, qmlName: [:0]const u8, reason: []const u8) i32 {
        comptime _ = @TypeOf(staticMetaObject)._is_QMetaObject;
        const uri_Cstring = uri.ptr;
        const qmlName_Cstring = qmlName.ptr;
        const reason_str = qtc.libqt_string{
            .len = reason.len,
            .data = reason.ptr,
        };
        return qtc.qqml_h_QmlRegisterUncreatableMetaObject(@ptrCast(staticMetaObject.ptr), uri_Cstring, @bitCast(versionMajor), @bitCast(versionMinor), qmlName_Cstring, reason_str);
    }

    /// ### DEPRECATED: Use `qmlExecuteDeferred` instead
    ///
    pub const QmlExecuteDeferred = qmlExecuteDeferred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlExecuteDeferred)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    pub fn qmlExecuteDeferred(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.qqml_h_QmlExecuteDeferred(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `qmlContext` instead
    ///
    pub const QmlContext = qmlContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    pub fn qmlContext(param1: anytype) QQmlContext {
        comptime _ = @TypeOf(param1)._is_QObject;
        return .{ .ptr = qtc.qqml_h_QmlContext(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `qmlEngine` instead
    ///
    pub const QmlEngine = qmlEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    pub fn qmlEngine(param1: anytype) QQmlEngine {
        comptime _ = @TypeOf(param1)._is_QObject;
        return .{ .ptr = qtc.qqml_h_QmlEngine(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `qmlAttachedPropertiesFunction` instead
    ///
    pub const QmlAttachedPropertiesFunction = qmlAttachedPropertiesFunction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlAttachedPropertiesFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QMetaObject `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: QObject) callconv(.c) QObject `
    ///
    pub fn qmlAttachedPropertiesFunction(param1: anytype, param2: anytype) ?*const fn (QObject) callconv(.c) QObject {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QMetaObject;
        return @ptrFromInt(@as(usize, @bitCast(qtc.qqml_h_QmlAttachedPropertiesFunction(@ptrCast(param1.ptr), @ptrCast(param2.ptr)))));
    }

    /// ### DEPRECATED: Use `qmlAttachedPropertiesObject` instead
    ///
    pub const QmlAttachedPropertiesObject = qmlAttachedPropertiesObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlAttachedPropertiesObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` func: *const fn (funcparam1: QObject) callconv(.c) QObject `
    ///
    /// ` create: bool `
    ///
    pub fn qmlAttachedPropertiesObject(param1: anytype, func: *const fn (QObject) callconv(.c) QObject, create: bool) QObject {
        comptime _ = @TypeOf(param1)._is_QObject;
        return .{ .ptr = qtc.qqml_h_QmlAttachedPropertiesObject(@ptrCast(param1.ptr), @bitCast(@intFromPtr(func)), create) };
    }

    /// ### DEPRECATED: Use `qmlExtendedObject` instead
    ///
    pub const QmlExtendedObject = qmlExtendedObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlExtendedObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    pub fn qmlExtendedObject(param1: anytype) QObject {
        comptime _ = @TypeOf(param1)._is_QObject;
        return .{ .ptr = qtc.qqml_h_QmlExtendedObject(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `qmlProtectModule` instead
    ///
    pub const QmlProtectModule = qmlProtectModule;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlProtectModule)
    ///
    /// ## Parameter(s):
    ///
    /// ` uri: [:0]const u8 `
    ///
    /// ` majVersion: i32 `
    ///
    pub fn qmlProtectModule(uri: [:0]const u8, majVersion: i32) bool {
        const uri_Cstring = uri.ptr;
        return qtc.qqml_h_QmlProtectModule(uri_Cstring, @bitCast(majVersion));
    }

    /// ### DEPRECATED: Use `qmlRegisterModule` instead
    ///
    pub const QmlRegisterModule = qmlRegisterModule;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterModule)
    ///
    /// ## Parameter(s):
    ///
    /// ` uri: [:0]const u8 `
    ///
    /// ` versionMajor: i32 `
    ///
    /// ` versionMinor: i32 `
    ///
    pub fn qmlRegisterModule(uri: [:0]const u8, versionMajor: i32, versionMinor: i32) void {
        const uri_Cstring = uri.ptr;
        qtc.qqml_h_QmlRegisterModule(uri_Cstring, @bitCast(versionMajor), @bitCast(versionMinor));
    }

    /// ### DEPRECATED: Use `qmlRegisterModuleImport` instead
    ///
    pub const QmlRegisterModuleImport = qmlRegisterModuleImport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterModuleImport)
    ///
    /// ## Parameter(s):
    ///
    /// ` uri: [:0]const u8 `
    ///
    /// ` moduleMajor: i32 `
    ///
    /// ` import: [:0]const u8 `
    ///
    /// ` importMajor: i32 `
    ///
    /// ` importMinor: i32 `
    ///
    pub fn qmlRegisterModuleImport(uri: [:0]const u8, moduleMajor: i32, import: [:0]const u8, importMajor: i32, importMinor: i32) void {
        const uri_Cstring = uri.ptr;
        const import_Cstring = import.ptr;
        qtc.qqml_h_QmlRegisterModuleImport(uri_Cstring, @bitCast(moduleMajor), import_Cstring, @bitCast(importMajor), @bitCast(importMinor));
    }

    /// ### DEPRECATED: Use `qmlUnregisterModuleImport` instead
    ///
    pub const QmlUnregisterModuleImport = qmlUnregisterModuleImport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlUnregisterModuleImport)
    ///
    /// ## Parameter(s):
    ///
    /// ` uri: [:0]const u8 `
    ///
    /// ` moduleMajor: i32 `
    ///
    /// ` import: [:0]const u8 `
    ///
    /// ` importMajor: i32 `
    ///
    /// ` importMinor: i32 `
    ///
    pub fn qmlUnregisterModuleImport(uri: [:0]const u8, moduleMajor: i32, import: [:0]const u8, importMajor: i32, importMinor: i32) void {
        const uri_Cstring = uri.ptr;
        const import_Cstring = import.ptr;
        qtc.qqml_h_QmlUnregisterModuleImport(uri_Cstring, @bitCast(moduleMajor), import_Cstring, @bitCast(importMajor), @bitCast(importMinor));
    }

    /// ### DEPRECATED: Use `qmlRegisterSingletonType` instead
    ///
    pub const QmlRegisterSingletonType = qmlRegisterSingletonType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterSingletonType)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    /// ` uri: [:0]const u8 `
    ///
    /// ` versionMajor: i32 `
    ///
    /// ` versionMinor: i32 `
    ///
    /// ` qmlName: [:0]const u8 `
    ///
    pub fn qmlRegisterSingletonType(url: anytype, uri: [:0]const u8, versionMajor: i32, versionMinor: i32, qmlName: [:0]const u8) i32 {
        comptime _ = @TypeOf(url)._is_QUrl;
        const uri_Cstring = uri.ptr;
        const qmlName_Cstring = qmlName.ptr;
        return qtc.qqml_h_QmlRegisterSingletonType(@ptrCast(url.ptr), uri_Cstring, @bitCast(versionMajor), @bitCast(versionMinor), qmlName_Cstring);
    }

    /// ### DEPRECATED: Use `qmlRegisterType` instead
    ///
    pub const QmlRegisterType = qmlRegisterType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterType)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    /// ` uri: [:0]const u8 `
    ///
    /// ` versionMajor: i32 `
    ///
    /// ` versionMinor: i32 `
    ///
    /// ` qmlName: [:0]const u8 `
    ///
    pub fn qmlRegisterType(url: anytype, uri: [:0]const u8, versionMajor: i32, versionMinor: i32, qmlName: [:0]const u8) i32 {
        comptime _ = @TypeOf(url)._is_QUrl;
        const uri_Cstring = uri.ptr;
        const qmlName_Cstring = qmlName.ptr;
        return qtc.qqml_h_QmlRegisterType(@ptrCast(url.ptr), uri_Cstring, @bitCast(versionMajor), @bitCast(versionMinor), qmlName_Cstring);
    }

    /// ### DEPRECATED: Use `qmlRegisterNamespaceAndRevisions` instead
    ///
    pub const QmlRegisterNamespaceAndRevisions = qmlRegisterNamespaceAndRevisions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterNamespaceAndRevisions)
    ///
    /// ## Parameter(s):
    ///
    /// ` metaObject: QMetaObject `
    ///
    /// ` uri: [:0]const u8 `
    ///
    /// ` versionMajor: i32 `
    ///
    /// ` qmlTypeIds: []i32 `
    ///
    /// ` classInfoMetaObject: QMetaObject `
    ///
    /// ` extensionMetaObject: QMetaObject `
    ///
    pub fn qmlRegisterNamespaceAndRevisions(metaObject: anytype, uri: [:0]const u8, versionMajor: i32, qmlTypeIds: []i32, classInfoMetaObject: anytype, extensionMetaObject: anytype) void {
        comptime _ = @TypeOf(metaObject)._is_QMetaObject;
        const uri_Cstring = uri.ptr;
        const qmlTypeIds_list = qtc.libqt_list{
            .len = qmlTypeIds.len,
            .data = qmlTypeIds.ptr,
        };
        comptime _ = @TypeOf(classInfoMetaObject)._is_QMetaObject;
        comptime _ = @TypeOf(extensionMetaObject)._is_QMetaObject;
        qtc.qqml_h_QmlRegisterNamespaceAndRevisions(@ptrCast(metaObject.ptr), uri_Cstring, @bitCast(versionMajor), qmlTypeIds_list, @ptrCast(classInfoMetaObject.ptr), @ptrCast(extensionMetaObject.ptr));
    }

    /// ### DEPRECATED: Use `qmlRegisterNamespaceAndRevisions2` instead
    ///
    pub const QmlRegisterNamespaceAndRevisions2 = qmlRegisterNamespaceAndRevisions2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterNamespaceAndRevisions)
    ///
    /// ## Parameter(s):
    ///
    /// ` metaObject: QMetaObject `
    ///
    /// ` uri: [:0]const u8 `
    ///
    /// ` versionMajor: i32 `
    ///
    /// ` qmlTypeIds: []i32 `
    ///
    /// ` classInfoMetaObject: QMetaObject `
    ///
    pub fn qmlRegisterNamespaceAndRevisions2(metaObject: anytype, uri: [:0]const u8, versionMajor: i32, qmlTypeIds: []i32, classInfoMetaObject: anytype) void {
        comptime _ = @TypeOf(metaObject)._is_QMetaObject;
        const uri_Cstring = uri.ptr;
        const qmlTypeIds_list = qtc.libqt_list{
            .len = qmlTypeIds.len,
            .data = qmlTypeIds.ptr,
        };
        comptime _ = @TypeOf(classInfoMetaObject)._is_QMetaObject;
        qtc.qqml_h_QmlRegisterNamespaceAndRevisions2(@ptrCast(metaObject.ptr), uri_Cstring, @bitCast(versionMajor), qmlTypeIds_list, @ptrCast(classInfoMetaObject.ptr));
    }

    /// ### DEPRECATED: Use `qmlTypeId` instead
    ///
    pub const QmlTypeId = qmlTypeId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlTypeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` uri: [:0]const u8 `
    ///
    /// ` versionMajor: i32 `
    ///
    /// ` versionMinor: i32 `
    ///
    /// ` qmlName: [:0]const u8 `
    ///
    pub fn qmlTypeId(uri: [:0]const u8, versionMajor: i32, versionMinor: i32, qmlName: [:0]const u8) i32 {
        const uri_Cstring = uri.ptr;
        const qmlName_Cstring = qmlName.ptr;
        return qtc.qqml_h_QmlTypeId(uri_Cstring, @bitCast(versionMajor), @bitCast(versionMinor), qmlName_Cstring);
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqml.html#public-types)
pub const enums = struct {
    pub const QQmlModuleImportSpecialVersions = enum {
        pub const QQmlModuleImportModuleAny: i32 = -1;
        pub const QQmlModuleImportLatest: i32 = -1;
        pub const QQmlModuleImportAuto: i32 = -2;
    };
};
