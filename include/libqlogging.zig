const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html)
pub const qmessagelogcontext = struct {
    /// New constructs a new QMessageLogContext object.
    ///
    pub fn New() QtC.QMessageLogContext {
        return qtc.QMessageLogContext_new();
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
    pub fn New2(fileName: [:0]const u8, lineNumber: i32, functionName: [:0]const u8, categoryName: [:0]const u8) QtC.QMessageLogContext {
        const fileName_Cstring = fileName.ptr;
        const functionName_Cstring = functionName.ptr;
        const categoryName_Cstring = categoryName.ptr;

        return qtc.QMessageLogContext_new2(fileName_Cstring, @bitCast(lineNumber), functionName_Cstring, categoryName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogContext `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QMessageLogContext_Version(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogContext `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QMessageLogContext_SetVersion(@ptrCast(self), @bitCast(version));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#line-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogContext `
    ///
    pub fn Line(self: ?*anyopaque) i32 {
        return qtc.QMessageLogContext_Line(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#line-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogContext `
    ///
    /// ` line: i32 `
    ///
    pub fn SetLine(self: ?*anyopaque, line: i32) void {
        qtc.QMessageLogContext_SetLine(@ptrCast(self), @bitCast(line));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#file-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogContext `
    ///
    pub fn File(self: ?*anyopaque) [:0]const u8 {
        const file_ret = qtc.QMessageLogContext_File(@ptrCast(self));
        return std.mem.span(file_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#file-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogContext `
    ///
    /// ` file: [:0]const u8 `
    ///
    pub fn SetFile(self: ?*anyopaque, file: [:0]const u8) void {
        const file_Cstring = file.ptr;
        qtc.QMessageLogContext_SetFile(@ptrCast(self), file_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#function-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogContext `
    ///
    pub fn Function(self: ?*anyopaque) [:0]const u8 {
        const function_ret = qtc.QMessageLogContext_Function(@ptrCast(self));
        return std.mem.span(function_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#function-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogContext `
    ///
    /// ` function: [:0]const u8 `
    ///
    pub fn SetFunction(self: ?*anyopaque, function: [:0]const u8) void {
        const function_Cstring = function.ptr;
        qtc.QMessageLogContext_SetFunction(@ptrCast(self), function_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#category-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogContext `
    ///
    pub fn Category(self: ?*anyopaque) [:0]const u8 {
        const category_ret = qtc.QMessageLogContext_Category(@ptrCast(self));
        return std.mem.span(category_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#category-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogContext `
    ///
    /// ` category: [:0]const u8 `
    ///
    pub fn SetCategory(self: ?*anyopaque, category: [:0]const u8) void {
        const category_Cstring = category.ptr;
        qtc.QMessageLogContext_SetCategory(@ptrCast(self), category_Cstring);
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
    /// ` self: QtC.QMessageLogContext `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QMessageLogContext_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html)
pub const qmessagelogger = struct {
    /// New constructs a new QMessageLogger object.
    ///
    pub fn New() QtC.QMessageLogger {
        return qtc.QMessageLogger_new();
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
    pub fn New2(file: [:0]const u8, line: i32, function: [:0]const u8) QtC.QMessageLogger {
        const file_Cstring = file.ptr;
        const function_Cstring = function.ptr;

        return qtc.QMessageLogger_new2(file_Cstring, @bitCast(line), function_Cstring);
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
    pub fn New3(file: [:0]const u8, line: i32, function: [:0]const u8, category: [:0]const u8) QtC.QMessageLogger {
        const file_Cstring = file.ptr;
        const function_Cstring = function.ptr;
        const category_Cstring = category.ptr;

        return qtc.QMessageLogger_new3(file_Cstring, @bitCast(line), function_Cstring, category_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogger `
    ///
    pub fn Debug(self: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Debug(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogger `
    ///
    /// ` cat: QtC.QLoggingCategory `
    ///
    pub fn Debug2(self: ?*anyopaque, cat: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Debug2(@ptrCast(self), @ptrCast(cat));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogger `
    ///
    /// ` catFunc: *const fn () callconv(.c) QtC.QLoggingCategory `
    ///
    pub fn Debug3(self: ?*anyopaque, catFunc: *const fn () callconv(.c) QtC.QLoggingCategory) QtC.QDebug {
        return qtc.QMessageLogger_Debug3(@ptrCast(self), @bitCast(@intFromPtr(catFunc)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#info)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogger `
    ///
    pub fn Info(self: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Info(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#info)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogger `
    ///
    /// ` cat: QtC.QLoggingCategory `
    ///
    pub fn Info2(self: ?*anyopaque, cat: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Info2(@ptrCast(self), @ptrCast(cat));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#info)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogger `
    ///
    /// ` catFunc: *const fn () callconv(.c) QtC.QLoggingCategory `
    ///
    pub fn Info3(self: ?*anyopaque, catFunc: *const fn () callconv(.c) QtC.QLoggingCategory) QtC.QDebug {
        return qtc.QMessageLogger_Info3(@ptrCast(self), @bitCast(@intFromPtr(catFunc)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogger `
    ///
    pub fn Warning(self: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Warning(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogger `
    ///
    /// ` cat: QtC.QLoggingCategory `
    ///
    pub fn Warning2(self: ?*anyopaque, cat: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Warning2(@ptrCast(self), @ptrCast(cat));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogger `
    ///
    /// ` catFunc: *const fn () callconv(.c) QtC.QLoggingCategory `
    ///
    pub fn Warning3(self: ?*anyopaque, catFunc: *const fn () callconv(.c) QtC.QLoggingCategory) QtC.QDebug {
        return qtc.QMessageLogger_Warning3(@ptrCast(self), @bitCast(@intFromPtr(catFunc)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogger `
    ///
    pub fn Critical(self: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Critical(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogger `
    ///
    /// ` cat: QtC.QLoggingCategory `
    ///
    pub fn Critical2(self: ?*anyopaque, cat: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Critical2(@ptrCast(self), @ptrCast(cat));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogger `
    ///
    /// ` catFunc: *const fn () callconv(.c) QtC.QLoggingCategory `
    ///
    pub fn Critical3(self: ?*anyopaque, catFunc: *const fn () callconv(.c) QtC.QLoggingCategory) QtC.QDebug {
        return qtc.QMessageLogger_Critical3(@ptrCast(self), @bitCast(@intFromPtr(catFunc)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogger `
    ///
    pub fn Fatal(self: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Fatal(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogger `
    ///
    /// ` cat: QtC.QLoggingCategory `
    ///
    pub fn Fatal2(self: ?*anyopaque, cat: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Fatal2(@ptrCast(self), @ptrCast(cat));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogger `
    ///
    /// ` catFunc: *const fn () callconv(.c) QtC.QLoggingCategory `
    ///
    pub fn Fatal3(self: ?*anyopaque, catFunc: *const fn () callconv(.c) QtC.QLoggingCategory) QtC.QDebug {
        return qtc.QMessageLogger_Fatal3(@ptrCast(self), @bitCast(@intFromPtr(catFunc)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#noDebug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageLogger `
    ///
    pub fn NoDebug(self: ?*anyopaque) QtC.QNoDebug {
        return qtc.QMessageLogger_NoDebug(@ptrCast(self));
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
    /// ` self: QtC.QMessageLogger `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QMessageLogger_Delete(@ptrCast(self));
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
