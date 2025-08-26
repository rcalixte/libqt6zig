const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kaboutdata_enums = enums;
const std = @import("std");

/// https://api-staging.kde.org/kcrash.html
pub const kcrash = struct {
    /// [Qt documentation](https://api-staging.kde.org/kcrash.html#defaultCrashHandler)
    ///
    /// ``` param1: i32 ```
    pub fn DefaultCrashHandler(param1: i32) void {
        qtc.KCrash_DefaultCrashHandler(@intCast(param1));
    }
};

/// https://api-staging.kde.org/kaboutperson.html
pub const kaboutperson = struct {
    /// New constructs a new KAboutPerson object.
    ///
    ///
    pub fn New() QtC.KAboutPerson {
        return qtc.KAboutPerson_new();
    }

    /// New2 constructs a new KAboutPerson object.
    ///
    /// ``` other: QtC.KAboutPerson ```
    pub fn New2(other: ?*anyopaque) QtC.KAboutPerson {
        return qtc.KAboutPerson_new2(@ptrCast(other));
    }

    /// New3 constructs a new KAboutPerson object.
    ///
    /// ``` name: []const u8 ```
    pub fn New3(name: []const u8) QtC.KAboutPerson {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.KAboutPerson_new3(name_str);
    }

    /// New4 constructs a new KAboutPerson object.
    ///
    /// ``` name: []const u8, task: []const u8 ```
    pub fn New4(name: []const u8, task: []const u8) QtC.KAboutPerson {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };

        return qtc.KAboutPerson_new4(name_str, task_str);
    }

    /// New5 constructs a new KAboutPerson object.
    ///
    /// ``` name: []const u8, task: []const u8, emailAddress: []const u8 ```
    pub fn New5(name: []const u8, task: []const u8, emailAddress: []const u8) QtC.KAboutPerson {
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

        return qtc.KAboutPerson_new5(name_str, task_str, emailAddress_str);
    }

    /// New6 constructs a new KAboutPerson object.
    ///
    /// ``` name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8 ```
    pub fn New6(name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8) QtC.KAboutPerson {
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

        return qtc.KAboutPerson_new6(name_str, task_str, emailAddress_str, webAddress_str);
    }

    /// New7 constructs a new KAboutPerson object.
    ///
    /// ``` name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8, avatarUrl: QtC.QUrl ```
    pub fn New7(name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8, avatarUrl: ?*anyopaque) QtC.KAboutPerson {
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

        return qtc.KAboutPerson_new7(name_str, task_str, emailAddress_str, webAddress_str, @ptrCast(avatarUrl));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutperson.html#operator-eq)
    ///
    /// ``` self: QtC.KAboutPerson, other: QtC.KAboutPerson ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KAboutPerson_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutperson.html#name)
    ///
    /// ``` self: QtC.KAboutPerson, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutPerson_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutperson.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutperson.html#task)
    ///
    /// ``` self: QtC.KAboutPerson, allocator: std.mem.Allocator ```
    pub fn Task(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutPerson_Task(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutperson.Task: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutperson.html#emailAddress)
    ///
    /// ``` self: QtC.KAboutPerson, allocator: std.mem.Allocator ```
    pub fn EmailAddress(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutPerson_EmailAddress(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutperson.EmailAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutperson.html#webAddress)
    ///
    /// ``` self: QtC.KAboutPerson, allocator: std.mem.Allocator ```
    pub fn WebAddress(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutPerson_WebAddress(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutperson.WebAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutperson.html#avatarUrl)
    ///
    /// ``` self: QtC.KAboutPerson ```
    pub fn AvatarUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.KAboutPerson_AvatarUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutperson.html#fromJSON)
    ///
    /// ``` obj: QtC.QJsonObject ```
    pub fn FromJSON(obj: ?*anyopaque) QtC.KAboutPerson {
        return qtc.KAboutPerson_FromJSON(@ptrCast(obj));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutperson.html#dtor.KAboutPerson)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KAboutPerson ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KAboutPerson_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/kaboutlicense.html
pub const kaboutlicense = struct {
    /// New constructs a new KAboutLicense object.
    ///
    ///
    pub fn New() QtC.KAboutLicense {
        return qtc.KAboutLicense_new();
    }

    /// New2 constructs a new KAboutLicense object.
    ///
    /// ``` other: QtC.KAboutLicense ```
    pub fn New2(other: ?*anyopaque) QtC.KAboutLicense {
        return qtc.KAboutLicense_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutlicense.html#operator-eq)
    ///
    /// ``` self: QtC.KAboutLicense, other: QtC.KAboutLicense ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KAboutLicense_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutlicense.html#text)
    ///
    /// ``` self: QtC.KAboutLicense, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutLicense_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutlicense.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutlicense.html#name)
    ///
    /// ``` self: QtC.KAboutLicense, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutLicense_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutlicense.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutlicense.html#key)
    ///
    /// ``` self: QtC.KAboutLicense ```
    ///
    /// Returns: ``` kaboutdata_enums.LicenseKey ```
    pub fn Key(self: ?*anyopaque) i32 {
        return qtc.KAboutLicense_Key(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutlicense.html#spdx)
    ///
    /// ``` self: QtC.KAboutLicense, allocator: std.mem.Allocator ```
    pub fn Spdx(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutLicense_Spdx(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutlicense.Spdx: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutlicense.html#byKeyword)
    ///
    /// ``` keyword: []const u8 ```
    pub fn ByKeyword(keyword: []const u8) QtC.KAboutLicense {
        const keyword_str = qtc.libqt_string{
            .len = keyword.len,
            .data = keyword.ptr,
        };
        return qtc.KAboutLicense_ByKeyword(keyword_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutlicense.html#name)
    ///
    /// ``` self: QtC.KAboutLicense, formatName: kaboutdata_enums.NameFormat, allocator: std.mem.Allocator ```
    pub fn Name1(self: ?*anyopaque, formatName: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutLicense_Name1(@ptrCast(self), @intCast(formatName));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutlicense.Name1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutlicense.html#dtor.KAboutLicense)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KAboutLicense ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KAboutLicense_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/kaboutcomponent.html
pub const kaboutcomponent = struct {
    /// New constructs a new KAboutComponent object.
    ///
    ///
    pub fn New() QtC.KAboutComponent {
        return qtc.KAboutComponent_new();
    }

    /// New2 constructs a new KAboutComponent object.
    ///
    /// ``` name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8, pathToLicenseFile: []const u8 ```
    pub fn New2(name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8, pathToLicenseFile: []const u8) QtC.KAboutComponent {
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

        return qtc.KAboutComponent_new2(name_str, description_str, version_str, webAddress_str, pathToLicenseFile_str);
    }

    /// New3 constructs a new KAboutComponent object.
    ///
    /// ``` other: QtC.KAboutComponent ```
    pub fn New3(other: ?*anyopaque) QtC.KAboutComponent {
        return qtc.KAboutComponent_new3(@ptrCast(other));
    }

    /// New4 constructs a new KAboutComponent object.
    ///
    /// ``` name: []const u8 ```
    pub fn New4(name: []const u8) QtC.KAboutComponent {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.KAboutComponent_new4(name_str);
    }

    /// New5 constructs a new KAboutComponent object.
    ///
    /// ``` name: []const u8, description: []const u8 ```
    pub fn New5(name: []const u8, description: []const u8) QtC.KAboutComponent {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };

        return qtc.KAboutComponent_new5(name_str, description_str);
    }

    /// New6 constructs a new KAboutComponent object.
    ///
    /// ``` name: []const u8, description: []const u8, version: []const u8 ```
    pub fn New6(name: []const u8, description: []const u8, version: []const u8) QtC.KAboutComponent {
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

        return qtc.KAboutComponent_new6(name_str, description_str, version_str);
    }

    /// New7 constructs a new KAboutComponent object.
    ///
    /// ``` name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8 ```
    pub fn New7(name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8) QtC.KAboutComponent {
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

        return qtc.KAboutComponent_new7(name_str, description_str, version_str, webAddress_str);
    }

    /// New8 constructs a new KAboutComponent object.
    ///
    /// ``` name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8, licenseType: kaboutdata_enums.LicenseKey ```
    pub fn New8(name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8, licenseType: i32) QtC.KAboutComponent {
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

        return qtc.KAboutComponent_new8(name_str, description_str, version_str, webAddress_str, @intCast(licenseType));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutcomponent.html#operator-eq)
    ///
    /// ``` self: QtC.KAboutComponent, other: QtC.KAboutComponent ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KAboutComponent_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutcomponent.html#name)
    ///
    /// ``` self: QtC.KAboutComponent, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutComponent_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutcomponent.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutcomponent.html#description)
    ///
    /// ``` self: QtC.KAboutComponent, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutComponent_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutcomponent.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutcomponent.html#version)
    ///
    /// ``` self: QtC.KAboutComponent, allocator: std.mem.Allocator ```
    pub fn Version(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutComponent_Version(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutcomponent.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutcomponent.html#webAddress)
    ///
    /// ``` self: QtC.KAboutComponent, allocator: std.mem.Allocator ```
    pub fn WebAddress(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutComponent_WebAddress(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutcomponent.WebAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutcomponent.html#license)
    ///
    /// ``` self: QtC.KAboutComponent ```
    pub fn License(self: ?*anyopaque) QtC.KAboutLicense {
        return qtc.KAboutComponent_License(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutcomponent.html#dtor.KAboutComponent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KAboutComponent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KAboutComponent_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/kaboutdata.html
pub const kaboutdata = struct {
    /// New constructs a new KAboutData object.
    ///
    /// ``` componentName: []const u8, displayName: []const u8, version: []const u8, shortDescription: []const u8, licenseType: kaboutdata_enums.LicenseKey ```
    pub fn New(componentName: []const u8, displayName: []const u8, version: []const u8, shortDescription: []const u8, licenseType: i32) QtC.KAboutData {
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

        return qtc.KAboutData_new(componentName_str, displayName_str, version_str, shortDescription_str, @intCast(licenseType));
    }

    /// New2 constructs a new KAboutData object.
    ///
    ///
    pub fn New2() QtC.KAboutData {
        return qtc.KAboutData_new2();
    }

    /// New3 constructs a new KAboutData object.
    ///
    /// ``` other: QtC.KAboutData ```
    pub fn New3(other: ?*anyopaque) QtC.KAboutData {
        return qtc.KAboutData_new3(@ptrCast(other));
    }

    /// New4 constructs a new KAboutData object.
    ///
    /// ``` componentName: []const u8, displayName: []const u8, version: []const u8, shortDescription: []const u8, licenseType: kaboutdata_enums.LicenseKey, copyrightStatement: []const u8 ```
    pub fn New4(componentName: []const u8, displayName: []const u8, version: []const u8, shortDescription: []const u8, licenseType: i32, copyrightStatement: []const u8) QtC.KAboutData {
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

        return qtc.KAboutData_new4(componentName_str, displayName_str, version_str, shortDescription_str, @intCast(licenseType), copyrightStatement_str);
    }

    /// New5 constructs a new KAboutData object.
    ///
    /// ``` componentName: []const u8, displayName: []const u8, version: []const u8, shortDescription: []const u8, licenseType: kaboutdata_enums.LicenseKey, copyrightStatement: []const u8, otherText: []const u8 ```
    pub fn New5(componentName: []const u8, displayName: []const u8, version: []const u8, shortDescription: []const u8, licenseType: i32, copyrightStatement: []const u8, otherText: []const u8) QtC.KAboutData {
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

        return qtc.KAboutData_new5(componentName_str, displayName_str, version_str, shortDescription_str, @intCast(licenseType), copyrightStatement_str, otherText_str);
    }

    /// New6 constructs a new KAboutData object.
    ///
    /// ``` componentName: []const u8, displayName: []const u8, version: []const u8, shortDescription: []const u8, licenseType: kaboutdata_enums.LicenseKey, copyrightStatement: []const u8, otherText: []const u8, homePageAddress: []const u8 ```
    pub fn New6(componentName: []const u8, displayName: []const u8, version: []const u8, shortDescription: []const u8, licenseType: i32, copyrightStatement: []const u8, otherText: []const u8, homePageAddress: []const u8) QtC.KAboutData {
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

        return qtc.KAboutData_new6(componentName_str, displayName_str, version_str, shortDescription_str, @intCast(licenseType), copyrightStatement_str, otherText_str, homePageAddress_str);
    }

    /// New7 constructs a new KAboutData object.
    ///
    /// ``` componentName: []const u8, displayName: []const u8, version: []const u8, shortDescription: []const u8, licenseType: kaboutdata_enums.LicenseKey, copyrightStatement: []const u8, otherText: []const u8, homePageAddress: []const u8, bugAddress: []const u8 ```
    pub fn New7(componentName: []const u8, displayName: []const u8, version: []const u8, shortDescription: []const u8, licenseType: i32, copyrightStatement: []const u8, otherText: []const u8, homePageAddress: []const u8, bugAddress: []const u8) QtC.KAboutData {
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

        return qtc.KAboutData_new7(componentName_str, displayName_str, version_str, shortDescription_str, @intCast(licenseType), copyrightStatement_str, otherText_str, homePageAddress_str, bugAddress_str);
    }

    /// New8 constructs a new KAboutData object.
    ///
    /// ``` componentName: []const u8 ```
    pub fn New8(componentName: []const u8) QtC.KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };

        return qtc.KAboutData_new8(componentName_str);
    }

    /// New9 constructs a new KAboutData object.
    ///
    /// ``` componentName: []const u8, displayName: []const u8 ```
    pub fn New9(componentName: []const u8, displayName: []const u8) QtC.KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };

        return qtc.KAboutData_new9(componentName_str, displayName_str);
    }

    /// New10 constructs a new KAboutData object.
    ///
    /// ``` componentName: []const u8, displayName: []const u8, version: []const u8 ```
    pub fn New10(componentName: []const u8, displayName: []const u8, version: []const u8) QtC.KAboutData {
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

        return qtc.KAboutData_new10(componentName_str, displayName_str, version_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#applicationData)
    ///
    ///
    pub fn ApplicationData() QtC.KAboutData {
        return qtc.KAboutData_ApplicationData();
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setApplicationData)
    ///
    /// ``` aboutData: QtC.KAboutData ```
    pub fn SetApplicationData(aboutData: ?*anyopaque) void {
        qtc.KAboutData_SetApplicationData(@ptrCast(aboutData));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#operator-eq)
    ///
    /// ``` self: QtC.KAboutData, other: QtC.KAboutData ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KAboutData_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ``` self: QtC.KAboutData, author: QtC.KAboutPerson ```
    pub fn AddAuthor(self: ?*anyopaque, author: ?*anyopaque) QtC.KAboutData {
        return qtc.KAboutData_AddAuthor(@ptrCast(self), @ptrCast(author));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8 ```
    pub fn AddAuthor2(self: ?*anyopaque, name: []const u8) QtC.KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KAboutData_AddAuthor2(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8, kdeStoreUsername: []const u8 ```
    pub fn AddAuthor3(self: ?*anyopaque, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8, kdeStoreUsername: []const u8) QtC.KAboutData {
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
        return qtc.KAboutData_AddAuthor3(@ptrCast(self), name_str, task_str, emailAddress_str, webAddress_str, kdeStoreUsername_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addCredit)
    ///
    /// ``` self: QtC.KAboutData, person: QtC.KAboutPerson ```
    pub fn AddCredit(self: ?*anyopaque, person: ?*anyopaque) QtC.KAboutData {
        return qtc.KAboutData_AddCredit(@ptrCast(self), @ptrCast(person));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addCredit)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8 ```
    pub fn AddCredit2(self: ?*anyopaque, name: []const u8) QtC.KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KAboutData_AddCredit2(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addCredit)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8, kdeStoreUsername: []const u8 ```
    pub fn AddCredit3(self: ?*anyopaque, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8, kdeStoreUsername: []const u8) QtC.KAboutData {
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
        return qtc.KAboutData_AddCredit3(@ptrCast(self), name_str, task_str, emailAddress_str, webAddress_str, kdeStoreUsername_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setTranslator)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8, emailAddress: []const u8 ```
    pub fn SetTranslator(self: ?*anyopaque, name: []const u8, emailAddress: []const u8) QtC.KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const emailAddress_str = qtc.libqt_string{
            .len = emailAddress.len,
            .data = emailAddress.ptr,
        };
        return qtc.KAboutData_SetTranslator(@ptrCast(self), name_str, emailAddress_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addComponent)
    ///
    /// ``` self: QtC.KAboutData, component: QtC.KAboutComponent ```
    pub fn AddComponent(self: ?*anyopaque, component: ?*anyopaque) QtC.KAboutData {
        return qtc.KAboutData_AddComponent(@ptrCast(self), @ptrCast(component));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addComponent)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8 ```
    pub fn AddComponent2(self: ?*anyopaque, name: []const u8) QtC.KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KAboutData_AddComponent2(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addComponent)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8, pathToLicenseFile: []const u8 ```
    pub fn AddComponent3(self: ?*anyopaque, name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8, pathToLicenseFile: []const u8) QtC.KAboutData {
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
        return qtc.KAboutData_AddComponent3(@ptrCast(self), name_str, description_str, version_str, webAddress_str, pathToLicenseFile_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setLicenseText)
    ///
    /// ``` self: QtC.KAboutData, license: []const u8 ```
    pub fn SetLicenseText(self: ?*anyopaque, license: []const u8) QtC.KAboutData {
        const license_str = qtc.libqt_string{
            .len = license.len,
            .data = license.ptr,
        };
        return qtc.KAboutData_SetLicenseText(@ptrCast(self), license_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addLicenseText)
    ///
    /// ``` self: QtC.KAboutData, license: []const u8 ```
    pub fn AddLicenseText(self: ?*anyopaque, license: []const u8) QtC.KAboutData {
        const license_str = qtc.libqt_string{
            .len = license.len,
            .data = license.ptr,
        };
        return qtc.KAboutData_AddLicenseText(@ptrCast(self), license_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setLicenseTextFile)
    ///
    /// ``` self: QtC.KAboutData, file: []const u8 ```
    pub fn SetLicenseTextFile(self: ?*anyopaque, file: []const u8) QtC.KAboutData {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return qtc.KAboutData_SetLicenseTextFile(@ptrCast(self), file_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addLicenseTextFile)
    ///
    /// ``` self: QtC.KAboutData, file: []const u8 ```
    pub fn AddLicenseTextFile(self: ?*anyopaque, file: []const u8) QtC.KAboutData {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return qtc.KAboutData_AddLicenseTextFile(@ptrCast(self), file_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setComponentName)
    ///
    /// ``` self: QtC.KAboutData, componentName: []const u8 ```
    pub fn SetComponentName(self: ?*anyopaque, componentName: []const u8) QtC.KAboutData {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        return qtc.KAboutData_SetComponentName(@ptrCast(self), componentName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setDisplayName)
    ///
    /// ``` self: QtC.KAboutData, displayName: []const u8 ```
    pub fn SetDisplayName(self: ?*anyopaque, displayName: []const u8) QtC.KAboutData {
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        return qtc.KAboutData_SetDisplayName(@ptrCast(self), displayName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setProgramLogo)
    ///
    /// ``` self: QtC.KAboutData, image: QtC.QVariant ```
    pub fn SetProgramLogo(self: ?*anyopaque, image: ?*anyopaque) QtC.KAboutData {
        return qtc.KAboutData_SetProgramLogo(@ptrCast(self), @ptrCast(image));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setVersion)
    ///
    /// ``` self: QtC.KAboutData, version: []u8 ```
    pub fn SetVersion(self: ?*anyopaque, version: []u8) QtC.KAboutData {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.KAboutData_SetVersion(@ptrCast(self), version_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setShortDescription)
    ///
    /// ``` self: QtC.KAboutData, shortDescription: []const u8 ```
    pub fn SetShortDescription(self: ?*anyopaque, shortDescription: []const u8) QtC.KAboutData {
        const shortDescription_str = qtc.libqt_string{
            .len = shortDescription.len,
            .data = shortDescription.ptr,
        };
        return qtc.KAboutData_SetShortDescription(@ptrCast(self), shortDescription_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setLicense)
    ///
    /// ``` self: QtC.KAboutData, licenseKey: kaboutdata_enums.LicenseKey ```
    pub fn SetLicense(self: ?*anyopaque, licenseKey: i32) QtC.KAboutData {
        return qtc.KAboutData_SetLicense(@ptrCast(self), @intCast(licenseKey));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setLicense)
    ///
    /// ``` self: QtC.KAboutData, licenseKey: kaboutdata_enums.LicenseKey, versionRestriction: kaboutdata_enums.VersionRestriction ```
    pub fn SetLicense2(self: ?*anyopaque, licenseKey: i32, versionRestriction: i32) QtC.KAboutData {
        return qtc.KAboutData_SetLicense2(@ptrCast(self), @intCast(licenseKey), @intCast(versionRestriction));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addLicense)
    ///
    /// ``` self: QtC.KAboutData, licenseKey: kaboutdata_enums.LicenseKey ```
    pub fn AddLicense(self: ?*anyopaque, licenseKey: i32) QtC.KAboutData {
        return qtc.KAboutData_AddLicense(@ptrCast(self), @intCast(licenseKey));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addLicense)
    ///
    /// ``` self: QtC.KAboutData, licenseKey: kaboutdata_enums.LicenseKey, versionRestriction: kaboutdata_enums.VersionRestriction ```
    pub fn AddLicense2(self: ?*anyopaque, licenseKey: i32, versionRestriction: i32) QtC.KAboutData {
        return qtc.KAboutData_AddLicense2(@ptrCast(self), @intCast(licenseKey), @intCast(versionRestriction));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setCopyrightStatement)
    ///
    /// ``` self: QtC.KAboutData, copyrightStatement: []const u8 ```
    pub fn SetCopyrightStatement(self: ?*anyopaque, copyrightStatement: []const u8) QtC.KAboutData {
        const copyrightStatement_str = qtc.libqt_string{
            .len = copyrightStatement.len,
            .data = copyrightStatement.ptr,
        };
        return qtc.KAboutData_SetCopyrightStatement(@ptrCast(self), copyrightStatement_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setOtherText)
    ///
    /// ``` self: QtC.KAboutData, otherText: []const u8 ```
    pub fn SetOtherText(self: ?*anyopaque, otherText: []const u8) QtC.KAboutData {
        const otherText_str = qtc.libqt_string{
            .len = otherText.len,
            .data = otherText.ptr,
        };
        return qtc.KAboutData_SetOtherText(@ptrCast(self), otherText_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setHomepage)
    ///
    /// ``` self: QtC.KAboutData, homepage: []const u8 ```
    pub fn SetHomepage(self: ?*anyopaque, homepage: []const u8) QtC.KAboutData {
        const homepage_str = qtc.libqt_string{
            .len = homepage.len,
            .data = homepage.ptr,
        };
        return qtc.KAboutData_SetHomepage(@ptrCast(self), homepage_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setBugAddress)
    ///
    /// ``` self: QtC.KAboutData, bugAddress: []u8 ```
    pub fn SetBugAddress(self: ?*anyopaque, bugAddress: []u8) QtC.KAboutData {
        const bugAddress_str = qtc.libqt_string{
            .len = bugAddress.len,
            .data = bugAddress.ptr,
        };
        return qtc.KAboutData_SetBugAddress(@ptrCast(self), bugAddress_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setOrganizationDomain)
    ///
    /// ``` self: QtC.KAboutData, domain: []u8 ```
    pub fn SetOrganizationDomain(self: ?*anyopaque, domain: []u8) QtC.KAboutData {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        return qtc.KAboutData_SetOrganizationDomain(@ptrCast(self), domain_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setProductName)
    ///
    /// ``` self: QtC.KAboutData, name: []u8 ```
    pub fn SetProductName(self: ?*anyopaque, name: []u8) QtC.KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KAboutData_SetProductName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#componentName)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn ComponentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutData_ComponentName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#productName)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn ProductName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutData_ProductName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.ProductName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#internalProductName)
    ///
    /// ``` self: QtC.KAboutData ```
    pub fn InternalProductName(self: ?*anyopaque) []const u8 {
        const _ret = qtc.KAboutData_InternalProductName(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#displayName)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn DisplayName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutData_DisplayName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#organizationDomain)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn OrganizationDomain(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutData_OrganizationDomain(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.OrganizationDomain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#internalProgramName)
    ///
    /// ``` self: QtC.KAboutData ```
    pub fn InternalProgramName(self: ?*anyopaque) []const u8 {
        const _ret = qtc.KAboutData_InternalProgramName(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#programLogo)
    ///
    /// ``` self: QtC.KAboutData ```
    pub fn ProgramLogo(self: ?*anyopaque) QtC.QVariant {
        return qtc.KAboutData_ProgramLogo(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#version)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn Version(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutData_Version(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#internalVersion)
    ///
    /// ``` self: QtC.KAboutData ```
    pub fn InternalVersion(self: ?*anyopaque) []const u8 {
        const _ret = qtc.KAboutData_InternalVersion(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#shortDescription)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn ShortDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutData_ShortDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.ShortDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#homepage)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn Homepage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutData_Homepage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.Homepage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#bugAddress)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn BugAddress(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutData_BugAddress(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.BugAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#internalBugAddress)
    ///
    /// ``` self: QtC.KAboutData ```
    pub fn InternalBugAddress(self: ?*anyopaque) []const u8 {
        const _ret = qtc.KAboutData_InternalBugAddress(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#authors)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn Authors(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KAboutData_Authors(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KAboutPerson, _arr.len) catch @panic("kaboutdata.Authors: Memory allocation failed");
        const _data: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#credits)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn Credits(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KAboutData_Credits(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KAboutPerson, _arr.len) catch @panic("kaboutdata.Credits: Memory allocation failed");
        const _data: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#translators)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn Translators(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KAboutPerson {
        const _arr: qtc.libqt_list = qtc.KAboutData_Translators(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KAboutPerson, _arr.len) catch @panic("kaboutdata.Translators: Memory allocation failed");
        const _data: [*]QtC.KAboutPerson = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#aboutTranslationTeam)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AboutTranslationTeam(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutData_AboutTranslationTeam();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.AboutTranslationTeam: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#components)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn Components(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KAboutComponent {
        const _arr: qtc.libqt_list = qtc.KAboutData_Components(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KAboutComponent, _arr.len) catch @panic("kaboutdata.Components: Memory allocation failed");
        const _data: [*]QtC.KAboutComponent = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#otherText)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn OtherText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutData_OtherText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.OtherText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#licenses)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn Licenses(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KAboutLicense {
        const _arr: qtc.libqt_list = qtc.KAboutData_Licenses(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KAboutLicense, _arr.len) catch @panic("kaboutdata.Licenses: Memory allocation failed");
        const _data: [*]QtC.KAboutLicense = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#copyrightStatement)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn CopyrightStatement(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutData_CopyrightStatement(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.CopyrightStatement: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#customAuthorPlainText)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn CustomAuthorPlainText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutData_CustomAuthorPlainText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.CustomAuthorPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#customAuthorRichText)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn CustomAuthorRichText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutData_CustomAuthorRichText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.CustomAuthorRichText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#customAuthorTextEnabled)
    ///
    /// ``` self: QtC.KAboutData ```
    pub fn CustomAuthorTextEnabled(self: ?*anyopaque) bool {
        return qtc.KAboutData_CustomAuthorTextEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setCustomAuthorText)
    ///
    /// ``` self: QtC.KAboutData, plainText: []const u8, richText: []const u8 ```
    pub fn SetCustomAuthorText(self: ?*anyopaque, plainText: []const u8, richText: []const u8) QtC.KAboutData {
        const plainText_str = qtc.libqt_string{
            .len = plainText.len,
            .data = plainText.ptr,
        };
        const richText_str = qtc.libqt_string{
            .len = richText.len,
            .data = richText.ptr,
        };
        return qtc.KAboutData_SetCustomAuthorText(@ptrCast(self), plainText_str, richText_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#unsetCustomAuthorText)
    ///
    /// ``` self: QtC.KAboutData ```
    pub fn UnsetCustomAuthorText(self: ?*anyopaque) QtC.KAboutData {
        return qtc.KAboutData_UnsetCustomAuthorText(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setupCommandLine)
    ///
    /// ``` self: QtC.KAboutData, parser: QtC.QCommandLineParser ```
    pub fn SetupCommandLine(self: ?*anyopaque, parser: ?*anyopaque) bool {
        return qtc.KAboutData_SetupCommandLine(@ptrCast(self), @ptrCast(parser));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#processCommandLine)
    ///
    /// ``` self: QtC.KAboutData, parser: QtC.QCommandLineParser ```
    pub fn ProcessCommandLine(self: ?*anyopaque, parser: ?*anyopaque) void {
        qtc.KAboutData_ProcessCommandLine(@ptrCast(self), @ptrCast(parser));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setDesktopFileName)
    ///
    /// ``` self: QtC.KAboutData, desktopFileName: []const u8 ```
    pub fn SetDesktopFileName(self: ?*anyopaque, desktopFileName: []const u8) QtC.KAboutData {
        const desktopFileName_str = qtc.libqt_string{
            .len = desktopFileName.len,
            .data = desktopFileName.ptr,
        };
        return qtc.KAboutData_SetDesktopFileName(@ptrCast(self), desktopFileName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#desktopFileName)
    ///
    /// ``` self: QtC.KAboutData, allocator: std.mem.Allocator ```
    pub fn DesktopFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAboutData_DesktopFileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kaboutdata.DesktopFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8, task: []const u8 ```
    pub fn AddAuthor22(self: ?*anyopaque, name: []const u8, task: []const u8) QtC.KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };
        return qtc.KAboutData_AddAuthor22(@ptrCast(self), name_str, task_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8, task: []const u8, emailAddress: []const u8 ```
    pub fn AddAuthor32(self: ?*anyopaque, name: []const u8, task: []const u8, emailAddress: []const u8) QtC.KAboutData {
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
        return qtc.KAboutData_AddAuthor32(@ptrCast(self), name_str, task_str, emailAddress_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8 ```
    pub fn AddAuthor4(self: ?*anyopaque, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8) QtC.KAboutData {
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
        return qtc.KAboutData_AddAuthor4(@ptrCast(self), name_str, task_str, emailAddress_str, webAddress_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addAuthor)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8, avatarUrl: QtC.QUrl ```
    pub fn AddAuthor5(self: ?*anyopaque, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8, avatarUrl: ?*anyopaque) QtC.KAboutData {
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
        return qtc.KAboutData_AddAuthor5(@ptrCast(self), name_str, task_str, emailAddress_str, webAddress_str, @ptrCast(avatarUrl));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addCredit)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8, task: []const u8 ```
    pub fn AddCredit22(self: ?*anyopaque, name: []const u8, task: []const u8) QtC.KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const task_str = qtc.libqt_string{
            .len = task.len,
            .data = task.ptr,
        };
        return qtc.KAboutData_AddCredit22(@ptrCast(self), name_str, task_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addCredit)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8, task: []const u8, emailAddress: []const u8 ```
    pub fn AddCredit32(self: ?*anyopaque, name: []const u8, task: []const u8, emailAddress: []const u8) QtC.KAboutData {
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
        return qtc.KAboutData_AddCredit32(@ptrCast(self), name_str, task_str, emailAddress_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addCredit)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8 ```
    pub fn AddCredit4(self: ?*anyopaque, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8) QtC.KAboutData {
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
        return qtc.KAboutData_AddCredit4(@ptrCast(self), name_str, task_str, emailAddress_str, webAddress_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addCredit)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8, avatarUrl: QtC.QUrl ```
    pub fn AddCredit5(self: ?*anyopaque, name: []const u8, task: []const u8, emailAddress: []const u8, webAddress: []const u8, avatarUrl: ?*anyopaque) QtC.KAboutData {
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
        return qtc.KAboutData_AddCredit5(@ptrCast(self), name_str, task_str, emailAddress_str, webAddress_str, @ptrCast(avatarUrl));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addComponent)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8, description: []const u8 ```
    pub fn AddComponent22(self: ?*anyopaque, name: []const u8, description: []const u8) QtC.KAboutData {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        return qtc.KAboutData_AddComponent22(@ptrCast(self), name_str, description_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addComponent)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8, description: []const u8, version: []const u8 ```
    pub fn AddComponent32(self: ?*anyopaque, name: []const u8, description: []const u8, version: []const u8) QtC.KAboutData {
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
        return qtc.KAboutData_AddComponent32(@ptrCast(self), name_str, description_str, version_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addComponent)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8 ```
    pub fn AddComponent4(self: ?*anyopaque, name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8) QtC.KAboutData {
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
        return qtc.KAboutData_AddComponent4(@ptrCast(self), name_str, description_str, version_str, webAddress_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addComponent)
    ///
    /// ``` self: QtC.KAboutData, name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8, licenseKey: kaboutdata_enums.LicenseKey ```
    pub fn AddComponent5(self: ?*anyopaque, name: []const u8, description: []const u8, version: []const u8, webAddress: []const u8, licenseKey: i32) QtC.KAboutData {
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
        return qtc.KAboutData_AddComponent5(@ptrCast(self), name_str, description_str, version_str, webAddress_str, @intCast(licenseKey));
    }

    /// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#dtor.KAboutData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KAboutData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KAboutData_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/kaboutdata.html#types
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
