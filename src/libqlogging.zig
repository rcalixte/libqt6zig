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

    /// New constructs a new QMessageLogContext object.
    ///
    pub fn New() QMessageLogContext {
        return .{ .ptr = qtc.QMessageLogContext_new() };
    }

    /// New2 constructs a new QMessageLogContext object.
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
    pub fn New2(fileName: [:0]const u8, lineNumber: i32, functionName: [:0]const u8, categoryName: [:0]const u8) QMessageLogContext {
        const fileName_Cstring = fileName.ptr;
        const functionName_Cstring = functionName.ptr;
        const categoryName_Cstring = categoryName.ptr;
        return .{ .ptr = qtc.QMessageLogContext_new2(fileName_Cstring, @bitCast(lineNumber), functionName_Cstring, categoryName_Cstring) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    pub fn Version(self: QMessageLogContext) i32 {
        return qtc.QMessageLogContext_Version(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: QMessageLogContext, version: i32) void {
        qtc.QMessageLogContext_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#line-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    pub fn Line(self: QMessageLogContext) i32 {
        return qtc.QMessageLogContext_Line(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#line-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    /// ` line: i32 `
    ///
    pub fn SetLine(self: QMessageLogContext, line: i32) void {
        qtc.QMessageLogContext_SetLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#file-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    pub fn File(self: QMessageLogContext) [:0]const u8 {
        const file_ret = qtc.QMessageLogContext_File(@ptrCast(self.ptr));
        return std.mem.span(file_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#file-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    /// ` file: [:0]const u8 `
    ///
    pub fn SetFile(self: QMessageLogContext, file: [:0]const u8) void {
        const file_Cstring = file.ptr;
        qtc.QMessageLogContext_SetFile(@ptrCast(self.ptr), file_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#function-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    pub fn Function(self: QMessageLogContext) [:0]const u8 {
        const function_ret = qtc.QMessageLogContext_Function(@ptrCast(self.ptr));
        return std.mem.span(function_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#function-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    /// ` function: [:0]const u8 `
    ///
    pub fn SetFunction(self: QMessageLogContext, function: [:0]const u8) void {
        const function_Cstring = function.ptr;
        qtc.QMessageLogContext_SetFunction(@ptrCast(self.ptr), function_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#category-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    pub fn Category(self: QMessageLogContext) [:0]const u8 {
        const category_ret = qtc.QMessageLogContext_Category(@ptrCast(self.ptr));
        return std.mem.span(category_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#category-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogContext `
    ///
    /// ` category: [:0]const u8 `
    ///
    pub fn SetCategory(self: QMessageLogContext, category: [:0]const u8) void {
        const category_Cstring = category.ptr;
        qtc.QMessageLogContext_SetCategory(@ptrCast(self.ptr), category_Cstring);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#dtor.QMessageLogContext)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMessageLogContext `
    ///
    pub fn Delete(self: QMessageLogContext) void {
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

    /// New constructs a new QMessageLogger object.
    ///
    pub fn New() QMessageLogger {
        return .{ .ptr = qtc.QMessageLogger_new() };
    }

    /// New2 constructs a new QMessageLogger object.
    ///
    /// ## Parameter(s):
    ///
    /// ` file: [:0]const u8 `
    ///
    /// ` line: i32 `
    ///
    /// ` function: [:0]const u8 `
    ///
    pub fn New2(file: [:0]const u8, line: i32, function: [:0]const u8) QMessageLogger {
        const file_Cstring = file.ptr;
        const function_Cstring = function.ptr;
        return .{ .ptr = qtc.QMessageLogger_new2(file_Cstring, @bitCast(line), function_Cstring) };
    }

    /// New3 constructs a new QMessageLogger object.
    ///
    /// ## Parameter(s):
    ///
    /// ` file: [:0]const u8 `
    ///
    /// ` line: i32 `
    ///
    /// ` function: [:0]const u8 `
    ///
    /// ` category: [:0]const u8 `
    ///
    pub fn New3(file: [:0]const u8, line: i32, function: [:0]const u8, category: [:0]const u8) QMessageLogger {
        const file_Cstring = file.ptr;
        const function_Cstring = function.ptr;
        const category_Cstring = category.ptr;
        return .{ .ptr = qtc.QMessageLogger_new3(file_Cstring, @bitCast(line), function_Cstring, category_Cstring) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    pub fn Debug(self: QMessageLogger) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Debug(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` cat: QLoggingCategory `
    ///
    pub fn Debug2(self: QMessageLogger, cat: anytype) QDebug {
        comptime _ = @TypeOf(cat)._is_QLoggingCategory;
        return .{ .ptr = qtc.QMessageLogger_Debug2(@ptrCast(self.ptr), @ptrCast(cat.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` catFunc: *const fn () callconv(.c) QLoggingCategory `
    ///
    pub fn Debug3(self: QMessageLogger, catFunc: *const fn () callconv(.c) QLoggingCategory) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Debug3(@ptrCast(self.ptr), @bitCast(@intFromPtr(catFunc))) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#info)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    pub fn Info(self: QMessageLogger) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Info(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#info)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` cat: QLoggingCategory `
    ///
    pub fn Info2(self: QMessageLogger, cat: anytype) QDebug {
        comptime _ = @TypeOf(cat)._is_QLoggingCategory;
        return .{ .ptr = qtc.QMessageLogger_Info2(@ptrCast(self.ptr), @ptrCast(cat.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#info)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` catFunc: *const fn () callconv(.c) QLoggingCategory `
    ///
    pub fn Info3(self: QMessageLogger, catFunc: *const fn () callconv(.c) QLoggingCategory) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Info3(@ptrCast(self.ptr), @bitCast(@intFromPtr(catFunc))) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    pub fn Warning(self: QMessageLogger) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Warning(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` cat: QLoggingCategory `
    ///
    pub fn Warning2(self: QMessageLogger, cat: anytype) QDebug {
        comptime _ = @TypeOf(cat)._is_QLoggingCategory;
        return .{ .ptr = qtc.QMessageLogger_Warning2(@ptrCast(self.ptr), @ptrCast(cat.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` catFunc: *const fn () callconv(.c) QLoggingCategory `
    ///
    pub fn Warning3(self: QMessageLogger, catFunc: *const fn () callconv(.c) QLoggingCategory) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Warning3(@ptrCast(self.ptr), @bitCast(@intFromPtr(catFunc))) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    pub fn Critical(self: QMessageLogger) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Critical(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` cat: QLoggingCategory `
    ///
    pub fn Critical2(self: QMessageLogger, cat: anytype) QDebug {
        comptime _ = @TypeOf(cat)._is_QLoggingCategory;
        return .{ .ptr = qtc.QMessageLogger_Critical2(@ptrCast(self.ptr), @ptrCast(cat.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` catFunc: *const fn () callconv(.c) QLoggingCategory `
    ///
    pub fn Critical3(self: QMessageLogger, catFunc: *const fn () callconv(.c) QLoggingCategory) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Critical3(@ptrCast(self.ptr), @bitCast(@intFromPtr(catFunc))) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    pub fn Fatal(self: QMessageLogger) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Fatal(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` cat: QLoggingCategory `
    ///
    pub fn Fatal2(self: QMessageLogger, cat: anytype) QDebug {
        comptime _ = @TypeOf(cat)._is_QLoggingCategory;
        return .{ .ptr = qtc.QMessageLogger_Fatal2(@ptrCast(self.ptr), @ptrCast(cat.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    /// ` catFunc: *const fn () callconv(.c) QLoggingCategory `
    ///
    pub fn Fatal3(self: QMessageLogger, catFunc: *const fn () callconv(.c) QLoggingCategory) QDebug {
        return .{ .ptr = qtc.QMessageLogger_Fatal3(@ptrCast(self.ptr), @bitCast(@intFromPtr(catFunc))) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#noDebug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageLogger `
    ///
    pub fn NoDebug(self: QMessageLogger) QNoDebug {
        return .{ .ptr = qtc.QMessageLogger_NoDebug(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#dtor.QMessageLogger)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMessageLogger `
    ///
    pub fn Delete(self: QMessageLogger) void {
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
