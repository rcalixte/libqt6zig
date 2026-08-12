const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KArchiveDirectory = @import("libqt6").KArchiveDirectory;
const QDateTime = @import("libqt6").QDateTime;
const QIODevice = @import("libqt6").QIODevice;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/karchive.html)
pub const KArchive = extern struct {
    /// ### [Upstream resources](https://api.kde.org/karchive.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KArchive,

    pub const _is_KArchive = {};

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, sourceText: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        var _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchive.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn open(self: KArchive, _mode: i32) bool {
        return qtc.KArchive_Open(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    pub fn close(self: KArchive) bool {
        return qtc.KArchive_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: KArchive, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchive_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchive.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isOpen` instead
    ///
    pub const IsOpen = isOpen;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    pub fn isOpen(self: KArchive) bool {
        return qtc.KArchive_IsOpen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mode` instead
    ///
    pub const Mode = mode;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn mode(self: KArchive) i32 {
        return qtc.KArchive_Mode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    pub fn device(self: KArchive) QIODevice {
        return .{ .ptr = qtc.KArchive_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: KArchive, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchive_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchive.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `directory` instead
    ///
    pub const Directory = directory;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#directory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    pub fn directory(self: KArchive) KArchiveDirectory {
        return .{ .ptr = qtc.KArchive_Directory(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addLocalFile` instead
    ///
    pub const AddLocalFile = addLocalFile;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#addLocalFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` _fileName: []const u8 `
    ///
    /// ` destName: []const u8 `
    ///
    pub fn addLocalFile(self: KArchive, _fileName: []const u8, destName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        const destName_str = qtc.libqt_string{
            .len = destName.len,
            .data = destName.ptr,
        };
        return qtc.KArchive_AddLocalFile(@ptrCast(self.ptr), fileName_str, destName_str);
    }

    /// ### DEPRECATED: Use `addLocalDirectory` instead
    ///
    pub const AddLocalDirectory = addLocalDirectory;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#addLocalDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` path: []const u8 `
    ///
    /// ` destName: []const u8 `
    ///
    pub fn addLocalDirectory(self: KArchive, path: []const u8, destName: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const destName_str = qtc.libqt_string{
            .len = destName.len,
            .data = destName.ptr,
        };
        return qtc.KArchive_AddLocalDirectory(@ptrCast(self.ptr), path_str, destName_str);
    }

    /// ### DEPRECATED: Use `writeDir` instead
    ///
    pub const WriteDir = writeDir;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    pub fn writeDir(self: KArchive, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KArchive_WriteDir(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `writeSymLink` instead
    ///
    pub const WriteSymLink = writeSymLink;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    pub fn writeSymLink(self: KArchive, name: []const u8, target: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        return qtc.KArchive_WriteSymLink(@ptrCast(self.ptr), name_str, target_str);
    }

    /// ### DEPRECATED: Use `writeFile` instead
    ///
    pub const WriteFile = writeFile;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    pub fn writeFile(self: KArchive, name: []const u8, data: []u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KArchive_WriteFile(@ptrCast(self.ptr), name_str, data_str);
    }

    /// ### DEPRECATED: Use `prepareWriting` instead
    ///
    pub const PrepareWriting = prepareWriting;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn prepareWriting(self: KArchive, name: []const u8, user: []const u8, group: []const u8, size: i64) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KArchive_PrepareWriting(@ptrCast(self.ptr), name_str, user_str, group_str, @bitCast(size));
    }

    /// ### DEPRECATED: Use `writeData` instead
    ///
    pub const WriteData = writeData;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn writeData(self: KArchive, data: [:0]const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.KArchive_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(size));
    }

    /// ### DEPRECATED: Use `writeData2` instead
    ///
    pub const WriteData2 = writeData2;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` data: []u8 `
    ///
    pub fn writeData2(self: KArchive, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KArchive_WriteData2(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `finishWriting` instead
    ///
    pub const FinishWriting = finishWriting;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#finishWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` size: i64 `
    ///
    pub fn finishWriting(self: KArchive, size: i64) bool {
        return qtc.KArchive_FinishWriting(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchive.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchive.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `writeDir2` instead
    ///
    pub const WriteDir2 = writeDir2;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn writeDir2(self: KArchive, name: []const u8, user: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        return qtc.KArchive_WriteDir2(@ptrCast(self.ptr), name_str, user_str);
    }

    /// ### DEPRECATED: Use `writeDir3` instead
    ///
    pub const WriteDir3 = writeDir3;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn writeDir3(self: KArchive, name: []const u8, user: []const u8, group: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KArchive_WriteDir3(@ptrCast(self.ptr), name_str, user_str, group_str);
    }

    /// ### DEPRECATED: Use `writeDir4` instead
    ///
    pub const WriteDir4 = writeDir4;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    pub fn writeDir4(self: KArchive, name: []const u8, user: []const u8, group: []const u8, perm: u32) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KArchive_WriteDir4(@ptrCast(self.ptr), name_str, user_str, group_str, perm);
    }

    /// ### DEPRECATED: Use `writeDir5` instead
    ///
    pub const WriteDir5 = writeDir5;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    pub fn writeDir5(self: KArchive, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        return qtc.KArchive_WriteDir5(@ptrCast(self.ptr), name_str, user_str, group_str, perm, @ptrCast(atime.ptr));
    }

    /// ### DEPRECATED: Use `writeDir6` instead
    ///
    pub const WriteDir6 = writeDir6;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    pub fn writeDir6(self: KArchive, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        return qtc.KArchive_WriteDir6(@ptrCast(self.ptr), name_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr));
    }

    /// ### DEPRECATED: Use `writeDir7` instead
    ///
    pub const WriteDir7 = writeDir7;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    /// ` ctime: QDateTime `
    ///
    pub fn writeDir7(self: KArchive, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        comptime _ = @TypeOf(ctime)._is_QDateTime;
        return qtc.KArchive_WriteDir7(@ptrCast(self.ptr), name_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### DEPRECATED: Use `writeSymLink3` instead
    ///
    pub const WriteSymLink3 = writeSymLink3;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn writeSymLink3(self: KArchive, name: []const u8, target: []const u8, user: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        return qtc.KArchive_WriteSymLink3(@ptrCast(self.ptr), name_str, target_str, user_str);
    }

    /// ### DEPRECATED: Use `writeSymLink4` instead
    ///
    pub const WriteSymLink4 = writeSymLink4;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn writeSymLink4(self: KArchive, name: []const u8, target: []const u8, user: []const u8, group: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KArchive_WriteSymLink4(@ptrCast(self.ptr), name_str, target_str, user_str, group_str);
    }

    /// ### DEPRECATED: Use `writeSymLink5` instead
    ///
    pub const WriteSymLink5 = writeSymLink5;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    pub fn writeSymLink5(self: KArchive, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KArchive_WriteSymLink5(@ptrCast(self.ptr), name_str, target_str, user_str, group_str, perm);
    }

    /// ### DEPRECATED: Use `writeSymLink6` instead
    ///
    pub const WriteSymLink6 = writeSymLink6;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    pub fn writeSymLink6(self: KArchive, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        return qtc.KArchive_WriteSymLink6(@ptrCast(self.ptr), name_str, target_str, user_str, group_str, perm, @ptrCast(atime.ptr));
    }

    /// ### DEPRECATED: Use `writeSymLink7` instead
    ///
    pub const WriteSymLink7 = writeSymLink7;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    pub fn writeSymLink7(self: KArchive, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        return qtc.KArchive_WriteSymLink7(@ptrCast(self.ptr), name_str, target_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr));
    }

    /// ### DEPRECATED: Use `writeSymLink8` instead
    ///
    pub const WriteSymLink8 = writeSymLink8;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    /// ` ctime: QDateTime `
    ///
    pub fn writeSymLink8(self: KArchive, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        comptime _ = @TypeOf(ctime)._is_QDateTime;
        return qtc.KArchive_WriteSymLink8(@ptrCast(self.ptr), name_str, target_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### DEPRECATED: Use `writeFile3` instead
    ///
    pub const WriteFile3 = writeFile3;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    pub fn writeFile3(self: KArchive, name: []const u8, data: []u8, perm: u32) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KArchive_WriteFile3(@ptrCast(self.ptr), name_str, data_str, perm);
    }

    /// ### DEPRECATED: Use `writeFile4` instead
    ///
    pub const WriteFile4 = writeFile4;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn writeFile4(self: KArchive, name: []const u8, data: []u8, perm: u32, user: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        return qtc.KArchive_WriteFile4(@ptrCast(self.ptr), name_str, data_str, perm, user_str);
    }

    /// ### DEPRECATED: Use `writeFile5` instead
    ///
    pub const WriteFile5 = writeFile5;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn writeFile5(self: KArchive, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KArchive_WriteFile5(@ptrCast(self.ptr), name_str, data_str, perm, user_str, group_str);
    }

    /// ### DEPRECATED: Use `writeFile6` instead
    ///
    pub const WriteFile6 = writeFile6;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` atime: QDateTime `
    ///
    pub fn writeFile6(self: KArchive, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8, atime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        return qtc.KArchive_WriteFile6(@ptrCast(self.ptr), name_str, data_str, perm, user_str, group_str, @ptrCast(atime.ptr));
    }

    /// ### DEPRECATED: Use `writeFile7` instead
    ///
    pub const WriteFile7 = writeFile7;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    pub fn writeFile7(self: KArchive, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8, atime: anytype, mtime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        return qtc.KArchive_WriteFile7(@ptrCast(self.ptr), name_str, data_str, perm, user_str, group_str, @ptrCast(atime.ptr), @ptrCast(mtime.ptr));
    }

    /// ### DEPRECATED: Use `writeFile8` instead
    ///
    pub const WriteFile8 = writeFile8;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    /// ` ctime: QDateTime `
    ///
    pub fn writeFile8(self: KArchive, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8, atime: anytype, mtime: anytype, ctime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        comptime _ = @TypeOf(ctime)._is_QDateTime;
        return qtc.KArchive_WriteFile8(@ptrCast(self.ptr), name_str, data_str, perm, user_str, group_str, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### DEPRECATED: Use `prepareWriting5` instead
    ///
    pub const PrepareWriting5 = prepareWriting5;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    /// ` perm: u32 `
    ///
    pub fn prepareWriting5(self: KArchive, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KArchive_PrepareWriting5(@ptrCast(self.ptr), name_str, user_str, group_str, @bitCast(size), perm);
    }

    /// ### DEPRECATED: Use `prepareWriting6` instead
    ///
    pub const PrepareWriting6 = prepareWriting6;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    pub fn prepareWriting6(self: KArchive, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        return qtc.KArchive_PrepareWriting6(@ptrCast(self.ptr), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime.ptr));
    }

    /// ### DEPRECATED: Use `prepareWriting7` instead
    ///
    pub const PrepareWriting7 = prepareWriting7;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    pub fn prepareWriting7(self: KArchive, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype, mtime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        return qtc.KArchive_PrepareWriting7(@ptrCast(self.ptr), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr));
    }

    /// ### DEPRECATED: Use `prepareWriting8` instead
    ///
    pub const PrepareWriting8 = prepareWriting8;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchive `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    /// ` ctime: QDateTime `
    ///
    pub fn prepareWriting8(self: KArchive, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        comptime _ = @TypeOf(ctime)._is_QDateTime;
        return qtc.KArchive_PrepareWriting8(@ptrCast(self.ptr), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/karchive.html#dtor.KArchive)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KArchive `
    ///
    pub fn delete(self: KArchive) void {
        qtc.KArchive_Delete(@ptrCast(self.ptr));
    }
};
