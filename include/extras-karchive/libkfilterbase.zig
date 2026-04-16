const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIODevice = @import("libqt6").QIODevice;
const kfilterbase_enums = enums;

/// ### [Upstream resources](https://api.kde.org/kfilterbase.html)
pub const KFilterBase = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFilterBase,

    pub const _is_KFilterBase = {};

    /// New constructs a new KFilterBase object.
    ///
    pub fn New() KFilterBase {
        return .{ .ptr = qtc.KFilterBase_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    /// ` dev: QIODevice `
    ///
    pub fn SetDevice(self: KFilterBase, dev: anytype) void {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        qtc.KFilterBase_SetDevice(@ptrCast(self.ptr), @ptrCast(dev.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn Device(self: KFilterBase) QIODevice {
        return .{ .ptr = qtc.KFilterBase_Device(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#init)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    /// ` mode: i32 `
    ///
    pub fn Init(self: KFilterBase, mode: i32) bool {
        return qtc.KFilterBase_Init(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#init)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilterBase `
    ///
    /// ` callback: *const fn (self: KFilterBase, mode: i32) callconv(.c) bool `
    ///
    pub fn OnInit(self: KFilterBase, callback: *const fn (KFilterBase, i32) callconv(.c) bool) void {
        qtc.KFilterBase_OnInit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFilterBase `
    ///
    /// ` mode: i32 `
    ///
    pub fn SuperInit(self: KFilterBase, mode: i32) bool {
        return qtc.KFilterBase_SuperInit(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn Mode(self: KFilterBase) i32 {
        return qtc.KFilterBase_Mode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#mode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnMode(self: KFilterBase, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilterBase_OnMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFilterBase `
    ///
    pub fn SuperMode(self: KFilterBase) i32 {
        return qtc.KFilterBase_SuperMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#terminate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn Terminate(self: KFilterBase) bool {
        return qtc.KFilterBase_Terminate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#terminate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnTerminate(self: KFilterBase, callback: *const fn () callconv(.c) bool) void {
        qtc.KFilterBase_OnTerminate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFilterBase `
    ///
    pub fn SuperTerminate(self: KFilterBase) bool {
        return qtc.KFilterBase_SuperTerminate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn Reset(self: KFilterBase) void {
        qtc.KFilterBase_Reset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#reset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReset(self: KFilterBase, callback: *const fn () callconv(.c) void) void {
        qtc.KFilterBase_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFilterBase `
    ///
    pub fn SuperReset(self: KFilterBase) void {
        qtc.KFilterBase_SuperReset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#readHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn ReadHeader(self: KFilterBase) bool {
        return qtc.KFilterBase_ReadHeader(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#readHeader)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnReadHeader(self: KFilterBase, callback: *const fn () callconv(.c) bool) void {
        qtc.KFilterBase_OnReadHeader(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFilterBase `
    ///
    pub fn SuperReadHeader(self: KFilterBase) bool {
        return qtc.KFilterBase_SuperReadHeader(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#writeHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    /// ` filename: []u8 `
    ///
    pub fn WriteHeader(self: KFilterBase, filename: []u8) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.KFilterBase_WriteHeader(@ptrCast(self.ptr), filename_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#writeHeader)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilterBase `
    ///
    /// ` callback: *const fn (self: KFilterBase, filename: qtc.libqt_string) callconv(.c) bool `
    ///
    pub fn OnWriteHeader(self: KFilterBase, callback: *const fn (KFilterBase, qtc.libqt_string) callconv(.c) bool) void {
        qtc.KFilterBase_OnWriteHeader(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFilterBase `
    ///
    /// ` filename: []u8 `
    ///
    pub fn SuperWriteHeader(self: KFilterBase, filename: []u8) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.KFilterBase_SuperWriteHeader(@ptrCast(self.ptr), filename_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setOutBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: u32 `
    ///
    pub fn SetOutBuffer(self: KFilterBase, data: [:0]u8, maxlen: u32) void {
        const data_Cstring = data.ptr;
        qtc.KFilterBase_SetOutBuffer(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setOutBuffer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilterBase `
    ///
    /// ` callback: *const fn (self: KFilterBase, data: qtc.libqt_string, maxlen: u32) callconv(.c) void `
    ///
    pub fn OnSetOutBuffer(self: KFilterBase, callback: *const fn (KFilterBase, qtc.libqt_string, u32) callconv(.c) void) void {
        qtc.KFilterBase_OnSetOutBuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFilterBase `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: u32 `
    ///
    pub fn SuperSetOutBuffer(self: KFilterBase, data: [:0]u8, maxlen: u32) void {
        const data_Cstring = data.ptr;
        qtc.KFilterBase_SuperSetOutBuffer(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setInBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: u32 `
    ///
    pub fn SetInBuffer(self: KFilterBase, data: [:0]const u8, size: u32) void {
        const data_Cstring = data.ptr;
        qtc.KFilterBase_SetInBuffer(@ptrCast(self.ptr), data_Cstring, @bitCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setInBuffer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilterBase `
    ///
    /// ` callback: *const fn (self: KFilterBase, data: [*:0]const u8, size: u32) callconv(.c) void `
    ///
    pub fn OnSetInBuffer(self: KFilterBase, callback: *const fn (KFilterBase, [*:0]const u8, u32) callconv(.c) void) void {
        qtc.KFilterBase_OnSetInBuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFilterBase `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: u32 `
    ///
    pub fn SuperSetInBuffer(self: KFilterBase, data: [:0]const u8, size: u32) void {
        const data_Cstring = data.ptr;
        qtc.KFilterBase_SuperSetInBuffer(@ptrCast(self.ptr), data_Cstring, @bitCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn InBufferEmpty(self: KFilterBase) bool {
        return qtc.KFilterBase_InBufferEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnInBufferEmpty(self: KFilterBase, callback: *const fn () callconv(.c) bool) void {
        qtc.KFilterBase_OnInBufferEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFilterBase `
    ///
    pub fn SuperInBufferEmpty(self: KFilterBase) bool {
        return qtc.KFilterBase_SuperInBufferEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn InBufferAvailable(self: KFilterBase) i32 {
        return qtc.KFilterBase_InBufferAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferAvailable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnInBufferAvailable(self: KFilterBase, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilterBase_OnInBufferAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFilterBase `
    ///
    pub fn SuperInBufferAvailable(self: KFilterBase) i32 {
        return qtc.KFilterBase_SuperInBufferAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferFull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn OutBufferFull(self: KFilterBase) bool {
        return qtc.KFilterBase_OutBufferFull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferFull)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnOutBufferFull(self: KFilterBase, callback: *const fn () callconv(.c) bool) void {
        qtc.KFilterBase_OnOutBufferFull(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFilterBase `
    ///
    pub fn SuperOutBufferFull(self: KFilterBase) bool {
        return qtc.KFilterBase_SuperOutBufferFull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn OutBufferAvailable(self: KFilterBase) i32 {
        return qtc.KFilterBase_OutBufferAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferAvailable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnOutBufferAvailable(self: KFilterBase, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilterBase_OnOutBufferAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFilterBase `
    ///
    pub fn SuperOutBufferAvailable(self: KFilterBase) i32 {
        return qtc.KFilterBase_SuperOutBufferAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#uncompress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    /// ## Returns:
    ///
    /// ` kfilterbase_enums.Result `
    ///
    pub fn Uncompress(self: KFilterBase) i32 {
        return qtc.KFilterBase_Uncompress(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#uncompress)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilterBase `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnUncompress(self: KFilterBase, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilterBase_OnUncompress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFilterBase `
    ///
    /// ## Returns:
    ///
    /// ` kfilterbase_enums.Result `
    ///
    pub fn SuperUncompress(self: KFilterBase) i32 {
        return qtc.KFilterBase_SuperUncompress(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#compress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    /// ` finish: bool `
    ///
    /// ## Returns:
    ///
    /// ` kfilterbase_enums.Result `
    ///
    pub fn Compress(self: KFilterBase, finish: bool) i32 {
        return qtc.KFilterBase_Compress(@ptrCast(self.ptr), finish);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#compress)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilterBase `
    ///
    /// ` callback: *const fn (self: KFilterBase, finish: bool) callconv(.c) i32 `
    ///
    pub fn OnCompress(self: KFilterBase, callback: *const fn (KFilterBase, bool) callconv(.c) i32) void {
        qtc.KFilterBase_OnCompress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFilterBase `
    ///
    /// ` finish: bool `
    ///
    /// ## Returns:
    ///
    /// ` kfilterbase_enums.Result `
    ///
    pub fn SuperCompress(self: KFilterBase, finish: bool) i32 {
        return qtc.KFilterBase_SuperCompress(@ptrCast(self.ptr), finish);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setFilterFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    /// ` flags: kfilterbase_enums.FilterFlags `
    ///
    pub fn SetFilterFlags(self: KFilterBase, flags: i32) void {
        qtc.KFilterBase_SetFilterFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#filterFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    /// ## Returns:
    ///
    /// ` kfilterbase_enums.FilterFlags `
    ///
    pub fn FilterFlags(self: KFilterBase) i32 {
        return qtc.KFilterBase_FilterFlags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: KFilterBase, id: i32, data: ?*anyopaque) void {
        qtc.KFilterBase_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFilterBase `
    ///
    /// ` callback: *const fn (self: KFilterBase, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: KFilterBase, callback: *const fn (KFilterBase, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KFilterBase_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFilterBase `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: KFilterBase, id: i32, data: ?*anyopaque) void {
        qtc.KFilterBase_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    /// ` dev: QIODevice `
    ///
    /// ` autodelete: bool `
    ///
    pub fn SetDevice2(self: KFilterBase, dev: anytype, autodelete: bool) void {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        qtc.KFilterBase_SetDevice2(@ptrCast(self.ptr), @ptrCast(dev.ptr), autodelete);
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
    /// ` self: KFilterBase `
    ///
    pub fn Delete(self: KFilterBase) void {
        qtc.KFilterBase_Delete(@ptrCast(self.ptr));
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
