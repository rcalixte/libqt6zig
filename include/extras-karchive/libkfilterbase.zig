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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFilterBase object in C++ memory
    ///
    pub fn new() KFilterBase {
        return .{ .ptr = qtc.KFilterBase_new() };
    }

    /// ### DEPRECATED: Use `setDevice` instead
    ///
    pub const SetDevice = setDevice;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    /// ` dev: QIODevice `
    ///
    pub fn setDevice(self: KFilterBase, dev: anytype) void {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        qtc.KFilterBase_SetDevice(@ptrCast(self.ptr), @ptrCast(dev.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn device(self: KFilterBase) QIODevice {
        return .{ .ptr = qtc.KFilterBase_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `init` instead
    ///
    pub const Init = init;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#init)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    /// ` _mode: i32 `
    ///
    pub fn init(self: KFilterBase, _mode: i32) bool {
        return qtc.KFilterBase_Init(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `onInit` instead
    ///
    pub const OnInit = onInit;

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
    pub fn onInit(self: KFilterBase, callback: *const fn (KFilterBase, i32) callconv(.c) bool) void {
        qtc.KFilterBase_OnInit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInit` instead
    ///
    pub const SuperInit = superInit;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#init)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    /// ` _mode: i32 `
    ///
    pub fn superInit(self: KFilterBase, _mode: i32) bool {
        return qtc.KFilterBase_SuperInit(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `mode` instead
    ///
    pub const Mode = mode;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn mode(self: KFilterBase) i32 {
        return qtc.KFilterBase_Mode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMode` instead
    ///
    pub const OnMode = onMode;

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
    pub fn onMode(self: KFilterBase, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilterBase_OnMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMode` instead
    ///
    pub const SuperMode = superMode;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#mode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn superMode(self: KFilterBase) i32 {
        return qtc.KFilterBase_SuperMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `terminate` instead
    ///
    pub const Terminate = terminate;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#terminate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn terminate(self: KFilterBase) bool {
        return qtc.KFilterBase_Terminate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTerminate` instead
    ///
    pub const OnTerminate = onTerminate;

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
    pub fn onTerminate(self: KFilterBase, callback: *const fn () callconv(.c) bool) void {
        qtc.KFilterBase_OnTerminate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTerminate` instead
    ///
    pub const SuperTerminate = superTerminate;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#terminate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn superTerminate(self: KFilterBase) bool {
        return qtc.KFilterBase_SuperTerminate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn reset(self: KFilterBase) void {
        qtc.KFilterBase_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReset` instead
    ///
    pub const OnReset = onReset;

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
    pub fn onReset(self: KFilterBase, callback: *const fn () callconv(.c) void) void {
        qtc.KFilterBase_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReset` instead
    ///
    pub const SuperReset = superReset;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#reset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn superReset(self: KFilterBase) void {
        qtc.KFilterBase_SuperReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readHeader` instead
    ///
    pub const ReadHeader = readHeader;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#readHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn readHeader(self: KFilterBase) bool {
        return qtc.KFilterBase_ReadHeader(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReadHeader` instead
    ///
    pub const OnReadHeader = onReadHeader;

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
    pub fn onReadHeader(self: KFilterBase, callback: *const fn () callconv(.c) bool) void {
        qtc.KFilterBase_OnReadHeader(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadHeader` instead
    ///
    pub const SuperReadHeader = superReadHeader;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#readHeader)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn superReadHeader(self: KFilterBase) bool {
        return qtc.KFilterBase_SuperReadHeader(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeHeader` instead
    ///
    pub const WriteHeader = writeHeader;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#writeHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    /// ` filename: []u8 `
    ///
    pub fn writeHeader(self: KFilterBase, filename: []u8) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.KFilterBase_WriteHeader(@ptrCast(self.ptr), filename_str);
    }

    /// ### DEPRECATED: Use `onWriteHeader` instead
    ///
    pub const OnWriteHeader = onWriteHeader;

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
    pub fn onWriteHeader(self: KFilterBase, callback: *const fn (KFilterBase, qtc.libqt_string) callconv(.c) bool) void {
        qtc.KFilterBase_OnWriteHeader(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteHeader` instead
    ///
    pub const SuperWriteHeader = superWriteHeader;

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
    pub fn superWriteHeader(self: KFilterBase, filename: []u8) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.KFilterBase_SuperWriteHeader(@ptrCast(self.ptr), filename_str);
    }

    /// ### DEPRECATED: Use `setOutBuffer` instead
    ///
    pub const SetOutBuffer = setOutBuffer;

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
    pub fn setOutBuffer(self: KFilterBase, data: [:0]u8, maxlen: u32) void {
        const data_Cstring = data.ptr;
        qtc.KFilterBase_SetOutBuffer(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `onSetOutBuffer` instead
    ///
    pub const OnSetOutBuffer = onSetOutBuffer;

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
    pub fn onSetOutBuffer(self: KFilterBase, callback: *const fn (KFilterBase, qtc.libqt_string, u32) callconv(.c) void) void {
        qtc.KFilterBase_OnSetOutBuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetOutBuffer` instead
    ///
    pub const SuperSetOutBuffer = superSetOutBuffer;

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
    pub fn superSetOutBuffer(self: KFilterBase, data: [:0]u8, maxlen: u32) void {
        const data_Cstring = data.ptr;
        qtc.KFilterBase_SuperSetOutBuffer(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `setInBuffer` instead
    ///
    pub const SetInBuffer = setInBuffer;

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
    pub fn setInBuffer(self: KFilterBase, data: [:0]const u8, size: u32) void {
        const data_Cstring = data.ptr;
        qtc.KFilterBase_SetInBuffer(@ptrCast(self.ptr), data_Cstring, @bitCast(size));
    }

    /// ### DEPRECATED: Use `onSetInBuffer` instead
    ///
    pub const OnSetInBuffer = onSetInBuffer;

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
    pub fn onSetInBuffer(self: KFilterBase, callback: *const fn (KFilterBase, [*:0]const u8, u32) callconv(.c) void) void {
        qtc.KFilterBase_OnSetInBuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetInBuffer` instead
    ///
    pub const SuperSetInBuffer = superSetInBuffer;

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
    pub fn superSetInBuffer(self: KFilterBase, data: [:0]const u8, size: u32) void {
        const data_Cstring = data.ptr;
        qtc.KFilterBase_SuperSetInBuffer(@ptrCast(self.ptr), data_Cstring, @bitCast(size));
    }

    /// ### DEPRECATED: Use `inBufferEmpty` instead
    ///
    pub const InBufferEmpty = inBufferEmpty;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn inBufferEmpty(self: KFilterBase) bool {
        return qtc.KFilterBase_InBufferEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInBufferEmpty` instead
    ///
    pub const OnInBufferEmpty = onInBufferEmpty;

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
    pub fn onInBufferEmpty(self: KFilterBase, callback: *const fn () callconv(.c) bool) void {
        qtc.KFilterBase_OnInBufferEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInBufferEmpty` instead
    ///
    pub const SuperInBufferEmpty = superInBufferEmpty;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferEmpty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn superInBufferEmpty(self: KFilterBase) bool {
        return qtc.KFilterBase_SuperInBufferEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `inBufferAvailable` instead
    ///
    pub const InBufferAvailable = inBufferAvailable;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn inBufferAvailable(self: KFilterBase) i32 {
        return qtc.KFilterBase_InBufferAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInBufferAvailable` instead
    ///
    pub const OnInBufferAvailable = onInBufferAvailable;

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
    pub fn onInBufferAvailable(self: KFilterBase, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilterBase_OnInBufferAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInBufferAvailable` instead
    ///
    pub const SuperInBufferAvailable = superInBufferAvailable;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferAvailable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn superInBufferAvailable(self: KFilterBase) i32 {
        return qtc.KFilterBase_SuperInBufferAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `outBufferFull` instead
    ///
    pub const OutBufferFull = outBufferFull;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferFull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn outBufferFull(self: KFilterBase) bool {
        return qtc.KFilterBase_OutBufferFull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOutBufferFull` instead
    ///
    pub const OnOutBufferFull = onOutBufferFull;

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
    pub fn onOutBufferFull(self: KFilterBase, callback: *const fn () callconv(.c) bool) void {
        qtc.KFilterBase_OnOutBufferFull(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOutBufferFull` instead
    ///
    pub const SuperOutBufferFull = superOutBufferFull;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferFull)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn superOutBufferFull(self: KFilterBase) bool {
        return qtc.KFilterBase_SuperOutBufferFull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `outBufferAvailable` instead
    ///
    pub const OutBufferAvailable = outBufferAvailable;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn outBufferAvailable(self: KFilterBase) i32 {
        return qtc.KFilterBase_OutBufferAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOutBufferAvailable` instead
    ///
    pub const OnOutBufferAvailable = onOutBufferAvailable;

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
    pub fn onOutBufferAvailable(self: KFilterBase, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilterBase_OnOutBufferAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOutBufferAvailable` instead
    ///
    pub const SuperOutBufferAvailable = superOutBufferAvailable;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferAvailable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    pub fn superOutBufferAvailable(self: KFilterBase) i32 {
        return qtc.KFilterBase_SuperOutBufferAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `uncompress` instead
    ///
    pub const Uncompress = uncompress;

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
    pub fn uncompress(self: KFilterBase) i32 {
        return qtc.KFilterBase_Uncompress(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUncompress` instead
    ///
    pub const OnUncompress = onUncompress;

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
    pub fn onUncompress(self: KFilterBase, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilterBase_OnUncompress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUncompress` instead
    ///
    pub const SuperUncompress = superUncompress;

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
    pub fn superUncompress(self: KFilterBase) i32 {
        return qtc.KFilterBase_SuperUncompress(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `compress` instead
    ///
    pub const Compress = compress;

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
    pub fn compress(self: KFilterBase, finish: bool) i32 {
        return qtc.KFilterBase_Compress(@ptrCast(self.ptr), finish);
    }

    /// ### DEPRECATED: Use `onCompress` instead
    ///
    pub const OnCompress = onCompress;

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
    pub fn onCompress(self: KFilterBase, callback: *const fn (KFilterBase, bool) callconv(.c) i32) void {
        qtc.KFilterBase_OnCompress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCompress` instead
    ///
    pub const SuperCompress = superCompress;

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
    pub fn superCompress(self: KFilterBase, finish: bool) i32 {
        return qtc.KFilterBase_SuperCompress(@ptrCast(self.ptr), finish);
    }

    /// ### DEPRECATED: Use `setFilterFlags` instead
    ///
    pub const SetFilterFlags = setFilterFlags;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#setFilterFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFilterBase `
    ///
    /// ` flags: kfilterbase_enums.FilterFlags `
    ///
    pub fn setFilterFlags(self: KFilterBase, flags: i32) void {
        qtc.KFilterBase_SetFilterFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `filterFlags` instead
    ///
    pub const FilterFlags = filterFlags;

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
    pub fn filterFlags(self: KFilterBase) i32 {
        return qtc.KFilterBase_FilterFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

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
    pub fn virtualHook(self: KFilterBase, id: i32, data: ?*anyopaque) void {
        qtc.KFilterBase_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

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
    pub fn onVirtualHook(self: KFilterBase, callback: *const fn (KFilterBase, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KFilterBase_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

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
    pub fn superVirtualHook(self: KFilterBase, id: i32, data: ?*anyopaque) void {
        qtc.KFilterBase_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setDevice2` instead
    ///
    pub const SetDevice2 = setDevice2;

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
    pub fn setDevice2(self: KFilterBase, dev: anytype, autodelete: bool) void {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        qtc.KFilterBase_SetDevice2(@ptrCast(self.ptr), @ptrCast(dev.ptr), autodelete);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kfilterbase.html#dtor.KFilterBase)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFilterBase `
    ///
    pub fn delete(self: KFilterBase) void {
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
