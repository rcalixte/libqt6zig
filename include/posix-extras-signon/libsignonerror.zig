const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
pub const signon__error = struct {
    /// New constructs a new SignOn::Error object.
    ///
    pub fn New() QtC.SignOn__Error {
        return qtc.SignOn__Error_new();
    }

    /// New2 constructs a new SignOn::Error object.
    ///
    /// ## Parameter(s):
    ///
    /// ` src: QtC.SignOn__Error `
    ///
    pub fn New2(src: ?*anyopaque) QtC.SignOn__Error {
        return qtc.SignOn__Error_new2(@ptrCast(src));
    }

    /// New3 constructs a new SignOn::Error object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New3(typeVal: i32) QtC.SignOn__Error {
        return qtc.SignOn__Error_new3(@intCast(typeVal));
    }

    /// New4 constructs a new SignOn::Error object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    /// ` message: []const u8 `
    ///
    pub fn New4(typeVal: i32, message: []const u8) QtC.SignOn__Error {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };

        return qtc.SignOn__Error_new4(@intCast(typeVal), message_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__Error `
    ///
    /// ` src: QtC.SignOn__Error `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, src: ?*anyopaque) void {
        qtc.SignOn__Error_OperatorAssign(@ptrCast(self), @ptrCast(src));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__Error `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn SetType(self: ?*anyopaque, typeVal: i32) void {
        qtc.SignOn__Error_SetType(@ptrCast(self), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__Error `
    ///
    /// ` message: []const u8 `
    ///
    pub fn SetMessage(self: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.SignOn__Error_SetMessage(@ptrCast(self), message_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__Error `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.SignOn__Error_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__Error `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Message(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.SignOn__Error_Message(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon::error.Message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.SignOn__Error `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.SignOn__Error_Delete(@ptrCast(self));
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
