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

    /// ### DEPRECATED: Use `defaultCrashHandler` instead
    ///
    pub const DefaultCrashHandler = defaultCrashHandler;

    /// ### [Upstream resources](https://api.kde.org/kcrash.html#defaultCrashHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` sig: i32 `
    ///
    pub fn defaultCrashHandler(sig: i32) void {
        qtc.KCrash_DefaultCrashHandler(@bitCast(sig));
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KAboutPerson object in C++ memory
    ///
    pub fn new() KAboutPerson {
        return .{ .ptr = qtc.KAboutPerson_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KAboutPerson object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KAboutPerson `
    ///
    pub fn new2(other: anytype) KAboutPerson {
        comptime _ = @TypeOf(other)._is_KAboutPerson;
        return .{ .ptr = qtc.KAboutPerson_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KAboutPerson object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new3(_name: []const u8) KAboutPerson {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KAboutPerson_new3(name_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KAboutPerson object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _task: []const u8 `
    ///
    pub fn new4(_name: []const u8, _task: []const u8) KAboutPerson {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = _task.len,
            .data = _task.ptr,
        };
        return .{ .ptr = qtc.KAboutPerson_new4(name_str, task_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KAboutPerson object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _task: []const u8 `
    ///
    /// ` _emailAddress: []const u8 `
    ///
    pub fn new5(_name: []const u8, _task: []const u8, _emailAddress: []const u8) KAboutPerson {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = _task.len,
            .data = _task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = _emailAddress.len,
            .data = _emailAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutPerson_new5(name_str, task_str, emailAddress_str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new KAboutPerson object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _task: []const u8 `
    ///
    /// ` _emailAddress: []const u8 `
    ///
    /// ` _webAddress: []const u8 `
    ///
    pub fn new6(_name: []const u8, _task: []const u8, _emailAddress: []const u8, _webAddress: []const u8) KAboutPerson {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = _task.len,
            .data = _task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = _emailAddress.len,
            .data = _emailAddress.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = _webAddress.len,
            .data = _webAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutPerson_new6(name_str, task_str, emailAddress_str, webAddress_str) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new KAboutPerson object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _task: []const u8 `
    ///
    /// ` _emailAddress: []const u8 `
    ///
    /// ` _webAddress: []const u8 `
    ///
    /// ` _avatarUrl: QUrl `
    ///
    pub fn new7(_name: []const u8, _task: []const u8, _emailAddress: []const u8, _webAddress: []const u8, _avatarUrl: anytype) KAboutPerson {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = _task.len,
            .data = _task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = _emailAddress.len,
            .data = _emailAddress.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = _webAddress.len,
            .data = _webAddress.ptr,
        };
        comptime _ = @TypeOf(_avatarUrl)._is_QUrl;
        return .{ .ptr = qtc.KAboutPerson_new7(name_str, task_str, emailAddress_str, webAddress_str, @ptrCast(_avatarUrl.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutPerson `
    ///
    /// ` other: KAboutPerson `
    ///
    pub fn operatorAssign(self: KAboutPerson, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KAboutPerson;
        qtc.KAboutPerson_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutPerson `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KAboutPerson, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutPerson_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutPerson.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `task` instead
    ///
    pub const Task = task;

    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html#task)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutPerson `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn task(self: KAboutPerson, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutPerson_Task(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutPerson.task: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `emailAddress` instead
    ///
    pub const EmailAddress = emailAddress;

    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html#emailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutPerson `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn emailAddress(self: KAboutPerson, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutPerson_EmailAddress(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutPerson.emailAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `webAddress` instead
    ///
    pub const WebAddress = webAddress;

    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html#webAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutPerson `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn webAddress(self: KAboutPerson, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutPerson_WebAddress(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutPerson.webAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `avatarUrl` instead
    ///
    pub const AvatarUrl = avatarUrl;

    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html#avatarUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutPerson `
    ///
    pub fn avatarUrl(self: KAboutPerson) QUrl {
        return .{ .ptr = qtc.KAboutPerson_AvatarUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fromJSON` instead
    ///
    pub const FromJSON = fromJSON;

    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html#fromJSON)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QJsonObject `
    ///
    pub fn fromJSON(obj: anytype) KAboutPerson {
        comptime _ = @TypeOf(obj)._is_QJsonObject;
        return .{ .ptr = qtc.KAboutPerson_FromJSON(@ptrCast(obj.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kaboutperson.html#dtor.KAboutPerson)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KAboutPerson `
    ///
    pub fn delete(self: KAboutPerson) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KAboutLicense object in C++ memory
    ///
    pub fn new() KAboutLicense {
        return .{ .ptr = qtc.KAboutLicense_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KAboutLicense object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KAboutLicense `
    ///
    pub fn new2(other: anytype) KAboutLicense {
        comptime _ = @TypeOf(other)._is_KAboutLicense;
        return .{ .ptr = qtc.KAboutLicense_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kaboutlicense.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutLicense `
    ///
    /// ` other: KAboutLicense `
    ///
    pub fn operatorAssign(self: KAboutLicense, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KAboutLicense;
        qtc.KAboutLicense_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://api.kde.org/kaboutlicense.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutLicense `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: KAboutLicense, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutLicense_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutLicense.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kaboutlicense.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutLicense `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KAboutLicense, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutLicense_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutLicense.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

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
    pub fn key(self: KAboutLicense) i32 {
        return qtc.KAboutLicense_Key(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spdx` instead
    ///
    pub const Spdx = spdx;

    /// ### [Upstream resources](https://api.kde.org/kaboutlicense.html#spdx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutLicense `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn spdx(self: KAboutLicense, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutLicense_Spdx(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutLicense.spdx: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `byKeyword` instead
    ///
    pub const ByKeyword = byKeyword;

    /// ### [Upstream resources](https://api.kde.org/kaboutlicense.html#byKeyword)
    ///
    /// ## Parameter(s):
    ///
    /// ` keyword: []const u8 `
    ///
    pub fn byKeyword(keyword: []const u8) KAboutLicense {
        const keyword_str = qtc.libqt_string{
            .len = keyword.len,
            .data = keyword.ptr,
        };
        return .{ .ptr = qtc.KAboutLicense_ByKeyword(keyword_str) };
    }

    /// ### DEPRECATED: Use `name1` instead
    ///
    pub const Name1 = name1;

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
    pub fn name1(self: KAboutLicense, allocator: std.mem.Allocator, formatName: i32) []const u8 {
        var _str = qtc.KAboutLicense_Name1(@ptrCast(self.ptr), @bitCast(formatName));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutLicense.name1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kaboutlicense.html#dtor.KAboutLicense)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KAboutLicense `
    ///
    pub fn delete(self: KAboutLicense) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KAboutComponent object in C++ memory
    ///
    pub fn new() KAboutComponent {
        return .{ .ptr = qtc.KAboutComponent_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KAboutComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _description: []const u8 `
    ///
    /// ` _version: []const u8 `
    ///
    /// ` _webAddress: []const u8 `
    ///
    /// ` pathToLicenseFile: []const u8 `
    ///
    pub fn new2(_name: []const u8, _description: []const u8, _version: []const u8, _webAddress: []const u8, pathToLicenseFile: []const u8) KAboutComponent {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = _webAddress.len,
            .data = _webAddress.ptr,
        };
        const pathToLicenseFile_str = qtc.libqt_string{
            .len = pathToLicenseFile.len,
            .data = pathToLicenseFile.ptr,
        };
        return .{ .ptr = qtc.KAboutComponent_new2(name_str, description_str, version_str, webAddress_str, pathToLicenseFile_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KAboutComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KAboutComponent `
    ///
    pub fn new3(other: anytype) KAboutComponent {
        comptime _ = @TypeOf(other)._is_KAboutComponent;
        return .{ .ptr = qtc.KAboutComponent_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KAboutComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new4(_name: []const u8) KAboutComponent {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KAboutComponent_new4(name_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KAboutComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn new5(_name: []const u8, _description: []const u8) KAboutComponent {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        return .{ .ptr = qtc.KAboutComponent_new5(name_str, description_str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new KAboutComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _description: []const u8 `
    ///
    /// ` _version: []const u8 `
    ///
    pub fn new6(_name: []const u8, _description: []const u8, _version: []const u8) KAboutComponent {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        return .{ .ptr = qtc.KAboutComponent_new6(name_str, description_str, version_str) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new KAboutComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _description: []const u8 `
    ///
    /// ` _version: []const u8 `
    ///
    /// ` _webAddress: []const u8 `
    ///
    pub fn new7(_name: []const u8, _description: []const u8, _version: []const u8, _webAddress: []const u8) KAboutComponent {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = _webAddress.len,
            .data = _webAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutComponent_new7(name_str, description_str, version_str, webAddress_str) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new KAboutComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _description: []const u8 `
    ///
    /// ` _version: []const u8 `
    ///
    /// ` _webAddress: []const u8 `
    ///
    /// ` licenseType: kaboutdata_enums.LicenseKey `
    ///
    pub fn new8(_name: []const u8, _description: []const u8, _version: []const u8, _webAddress: []const u8, licenseType: i32) KAboutComponent {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = _webAddress.len,
            .data = _webAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutComponent_new8(name_str, description_str, version_str, webAddress_str, @bitCast(licenseType)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kaboutcomponent.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutComponent `
    ///
    /// ` other: KAboutComponent `
    ///
    pub fn operatorAssign(self: KAboutComponent, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KAboutComponent;
        qtc.KAboutComponent_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kaboutcomponent.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KAboutComponent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutComponent_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutComponent.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://api.kde.org/kaboutcomponent.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: KAboutComponent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutComponent_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutComponent.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://api.kde.org/kaboutcomponent.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn version(self: KAboutComponent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutComponent_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutComponent.version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `webAddress` instead
    ///
    pub const WebAddress = webAddress;

    /// ### [Upstream resources](https://api.kde.org/kaboutcomponent.html#webAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn webAddress(self: KAboutComponent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutComponent_WebAddress(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutComponent.webAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `license` instead
    ///
    pub const License = license;

    /// ### [Upstream resources](https://api.kde.org/kaboutcomponent.html#license)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutComponent `
    ///
    pub fn license(self: KAboutComponent) KAboutLicense {
        return .{ .ptr = qtc.KAboutComponent_License(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kaboutcomponent.html#dtor.KAboutComponent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KAboutComponent `
    ///
    pub fn delete(self: KAboutComponent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KAboutData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _componentName: []const u8 `
    ///
    /// ` _displayName: []const u8 `
    ///
    /// ` _version: []const u8 `
    ///
    /// ` _shortDescription: []const u8 `
    ///
    /// ` licenseType: kaboutdata_enums.LicenseKey `
    ///
    pub fn new(_componentName: []const u8, _displayName: []const u8, _version: []const u8, _shortDescription: []const u8, licenseType: i32) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = _displayName.len,
            .data = _displayName.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        const shortDescription_str = qtc.libqt_string{
            .len = _shortDescription.len,
            .data = _shortDescription.ptr,
        };
        return .{ .ptr = qtc.KAboutData_new(componentName_str, displayName_str, version_str, shortDescription_str, @bitCast(licenseType)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KAboutData object in C++ memory
    ///
    pub fn new2() KAboutData {
        return .{ .ptr = qtc.KAboutData_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KAboutData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KAboutData `
    ///
    pub fn new3(other: anytype) KAboutData {
        comptime _ = @TypeOf(other)._is_KAboutData;
        return .{ .ptr = qtc.KAboutData_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KAboutData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _componentName: []const u8 `
    ///
    /// ` _displayName: []const u8 `
    ///
    /// ` _version: []const u8 `
    ///
    /// ` _shortDescription: []const u8 `
    ///
    /// ` licenseType: kaboutdata_enums.LicenseKey `
    ///
    /// ` _copyrightStatement: []const u8 `
    ///
    pub fn new4(_componentName: []const u8, _displayName: []const u8, _version: []const u8, _shortDescription: []const u8, licenseType: i32, _copyrightStatement: []const u8) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = _displayName.len,
            .data = _displayName.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        const shortDescription_str = qtc.libqt_string{
            .len = _shortDescription.len,
            .data = _shortDescription.ptr,
        };
        const copyrightStatement_str = qtc.libqt_string{
            .len = _copyrightStatement.len,
            .data = _copyrightStatement.ptr,
        };
        return .{ .ptr = qtc.KAboutData_new4(componentName_str, displayName_str, version_str, shortDescription_str, @bitCast(licenseType), copyrightStatement_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KAboutData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _componentName: []const u8 `
    ///
    /// ` _displayName: []const u8 `
    ///
    /// ` _version: []const u8 `
    ///
    /// ` _shortDescription: []const u8 `
    ///
    /// ` licenseType: kaboutdata_enums.LicenseKey `
    ///
    /// ` _copyrightStatement: []const u8 `
    ///
    /// ` _otherText: []const u8 `
    ///
    pub fn new5(_componentName: []const u8, _displayName: []const u8, _version: []const u8, _shortDescription: []const u8, licenseType: i32, _copyrightStatement: []const u8, _otherText: []const u8) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = _displayName.len,
            .data = _displayName.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        const shortDescription_str = qtc.libqt_string{
            .len = _shortDescription.len,
            .data = _shortDescription.ptr,
        };
        const copyrightStatement_str = qtc.libqt_string{
            .len = _copyrightStatement.len,
            .data = _copyrightStatement.ptr,
        };
        const otherText_str = qtc.libqt_string{
            .len = _otherText.len,
            .data = _otherText.ptr,
        };
        return .{ .ptr = qtc.KAboutData_new5(componentName_str, displayName_str, version_str, shortDescription_str, @bitCast(licenseType), copyrightStatement_str, otherText_str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new KAboutData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _componentName: []const u8 `
    ///
    /// ` _displayName: []const u8 `
    ///
    /// ` _version: []const u8 `
    ///
    /// ` _shortDescription: []const u8 `
    ///
    /// ` licenseType: kaboutdata_enums.LicenseKey `
    ///
    /// ` _copyrightStatement: []const u8 `
    ///
    /// ` _otherText: []const u8 `
    ///
    /// ` homePageAddress: []const u8 `
    ///
    pub fn new6(_componentName: []const u8, _displayName: []const u8, _version: []const u8, _shortDescription: []const u8, licenseType: i32, _copyrightStatement: []const u8, _otherText: []const u8, homePageAddress: []const u8) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = _displayName.len,
            .data = _displayName.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        const shortDescription_str = qtc.libqt_string{
            .len = _shortDescription.len,
            .data = _shortDescription.ptr,
        };
        const copyrightStatement_str = qtc.libqt_string{
            .len = _copyrightStatement.len,
            .data = _copyrightStatement.ptr,
        };
        const otherText_str = qtc.libqt_string{
            .len = _otherText.len,
            .data = _otherText.ptr,
        };
        const homePageAddress_str = qtc.libqt_string{
            .len = homePageAddress.len,
            .data = homePageAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_new6(componentName_str, displayName_str, version_str, shortDescription_str, @bitCast(licenseType), copyrightStatement_str, otherText_str, homePageAddress_str) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new KAboutData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _componentName: []const u8 `
    ///
    /// ` _displayName: []const u8 `
    ///
    /// ` _version: []const u8 `
    ///
    /// ` _shortDescription: []const u8 `
    ///
    /// ` licenseType: kaboutdata_enums.LicenseKey `
    ///
    /// ` _copyrightStatement: []const u8 `
    ///
    /// ` _otherText: []const u8 `
    ///
    /// ` homePageAddress: []const u8 `
    ///
    /// ` _bugAddress: []const u8 `
    ///
    pub fn new7(_componentName: []const u8, _displayName: []const u8, _version: []const u8, _shortDescription: []const u8, licenseType: i32, _copyrightStatement: []const u8, _otherText: []const u8, homePageAddress: []const u8, _bugAddress: []const u8) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = _displayName.len,
            .data = _displayName.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        const shortDescription_str = qtc.libqt_string{
            .len = _shortDescription.len,
            .data = _shortDescription.ptr,
        };
        const copyrightStatement_str = qtc.libqt_string{
            .len = _copyrightStatement.len,
            .data = _copyrightStatement.ptr,
        };
        const otherText_str = qtc.libqt_string{
            .len = _otherText.len,
            .data = _otherText.ptr,
        };
        const homePageAddress_str = qtc.libqt_string{
            .len = homePageAddress.len,
            .data = homePageAddress.ptr,
        };
        const bugAddress_str = qtc.libqt_string{
            .len = _bugAddress.len,
            .data = _bugAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_new7(componentName_str, displayName_str, version_str, shortDescription_str, @bitCast(licenseType), copyrightStatement_str, otherText_str, homePageAddress_str, bugAddress_str) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new KAboutData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _componentName: []const u8 `
    ///
    pub fn new8(_componentName: []const u8) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        return .{ .ptr = qtc.KAboutData_new8(componentName_str) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new KAboutData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _componentName: []const u8 `
    ///
    /// ` _displayName: []const u8 `
    ///
    pub fn new9(_componentName: []const u8, _displayName: []const u8) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = _displayName.len,
            .data = _displayName.ptr,
        };
        return .{ .ptr = qtc.KAboutData_new9(componentName_str, displayName_str) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new KAboutData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _componentName: []const u8 `
    ///
    /// ` _displayName: []const u8 `
    ///
    /// ` _version: []const u8 `
    ///
    pub fn new10(_componentName: []const u8, _displayName: []const u8, _version: []const u8) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = _displayName.len,
            .data = _displayName.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        return .{ .ptr = qtc.KAboutData_new10(componentName_str, displayName_str, version_str) };
    }

    /// ### DEPRECATED: Use `applicationData` instead
    ///
    pub const ApplicationData = applicationData;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#applicationData)
    ///
    pub fn applicationData() KAboutData {
        return .{ .ptr = qtc.KAboutData_ApplicationData() };
    }

    /// ### DEPRECATED: Use `setApplicationData` instead
    ///
    pub const SetApplicationData = setApplicationData;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setApplicationData)
    ///
    /// ## Parameter(s):
    ///
    /// ` aboutData: KAboutData `
    ///
    pub fn setApplicationData(aboutData: anytype) void {
        comptime _ = @TypeOf(aboutData)._is_KAboutData;
        qtc.KAboutData_SetApplicationData(@ptrCast(aboutData.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` other: KAboutData `
    ///
    pub fn operatorAssign(self: KAboutData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KAboutData;
        qtc.KAboutData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `addAuthor` instead
    ///
    pub const AddAuthor = addAuthor;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` author: KAboutPerson `
    ///
    pub fn addAuthor(self: KAboutData, author: anytype) KAboutData {
        comptime _ = @TypeOf(author)._is_KAboutPerson;
        return .{ .ptr = qtc.KAboutData_AddAuthor(@ptrCast(self.ptr), @ptrCast(author.ptr)) };
    }

    /// ### DEPRECATED: Use `addAuthor2` instead
    ///
    pub const AddAuthor2 = addAuthor2;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn addAuthor2(self: KAboutData, _name: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddAuthor2(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `addAuthor3` instead
    ///
    pub const AddAuthor3 = addAuthor3;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _task: []const u8 `
    ///
    /// ` _emailAddress: []const u8 `
    ///
    /// ` _webAddress: []const u8 `
    ///
    /// ` kdeStoreUsername: []const u8 `
    ///
    pub fn addAuthor3(self: KAboutData, _name: []const u8, _task: []const u8, _emailAddress: []const u8, _webAddress: []const u8, kdeStoreUsername: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = _task.len,
            .data = _task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = _emailAddress.len,
            .data = _emailAddress.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = _webAddress.len,
            .data = _webAddress.ptr,
        };
        const kdeStoreUsername_str = qtc.libqt_string{
            .len = kdeStoreUsername.len,
            .data = kdeStoreUsername.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddAuthor3(@ptrCast(self.ptr), name_str, task_str, emailAddress_str, webAddress_str, kdeStoreUsername_str) };
    }

    /// ### DEPRECATED: Use `addCredit` instead
    ///
    pub const AddCredit = addCredit;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addCredit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` person: KAboutPerson `
    ///
    pub fn addCredit(self: KAboutData, person: anytype) KAboutData {
        comptime _ = @TypeOf(person)._is_KAboutPerson;
        return .{ .ptr = qtc.KAboutData_AddCredit(@ptrCast(self.ptr), @ptrCast(person.ptr)) };
    }

    /// ### DEPRECATED: Use `addCredit2` instead
    ///
    pub const AddCredit2 = addCredit2;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addCredit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn addCredit2(self: KAboutData, _name: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddCredit2(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `addCredit3` instead
    ///
    pub const AddCredit3 = addCredit3;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addCredit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _task: []const u8 `
    ///
    /// ` _emailAddress: []const u8 `
    ///
    /// ` _webAddress: []const u8 `
    ///
    /// ` kdeStoreUsername: []const u8 `
    ///
    pub fn addCredit3(self: KAboutData, _name: []const u8, _task: []const u8, _emailAddress: []const u8, _webAddress: []const u8, kdeStoreUsername: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = _task.len,
            .data = _task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = _emailAddress.len,
            .data = _emailAddress.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = _webAddress.len,
            .data = _webAddress.ptr,
        };
        const kdeStoreUsername_str = qtc.libqt_string{
            .len = kdeStoreUsername.len,
            .data = kdeStoreUsername.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddCredit3(@ptrCast(self.ptr), name_str, task_str, emailAddress_str, webAddress_str, kdeStoreUsername_str) };
    }

    /// ### DEPRECATED: Use `setTranslator` instead
    ///
    pub const SetTranslator = setTranslator;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setTranslator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _emailAddress: []const u8 `
    ///
    pub fn setTranslator(self: KAboutData, _name: []const u8, _emailAddress: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = _emailAddress.len,
            .data = _emailAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetTranslator(@ptrCast(self.ptr), name_str, emailAddress_str) };
    }

    /// ### DEPRECATED: Use `addComponent` instead
    ///
    pub const AddComponent = addComponent;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addComponent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` component: KAboutComponent `
    ///
    pub fn addComponent(self: KAboutData, component: anytype) KAboutData {
        comptime _ = @TypeOf(component)._is_KAboutComponent;
        return .{ .ptr = qtc.KAboutData_AddComponent(@ptrCast(self.ptr), @ptrCast(component.ptr)) };
    }

    /// ### DEPRECATED: Use `addComponent2` instead
    ///
    pub const AddComponent2 = addComponent2;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addComponent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn addComponent2(self: KAboutData, _name: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddComponent2(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `addComponent3` instead
    ///
    pub const AddComponent3 = addComponent3;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addComponent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _description: []const u8 `
    ///
    /// ` _version: []const u8 `
    ///
    /// ` _webAddress: []const u8 `
    ///
    /// ` pathToLicenseFile: []const u8 `
    ///
    pub fn addComponent3(self: KAboutData, _name: []const u8, _description: []const u8, _version: []const u8, _webAddress: []const u8, pathToLicenseFile: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = _webAddress.len,
            .data = _webAddress.ptr,
        };
        const pathToLicenseFile_str = qtc.libqt_string{
            .len = pathToLicenseFile.len,
            .data = pathToLicenseFile.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddComponent3(@ptrCast(self.ptr), name_str, description_str, version_str, webAddress_str, pathToLicenseFile_str) };
    }

    /// ### DEPRECATED: Use `setLicenseText` instead
    ///
    pub const SetLicenseText = setLicenseText;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setLicenseText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _license: []const u8 `
    ///
    pub fn setLicenseText(self: KAboutData, _license: []const u8) KAboutData {
        const license_str = qtc.libqt_string{
            .len = _license.len,
            .data = _license.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetLicenseText(@ptrCast(self.ptr), license_str) };
    }

    /// ### DEPRECATED: Use `addLicenseText` instead
    ///
    pub const AddLicenseText = addLicenseText;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addLicenseText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _license: []const u8 `
    ///
    pub fn addLicenseText(self: KAboutData, _license: []const u8) KAboutData {
        const license_str = qtc.libqt_string{
            .len = _license.len,
            .data = _license.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddLicenseText(@ptrCast(self.ptr), license_str) };
    }

    /// ### DEPRECATED: Use `setLicenseTextFile` instead
    ///
    pub const SetLicenseTextFile = setLicenseTextFile;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setLicenseTextFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` file: []const u8 `
    ///
    pub fn setLicenseTextFile(self: KAboutData, file: []const u8) KAboutData {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetLicenseTextFile(@ptrCast(self.ptr), file_str) };
    }

    /// ### DEPRECATED: Use `addLicenseTextFile` instead
    ///
    pub const AddLicenseTextFile = addLicenseTextFile;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addLicenseTextFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` file: []const u8 `
    ///
    pub fn addLicenseTextFile(self: KAboutData, file: []const u8) KAboutData {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddLicenseTextFile(@ptrCast(self.ptr), file_str) };
    }

    /// ### DEPRECATED: Use `setComponentName` instead
    ///
    pub const SetComponentName = setComponentName;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setComponentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _componentName: []const u8 `
    ///
    pub fn setComponentName(self: KAboutData, _componentName: []const u8) KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetComponentName(@ptrCast(self.ptr), componentName_str) };
    }

    /// ### DEPRECATED: Use `setDisplayName` instead
    ///
    pub const SetDisplayName = setDisplayName;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _displayName: []const u8 `
    ///
    pub fn setDisplayName(self: KAboutData, _displayName: []const u8) KAboutData {
        const displayName_str = qtc.libqt_string{
            .len = _displayName.len,
            .data = _displayName.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetDisplayName(@ptrCast(self.ptr), displayName_str) };
    }

    /// ### DEPRECATED: Use `setProgramLogo` instead
    ///
    pub const SetProgramLogo = setProgramLogo;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setProgramLogo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` image: QVariant `
    ///
    pub fn setProgramLogo(self: KAboutData, image: anytype) KAboutData {
        comptime _ = @TypeOf(image)._is_QVariant;
        return .{ .ptr = qtc.KAboutData_SetProgramLogo(@ptrCast(self.ptr), @ptrCast(image.ptr)) };
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _version: []u8 `
    ///
    pub fn setVersion(self: KAboutData, _version: []u8) KAboutData {
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetVersion(@ptrCast(self.ptr), version_str) };
    }

    /// ### DEPRECATED: Use `setShortDescription` instead
    ///
    pub const SetShortDescription = setShortDescription;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setShortDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _shortDescription: []const u8 `
    ///
    pub fn setShortDescription(self: KAboutData, _shortDescription: []const u8) KAboutData {
        const shortDescription_str = qtc.libqt_string{
            .len = _shortDescription.len,
            .data = _shortDescription.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetShortDescription(@ptrCast(self.ptr), shortDescription_str) };
    }

    /// ### DEPRECATED: Use `setLicense` instead
    ///
    pub const SetLicense = setLicense;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setLicense)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` licenseKey: kaboutdata_enums.LicenseKey `
    ///
    pub fn setLicense(self: KAboutData, licenseKey: i32) KAboutData {
        return .{ .ptr = qtc.KAboutData_SetLicense(@ptrCast(self.ptr), @bitCast(licenseKey)) };
    }

    /// ### DEPRECATED: Use `setLicense2` instead
    ///
    pub const SetLicense2 = setLicense2;

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
    pub fn setLicense2(self: KAboutData, licenseKey: i32, versionRestriction: i32) KAboutData {
        return .{ .ptr = qtc.KAboutData_SetLicense2(@ptrCast(self.ptr), @bitCast(licenseKey), @bitCast(versionRestriction)) };
    }

    /// ### DEPRECATED: Use `addLicense` instead
    ///
    pub const AddLicense = addLicense;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addLicense)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` licenseKey: kaboutdata_enums.LicenseKey `
    ///
    pub fn addLicense(self: KAboutData, licenseKey: i32) KAboutData {
        return .{ .ptr = qtc.KAboutData_AddLicense(@ptrCast(self.ptr), @bitCast(licenseKey)) };
    }

    /// ### DEPRECATED: Use `addLicense2` instead
    ///
    pub const AddLicense2 = addLicense2;

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
    pub fn addLicense2(self: KAboutData, licenseKey: i32, versionRestriction: i32) KAboutData {
        return .{ .ptr = qtc.KAboutData_AddLicense2(@ptrCast(self.ptr), @bitCast(licenseKey), @bitCast(versionRestriction)) };
    }

    /// ### DEPRECATED: Use `setCopyrightStatement` instead
    ///
    pub const SetCopyrightStatement = setCopyrightStatement;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setCopyrightStatement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _copyrightStatement: []const u8 `
    ///
    pub fn setCopyrightStatement(self: KAboutData, _copyrightStatement: []const u8) KAboutData {
        const copyrightStatement_str = qtc.libqt_string{
            .len = _copyrightStatement.len,
            .data = _copyrightStatement.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetCopyrightStatement(@ptrCast(self.ptr), copyrightStatement_str) };
    }

    /// ### DEPRECATED: Use `setOtherText` instead
    ///
    pub const SetOtherText = setOtherText;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setOtherText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _otherText: []const u8 `
    ///
    pub fn setOtherText(self: KAboutData, _otherText: []const u8) KAboutData {
        const otherText_str = qtc.libqt_string{
            .len = _otherText.len,
            .data = _otherText.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetOtherText(@ptrCast(self.ptr), otherText_str) };
    }

    /// ### DEPRECATED: Use `setHomepage` instead
    ///
    pub const SetHomepage = setHomepage;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setHomepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _homepage: []const u8 `
    ///
    pub fn setHomepage(self: KAboutData, _homepage: []const u8) KAboutData {
        const homepage_str = qtc.libqt_string{
            .len = _homepage.len,
            .data = _homepage.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetHomepage(@ptrCast(self.ptr), homepage_str) };
    }

    /// ### DEPRECATED: Use `setBugAddress` instead
    ///
    pub const SetBugAddress = setBugAddress;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setBugAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _bugAddress: []u8 `
    ///
    pub fn setBugAddress(self: KAboutData, _bugAddress: []u8) KAboutData {
        const bugAddress_str = qtc.libqt_string{
            .len = _bugAddress.len,
            .data = _bugAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetBugAddress(@ptrCast(self.ptr), bugAddress_str) };
    }

    /// ### DEPRECATED: Use `setOrganizationDomain` instead
    ///
    pub const SetOrganizationDomain = setOrganizationDomain;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setOrganizationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` domain: []u8 `
    ///
    pub fn setOrganizationDomain(self: KAboutData, domain: []u8) KAboutData {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetOrganizationDomain(@ptrCast(self.ptr), domain_str) };
    }

    /// ### DEPRECATED: Use `setProductName` instead
    ///
    pub const SetProductName = setProductName;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setProductName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []u8 `
    ///
    pub fn setProductName(self: KAboutData, _name: []u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetProductName(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `componentName` instead
    ///
    pub const ComponentName = componentName;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#componentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn componentName(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutData.componentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `productName` instead
    ///
    pub const ProductName = productName;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#productName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn productName(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_ProductName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutData.productName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `internalProductName` instead
    ///
    pub const InternalProductName = internalProductName;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#internalProductName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    pub fn internalProductName(self: KAboutData) [:0]const u8 {
        const _ret = qtc.KAboutData_InternalProductName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `displayName` instead
    ///
    pub const DisplayName = displayName;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn displayName(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutData.displayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `organizationDomain` instead
    ///
    pub const OrganizationDomain = organizationDomain;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#organizationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn organizationDomain(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_OrganizationDomain(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutData.organizationDomain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `internalProgramName` instead
    ///
    pub const InternalProgramName = internalProgramName;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#internalProgramName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    pub fn internalProgramName(self: KAboutData) [:0]const u8 {
        const _ret = qtc.KAboutData_InternalProgramName(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `programLogo` instead
    ///
    pub const ProgramLogo = programLogo;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#programLogo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    pub fn programLogo(self: KAboutData) QVariant {
        return .{ .ptr = qtc.KAboutData_ProgramLogo(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn version(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutData.version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `internalVersion` instead
    ///
    pub const InternalVersion = internalVersion;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#internalVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    pub fn internalVersion(self: KAboutData) [:0]const u8 {
        const _ret = qtc.KAboutData_InternalVersion(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `shortDescription` instead
    ///
    pub const ShortDescription = shortDescription;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#shortDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn shortDescription(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_ShortDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutData.shortDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `homepage` instead
    ///
    pub const Homepage = homepage;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#homepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn homepage(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_Homepage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutData.homepage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `bugAddress` instead
    ///
    pub const BugAddress = bugAddress;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#bugAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn bugAddress(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_BugAddress(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutData.bugAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `internalBugAddress` instead
    ///
    pub const InternalBugAddress = internalBugAddress;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#internalBugAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    pub fn internalBugAddress(self: KAboutData) [:0]const u8 {
        const _ret = qtc.KAboutData_InternalBugAddress(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `authors` instead
    ///
    pub const Authors = authors;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#authors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn authors(self: KAboutData, allocator: std.mem.Allocator) []KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KAboutData_Authors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAboutPerson, _arr.len) catch @panic("KAboutData.authors: Memory allocation failed");
        const _data_val: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `credits` instead
    ///
    pub const Credits = credits;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#credits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn credits(self: KAboutData, allocator: std.mem.Allocator) []KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KAboutData_Credits(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAboutPerson, _arr.len) catch @panic("KAboutData.credits: Memory allocation failed");
        const _data_val: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `translators` instead
    ///
    pub const Translators = translators;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#translators)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn translators(self: KAboutData, allocator: std.mem.Allocator) []KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KAboutData_Translators(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAboutPerson, _arr.len) catch @panic("KAboutData.translators: Memory allocation failed");
        const _data_val: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `aboutTranslationTeam` instead
    ///
    pub const AboutTranslationTeam = aboutTranslationTeam;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#aboutTranslationTeam)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn aboutTranslationTeam(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_AboutTranslationTeam();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutData.aboutTranslationTeam: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `components` instead
    ///
    pub const Components = components;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#components)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn components(self: KAboutData, allocator: std.mem.Allocator) []KAboutComponent {
        const _arr: qtc.libqt_list = qtc.KAboutData_Components(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAboutComponent, _arr.len) catch @panic("KAboutData.components: Memory allocation failed");
        const _data_val: [*]QtC.KAboutComponent = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `otherText` instead
    ///
    pub const OtherText = otherText;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#otherText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn otherText(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_OtherText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutData.otherText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `licenses` instead
    ///
    pub const Licenses = licenses;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#licenses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn licenses(self: KAboutData, allocator: std.mem.Allocator) []KAboutLicense {
        const _arr: qtc.libqt_list = qtc.KAboutData_Licenses(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAboutLicense, _arr.len) catch @panic("KAboutData.licenses: Memory allocation failed");
        const _data_val: [*]QtC.KAboutLicense = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `copyrightStatement` instead
    ///
    pub const CopyrightStatement = copyrightStatement;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#copyrightStatement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn copyrightStatement(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_CopyrightStatement(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutData.copyrightStatement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `customAuthorPlainText` instead
    ///
    pub const CustomAuthorPlainText = customAuthorPlainText;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#customAuthorPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn customAuthorPlainText(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_CustomAuthorPlainText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutData.customAuthorPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `customAuthorRichText` instead
    ///
    pub const CustomAuthorRichText = customAuthorRichText;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#customAuthorRichText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn customAuthorRichText(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_CustomAuthorRichText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutData.customAuthorRichText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `customAuthorTextEnabled` instead
    ///
    pub const CustomAuthorTextEnabled = customAuthorTextEnabled;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#customAuthorTextEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    pub fn customAuthorTextEnabled(self: KAboutData) bool {
        return qtc.KAboutData_CustomAuthorTextEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustomAuthorText` instead
    ///
    pub const SetCustomAuthorText = setCustomAuthorText;

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
    pub fn setCustomAuthorText(self: KAboutData, plainText: []const u8, richText: []const u8) KAboutData {
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

    /// ### DEPRECATED: Use `unsetCustomAuthorText` instead
    ///
    pub const UnsetCustomAuthorText = unsetCustomAuthorText;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#unsetCustomAuthorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    pub fn unsetCustomAuthorText(self: KAboutData) KAboutData {
        return .{ .ptr = qtc.KAboutData_UnsetCustomAuthorText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setupCommandLine` instead
    ///
    pub const SetupCommandLine = setupCommandLine;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setupCommandLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` parser: QCommandLineParser `
    ///
    pub fn setupCommandLine(self: KAboutData, parser: anytype) bool {
        comptime _ = @TypeOf(parser)._is_QCommandLineParser;
        return qtc.KAboutData_SetupCommandLine(@ptrCast(self.ptr), @ptrCast(parser.ptr));
    }

    /// ### DEPRECATED: Use `processCommandLine` instead
    ///
    pub const ProcessCommandLine = processCommandLine;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#processCommandLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` parser: QCommandLineParser `
    ///
    pub fn processCommandLine(self: KAboutData, parser: anytype) void {
        comptime _ = @TypeOf(parser)._is_QCommandLineParser;
        qtc.KAboutData_ProcessCommandLine(@ptrCast(self.ptr), @ptrCast(parser.ptr));
    }

    /// ### DEPRECATED: Use `setDesktopFileName` instead
    ///
    pub const SetDesktopFileName = setDesktopFileName;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#setDesktopFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _desktopFileName: []const u8 `
    ///
    pub fn setDesktopFileName(self: KAboutData, _desktopFileName: []const u8) KAboutData {
        const desktopFileName_str = qtc.libqt_string{
            .len = _desktopFileName.len,
            .data = _desktopFileName.ptr,
        };
        return .{ .ptr = qtc.KAboutData_SetDesktopFileName(@ptrCast(self.ptr), desktopFileName_str) };
    }

    /// ### DEPRECATED: Use `desktopFileName` instead
    ///
    pub const DesktopFileName = desktopFileName;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#desktopFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn desktopFileName(self: KAboutData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAboutData_DesktopFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAboutData.desktopFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addAuthor22` instead
    ///
    pub const AddAuthor22 = addAuthor22;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _task: []const u8 `
    ///
    pub fn addAuthor22(self: KAboutData, _name: []const u8, _task: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = _task.len,
            .data = _task.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddAuthor22(@ptrCast(self.ptr), name_str, task_str) };
    }

    /// ### DEPRECATED: Use `addAuthor32` instead
    ///
    pub const AddAuthor32 = addAuthor32;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _task: []const u8 `
    ///
    /// ` _emailAddress: []const u8 `
    ///
    pub fn addAuthor32(self: KAboutData, _name: []const u8, _task: []const u8, _emailAddress: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = _task.len,
            .data = _task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = _emailAddress.len,
            .data = _emailAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddAuthor32(@ptrCast(self.ptr), name_str, task_str, emailAddress_str) };
    }

    /// ### DEPRECATED: Use `addAuthor4` instead
    ///
    pub const AddAuthor4 = addAuthor4;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _task: []const u8 `
    ///
    /// ` _emailAddress: []const u8 `
    ///
    /// ` _webAddress: []const u8 `
    ///
    pub fn addAuthor4(self: KAboutData, _name: []const u8, _task: []const u8, _emailAddress: []const u8, _webAddress: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = _task.len,
            .data = _task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = _emailAddress.len,
            .data = _emailAddress.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = _webAddress.len,
            .data = _webAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddAuthor4(@ptrCast(self.ptr), name_str, task_str, emailAddress_str, webAddress_str) };
    }

    /// ### DEPRECATED: Use `addAuthor5` instead
    ///
    pub const AddAuthor5 = addAuthor5;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _task: []const u8 `
    ///
    /// ` _emailAddress: []const u8 `
    ///
    /// ` _webAddress: []const u8 `
    ///
    /// ` _avatarUrl: QUrl `
    ///
    pub fn addAuthor5(self: KAboutData, _name: []const u8, _task: []const u8, _emailAddress: []const u8, _webAddress: []const u8, _avatarUrl: anytype) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = _task.len,
            .data = _task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = _emailAddress.len,
            .data = _emailAddress.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = _webAddress.len,
            .data = _webAddress.ptr,
        };
        comptime _ = @TypeOf(_avatarUrl)._is_QUrl;
        return .{ .ptr = qtc.KAboutData_AddAuthor5(@ptrCast(self.ptr), name_str, task_str, emailAddress_str, webAddress_str, @ptrCast(_avatarUrl.ptr)) };
    }

    /// ### DEPRECATED: Use `addCredit22` instead
    ///
    pub const AddCredit22 = addCredit22;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addCredit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _task: []const u8 `
    ///
    pub fn addCredit22(self: KAboutData, _name: []const u8, _task: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = _task.len,
            .data = _task.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddCredit22(@ptrCast(self.ptr), name_str, task_str) };
    }

    /// ### DEPRECATED: Use `addCredit32` instead
    ///
    pub const AddCredit32 = addCredit32;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addCredit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _task: []const u8 `
    ///
    /// ` _emailAddress: []const u8 `
    ///
    pub fn addCredit32(self: KAboutData, _name: []const u8, _task: []const u8, _emailAddress: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = _task.len,
            .data = _task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = _emailAddress.len,
            .data = _emailAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddCredit32(@ptrCast(self.ptr), name_str, task_str, emailAddress_str) };
    }

    /// ### DEPRECATED: Use `addCredit4` instead
    ///
    pub const AddCredit4 = addCredit4;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addCredit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _task: []const u8 `
    ///
    /// ` _emailAddress: []const u8 `
    ///
    /// ` _webAddress: []const u8 `
    ///
    pub fn addCredit4(self: KAboutData, _name: []const u8, _task: []const u8, _emailAddress: []const u8, _webAddress: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = _task.len,
            .data = _task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = _emailAddress.len,
            .data = _emailAddress.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = _webAddress.len,
            .data = _webAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddCredit4(@ptrCast(self.ptr), name_str, task_str, emailAddress_str, webAddress_str) };
    }

    /// ### DEPRECATED: Use `addCredit5` instead
    ///
    pub const AddCredit5 = addCredit5;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addCredit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _task: []const u8 `
    ///
    /// ` _emailAddress: []const u8 `
    ///
    /// ` _webAddress: []const u8 `
    ///
    /// ` _avatarUrl: QUrl `
    ///
    pub fn addCredit5(self: KAboutData, _name: []const u8, _task: []const u8, _emailAddress: []const u8, _webAddress: []const u8, _avatarUrl: anytype) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = _task.len,
            .data = _task.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = _emailAddress.len,
            .data = _emailAddress.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = _webAddress.len,
            .data = _webAddress.ptr,
        };
        comptime _ = @TypeOf(_avatarUrl)._is_QUrl;
        return .{ .ptr = qtc.KAboutData_AddCredit5(@ptrCast(self.ptr), name_str, task_str, emailAddress_str, webAddress_str, @ptrCast(_avatarUrl.ptr)) };
    }

    /// ### DEPRECATED: Use `addComponent22` instead
    ///
    pub const AddComponent22 = addComponent22;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addComponent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn addComponent22(self: KAboutData, _name: []const u8, _description: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddComponent22(@ptrCast(self.ptr), name_str, description_str) };
    }

    /// ### DEPRECATED: Use `addComponent32` instead
    ///
    pub const AddComponent32 = addComponent32;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addComponent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _description: []const u8 `
    ///
    /// ` _version: []const u8 `
    ///
    pub fn addComponent32(self: KAboutData, _name: []const u8, _description: []const u8, _version: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddComponent32(@ptrCast(self.ptr), name_str, description_str, version_str) };
    }

    /// ### DEPRECATED: Use `addComponent4` instead
    ///
    pub const AddComponent4 = addComponent4;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addComponent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _description: []const u8 `
    ///
    /// ` _version: []const u8 `
    ///
    /// ` _webAddress: []const u8 `
    ///
    pub fn addComponent4(self: KAboutData, _name: []const u8, _description: []const u8, _version: []const u8, _webAddress: []const u8) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = _webAddress.len,
            .data = _webAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddComponent4(@ptrCast(self.ptr), name_str, description_str, version_str, webAddress_str) };
    }

    /// ### DEPRECATED: Use `addComponent5` instead
    ///
    pub const AddComponent5 = addComponent5;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#addComponent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAboutData `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _description: []const u8 `
    ///
    /// ` _version: []const u8 `
    ///
    /// ` _webAddress: []const u8 `
    ///
    /// ` licenseKey: kaboutdata_enums.LicenseKey `
    ///
    pub fn addComponent5(self: KAboutData, _name: []const u8, _description: []const u8, _version: []const u8, _webAddress: []const u8, licenseKey: i32) KAboutData {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        const webAddress_str = qtc.libqt_string{
            .len = _webAddress.len,
            .data = _webAddress.ptr,
        };
        return .{ .ptr = qtc.KAboutData_AddComponent5(@ptrCast(self.ptr), name_str, description_str, version_str, webAddress_str, @bitCast(licenseKey)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kaboutdata.html#dtor.KAboutData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KAboutData `
    ///
    pub fn delete(self: KAboutData) void {
        qtc.KAboutData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kaboutdata.html#public-types)
pub const enums = struct {
    pub const LicenseKey = enum {
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

    pub const NameFormat = enum {
        pub const ShortName: i32 = 0;
        pub const FullName: i32 = 1;
    };

    pub const VersionRestriction = enum {
        pub const OnlyThisVersion: i32 = 0;
        pub const OrLaterVersions: i32 = 1;
    };
};
