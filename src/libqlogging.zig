const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDebug = @import("libqt6").QDebug;
const QLoggingCategory = @import("libqt6").QLoggingCategory;
const QNoDebug = @import("libqt6").QNoDebug;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html)
pub const QMessageLogContext = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMessageLogContext,

    pub const _is_QMessageLogContext = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMessageLogContext object in C++ memory
    ///
    pub fn new() QMessageLogContext {
        return .{ .ptr = qtc.QMessageLogContext_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMessageLogContext object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: [:0]const u8 `
    ///
    /// ` lineNumber: i32 `
    ///
    /// ` functionName: [:0]const u8 `
    ///
    /// ` categoryName: [:0]const u8 `
    ///
    pub fn new2(fileName: [:0]const u8, lineNumber: i32, functionName: [:0]const u8, categoryName: [:0]const u8) QMessageLogContext {
        const fileName_Cstring = fileName.ptr;
        const functionName_Cstring = functionName.ptr;
        const categoryName_Cstring = categoryName.ptr;
        return .{ .ptr = qtc.QMessageLogContext_new2(fileName_Cstring, @bitCast(lineNumber), functionName_Cstring, categoryName_Cstring) };
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    pub fn version(self: QMessageLogContext) i32 {
        return qtc.QMessageLogContext_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QMessageLogContext, _version: i32) void {
        qtc.QMessageLogContext_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `line` instead
    ///
    pub const Line = line;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#line-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    pub fn line(self: QMessageLogContext) i32 {
        return qtc.QMessageLogContext_Line(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLine` instead
    ///
    pub const SetLine = setLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#line-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    /// ` _line: i32 `
    ///
    pub fn setLine(self: QMessageLogContext, _line: i32) void {
        qtc.QMessageLogContext_SetLine(@ptrCast(self.ptr), @bitCast(_line));
    }

    /// ### DEPRECATED: Use `file` instead
    ///
    pub const File = file;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#file-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    pub fn file(self: QMessageLogContext) [:0]const u8 {
        const file_ret = qtc.QMessageLogContext_File(@ptrCast(self.ptr));
        return std.mem.span(file_ret);
    }

    /// ### DEPRECATED: Use `setFile` instead
    ///
    pub const SetFile = setFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#file-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    /// ` _file: [:0]const u8 `
    ///
    pub fn setFile(self: QMessageLogContext, _file: [:0]const u8) void {
        const file_Cstring = _file.ptr;
        qtc.QMessageLogContext_SetFile(@ptrCast(self.ptr), file_Cstring);
    }

    /// ### DEPRECATED: Use `function` instead
    ///
    pub const Function = function;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#function-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    pub fn function(self: QMessageLogContext) [:0]const u8 {
        const function_ret = qtc.QMessageLogContext_Function(@ptrCast(self.ptr));
        return std.mem.span(function_ret);
    }

    /// ### DEPRECATED: Use `setFunction` instead
    ///
    pub const SetFunction = setFunction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#function-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    /// ` _function: [:0]const u8 `
    ///
    pub fn setFunction(self: QMessageLogContext, _function: [:0]const u8) void {
        const function_Cstring = _function.ptr;
        qtc.QMessageLogContext_SetFunction(@ptrCast(self.ptr), function_Cstring);
    }

    /// ### DEPRECATED: Use `category` instead
    ///
    pub const Category = category;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#category-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    pub fn category(self: QMessageLogContext) [:0]const u8 {
        const category_ret = qtc.QMessageLogContext_Category(@ptrCast(self.ptr));
        return std.mem.span(category_ret);
    }

    /// ### DEPRECATED: Use `setCategory` instead
    ///
    pub const SetCategory = setCategory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#category-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    /// ` _category: [:0]const u8 `
    ///
    pub fn setCategory(self: QMessageLogContext, _category: [:0]const u8) void {
        const category_Cstring = _category.ptr;
        qtc.QMessageLogContext_SetCategory(@ptrCast(self.ptr), category_Cstring);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#dtor.QMessageLogContext)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMessageLogContext `
    ///
    pub fn delete(self: QMessageLogContext) void {
        qtc.QMessageLogContext_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html)
pub const QMessageLogger = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMessageLogger,

    pub const _is_QMessageLogger = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMessageLogger object in C++ memory
    ///
    pub fn new() QMessageLogger {
        return .{ .ptr = qtc.QMessageLogger_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMessageLogger object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _file: [:0]const u8 `
    ///
    /// ` _line: i32 `
    ///
    /// ` _function: [:0]const u8 `
    ///
    pub fn new2(_file: [:0]const u8, _line: i32, _function: [:0]const u8) QMessageLogger {
        const file_Cstring = _file.ptr;
        const function_Cstring = _function.ptr;
        return .{ .ptr = qtc.QMessageLogger_new2(file_Cstring, @bitCast(_line), function_Cstring) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMessageLogger object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _file: [:0]const u8 `
    ///
    /// ` _line: i32 `
    ///
    /// ` _function: [:0]const u8 `
    ///
    /// ` _category: [:0]const u8 `
    ///
    pub fn new3(_file: [:0]const u8, _line: i32, _function: [:0]const u8, _category: [:0]const u8) QMessageLogger {
        const file_Cstring = _file.ptr;
        const function_Cstring = _function.ptr;
        const category_Cstring = _category.ptr;
        return .{ .ptr = qtc.QMessageLogger_new3(file_Cstring, @bitCast(_line), function_Cstring, category_Cstring) };
    }

    /// ### DEPRECATED: Use `debug` instead
    ///
    pub const Debug = debug;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    pub fn debug(self: QMessageLogger) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Debug(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `debug2` instead
    ///
    pub const Debug2 = debug2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` cat: QLoggingCategory `
    ///
    pub fn debug2(self: QMessageLogger, cat: anytype) QDebug {
        comptime _ = @TypeOf(cat)._is_QLoggingCategory;
        return .{ .ptr = qtc.QMessageLogger_Debug2(@ptrCast(self.ptr), @ptrCast(cat.ptr)) };
    }

    /// ### DEPRECATED: Use `debug3` instead
    ///
    pub const Debug3 = debug3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` catFunc: *const fn () callconv(.c) QLoggingCategory `
    ///
    pub fn debug3(self: QMessageLogger, catFunc: *const fn () callconv(.c) QLoggingCategory) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Debug3(@ptrCast(self.ptr), @bitCast(@intFromPtr(catFunc))) };
    }

    /// ### DEPRECATED: Use `info` instead
    ///
    pub const Info = info;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#info)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    pub fn info(self: QMessageLogger) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Info(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `info2` instead
    ///
    pub const Info2 = info2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#info)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` cat: QLoggingCategory `
    ///
    pub fn info2(self: QMessageLogger, cat: anytype) QDebug {
        comptime _ = @TypeOf(cat)._is_QLoggingCategory;
        return .{ .ptr = qtc.QMessageLogger_Info2(@ptrCast(self.ptr), @ptrCast(cat.ptr)) };
    }

    /// ### DEPRECATED: Use `info3` instead
    ///
    pub const Info3 = info3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#info)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` catFunc: *const fn () callconv(.c) QLoggingCategory `
    ///
    pub fn info3(self: QMessageLogger, catFunc: *const fn () callconv(.c) QLoggingCategory) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Info3(@ptrCast(self.ptr), @bitCast(@intFromPtr(catFunc))) };
    }

    /// ### DEPRECATED: Use `warning` instead
    ///
    pub const Warning = warning;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    pub fn warning(self: QMessageLogger) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Warning(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `warning2` instead
    ///
    pub const Warning2 = warning2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` cat: QLoggingCategory `
    ///
    pub fn warning2(self: QMessageLogger, cat: anytype) QDebug {
        comptime _ = @TypeOf(cat)._is_QLoggingCategory;
        return .{ .ptr = qtc.QMessageLogger_Warning2(@ptrCast(self.ptr), @ptrCast(cat.ptr)) };
    }

    /// ### DEPRECATED: Use `warning3` instead
    ///
    pub const Warning3 = warning3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` catFunc: *const fn () callconv(.c) QLoggingCategory `
    ///
    pub fn warning3(self: QMessageLogger, catFunc: *const fn () callconv(.c) QLoggingCategory) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Warning3(@ptrCast(self.ptr), @bitCast(@intFromPtr(catFunc))) };
    }

    /// ### DEPRECATED: Use `critical` instead
    ///
    pub const Critical = critical;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    pub fn critical(self: QMessageLogger) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Critical(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `critical2` instead
    ///
    pub const Critical2 = critical2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` cat: QLoggingCategory `
    ///
    pub fn critical2(self: QMessageLogger, cat: anytype) QDebug {
        comptime _ = @TypeOf(cat)._is_QLoggingCategory;
        return .{ .ptr = qtc.QMessageLogger_Critical2(@ptrCast(self.ptr), @ptrCast(cat.ptr)) };
    }

    /// ### DEPRECATED: Use `critical3` instead
    ///
    pub const Critical3 = critical3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` catFunc: *const fn () callconv(.c) QLoggingCategory `
    ///
    pub fn critical3(self: QMessageLogger, catFunc: *const fn () callconv(.c) QLoggingCategory) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Critical3(@ptrCast(self.ptr), @bitCast(@intFromPtr(catFunc))) };
    }

    /// ### DEPRECATED: Use `fatal` instead
    ///
    pub const Fatal = fatal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    pub fn fatal(self: QMessageLogger) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Fatal(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fatal2` instead
    ///
    pub const Fatal2 = fatal2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` cat: QLoggingCategory `
    ///
    pub fn fatal2(self: QMessageLogger, cat: anytype) QDebug {
        comptime _ = @TypeOf(cat)._is_QLoggingCategory;
        return .{ .ptr = qtc.QMessageLogger_Fatal2(@ptrCast(self.ptr), @ptrCast(cat.ptr)) };
    }

    /// ### DEPRECATED: Use `fatal3` instead
    ///
    pub const Fatal3 = fatal3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` catFunc: *const fn () callconv(.c) QLoggingCategory `
    ///
    pub fn fatal3(self: QMessageLogger, catFunc: *const fn () callconv(.c) QLoggingCategory) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Fatal3(@ptrCast(self.ptr), @bitCast(@intFromPtr(catFunc))) };
    }

    /// ### DEPRECATED: Use `noDebug` instead
    ///
    pub const NoDebug = noDebug;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#noDebug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    pub fn noDebug(self: QMessageLogger) QNoDebug {
        return .{ .ptr = qtc.QMessageLogger_NoDebug(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#dtor.QMessageLogger)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMessageLogger `
    ///
    pub fn delete(self: QMessageLogger) void {
        qtc.QMessageLogger_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlogging.html#public-types)
pub const enums = struct {
    pub const QtMsgType = enum(i32) {
        pub const QtDebugMsg: i32 = 0;
        pub const QtWarningMsg: i32 = 1;
        pub const QtCriticalMsg: i32 = 2;
        pub const QtFatalMsg: i32 = 3;
        pub const QtInfoMsg: i32 = 4;
        pub const QtSystemMsg: i32 = 2;
    };
};
