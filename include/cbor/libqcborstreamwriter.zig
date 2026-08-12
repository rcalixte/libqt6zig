const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIODevice = @import("libqt6").QIODevice;
const qcborcommon_enums = @import("libqcborcommon.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html)
pub const QCborStreamWriter = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCborStreamWriter,

    pub const _is_QCborStreamWriter = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCborStreamWriter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _device: QIODevice `
    ///
    pub fn new(_device: anytype) QCborStreamWriter {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        return .{ .ptr = qtc.QCborStreamWriter_new(@ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `setDevice` instead
    ///
    pub const SetDevice = setDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` _device: QIODevice `
    ///
    pub fn setDevice(self: QCborStreamWriter, _device: anytype) void {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        qtc.QCborStreamWriter_SetDevice(@ptrCast(self.ptr), @ptrCast(_device.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    pub fn device(self: QCborStreamWriter) QIODevice {
        return .{ .ptr = qtc.QCborStreamWriter_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` u: u64 `
    ///
    pub fn append(self: QCborStreamWriter, u: u64) void {
        qtc.QCborStreamWriter_Append(@ptrCast(self.ptr), @bitCast(u));
    }

    /// ### DEPRECATED: Use `append2` instead
    ///
    pub const Append2 = append2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` i: i64 `
    ///
    pub fn append2(self: QCborStreamWriter, i: i64) void {
        qtc.QCborStreamWriter_Append2(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `append3` instead
    ///
    pub const Append3 = append3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` n: qcborcommon_enums.QCborNegativeInteger `
    ///
    pub fn append3(self: QCborStreamWriter, n: u64) void {
        qtc.QCborStreamWriter_Append3(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### DEPRECATED: Use `append4` instead
    ///
    pub const Append4 = append4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` ba: []u8 `
    ///
    pub fn append4(self: QCborStreamWriter, ba: []u8) void {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        qtc.QCborStreamWriter_Append4(@ptrCast(self.ptr), ba_str);
    }

    /// ### DEPRECATED: Use `append5` instead
    ///
    pub const Append5 = append5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` str: []u8 `
    ///
    pub fn append5(self: QCborStreamWriter, str: []u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.QCborStreamWriter_Append5(@ptrCast(self.ptr), str_str);
    }

    /// ### DEPRECATED: Use `append6` instead
    ///
    pub const Append6 = append6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` str: []const u8 `
    ///
    pub fn append6(self: QCborStreamWriter, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.QCborStreamWriter_Append6(@ptrCast(self.ptr), str_str);
    }

    /// ### DEPRECATED: Use `append7` instead
    ///
    pub const Append7 = append7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` tag: qcborcommon_enums.QCborTag `
    ///
    pub fn append7(self: QCborStreamWriter, tag: u64) void {
        qtc.QCborStreamWriter_Append7(@ptrCast(self.ptr), @bitCast(tag));
    }

    /// ### DEPRECATED: Use `append8` instead
    ///
    pub const Append8 = append8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` tag: qcborcommon_enums.QCborKnownTags `
    ///
    pub fn append8(self: QCborStreamWriter, tag: i32) void {
        qtc.QCborStreamWriter_Append8(@ptrCast(self.ptr), @bitCast(tag));
    }

    /// ### DEPRECATED: Use `append9` instead
    ///
    pub const Append9 = append9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn append9(self: QCborStreamWriter, st: u8) void {
        qtc.QCborStreamWriter_Append9(@ptrCast(self.ptr), @bitCast(st));
    }

    /// ### DEPRECATED: Use `append12` instead
    ///
    pub const Append12 = append12;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` f: f32 `
    ///
    pub fn append12(self: QCborStreamWriter, f: f32) void {
        qtc.QCborStreamWriter_Append12(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `append13` instead
    ///
    pub const Append13 = append13;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` d: f64 `
    ///
    pub fn append13(self: QCborStreamWriter, d: f64) void {
        qtc.QCborStreamWriter_Append13(@ptrCast(self.ptr), @bitCast(d));
    }

    /// ### DEPRECATED: Use `appendByteString` instead
    ///
    pub const AppendByteString = appendByteString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendByteString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` len: isize `
    ///
    pub fn appendByteString(self: QCborStreamWriter, data: [:0]const u8, len: isize) void {
        const data_Cstring = data.ptr;
        qtc.QCborStreamWriter_AppendByteString(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `appendTextString` instead
    ///
    pub const AppendTextString = appendTextString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendTextString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` utf8: [:0]const u8 `
    ///
    /// ` len: isize `
    ///
    pub fn appendTextString(self: QCborStreamWriter, utf8: [:0]const u8, len: isize) void {
        const utf8_Cstring = utf8.ptr;
        qtc.QCborStreamWriter_AppendTextString(@ptrCast(self.ptr), utf8_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `append14` instead
    ///
    pub const Append14 = append14;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` b: bool `
    ///
    pub fn append14(self: QCborStreamWriter, b: bool) void {
        qtc.QCborStreamWriter_Append14(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `appendNull` instead
    ///
    pub const AppendNull = appendNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    pub fn appendNull(self: QCborStreamWriter) void {
        qtc.QCborStreamWriter_AppendNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `appendUndefined` instead
    ///
    pub const AppendUndefined = appendUndefined;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    pub fn appendUndefined(self: QCborStreamWriter) void {
        qtc.QCborStreamWriter_AppendUndefined(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `append15` instead
    ///
    pub const Append15 = append15;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` i: i32 `
    ///
    pub fn append15(self: QCborStreamWriter, i: i32) void {
        qtc.QCborStreamWriter_Append15(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `append16` instead
    ///
    pub const Append16 = append16;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` u: u32 `
    ///
    pub fn append16(self: QCborStreamWriter, u: u32) void {
        qtc.QCborStreamWriter_Append16(@ptrCast(self.ptr), @bitCast(u));
    }

    /// ### DEPRECATED: Use `append17` instead
    ///
    pub const Append17 = append17;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` str: [:0]const u8 `
    ///
    pub fn append17(self: QCborStreamWriter, str: [:0]const u8) void {
        const str_Cstring = str.ptr;
        qtc.QCborStreamWriter_Append17(@ptrCast(self.ptr), str_Cstring);
    }

    /// ### DEPRECATED: Use `startArray` instead
    ///
    pub const StartArray = startArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#startArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    pub fn startArray(self: QCborStreamWriter) void {
        qtc.QCborStreamWriter_StartArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startArray2` instead
    ///
    pub const StartArray2 = startArray2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#startArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` count: u64 `
    ///
    pub fn startArray2(self: QCborStreamWriter, count: u64) void {
        qtc.QCborStreamWriter_StartArray2(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `endArray` instead
    ///
    pub const EndArray = endArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#endArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    pub fn endArray(self: QCborStreamWriter) bool {
        return qtc.QCborStreamWriter_EndArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startMap` instead
    ///
    pub const StartMap = startMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#startMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    pub fn startMap(self: QCborStreamWriter) void {
        qtc.QCborStreamWriter_StartMap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startMap2` instead
    ///
    pub const StartMap2 = startMap2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#startMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` count: u64 `
    ///
    pub fn startMap2(self: QCborStreamWriter, count: u64) void {
        qtc.QCborStreamWriter_StartMap2(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `endMap` instead
    ///
    pub const EndMap = endMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#endMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    pub fn endMap(self: QCborStreamWriter) bool {
        return qtc.QCborStreamWriter_EndMap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `append22` instead
    ///
    pub const Append22 = append22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` str: [:0]const u8 `
    ///
    /// ` size: isize `
    ///
    pub fn append22(self: QCborStreamWriter, str: [:0]const u8, size: isize) void {
        const str_Cstring = str.ptr;
        qtc.QCborStreamWriter_Append22(@ptrCast(self.ptr), str_Cstring, @bitCast(size));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#dtor.QCborStreamWriter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborStreamWriter `
    ///
    pub fn delete(self: QCborStreamWriter) void {
        qtc.QCborStreamWriter_Delete(@ptrCast(self.ptr));
    }
};
