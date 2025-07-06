const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qmessagelogcontext.html
pub const qmessagelogcontext = struct {
    /// New constructs a new QMessageLogContext object.
    ///
    ///
    pub fn New() QtC.QMessageLogContext {
        return qtc.QMessageLogContext_new();
    }

    /// New2 constructs a new QMessageLogContext object.
    ///
    /// ``` fileName: []const u8, lineNumber: i32, functionName: []const u8, categoryName: []const u8 ```
    pub fn New2(fileName: []const u8, lineNumber: i32, functionName: []const u8, categoryName: []const u8) QtC.QMessageLogContext {
        const fileName_Cstring = fileName.ptr;
        const functionName_Cstring = functionName.ptr;
        const categoryName_Cstring = categoryName.ptr;

        return qtc.QMessageLogContext_new2(fileName_Cstring, @intCast(lineNumber), functionName_Cstring, categoryName_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogcontext.html#dtor.QMessageLogContext)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMessageLogContext ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMessageLogContext_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmessagelogger.html
pub const qmessagelogger = struct {
    /// New constructs a new QMessageLogger object.
    ///
    ///
    pub fn New() QtC.QMessageLogger {
        return qtc.QMessageLogger_new();
    }

    /// New2 constructs a new QMessageLogger object.
    ///
    /// ``` file: []const u8, line: i32, function: []const u8 ```
    pub fn New2(file: []const u8, line: i32, function: []const u8) QtC.QMessageLogger {
        const file_Cstring = file.ptr;
        const function_Cstring = function.ptr;

        return qtc.QMessageLogger_new2(file_Cstring, @intCast(line), function_Cstring);
    }

    /// New3 constructs a new QMessageLogger object.
    ///
    /// ``` file: []const u8, line: i32, function: []const u8, category: []const u8 ```
    pub fn New3(file: []const u8, line: i32, function: []const u8, category: []const u8) QtC.QMessageLogger {
        const file_Cstring = file.ptr;
        const function_Cstring = function.ptr;
        const category_Cstring = category.ptr;

        return qtc.QMessageLogger_new3(file_Cstring, @intCast(line), function_Cstring, category_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
    ///
    /// ``` self: QtC.QMessageLogger ```
    pub fn Debug(self: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Debug(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
    ///
    /// ``` self: QtC.QMessageLogger, cat: QtC.QLoggingCategory ```
    pub fn DebugWithCat(self: ?*anyopaque, cat: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_DebugWithCat(@ptrCast(self), @ptrCast(cat));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#info)
    ///
    /// ``` self: QtC.QMessageLogger ```
    pub fn Info(self: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Info(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#info)
    ///
    /// ``` self: QtC.QMessageLogger, cat: QtC.QLoggingCategory ```
    pub fn InfoWithCat(self: ?*anyopaque, cat: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_InfoWithCat(@ptrCast(self), @ptrCast(cat));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
    ///
    /// ``` self: QtC.QMessageLogger ```
    pub fn Warning(self: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Warning(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
    ///
    /// ``` self: QtC.QMessageLogger, cat: QtC.QLoggingCategory ```
    pub fn WarningWithCat(self: ?*anyopaque, cat: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_WarningWithCat(@ptrCast(self), @ptrCast(cat));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
    ///
    /// ``` self: QtC.QMessageLogger ```
    pub fn Critical(self: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Critical(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
    ///
    /// ``` self: QtC.QMessageLogger, cat: QtC.QLoggingCategory ```
    pub fn CriticalWithCat(self: ?*anyopaque, cat: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_CriticalWithCat(@ptrCast(self), @ptrCast(cat));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
    ///
    /// ``` self: QtC.QMessageLogger ```
    pub fn Fatal(self: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Fatal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
    ///
    /// ``` self: QtC.QMessageLogger, cat: QtC.QLoggingCategory ```
    pub fn FatalWithCat(self: ?*anyopaque, cat: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_FatalWithCat(@ptrCast(self), @ptrCast(cat));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#noDebug)
    ///
    /// ``` self: QtC.QMessageLogger ```
    pub fn NoDebug(self: ?*anyopaque) QtC.QNoDebug {
        return qtc.QMessageLogger_NoDebug(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#dtor.QMessageLogger)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMessageLogger ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMessageLogger_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qlogging.html#types
pub const enums = struct {
    pub const QtMsgType = enum {
        pub const QtDebugMsg: i32 = 0;
        pub const QtWarningMsg: i32 = 1;
        pub const QtCriticalMsg: i32 = 2;
        pub const QtFatalMsg: i32 = 3;
        pub const QtInfoMsg: i32 = 4;
        pub const QtSystemMsg: i32 = 2;
    };
};
