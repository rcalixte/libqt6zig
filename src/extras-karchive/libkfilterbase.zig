const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kfilterbase_enums = enums;

/// ### [Upstream resources](https://api.kde.org/kfilterbase.html)
pub const kfilterbase = struct {
    /// New constructs a new KFilterBase object.
    ///
    pub fn New() QtC.KFilterBase {
        return qtc.KFilterBase_new();
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    pub fn SetDevice(self: ?*anyopaque, dev: ?*anyopaque) void {
        qtc.KFilterBase_SetDevice(@ptrCast(self), @ptrCast(dev));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QIODevice {
        return qtc.KFilterBase_Device(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#init)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` mode: i32 `
    ///
    pub fn Init(self: ?*anyopaque, mode: i32) bool {
        return qtc.KFilterBase_Init(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#init)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` callback: *const fn (self: QtC.KFilterBase, mode: i32) callconv(.c) bool `
    ///
    pub fn OnInit(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KFilterBase_OnInit(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInit` instead
    ///
    pub const QBaseInit = SuperInit;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#init)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` mode: i32 `
    ///
    pub fn SuperInit(self: ?*anyopaque, mode: i32) bool {
        return qtc.KFilterBase_SuperInit(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn Mode(self: ?*anyopaque) i32 {
        return qtc.KFilterBase_Mode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#mode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnMode(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilterBase_OnMode(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMode` instead
    ///
    pub const QBaseMode = SuperMode;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#mode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn SuperMode(self: ?*anyopaque) i32 {
        return qtc.KFilterBase_SuperMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#terminate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn Terminate(self: ?*anyopaque) bool {
        return qtc.KFilterBase_Terminate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#terminate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnTerminate(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KFilterBase_OnTerminate(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTerminate` instead
    ///
    pub const QBaseTerminate = SuperTerminate;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#terminate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn SuperTerminate(self: ?*anyopaque) bool {
        return qtc.KFilterBase_SuperTerminate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn Reset(self: ?*anyopaque) void {
        qtc.KFilterBase_Reset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#reset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReset(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KFilterBase_OnReset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#reset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn SuperReset(self: ?*anyopaque) void {
        qtc.KFilterBase_SuperReset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#readHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn ReadHeader(self: ?*anyopaque) bool {
        return qtc.KFilterBase_ReadHeader(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#readHeader)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnReadHeader(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KFilterBase_OnReadHeader(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadHeader` instead
    ///
    pub const QBaseReadHeader = SuperReadHeader;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#readHeader)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn SuperReadHeader(self: ?*anyopaque) bool {
        return qtc.KFilterBase_SuperReadHeader(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#writeHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` filename: []u8 `
    ///
    pub fn WriteHeader(self: ?*anyopaque, filename: []u8) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.KFilterBase_WriteHeader(@ptrCast(self), filename_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#writeHeader)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` callback: *const fn (self: QtC.KFilterBase, filename: qtc.libqt_string) callconv(.c) bool `
    ///
    pub fn OnWriteHeader(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_string) callconv(.c) bool) void {
        qtc.KFilterBase_OnWriteHeader(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWriteHeader` instead
    ///
    pub const QBaseWriteHeader = SuperWriteHeader;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#writeHeader)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` filename: []u8 `
    ///
    pub fn SuperWriteHeader(self: ?*anyopaque, filename: []u8) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.KFilterBase_SuperWriteHeader(@ptrCast(self), filename_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setOutBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: u32 `
    ///
    pub fn SetOutBuffer(self: ?*anyopaque, data: [:0]u8, maxlen: u32) void {
        const data_Cstring = data.ptr;
        qtc.KFilterBase_SetOutBuffer(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setOutBuffer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` callback: *const fn (self: QtC.KFilterBase, data: qtc.libqt_string, maxlen: u32) callconv(.c) void `
    ///
    pub fn OnSetOutBuffer(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_string, u32) callconv(.c) void) void {
        qtc.KFilterBase_OnSetOutBuffer(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetOutBuffer` instead
    ///
    pub const QBaseSetOutBuffer = SuperSetOutBuffer;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setOutBuffer)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: u32 `
    ///
    pub fn SuperSetOutBuffer(self: ?*anyopaque, data: [:0]u8, maxlen: u32) void {
        const data_Cstring = data.ptr;
        qtc.KFilterBase_SuperSetOutBuffer(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setInBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: u32 `
    ///
    pub fn SetInBuffer(self: ?*anyopaque, data: [:0]const u8, size: u32) void {
        const data_Cstring = data.ptr;
        qtc.KFilterBase_SetInBuffer(@ptrCast(self), data_Cstring, @bitCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setInBuffer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` callback: *const fn (self: QtC.KFilterBase, data: [*:0]const u8, size: u32) callconv(.c) void `
    ///
    pub fn OnSetInBuffer(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, u32) callconv(.c) void) void {
        qtc.KFilterBase_OnSetInBuffer(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetInBuffer` instead
    ///
    pub const QBaseSetInBuffer = SuperSetInBuffer;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setInBuffer)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: u32 `
    ///
    pub fn SuperSetInBuffer(self: ?*anyopaque, data: [:0]const u8, size: u32) void {
        const data_Cstring = data.ptr;
        qtc.KFilterBase_SuperSetInBuffer(@ptrCast(self), data_Cstring, @bitCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn InBufferEmpty(self: ?*anyopaque) bool {
        return qtc.KFilterBase_InBufferEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnInBufferEmpty(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KFilterBase_OnInBufferEmpty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInBufferEmpty` instead
    ///
    pub const QBaseInBufferEmpty = SuperInBufferEmpty;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferEmpty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn SuperInBufferEmpty(self: ?*anyopaque) bool {
        return qtc.KFilterBase_SuperInBufferEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn InBufferAvailable(self: ?*anyopaque) i32 {
        return qtc.KFilterBase_InBufferAvailable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferAvailable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnInBufferAvailable(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilterBase_OnInBufferAvailable(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInBufferAvailable` instead
    ///
    pub const QBaseInBufferAvailable = SuperInBufferAvailable;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferAvailable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn SuperInBufferAvailable(self: ?*anyopaque) i32 {
        return qtc.KFilterBase_SuperInBufferAvailable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferFull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn OutBufferFull(self: ?*anyopaque) bool {
        return qtc.KFilterBase_OutBufferFull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferFull)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnOutBufferFull(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KFilterBase_OnOutBufferFull(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOutBufferFull` instead
    ///
    pub const QBaseOutBufferFull = SuperOutBufferFull;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferFull)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn SuperOutBufferFull(self: ?*anyopaque) bool {
        return qtc.KFilterBase_SuperOutBufferFull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn OutBufferAvailable(self: ?*anyopaque) i32 {
        return qtc.KFilterBase_OutBufferAvailable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferAvailable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnOutBufferAvailable(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilterBase_OnOutBufferAvailable(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOutBufferAvailable` instead
    ///
    pub const QBaseOutBufferAvailable = SuperOutBufferAvailable;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferAvailable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn SuperOutBufferAvailable(self: ?*anyopaque) i32 {
        return qtc.KFilterBase_SuperOutBufferAvailable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#uncompress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ## Returns:
    ///
    /// ` kfilterbase_enums.Result `
    ///
    pub fn Uncompress(self: ?*anyopaque) i32 {
        return qtc.KFilterBase_Uncompress(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#uncompress)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnUncompress(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilterBase_OnUncompress(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUncompress` instead
    ///
    pub const QBaseUncompress = SuperUncompress;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#uncompress)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ## Returns:
    ///
    /// ` kfilterbase_enums.Result `
    ///
    pub fn SuperUncompress(self: ?*anyopaque) i32 {
        return qtc.KFilterBase_SuperUncompress(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#compress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` finish: bool `
    ///
    /// ## Returns:
    ///
    /// ` kfilterbase_enums.Result `
    ///
    pub fn Compress(self: ?*anyopaque, finish: bool) i32 {
        return qtc.KFilterBase_Compress(@ptrCast(self), finish);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#compress)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` callback: *const fn (self: QtC.KFilterBase, finish: bool) callconv(.c) i32 `
    ///
    pub fn OnCompress(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) i32) void {
        qtc.KFilterBase_OnCompress(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCompress` instead
    ///
    pub const QBaseCompress = SuperCompress;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#compress)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` finish: bool `
    ///
    /// ## Returns:
    ///
    /// ` kfilterbase_enums.Result `
    ///
    pub fn SuperCompress(self: ?*anyopaque, finish: bool) i32 {
        return qtc.KFilterBase_SuperCompress(@ptrCast(self), finish);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setFilterFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` flags: kfilterbase_enums.FilterFlags `
    ///
    pub fn SetFilterFlags(self: ?*anyopaque, flags: i32) void {
        qtc.KFilterBase_SetFilterFlags(@ptrCast(self), @bitCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#filterFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ## Returns:
    ///
    /// ` kfilterbase_enums.FilterFlags `
    ///
    pub fn FilterFlags(self: ?*anyopaque) i32 {
        return qtc.KFilterBase_FilterFlags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KFilterBase_VirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` callback: *const fn (self: QtC.KFilterBase, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KFilterBase_OnVirtualHook(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KFilterBase_SuperVirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilterBase `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    /// ` autodelete: bool `
    ///
    pub fn SetDevice2(self: ?*anyopaque, dev: ?*anyopaque, autodelete: bool) void {
        qtc.KFilterBase_SetDevice2(@ptrCast(self), @ptrCast(dev), autodelete);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#dtor.KFilterBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KFilterBase `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KFilterBase_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfilterbase.html#public-types)
pub const enums = struct {
    pub const Result = enum(i32) {
        pub const Ok: i32 = 0;
        pub const End: i32 = 1;
        pub const Error: i32 = 2;
    };

    pub const FilterFlags = enum(i32) {
        pub const NoHeaders: i32 = 0;
        pub const WithHeaders: i32 = 1;
        pub const ZlibHeaders: i32 = 2;
    };
};
