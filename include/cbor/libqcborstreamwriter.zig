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

    /// New constructs a new QCborStreamWriter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    pub fn New(device: anytype) QCborStreamWriter {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QCborStreamWriter_new(@ptrCast(device.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` device: QIODevice `
    ///
    pub fn SetDevice(self: QCborStreamWriter, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QCborStreamWriter_SetDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    pub fn Device(self: QCborStreamWriter) QIODevice {
        return .{ .ptr = qtc.QCborStreamWriter_Device(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` u: u64 `
    ///
    pub fn Append(self: QCborStreamWriter, u: u64) void {
        qtc.QCborStreamWriter_Append(@ptrCast(self.ptr), @bitCast(u));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` i: i64 `
    ///
    pub fn Append2(self: QCborStreamWriter, i: i64) void {
        qtc.QCborStreamWriter_Append2(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` n: qcborcommon_enums.QCborNegativeInteger `
    ///
    pub fn Append3(self: QCborStreamWriter, n: u64) void {
        qtc.QCborStreamWriter_Append3(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` ba: []u8 `
    ///
    pub fn Append4(self: QCborStreamWriter, ba: []u8) void {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        qtc.QCborStreamWriter_Append4(@ptrCast(self.ptr), ba_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` tag: qcborcommon_enums.QCborTag `
    ///
    pub fn Append7(self: QCborStreamWriter, tag: u64) void {
        qtc.QCborStreamWriter_Append7(@ptrCast(self.ptr), @bitCast(tag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` tag: qcborcommon_enums.QCborKnownTags `
    ///
    pub fn Append8(self: QCborStreamWriter, tag: i32) void {
        qtc.QCborStreamWriter_Append8(@ptrCast(self.ptr), @bitCast(tag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn Append9(self: QCborStreamWriter, st: u8) void {
        qtc.QCborStreamWriter_Append9(@ptrCast(self.ptr), @bitCast(st));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` f: f32 `
    ///
    pub fn Append12(self: QCborStreamWriter, f: f32) void {
        qtc.QCborStreamWriter_Append12(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` d: f64 `
    ///
    pub fn Append13(self: QCborStreamWriter, d: f64) void {
        qtc.QCborStreamWriter_Append13(@ptrCast(self.ptr), @bitCast(d));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendByteString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: isize `
    ///
    pub fn AppendByteString(self: QCborStreamWriter, data: [:0]const u8, lenVal: isize) void {
        const data_Cstring = data.ptr;
        qtc.QCborStreamWriter_AppendByteString(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendTextString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` utf8: [:0]const u8 `
    ///
    /// ` lenVal: isize `
    ///
    pub fn AppendTextString(self: QCborStreamWriter, utf8: [:0]const u8, lenVal: isize) void {
        const utf8_Cstring = utf8.ptr;
        qtc.QCborStreamWriter_AppendTextString(@ptrCast(self.ptr), utf8_Cstring, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` b: bool `
    ///
    pub fn Append14(self: QCborStreamWriter, b: bool) void {
        qtc.QCborStreamWriter_Append14(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    pub fn AppendNull(self: QCborStreamWriter) void {
        qtc.QCborStreamWriter_AppendNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    pub fn AppendUndefined(self: QCborStreamWriter) void {
        qtc.QCborStreamWriter_AppendUndefined(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` i: i32 `
    ///
    pub fn Append15(self: QCborStreamWriter, i: i32) void {
        qtc.QCborStreamWriter_Append15(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` u: u32 `
    ///
    pub fn Append16(self: QCborStreamWriter, u: u32) void {
        qtc.QCborStreamWriter_Append16(@ptrCast(self.ptr), @bitCast(u));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` str: [:0]const u8 `
    ///
    pub fn Append17(self: QCborStreamWriter, str: [:0]const u8) void {
        const str_Cstring = str.ptr;
        qtc.QCborStreamWriter_Append17(@ptrCast(self.ptr), str_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#startArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    pub fn StartArray(self: QCborStreamWriter) void {
        qtc.QCborStreamWriter_StartArray(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#startArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` count: u64 `
    ///
    pub fn StartArray2(self: QCborStreamWriter, count: u64) void {
        qtc.QCborStreamWriter_StartArray2(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#endArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    pub fn EndArray(self: QCborStreamWriter) bool {
        return qtc.QCborStreamWriter_EndArray(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#startMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    pub fn StartMap(self: QCborStreamWriter) void {
        qtc.QCborStreamWriter_StartMap(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#startMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    /// ` count: u64 `
    ///
    pub fn StartMap2(self: QCborStreamWriter, count: u64) void {
        qtc.QCborStreamWriter_StartMap2(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#endMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamWriter `
    ///
    pub fn EndMap(self: QCborStreamWriter) bool {
        return qtc.QCborStreamWriter_EndMap(@ptrCast(self.ptr));
    }

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
    pub fn Append22(self: QCborStreamWriter, str: [:0]const u8, size: isize) void {
        const str_Cstring = str.ptr;
        qtc.QCborStreamWriter_Append22(@ptrCast(self.ptr), str_Cstring, @bitCast(size));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#dtor.QCborStreamWriter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborStreamWriter `
    ///
    pub fn Delete(self: QCborStreamWriter) void {
        qtc.QCborStreamWriter_Delete(@ptrCast(self.ptr));
    }
};
