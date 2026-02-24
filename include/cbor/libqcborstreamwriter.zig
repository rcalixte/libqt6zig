const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcborcommon_enums = @import("libqcborcommon.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html)
pub const qcborstreamwriter = struct {
    /// New constructs a new QCborStreamWriter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn New(device: ?*anyopaque) QtC.QCborStreamWriter {
        return qtc.QCborStreamWriter_new(@ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QCborStreamWriter_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QCborStreamWriter_Device(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` u: u64 `
    ///
    pub fn Append(self: ?*anyopaque, u: u64) void {
        qtc.QCborStreamWriter_Append(@ptrCast(self), @bitCast(u));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` i: i64 `
    ///
    pub fn Append2(self: ?*anyopaque, i: i64) void {
        qtc.QCborStreamWriter_Append2(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` n: qcborcommon_enums.QCborNegativeInteger `
    ///
    pub fn Append3(self: ?*anyopaque, n: u64) void {
        qtc.QCborStreamWriter_Append3(@ptrCast(self), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` ba: []u8 `
    ///
    pub fn Append4(self: ?*anyopaque, ba: []u8) void {
        const ba_str = qtc.libqt_string{
            .len = ba.len,
            .data = ba.ptr,
        };
        qtc.QCborStreamWriter_Append4(@ptrCast(self), ba_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` tag: qcborcommon_enums.QCborTag `
    ///
    pub fn Append7(self: ?*anyopaque, tag: u64) void {
        qtc.QCborStreamWriter_Append7(@ptrCast(self), @bitCast(tag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` tag: qcborcommon_enums.QCborKnownTags `
    ///
    pub fn Append8(self: ?*anyopaque, tag: i32) void {
        qtc.QCborStreamWriter_Append8(@ptrCast(self), @bitCast(tag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn Append9(self: ?*anyopaque, st: u8) void {
        qtc.QCborStreamWriter_Append9(@ptrCast(self), @bitCast(st));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` f: f32 `
    ///
    pub fn Append12(self: ?*anyopaque, f: f32) void {
        qtc.QCborStreamWriter_Append12(@ptrCast(self), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` d: f64 `
    ///
    pub fn Append13(self: ?*anyopaque, d: f64) void {
        qtc.QCborStreamWriter_Append13(@ptrCast(self), @bitCast(d));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendByteString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn AppendByteString(self: ?*anyopaque, data: [:0]const u8, lenVal: i64) void {
        const data_Cstring = data.ptr;
        qtc.QCborStreamWriter_AppendByteString(@ptrCast(self), data_Cstring, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendTextString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` utf8: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn AppendTextString(self: ?*anyopaque, utf8: [:0]const u8, lenVal: i64) void {
        const utf8_Cstring = utf8.ptr;
        qtc.QCborStreamWriter_AppendTextString(@ptrCast(self), utf8_Cstring, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` b: bool `
    ///
    pub fn Append14(self: ?*anyopaque, b: bool) void {
        qtc.QCborStreamWriter_Append14(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    pub fn AppendNull(self: ?*anyopaque) void {
        qtc.QCborStreamWriter_AppendNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    pub fn AppendUndefined(self: ?*anyopaque) void {
        qtc.QCborStreamWriter_AppendUndefined(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` i: i32 `
    ///
    pub fn Append15(self: ?*anyopaque, i: i32) void {
        qtc.QCborStreamWriter_Append15(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` u: u32 `
    ///
    pub fn Append16(self: ?*anyopaque, u: u32) void {
        qtc.QCborStreamWriter_Append16(@ptrCast(self), @bitCast(u));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` str: [:0]const u8 `
    ///
    pub fn Append17(self: ?*anyopaque, str: [:0]const u8) void {
        const str_Cstring = str.ptr;
        qtc.QCborStreamWriter_Append17(@ptrCast(self), str_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#startArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    pub fn StartArray(self: ?*anyopaque) void {
        qtc.QCborStreamWriter_StartArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#startArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` count: u64 `
    ///
    pub fn StartArray2(self: ?*anyopaque, count: u64) void {
        qtc.QCborStreamWriter_StartArray2(@ptrCast(self), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#endArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    pub fn EndArray(self: ?*anyopaque) bool {
        return qtc.QCborStreamWriter_EndArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#startMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    pub fn StartMap(self: ?*anyopaque) void {
        qtc.QCborStreamWriter_StartMap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#startMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` count: u64 `
    ///
    pub fn StartMap2(self: ?*anyopaque, count: u64) void {
        qtc.QCborStreamWriter_StartMap2(@ptrCast(self), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#endMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    pub fn EndMap(self: ?*anyopaque) bool {
        return qtc.QCborStreamWriter_EndMap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborStreamWriter `
    ///
    /// ` str: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn Append22(self: ?*anyopaque, str: [:0]const u8, size: i64) void {
        const str_Cstring = str.ptr;
        qtc.QCborStreamWriter_Append22(@ptrCast(self), str_Cstring, @bitCast(size));
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
    /// ` self: QtC.QCborStreamWriter `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QCborStreamWriter_Delete(@ptrCast(self));
    }
};
