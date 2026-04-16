const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QCommandLineParser = @import("libqt6").QCommandLineParser;
const QJsonObject = @import("libqt6").QJsonObject;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const kaboutdata_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcrash.html)
pub const KCrash = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcrash.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCrash,

    pub const _is_KCrash = {};

    /// ### [Upstream resources](https://api.kde.org/kcrash.html#defaultCrashHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: i32 `
    ///
    pub fn DefaultCrashHandler(param1: i32) void {
        qtc.KCrash_DefaultCrashHandler(@bitCast(param1));
    }
};

/// ### [Upstream resources](https://api.kde.org/kaboutperson.html)
pub const KAboutPerson = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KAboutPerson,

    pub const _is_KAboutPerson = {};

    /// New constructs a new KAboutPerson object.
    ///
    pub fn New() KAboutPerson {
        return .{ .ptr = qtc.KAboutPerson_new() };
    }

    /// New2 constructs a new KAboutPerson object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KAboutPerson `
    ///
    pub fn New2(other: anytype) KAboutPerson {
        comptime _ = @TypeOf(other)._is_KAboutPerson;
        return .{ .ptr = qtc.KAboutPerson_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new KAboutPerson object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New3(name: []const u8) KAboutPerson {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KAboutPerson_new3(name_str) };
    }

    /// New4 constructs a new KAboutPerson object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` task: []const u8 `
    ///
    pub fn New4(name: []const u8, task: []const u8) KAboutPerson {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };
        return .{ .ptr = qtc.KAboutPerson_new4(name_str, task_str) };
    }

    /// New5 constructs a new KAboutPerson object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` task: []const u8 `
    ///
    /// ` emailAddress: []const u8 `
    ///
    pub fn New5(name: []const u8, task: []const u8, emailAddress: []const u8) KAboutPerson {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = emailAddress.len,
            .data = emailAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutPerson_new5(name_str, task_str, emailAddress_str) };
    }

    /// New6 constructs a new KAboutPerson object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` task: []const u8 `
    ///
    /// ` emailAddress: []const u8 `
    ///
    /// ` webAddress: []const u8 `
    ///
    pub fn New6(name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8) KAboutPerson {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = emailAddress.len,
            .data = emailAddress.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = webAddress.len,
            .data = webAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutPerson_new6(name_str, task_str, emailAddress_str, webAddress_str) };
    }

    /// New7 constructs a new KAboutPerson object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` task: []const u8 `
    ///
    /// ` emailAddress: []const u8 `
    ///
    /// ` webAddress: []const u8 `
    ///
    /// ` avatarUrl: QUrl `
    ///
    pub fn New7(name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8, avatarUrl: anytype) KAboutPerson {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = emailAddress.len,
            .data = emailAddress.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = webAddress.len,
            .data = webAddress.ptr,
        };
        comptime _ = @TypeOf(avatarUrl)._is_QUrl;
        return .{ .ptr = qtc.KAboutPerson_new7(name_str, task_str, emailAddress_str, webAddress_str, @ptrCast(avatarUrl.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutPerson `
    ///
    /// ` other: KAboutPerson `
    ///
    pub fn OperatorAssign(self: KAboutPerson, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KAboutPerson;
        qtc.KAboutPerson_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutPerson `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KAboutPerson, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutPerson_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutperson.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html#task)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutPerson `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Task(self: KAboutPerson, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutPerson_Task(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutperson.Task: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html#emailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutPerson `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EmailAddress(self: KAboutPerson, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutPerson_EmailAddress(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutperson.EmailAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html#webAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutPerson `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WebAddress(self: KAboutPerson, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutPerson_WebAddress(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutperson.WebAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html#avatarUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutPerson `
    ///
    pub fn AvatarUrl(self: KAboutPerson) QUrl {
        return .{ .ptr = qtc.KAboutPerson_AvatarUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html#fromJSON)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QJsonObject `
    ///
    pub fn FromJSON(obj: anytype) KAboutPerson {
        comptime _ = @TypeOf(obj)._is_QJsonObject;
        return .{ .ptr = qtc.KAboutPerson_FromJSON(@ptrCast(obj.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html#dtor.KAboutPerson)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KAboutPerson `
    ///
    pub fn Delete(self: KAboutPerson) void {
        qtc.KAboutPerson_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kaboutlicense.html)
pub const KAboutLicense = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kaboutlicense.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KAboutLicense,

    pub const _is_KAboutLicense = {};

    /// New constructs a new KAboutLicense object.
    ///
    pub fn New() KAboutLicense {
        return .{ .ptr = qtc.KAboutLicense_new() };
    }

    /// New2 constructs a new KAboutLicense object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KAboutLicense `
    ///
    pub fn New2(other: anytype) KAboutLicense {
        comptime _ = @TypeOf(other)._is_KAboutLicense;
        return .{ .ptr = qtc.KAboutLicense_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutlicense.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutLicense `
    ///
    /// ` other: KAboutLicense `
    ///
    pub fn OperatorAssign(self: KAboutLicense, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KAboutLicense;
        qtc.KAboutLicense_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutlicense.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutLicense `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KAboutLicense, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutLicense_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutlicense.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutlicense.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutLicense `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KAboutLicense, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutLicense_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutlicense.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutlicense.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutLicense `
    ///
    /// ## Returns:
    ///
    /// ` kaboutdata_enums.LicenseKey `
    ///
    pub fn Key(self: KAboutLicense) i32 {
        return qtc.KAboutLicense_Key(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutlicense.html#spdx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutLicense `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Spdx(self: KAboutLicense, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutLicense_Spdx(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutlicense.Spdx: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutlicense.html#byKeyword)
    ///
    /// ## Parameter(s):
    ///
    /// ` keyword: []const u8 `
    ///
    pub fn ByKeyword(keyword: []const u8) KAboutLicense {
        const keyword_str = qtc.libqt_string{
            .len = keyword.len,
            .data = keyword.ptr,
        };
        return .{ .ptr = qtc.KAboutLicense_ByKeyword(keyword_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutlicense.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutLicense `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` formatName: kaboutdata_enums.NameFormat `
    ///
    pub fn Name1(self: KAboutLicense, allocator: std.mem.Allocator, formatName: i32) []const u8 {
        var _str = qtc.KAboutLicense_Name1(@ptrCast(self.ptr), @bitCast(formatName));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutlicense.Name1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kaboutlicense.html#dtor.KAboutLicense)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KAboutLicense `
    ///
    pub fn Delete(self: KAboutLicense) void {
        qtc.KAboutLicense_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kaboutcomponent.html)
pub const KAboutComponent = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kaboutcomponent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KAboutComponent,

    pub const _is_KAboutComponent = {};

    /// New constructs a new KAboutComponent object.
    ///
    pub fn New() KAboutComponent {
        return .{ .ptr = qtc.KAboutComponent_new() };
    }

    /// New2 constructs a new KAboutComponent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    /// ` webAddress: []const u8 `
    ///
    /// ` pathToLicenseFile: []const u8 `
    ///
    pub fn New2(name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8, pathToLicenseFile: []const u8) KAboutComponent {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = webAddress.len,
            .data = webAddress.ptr,
        };
        const pathToLicenseFile_str = qtc.libqt_string{
            .len = pathToLicenseFile.len,
            .data = pathToLicenseFile.ptr,
        };
        return .{ .ptr = qtc.KAboutComponent_new2(name_str, description_str, version_str, webAddress_str, pathToLicenseFile_str) };
    }

    /// New3 constructs a new KAboutComponent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KAboutComponent `
    ///
    pub fn New3(other: anytype) KAboutComponent {
        comptime _ = @TypeOf(other)._is_KAboutComponent;
        return .{ .ptr = qtc.KAboutComponent_new3(@ptrCast(other.ptr)) };
    }

    /// New4 constructs a new KAboutComponent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New4(name: []const u8) KAboutComponent {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KAboutComponent_new4(name_str) };
    }

    /// New5 constructs a new KAboutComponent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    pub fn New5(name: []const u8, description: []const u8) KAboutComponent {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        return .{ .ptr = qtc.KAboutComponent_new5(name_str, description_str) };
    }

    /// New6 constructs a new KAboutComponent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn New6(name: []const u8, description: []const u8, version: []const u8) KAboutComponent {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return .{ .ptr = qtc.KAboutComponent_new6(name_str, description_str, version_str) };
    }

    /// New7 constructs a new KAboutComponent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    /// ` webAddress: []const u8 `
    ///
    pub fn New7(name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8) KAboutComponent {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = webAddress.len,
            .data = webAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutComponent_new7(name_str, description_str, version_str, webAddress_str) };
    }

    /// New8 constructs a new KAboutComponent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    /// ` webAddress: []const u8 `
    ///
    /// ` licenseType: kaboutdata_enums.LicenseKey `
    ///
    pub fn New8(name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8, licenseType: i32) KAboutComponent {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = webAddress.len,
            .data = webAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutComponent_new8(name_str, description_str, version_str, webAddress_str, @bitCast(licenseType)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutcomponent.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutComponent `
    ///
    /// ` other: KAboutComponent `
    ///
    pub fn OperatorAssign(self: KAboutComponent, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KAboutComponent;
        qtc.KAboutComponent_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutcomponent.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KAboutComponent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutComponent_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutcomponent.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutcomponent.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: KAboutComponent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutComponent_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutcomponent.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutcomponent.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Version(self: KAboutComponent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutComponent_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutcomponent.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutcomponent.html#webAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WebAddress(self: KAboutComponent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutComponent_WebAddress(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutcomponent.WebAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutcomponent.html#license)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutComponent `
    ///
    pub fn License(self: KAboutComponent) KAboutLicense {
        return .{ .ptr = qtc.KAboutComponent_License(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kaboutcomponent.html#dtor.KAboutComponent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KAboutComponent `
    ///
    pub fn Delete(self: KAboutComponent) void {
        qtc.KAboutComponent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kaboutdata.html)
pub const KAboutData = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KAboutData,

    pub const _is_KAboutData = {};

    /// New constructs a new KAboutData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` displayName: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    /// ` shortDescription: []const u8 `
    ///
    /// ` licenseType: kaboutdata_enums.LicenseKey `
    ///
    pub fn New(componentName: []const u8, displayName: []const u8, version: []const u8, shortDescription: []const u8, licenseType: i32) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        const shortDescription_str = qtc.libqt_string{
            .len = shortDescription.len,
            .data = shortDescription.ptr,
        };
        return .{ .ptr = qtc.KAboutData_new(componentName_str, displayName_str, version_str, shortDescription_str, @bitCast(licenseType)) };
    }

    /// New2 constructs a new KAboutData object.
    ///
    pub fn New2() KAboutData {
        return .{ .ptr = qtc.KAboutData_new2() };
    }

    /// New3 constructs a new KAboutData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KAboutData `
    ///
    pub fn New3(other: anytype) KAboutData {
        comptime _ = @TypeOf(other)._is_KAboutData;
        return .{ .ptr = qtc.KAboutData_new3(@ptrCast(other.ptr)) };
    }

    /// New4 constructs a new KAboutData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` displayName: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    /// ` shortDescription: []const u8 `
    ///
    /// ` licenseType: kaboutdata_enums.LicenseKey `
    ///
    /// ` copyrightStatement: []const u8 `
    ///
    pub fn New4(componentName: []const u8, displayName: []const u8, version: []const u8, shortDescription: []const u8, licenseType: i32, copyrightStatement: []const u8) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        const shortDescription_str = qtc.libqt_string{
            .len = shortDescription.len,
            .data = shortDescription.ptr,
        };
        const copyrightStatement_str = qtc.libqt_string{
            .len = copyrightStatement.len,
            .data = copyrightStatement.ptr,
        };
        return .{ .ptr = qtc.KAboutData_new4(componentName_str, displayName_str, version_str, shortDescription_str, @bitCast(licenseType), copyrightStatement_str) };
    }

    /// New5 constructs a new KAboutData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` displayName: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    /// ` shortDescription: []const u8 `
    ///
    /// ` licenseType: kaboutdata_enums.LicenseKey `
    ///
    /// ` copyrightStatement: []const u8 `
    ///
    /// ` otherText: []const u8 `
    ///
    pub fn New5(componentName: []const u8, displayName: []const u8, version: []const u8, shortDescription: []const u8, licenseType: i32, copyrightStatement: []const u8, otherText: []const u8) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        const shortDescription_str = qtc.libqt_string{
            .len = shortDescription.len,
            .data = shortDescription.ptr,
        };
        const copyrightStatement_str = qtc.libqt_string{
            .len = copyrightStatement.len,
            .data = copyrightStatement.ptr,
        };
        const otherText_str = qtc.libqt_string{
            .len = otherText.len,
            .data = otherText.ptr,
        };
        return .{ .ptr = qtc.KAboutData_new5(componentName_str, displayName_str, version_str, shortDescription_str, @bitCast(licenseType), copyrightStatement_str, otherText_str) };
    }

    /// New6 constructs a new KAboutData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` displayName: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    /// ` shortDescription: []const u8 `
    ///
    /// ` licenseType: kaboutdata_enums.LicenseKey `
    ///
    /// ` copyrightStatement: []const u8 `
    ///
    /// ` otherText: []const u8 `
    ///
    /// ` homePageAddress: []const u8 `
    ///
    pub fn New6(componentName: []const u8, displayName: []const u8, version: []const u8, shortDescription: []const u8, licenseType: i32, copyrightStatement: []const u8, otherText: []const u8, homePageAddress: []const u8) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        const shortDescription_str = qtc.libqt_string{
            .len = shortDescription.len,
            .data = shortDescription.ptr,
        };
        const copyrightStatement_str = qtc.libqt_string{
            .len = copyrightStatement.len,
            .data = copyrightStatement.ptr,
        };
        const otherText_str = qtc.libqt_string{
            .len = otherText.len,
            .data = otherText.ptr,
        };
        const homePageAddress_str = qtc.libqt_string{
            .len = homePageAddress.len,
            .data = homePageAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_new6(componentName_str, displayName_str, version_str, shortDescription_str, @bitCast(licenseType), copyrightStatement_str, otherText_str, homePageAddress_str) };
    }

    /// New7 constructs a new KAboutData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` displayName: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    /// ` shortDescription: []const u8 `
    ///
    /// ` licenseType: kaboutdata_enums.LicenseKey `
    ///
    /// ` copyrightStatement: []const u8 `
    ///
    /// ` otherText: []const u8 `
    ///
    /// ` homePageAddress: []const u8 `
    ///
    /// ` bugAddress: []const u8 `
    ///
    pub fn New7(componentName: []const u8, displayName: []const u8, version: []const u8, shortDescription: []const u8, licenseType: i32, copyrightStatement: []const u8, otherText: []const u8, homePageAddress: []const u8, bugAddress: []const u8) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        const shortDescription_str = qtc.libqt_string{
            .len = shortDescription.len,
            .data = shortDescription.ptr,
        };
        const copyrightStatement_str = qtc.libqt_string{
            .len = copyrightStatement.len,
            .data = copyrightStatement.ptr,
        };
        const otherText_str = qtc.libqt_string{
            .len = otherText.len,
            .data = otherText.ptr,
        };
        const homePageAddress_str = qtc.libqt_string{
            .len = homePageAddress.len,
            .data = homePageAddress.ptr,
        };
        const bugAddress_str = qtc.libqt_string{
            .len = bugAddress.len,
            .data = bugAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_new7(componentName_str, displayName_str, version_str, shortDescription_str, @bitCast(licenseType), copyrightStatement_str, otherText_str, homePageAddress_str, bugAddress_str) };
    }

    /// New8 constructs a new KAboutData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` componentName: []const u8 `
    ///
    pub fn New8(componentName: []const u8) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        return .{ .ptr = qtc.KAboutData_new8(componentName_str) };
    }

    /// New9 constructs a new KAboutData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` displayName: []const u8 `
    ///
    pub fn New9(componentName: []const u8, displayName: []const u8) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        return .{ .ptr = qtc.KAboutData_new9(componentName_str, displayName_str) };
    }

    /// New10 constructs a new KAboutData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` displayName: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn New10(componentName: []const u8, displayName: []const u8, version: []const u8) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return .{ .ptr = qtc.KAboutData_new10(componentName_str, displayName_str, version_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#applicationData)
    ///
    pub fn ApplicationData() KAboutData {
        return .{ .ptr = qtc.KAboutData_ApplicationData() };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setApplicationData)
    ///
    /// ## Parameter(s):
    ///
    /// ` aboutData: KAboutData `
    ///
    pub fn SetApplicationData(aboutData: anytype) void {
        comptime _ = @TypeOf(aboutData)._is_KAboutData;
        qtc.KAboutData_SetApplicationData(@ptrCast(aboutData.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` other: KAboutData `
    ///
    pub fn OperatorAssign(self: KAboutData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KAboutData;
        qtc.KAboutData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` author: KAboutPerson `
    ///
    pub fn AddAuthor(self: KAboutData, author: anytype) KAboutData {
        comptime _ = @TypeOf(author)._is_KAboutPerson;
        return .{ .ptr = qtc.KAboutData_AddAuthor(@ptrCast(self.ptr), @ptrCast(author.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn AddAuthor2(self: KAboutData, name: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddAuthor2(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` task: []const u8 `
    ///
    /// ` emailAddress: []const u8 `
    ///
    /// ` webAddress: []const u8 `
    ///
    /// ` kdeStoreUsername: []const u8 `
    ///
    pub fn AddAuthor3(self: KAboutData, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8, kdeStoreUsername: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = emailAddress.len,
            .data = emailAddress.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = webAddress.len,
            .data = webAddress.ptr,
        };
        const kdeStoreUsername_str = qtc.libqt_string{
            .len = kdeStoreUsername.len,
            .data = kdeStoreUsername.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddAuthor3(@ptrCast(self.ptr), name_str, task_str, emailAddress_str, webAddress_str, kdeStoreUsername_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addCredit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` person: KAboutPerson `
    ///
    pub fn AddCredit(self: KAboutData, person: anytype) KAboutData {
        comptime _ = @TypeOf(person)._is_KAboutPerson;
        return .{ .ptr = qtc.KAboutData_AddCredit(@ptrCast(self.ptr), @ptrCast(person.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addCredit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn AddCredit2(self: KAboutData, name: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddCredit2(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addCredit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` task: []const u8 `
    ///
    /// ` emailAddress: []const u8 `
    ///
    /// ` webAddress: []const u8 `
    ///
    /// ` kdeStoreUsername: []const u8 `
    ///
    pub fn AddCredit3(self: KAboutData, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8, kdeStoreUsername: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = emailAddress.len,
            .data = emailAddress.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = webAddress.len,
            .data = webAddress.ptr,
        };
        const kdeStoreUsername_str = qtc.libqt_string{
            .len = kdeStoreUsername.len,
            .data = kdeStoreUsername.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddCredit3(@ptrCast(self.ptr), name_str, task_str, emailAddress_str, webAddress_str, kdeStoreUsername_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setTranslator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` emailAddress: []const u8 `
    ///
    pub fn SetTranslator(self: KAboutData, name: []const u8, emailAddress: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = emailAddress.len,
            .data = emailAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetTranslator(@ptrCast(self.ptr), name_str, emailAddress_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addComponent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` component: KAboutComponent `
    ///
    pub fn AddComponent(self: KAboutData, component: anytype) KAboutData {
        comptime _ = @TypeOf(component)._is_KAboutComponent;
        return .{ .ptr = qtc.KAboutData_AddComponent(@ptrCast(self.ptr), @ptrCast(component.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addComponent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn AddComponent2(self: KAboutData, name: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddComponent2(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addComponent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    /// ` webAddress: []const u8 `
    ///
    /// ` pathToLicenseFile: []const u8 `
    ///
    pub fn AddComponent3(self: KAboutData, name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8, pathToLicenseFile: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = webAddress.len,
            .data = webAddress.ptr,
        };
        const pathToLicenseFile_str = qtc.libqt_string{
            .len = pathToLicenseFile.len,
            .data = pathToLicenseFile.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddComponent3(@ptrCast(self.ptr), name_str, description_str, version_str, webAddress_str, pathToLicenseFile_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setLicenseText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` license: []const u8 `
    ///
    pub fn SetLicenseText(self: KAboutData, license: []const u8) KAboutData {
        const license_str = qtc.libqt_string{
            .len = license.len,
            .data = license.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetLicenseText(@ptrCast(self.ptr), license_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addLicenseText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` license: []const u8 `
    ///
    pub fn AddLicenseText(self: KAboutData, license: []const u8) KAboutData {
        const license_str = qtc.libqt_string{
            .len = license.len,
            .data = license.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddLicenseText(@ptrCast(self.ptr), license_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setLicenseTextFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SetLicenseTextFile(self: KAboutData, file: []const u8) KAboutData {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetLicenseTextFile(@ptrCast(self.ptr), file_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addLicenseTextFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` file: []const u8 `
    ///
    pub fn AddLicenseTextFile(self: KAboutData, file: []const u8) KAboutData {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddLicenseTextFile(@ptrCast(self.ptr), file_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setComponentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` componentName: []const u8 `
    ///
    pub fn SetComponentName(self: KAboutData, componentName: []const u8) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetComponentName(@ptrCast(self.ptr), componentName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` displayName: []const u8 `
    ///
    pub fn SetDisplayName(self: KAboutData, displayName: []const u8) KAboutData {
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetDisplayName(@ptrCast(self.ptr), displayName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setProgramLogo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` image: QVariant `
    ///
    pub fn SetProgramLogo(self: KAboutData, image: anytype) KAboutData {
        comptime _ = @TypeOf(image)._is_QVariant;
        return .{ .ptr = qtc.KAboutData_SetProgramLogo(@ptrCast(self.ptr), @ptrCast(image.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` version: []u8 `
    ///
    pub fn SetVersion(self: KAboutData, version: []u8) KAboutData {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetVersion(@ptrCast(self.ptr), version_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setShortDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` shortDescription: []const u8 `
    ///
    pub fn SetShortDescription(self: KAboutData, shortDescription: []const u8) KAboutData {
        const shortDescription_str = qtc.libqt_string{
            .len = shortDescription.len,
            .data = shortDescription.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetShortDescription(@ptrCast(self.ptr), shortDescription_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setLicense)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` licenseKey: kaboutdata_enums.LicenseKey `
    ///
    pub fn SetLicense(self: KAboutData, licenseKey: i32) KAboutData {
        return .{ .ptr = qtc.KAboutData_SetLicense(@ptrCast(self.ptr), @bitCast(licenseKey)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setLicense)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` licenseKey: kaboutdata_enums.LicenseKey `
    ///
    /// ` versionRestriction: kaboutdata_enums.VersionRestriction `
    ///
    pub fn SetLicense2(self: KAboutData, licenseKey: i32, versionRestriction: i32) KAboutData {
        return .{ .ptr = qtc.KAboutData_SetLicense2(@ptrCast(self.ptr), @bitCast(licenseKey), @bitCast(versionRestriction)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addLicense)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` licenseKey: kaboutdata_enums.LicenseKey `
    ///
    pub fn AddLicense(self: KAboutData, licenseKey: i32) KAboutData {
        return .{ .ptr = qtc.KAboutData_AddLicense(@ptrCast(self.ptr), @bitCast(licenseKey)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addLicense)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` licenseKey: kaboutdata_enums.LicenseKey `
    ///
    /// ` versionRestriction: kaboutdata_enums.VersionRestriction `
    ///
    pub fn AddLicense2(self: KAboutData, licenseKey: i32, versionRestriction: i32) KAboutData {
        return .{ .ptr = qtc.KAboutData_AddLicense2(@ptrCast(self.ptr), @bitCast(licenseKey), @bitCast(versionRestriction)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setCopyrightStatement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` copyrightStatement: []const u8 `
    ///
    pub fn SetCopyrightStatement(self: KAboutData, copyrightStatement: []const u8) KAboutData {
        const copyrightStatement_str = qtc.libqt_string{
            .len = copyrightStatement.len,
            .data = copyrightStatement.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetCopyrightStatement(@ptrCast(self.ptr), copyrightStatement_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setOtherText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` otherText: []const u8 `
    ///
    pub fn SetOtherText(self: KAboutData, otherText: []const u8) KAboutData {
        const otherText_str = qtc.libqt_string{
            .len = otherText.len,
            .data = otherText.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetOtherText(@ptrCast(self.ptr), otherText_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setHomepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` homepage: []const u8 `
    ///
    pub fn SetHomepage(self: KAboutData, homepage: []const u8) KAboutData {
        const homepage_str = qtc.libqt_string{
            .len = homepage.len,
            .data = homepage.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetHomepage(@ptrCast(self.ptr), homepage_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setBugAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` bugAddress: []u8 `
    ///
    pub fn SetBugAddress(self: KAboutData, bugAddress: []u8) KAboutData {
        const bugAddress_str = qtc.libqt_string{
            .len = bugAddress.len,
            .data = bugAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetBugAddress(@ptrCast(self.ptr), bugAddress_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setOrganizationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` domain: []u8 `
    ///
    pub fn SetOrganizationDomain(self: KAboutData, domain: []u8) KAboutData {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetOrganizationDomain(@ptrCast(self.ptr), domain_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setProductName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []u8 `
    ///
    pub fn SetProductName(self: KAboutData, name: []u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetProductName(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#componentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ComponentName(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#productName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProductName(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_ProductName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.ProductName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#internalProductName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    pub fn InternalProductName(self: KAboutData) [:0]const u8 {
        const _ret = qtc.KAboutData_InternalProductName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#organizationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OrganizationDomain(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_OrganizationDomain(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.OrganizationDomain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#internalProgramName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    pub fn InternalProgramName(self: KAboutData) [:0]const u8 {
        const _ret = qtc.KAboutData_InternalProgramName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#programLogo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    pub fn ProgramLogo(self: KAboutData) QVariant {
        return .{ .ptr = qtc.KAboutData_ProgramLogo(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Version(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#internalVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    pub fn InternalVersion(self: KAboutData) [:0]const u8 {
        const _ret = qtc.KAboutData_InternalVersion(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#shortDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ShortDescription(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_ShortDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.ShortDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#homepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Homepage(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_Homepage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.Homepage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#bugAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BugAddress(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_BugAddress(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.BugAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#internalBugAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    pub fn InternalBugAddress(self: KAboutData) [:0]const u8 {
        const _ret = qtc.KAboutData_InternalBugAddress(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#authors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Authors(self: KAboutData, allocator: std.mem.Allocator) []KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KAboutData_Authors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAboutPerson, _arr.len) catch @panic("kaboutdata.Authors: Memory allocation failed");
        const _data: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#credits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Credits(self: KAboutData, allocator: std.mem.Allocator) []KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KAboutData_Credits(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAboutPerson, _arr.len) catch @panic("kaboutdata.Credits: Memory allocation failed");
        const _data: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#translators)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Translators(self: KAboutData, allocator: std.mem.Allocator) []KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KAboutData_Translators(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAboutPerson, _arr.len) catch @panic("kaboutdata.Translators: Memory allocation failed");
        const _data: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#aboutTranslationTeam)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AboutTranslationTeam(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_AboutTranslationTeam();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.AboutTranslationTeam: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#components)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Components(self: KAboutData, allocator: std.mem.Allocator) []KAboutComponent {
        const _arr: qtc.libqt_list = qtc.KAboutData_Components(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAboutComponent, _arr.len) catch @panic("kaboutdata.Components: Memory allocation failed");
        const _data: [*]QtC.KAboutComponent = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#otherText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OtherText(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_OtherText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.OtherText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#licenses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Licenses(self: KAboutData, allocator: std.mem.Allocator) []KAboutLicense {
        const _arr: qtc.libqt_list = qtc.KAboutData_Licenses(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAboutLicense, _arr.len) catch @panic("kaboutdata.Licenses: Memory allocation failed");
        const _data: [*]QtC.KAboutLicense = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#copyrightStatement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CopyrightStatement(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_CopyrightStatement(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.CopyrightStatement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#customAuthorPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CustomAuthorPlainText(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_CustomAuthorPlainText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.CustomAuthorPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#customAuthorRichText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CustomAuthorRichText(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_CustomAuthorRichText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.CustomAuthorRichText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#customAuthorTextEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    pub fn CustomAuthorTextEnabled(self: KAboutData) bool {
        return qtc.KAboutData_CustomAuthorTextEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setCustomAuthorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` plainText: []const u8 `
    ///
    /// ` richText: []const u8 `
    ///
    pub fn SetCustomAuthorText(self: KAboutData, plainText: []const u8, richText: []const u8) KAboutData {
        const plainText_str = qtc.libqt_string{
            .len = plainText.len,
            .data = plainText.ptr,
        };
        const richText_str = qtc.libqt_string{
            .len = richText.len,
            .data = richText.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetCustomAuthorText(@ptrCast(self.ptr), plainText_str, richText_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#unsetCustomAuthorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    pub fn UnsetCustomAuthorText(self: KAboutData) KAboutData {
        return .{ .ptr = qtc.KAboutData_UnsetCustomAuthorText(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setupCommandLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` parser: QCommandLineParser `
    ///
    pub fn SetupCommandLine(self: KAboutData, parser: anytype) bool {
        comptime _ = @TypeOf(parser)._is_QCommandLineParser;
        return qtc.KAboutData_SetupCommandLine(@ptrCast(self.ptr), @ptrCast(parser.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#processCommandLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` parser: QCommandLineParser `
    ///
    pub fn ProcessCommandLine(self: KAboutData, parser: anytype) void {
        comptime _ = @TypeOf(parser)._is_QCommandLineParser;
        qtc.KAboutData_ProcessCommandLine(@ptrCast(self.ptr), @ptrCast(parser.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setDesktopFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` desktopFileName: []const u8 `
    ///
    pub fn SetDesktopFileName(self: KAboutData, desktopFileName: []const u8) KAboutData {
        const desktopFileName_str = qtc.libqt_string{
            .len = desktopFileName.len,
            .data = desktopFileName.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetDesktopFileName(@ptrCast(self.ptr), desktopFileName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#desktopFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DesktopFileName(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_DesktopFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.DesktopFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` task: []const u8 `
    ///
    pub fn AddAuthor22(self: KAboutData, name: []const u8, task: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddAuthor22(@ptrCast(self.ptr), name_str, task_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` task: []const u8 `
    ///
    /// ` emailAddress: []const u8 `
    ///
    pub fn AddAuthor32(self: KAboutData, name: []const u8, task: []const u8, emailAddress: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = emailAddress.len,
            .data = emailAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddAuthor32(@ptrCast(self.ptr), name_str, task_str, emailAddress_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` task: []const u8 `
    ///
    /// ` emailAddress: []const u8 `
    ///
    /// ` webAddress: []const u8 `
    ///
    pub fn AddAuthor4(self: KAboutData, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = emailAddress.len,
            .data = emailAddress.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = webAddress.len,
            .data = webAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddAuthor4(@ptrCast(self.ptr), name_str, task_str, emailAddress_str, webAddress_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` task: []const u8 `
    ///
    /// ` emailAddress: []const u8 `
    ///
    /// ` webAddress: []const u8 `
    ///
    /// ` avatarUrl: QUrl `
    ///
    pub fn AddAuthor5(self: KAboutData, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8, avatarUrl: anytype) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = emailAddress.len,
            .data = emailAddress.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = webAddress.len,
            .data = webAddress.ptr,
        };
        comptime _ = @TypeOf(avatarUrl)._is_QUrl;
        return .{ .ptr = qtc.KAboutData_AddAuthor5(@ptrCast(self.ptr), name_str, task_str, emailAddress_str, webAddress_str, @ptrCast(avatarUrl.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addCredit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` task: []const u8 `
    ///
    pub fn AddCredit22(self: KAboutData, name: []const u8, task: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddCredit22(@ptrCast(self.ptr), name_str, task_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addCredit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` task: []const u8 `
    ///
    /// ` emailAddress: []const u8 `
    ///
    pub fn AddCredit32(self: KAboutData, name: []const u8, task: []const u8, emailAddress: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = emailAddress.len,
            .data = emailAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddCredit32(@ptrCast(self.ptr), name_str, task_str, emailAddress_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addCredit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` task: []const u8 `
    ///
    /// ` emailAddress: []const u8 `
    ///
    /// ` webAddress: []const u8 `
    ///
    pub fn AddCredit4(self: KAboutData, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = emailAddress.len,
            .data = emailAddress.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = webAddress.len,
            .data = webAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddCredit4(@ptrCast(self.ptr), name_str, task_str, emailAddress_str, webAddress_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addCredit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` task: []const u8 `
    ///
    /// ` emailAddress: []const u8 `
    ///
    /// ` webAddress: []const u8 `
    ///
    /// ` avatarUrl: QUrl `
    ///
    pub fn AddCredit5(self: KAboutData, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8, avatarUrl: anytype) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = emailAddress.len,
            .data = emailAddress.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = webAddress.len,
            .data = webAddress.ptr,
        };
        comptime _ = @TypeOf(avatarUrl)._is_QUrl;
        return .{ .ptr = qtc.KAboutData_AddCredit5(@ptrCast(self.ptr), name_str, task_str, emailAddress_str, webAddress_str, @ptrCast(avatarUrl.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addComponent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    pub fn AddComponent22(self: KAboutData, name: []const u8, description: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddComponent22(@ptrCast(self.ptr), name_str, description_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addComponent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn AddComponent32(self: KAboutData, name: []const u8, description: []const u8, version: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddComponent32(@ptrCast(self.ptr), name_str, description_str, version_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addComponent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    /// ` webAddress: []const u8 `
    ///
    pub fn AddComponent4(self: KAboutData, name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = webAddress.len,
            .data = webAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddComponent4(@ptrCast(self.ptr), name_str, description_str, version_str, webAddress_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addComponent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    /// ` webAddress: []const u8 `
    ///
    /// ` licenseKey: kaboutdata_enums.LicenseKey `
    ///
    pub fn AddComponent5(self: KAboutData, name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8, licenseKey: i32) KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = webAddress.len,
            .data = webAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddComponent5(@ptrCast(self.ptr), name_str, description_str, version_str, webAddress_str, @bitCast(licenseKey)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#dtor.KAboutData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KAboutData `
    ///
    pub fn Delete(self: KAboutData) void {
        qtc.KAboutData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kaboutdata.html#public-types)
pub const enums = struct {
    pub const LicenseKey = enum(i32) {
        pub const Custom: i32 = -2;
        pub const File: i32 = -1;
        pub const Unknown: i32 = 0;
        pub const GPL: i32 = 1;
        pub const GPL_V2: i32 = 1;
        pub const LGPL: i32 = 2;
        pub const LGPL_V2: i32 = 2;
        pub const BSDL: i32 = 3;
        pub const BSD_2_Clause: i32 = 3;
        pub const Artistic: i32 = 4;
        pub const GPL_V3: i32 = 5;
        pub const LGPL_V3: i32 = 6;
        pub const LGPL_V2_1: i32 = 7;
        pub const MIT: i32 = 8;
        pub const ODbL_V1: i32 = 9;
        pub const Apache_V2: i32 = 10;
        pub const FTL: i32 = 11;
        pub const BSL_V1: i32 = 12;
        pub const BSD_3_Clause: i32 = 13;
        pub const CC0_V1: i32 = 14;
        pub const MPL_V2: i32 = 15;
    };

    pub const NameFormat = enum(i32) {
        pub const ShortName: i32 = 0;
        pub const FullName: i32 = 1;
    };

    pub const VersionRestriction = enum(i32) {
        pub const OnlyThisVersion: i32 = 0;
        pub const OrLaterVersions: i32 = 1;
    };
};
