const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
pub const SignOn__Error = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.SignOn__Error,

    pub const _is_SignOn__Error = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new SignOn::Error object in C++ memory
    ///
    pub fn new() SignOn__Error {
        return .{ .ptr = qtc.SignOn__Error_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new SignOn::Error object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` src: SignOn__Error `
    ///
    pub fn new2(src: anytype) SignOn__Error {
        comptime _ = @TypeOf(src)._is_SignOn__Error;
        return .{ .ptr = qtc.SignOn__Error_new2(@ptrCast(src.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new SignOn::Error object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new3(typeVal: i32) SignOn__Error {
        return .{ .ptr = qtc.SignOn__Error_new3(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new SignOn::Error object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    /// ` _message: []const u8 `
    ///
    pub fn new4(typeVal: i32, _message: []const u8) SignOn__Error {
        const message_str = qtc.libqt_string{
            .len = _message.len,
            .data = _message.ptr,
        };
        return .{ .ptr = qtc.SignOn__Error_new4(@bitCast(typeVal), message_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Error `
    ///
    /// ` src: SignOn__Error `
    ///
    pub fn operatorAssign(self: SignOn__Error, src: anytype) void {
        comptime _ = @TypeOf(src)._is_SignOn__Error;
        qtc.SignOn__Error_OperatorAssign(@ptrCast(self.ptr), @ptrCast(src.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Error `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn setType(self: SignOn__Error, typeVal: i32) void {
        qtc.SignOn__Error_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `setMessage` instead
    ///
    pub const SetMessage = setMessage;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Error `
    ///
    /// ` _message: []const u8 `
    ///
    pub fn setMessage(self: SignOn__Error, _message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = _message.len,
            .data = _message.ptr,
        };
        qtc.SignOn__Error_SetMessage(@ptrCast(self.ptr), message_str);
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Error `
    ///
    pub fn type0(self: SignOn__Error) i32 {
        return qtc.SignOn__Error_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `message` instead
    ///
    pub const Message = message;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Error `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn message(self: SignOn__Error, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__Error_Message(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__Error.message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: SignOn__Error `
    ///
    pub fn delete(self: SignOn__Error) void {
        qtc.SignOn__Error_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Signonerror.html)
pub const enums = struct {
    pub const ErrorType = enum {
        pub const Unknown: i32 = 1;
        pub const InternalServer: i32 = 2;
        pub const InternalCommunication: i32 = 3;
        pub const PermissionDenied: i32 = 4;
        pub const EncryptionFailure: i32 = 5;
        pub const AuthServiceErr: i32 = 100;
        pub const MethodNotKnown: i32 = 101;
        pub const ServiceNotAvailable: i32 = 102;
        pub const InvalidQuery: i32 = 103;
        pub const IdentityErr: i32 = 200;
        pub const MethodNotAvailable: i32 = 201;
        pub const IdentityNotFound: i32 = 202;
        pub const StoreFailed: i32 = 203;
        pub const RemoveFailed: i32 = 204;
        pub const SignOutFailed: i32 = 205;
        pub const IdentityOperationCanceled: i32 = 206;
        pub const CredentialsNotAvailable: i32 = 207;
        pub const ReferenceNotFound: i32 = 208;
        pub const AuthSessionErr: i32 = 300;
        pub const MechanismNotAvailable: i32 = 301;
        pub const MissingData: i32 = 302;
        pub const InvalidCredentials: i32 = 303;
        pub const NotAuthorized: i32 = 304;
        pub const WrongState: i32 = 305;
        pub const OperationNotSupported: i32 = 306;
        pub const NoConnection: i32 = 307;
        pub const Network: i32 = 308;
        pub const Ssl: i32 = 309;
        pub const Runtime: i32 = 310;
        pub const SessionCanceled: i32 = 311;
        pub const TimedOut: i32 = 312;
        pub const UserInteraction: i32 = 313;
        pub const OperationFailed: i32 = 314;
        pub const EncryptionFailed: i32 = 315;
        pub const TOSNotAccepted: i32 = 316;
        pub const ForgotPassword: i32 = 317;
        pub const MethodOrMechanismNotAllowed: i32 = 318;
        pub const IncorrectDate: i32 = 319;
        pub const UserErr: i32 = 400;
    };
};
