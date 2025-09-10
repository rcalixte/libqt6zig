const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kbookmark_enums = enums;
const std = @import("std");

/// https://api.kde.org/kbookmark.html
pub const kbookmark = struct {
    /// New constructs a new KBookmark object.
    ///
    ///
    pub fn New() QtC.KBookmark {
        return qtc.KBookmark_new();
    }

    /// New2 constructs a new KBookmark object.
    ///
    /// ``` elem: QtC.QDomElement ```
    pub fn New2(elem: ?*anyopaque) QtC.KBookmark {
        return qtc.KBookmark_new2(@ptrCast(elem));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#standaloneBookmark)
    ///
    /// ``` text: []const u8, url: QtC.QUrl, icon: []const u8 ```
    pub fn StandaloneBookmark(text: []const u8, url: ?*anyopaque, icon: []const u8) QtC.KBookmark {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        return qtc.KBookmark_StandaloneBookmark(text_str, @ptrCast(url), icon_str);
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#isGroup)
    ///
    /// ``` self: QtC.KBookmark ```
    pub fn IsGroup(self: ?*anyopaque) bool {
        return qtc.KBookmark_IsGroup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#isSeparator)
    ///
    /// ``` self: QtC.KBookmark ```
    pub fn IsSeparator(self: ?*anyopaque) bool {
        return qtc.KBookmark_IsSeparator(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#isNull)
    ///
    /// ``` self: QtC.KBookmark ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.KBookmark_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#hasParent)
    ///
    /// ``` self: QtC.KBookmark ```
    pub fn HasParent(self: ?*anyopaque) bool {
        return qtc.KBookmark_HasParent(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#text)
    ///
    /// ``` self: QtC.KBookmark, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmark_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#fullText)
    ///
    /// ``` self: QtC.KBookmark, allocator: std.mem.Allocator ```
    pub fn FullText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmark_FullText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.FullText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#setFullText)
    ///
    /// ``` self: QtC.KBookmark, fullText: []const u8 ```
    pub fn SetFullText(self: ?*anyopaque, fullText: []const u8) void {
        const fullText_str = qtc.libqt_string{
            .len = fullText.len,
            .data = fullText.ptr,
        };
        qtc.KBookmark_SetFullText(@ptrCast(self), fullText_str);
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#url)
    ///
    /// ``` self: QtC.KBookmark ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.KBookmark_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#setUrl)
    ///
    /// ``` self: QtC.KBookmark, url: QtC.QUrl ```
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KBookmark_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#icon)
    ///
    /// ``` self: QtC.KBookmark, allocator: std.mem.Allocator ```
    pub fn Icon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmark_Icon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#setIcon)
    ///
    /// ``` self: QtC.KBookmark, icon: []const u8 ```
    pub fn SetIcon(self: ?*anyopaque, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.KBookmark_SetIcon(@ptrCast(self), icon_str);
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#description)
    ///
    /// ``` self: QtC.KBookmark, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmark_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#setDescription)
    ///
    /// ``` self: QtC.KBookmark, description: []const u8 ```
    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.KBookmark_SetDescription(@ptrCast(self), description_str);
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#mimeType)
    ///
    /// ``` self: QtC.KBookmark, allocator: std.mem.Allocator ```
    pub fn MimeType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmark_MimeType(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#setMimeType)
    ///
    /// ``` self: QtC.KBookmark, mimeType: []const u8 ```
    pub fn SetMimeType(self: ?*anyopaque, mimeType: []const u8) void {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        qtc.KBookmark_SetMimeType(@ptrCast(self), mimeType_str);
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#showInToolbar)
    ///
    /// ``` self: QtC.KBookmark ```
    pub fn ShowInToolbar(self: ?*anyopaque) bool {
        return qtc.KBookmark_ShowInToolbar(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#setShowInToolbar)
    ///
    /// ``` self: QtC.KBookmark, show: bool ```
    pub fn SetShowInToolbar(self: ?*anyopaque, show: bool) void {
        qtc.KBookmark_SetShowInToolbar(@ptrCast(self), show);
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#parentGroup)
    ///
    /// ``` self: QtC.KBookmark ```
    pub fn ParentGroup(self: ?*anyopaque) QtC.KBookmarkGroup {
        return qtc.KBookmark_ParentGroup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#toGroup)
    ///
    /// ``` self: QtC.KBookmark ```
    pub fn ToGroup(self: ?*anyopaque) QtC.KBookmarkGroup {
        return qtc.KBookmark_ToGroup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#address)
    ///
    /// ``` self: QtC.KBookmark, allocator: std.mem.Allocator ```
    pub fn Address(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmark_Address(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.Address: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#positionInParent)
    ///
    /// ``` self: QtC.KBookmark ```
    pub fn PositionInParent(self: ?*anyopaque) i32 {
        return qtc.KBookmark_PositionInParent(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#internalElement)
    ///
    /// ``` self: QtC.KBookmark ```
    pub fn InternalElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.KBookmark_InternalElement(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#updateAccessMetadata)
    ///
    /// ``` self: QtC.KBookmark ```
    pub fn UpdateAccessMetadata(self: ?*anyopaque) void {
        qtc.KBookmark_UpdateAccessMetadata(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#parentAddress)
    ///
    /// ``` address: []const u8, allocator: std.mem.Allocator ```
    pub fn ParentAddress(address: []const u8, allocator: std.mem.Allocator) []const u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        const _str = qtc.KBookmark_ParentAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.ParentAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#positionInParent)
    ///
    /// ``` address: []const u8 ```
    pub fn PositionInParent2(address: []const u8) u32 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        return qtc.KBookmark_PositionInParent2(address_str);
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#previousAddress)
    ///
    /// ``` address: []const u8, allocator: std.mem.Allocator ```
    pub fn PreviousAddress(address: []const u8, allocator: std.mem.Allocator) []const u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        const _str = qtc.KBookmark_PreviousAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.PreviousAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#nextAddress)
    ///
    /// ``` address: []const u8, allocator: std.mem.Allocator ```
    pub fn NextAddress(address: []const u8, allocator: std.mem.Allocator) []const u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        const _str = qtc.KBookmark_NextAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.NextAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#commonParent)
    ///
    /// ``` A: []const u8, B: []const u8, allocator: std.mem.Allocator ```
    pub fn CommonParent(A: []const u8, B: []const u8, allocator: std.mem.Allocator) []const u8 {
        const A_str = qtc.libqt_string{
            .len = A.len,
            .data = A.ptr,
        };
        const B_str = qtc.libqt_string{
            .len = B.len,
            .data = B.ptr,
        };
        const _str = qtc.KBookmark_CommonParent(A_str, B_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.CommonParent: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#metaData)
    ///
    /// ``` self: QtC.KBookmark, owner: []const u8, create: bool ```
    pub fn MetaData(self: ?*anyopaque, owner: []const u8, create: bool) QtC.QDomNode {
        const owner_str = qtc.libqt_string{
            .len = owner.len,
            .data = owner.ptr,
        };
        return qtc.KBookmark_MetaData(@ptrCast(self), owner_str, create);
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#metaDataItem)
    ///
    /// ``` self: QtC.KBookmark, key: []const u8, allocator: std.mem.Allocator ```
    pub fn MetaDataItem(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.KBookmark_MetaDataItem(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.MetaDataItem: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#setMetaDataItem)
    ///
    /// ``` self: QtC.KBookmark, key: []const u8, value: []const u8 ```
    pub fn SetMetaDataItem(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KBookmark_SetMetaDataItem(@ptrCast(self), key_str, value_str);
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#populateMimeData)
    ///
    /// ``` self: QtC.KBookmark, mimeData: QtC.QMimeData ```
    pub fn PopulateMimeData(self: ?*anyopaque, mimeData: ?*anyopaque) void {
        qtc.KBookmark_PopulateMimeData(@ptrCast(self), @ptrCast(mimeData));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#operator-eq-eq)
    ///
    /// ``` self: QtC.KBookmark, rhs: QtC.KBookmark ```
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.KBookmark_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#setMetaDataItem)
    ///
    /// ``` self: QtC.KBookmark, key: []const u8, value: []const u8, mode: kbookmark_enums.MetaDataOverwriteMode ```
    pub fn SetMetaDataItem3(self: ?*anyopaque, key: []const u8, value: []const u8, mode: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KBookmark_SetMetaDataItem3(@ptrCast(self), key_str, value_str, @intCast(mode));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark.html#dtor.KBookmark)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KBookmark ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KBookmark_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kbookmarkgroup.html
pub const kbookmarkgroup = struct {
    /// New constructs a new KBookmarkGroup object.
    ///
    ///
    pub fn New() QtC.KBookmarkGroup {
        return qtc.KBookmarkGroup_new();
    }

    /// New2 constructs a new KBookmarkGroup object.
    ///
    /// ``` elem: QtC.QDomElement ```
    pub fn New2(elem: ?*anyopaque) QtC.KBookmarkGroup {
        return qtc.KBookmarkGroup_new2(@ptrCast(elem));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#isOpen)
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn IsOpen(self: ?*anyopaque) bool {
        return qtc.KBookmarkGroup_IsOpen(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#first)
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn First(self: ?*anyopaque) QtC.KBookmark {
        return qtc.KBookmarkGroup_First(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#previous)
    ///
    /// ``` self: QtC.KBookmarkGroup, current: QtC.KBookmark ```
    pub fn Previous(self: ?*anyopaque, current: ?*anyopaque) QtC.KBookmark {
        return qtc.KBookmarkGroup_Previous(@ptrCast(self), @ptrCast(current));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#next)
    ///
    /// ``` self: QtC.KBookmarkGroup, current: QtC.KBookmark ```
    pub fn Next(self: ?*anyopaque, current: ?*anyopaque) QtC.KBookmark {
        return qtc.KBookmarkGroup_Next(@ptrCast(self), @ptrCast(current));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#indexOf)
    ///
    /// ``` self: QtC.KBookmarkGroup, child: QtC.KBookmark ```
    pub fn IndexOf(self: ?*anyopaque, child: ?*anyopaque) i32 {
        return qtc.KBookmarkGroup_IndexOf(@ptrCast(self), @ptrCast(child));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#createNewFolder)
    ///
    /// ``` self: QtC.KBookmarkGroup, text: []const u8 ```
    pub fn CreateNewFolder(self: ?*anyopaque, text: []const u8) QtC.KBookmarkGroup {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KBookmarkGroup_CreateNewFolder(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#createNewSeparator)
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn CreateNewSeparator(self: ?*anyopaque) QtC.KBookmark {
        return qtc.KBookmarkGroup_CreateNewSeparator(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#addBookmark)
    ///
    /// ``` self: QtC.KBookmarkGroup, bm: QtC.KBookmark ```
    pub fn AddBookmark(self: ?*anyopaque, bm: ?*anyopaque) QtC.KBookmark {
        return qtc.KBookmarkGroup_AddBookmark(@ptrCast(self), @ptrCast(bm));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#addBookmark)
    ///
    /// ``` self: QtC.KBookmarkGroup, text: []const u8, url: QtC.QUrl, icon: []const u8 ```
    pub fn AddBookmark2(self: ?*anyopaque, text: []const u8, url: ?*anyopaque, icon: []const u8) QtC.KBookmark {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        return qtc.KBookmarkGroup_AddBookmark2(@ptrCast(self), text_str, @ptrCast(url), icon_str);
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#moveBookmark)
    ///
    /// ``` self: QtC.KBookmarkGroup, bookmark: QtC.KBookmark, after: QtC.KBookmark ```
    pub fn MoveBookmark(self: ?*anyopaque, bookmark: ?*anyopaque, after: ?*anyopaque) bool {
        return qtc.KBookmarkGroup_MoveBookmark(@ptrCast(self), @ptrCast(bookmark), @ptrCast(after));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#deleteBookmark)
    ///
    /// ``` self: QtC.KBookmarkGroup, bk: QtC.KBookmark ```
    pub fn DeleteBookmark(self: ?*anyopaque, bk: ?*anyopaque) void {
        qtc.KBookmarkGroup_DeleteBookmark(@ptrCast(self), @ptrCast(bk));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#isToolbarGroup)
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn IsToolbarGroup(self: ?*anyopaque) bool {
        return qtc.KBookmarkGroup_IsToolbarGroup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#findToolbar)
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn FindToolbar(self: ?*anyopaque) QtC.QDomElement {
        return qtc.KBookmarkGroup_FindToolbar(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#groupUrlList)
    ///
    /// ``` self: QtC.KBookmarkGroup, allocator: std.mem.Allocator ```
    pub fn GroupUrlList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QUrl {
        const _arr: qtc.libqt_list = qtc.KBookmarkGroup_GroupUrlList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("kbookmarkgroup.GroupUrlList: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#standaloneBookmark)
    ///
    /// ``` text: []const u8, url: QtC.QUrl, icon: []const u8 ```
    pub fn StandaloneBookmark(text: []const u8, url: ?*anyopaque, icon: []const u8) QtC.KBookmark {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        return qtc.KBookmark_StandaloneBookmark(text_str, @ptrCast(url), icon_str);
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#isGroup)
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn IsGroup(self: ?*anyopaque) bool {
        return qtc.KBookmark_IsGroup(@ptrCast(self));
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#isSeparator)
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn IsSeparator(self: ?*anyopaque) bool {
        return qtc.KBookmark_IsSeparator(@ptrCast(self));
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#isNull)
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.KBookmark_IsNull(@ptrCast(self));
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#hasParent)
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn HasParent(self: ?*anyopaque) bool {
        return qtc.KBookmark_HasParent(@ptrCast(self));
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#text)
    ///
    /// ``` self: QtC.KBookmarkGroup, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmark_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#fullText)
    ///
    /// ``` self: QtC.KBookmarkGroup, allocator: std.mem.Allocator ```
    pub fn FullText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmark_FullText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.FullText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#setFullText)
    ///
    /// ``` self: QtC.KBookmarkGroup, fullText: []const u8 ```
    pub fn SetFullText(self: ?*anyopaque, fullText: []const u8) void {
        const fullText_str = qtc.libqt_string{
            .len = fullText.len,
            .data = fullText.ptr,
        };
        qtc.KBookmark_SetFullText(@ptrCast(self), fullText_str);
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#url)
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.KBookmark_Url(@ptrCast(self));
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#setUrl)
    ///
    /// ``` self: QtC.KBookmarkGroup, url: QtC.QUrl ```
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KBookmark_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#icon)
    ///
    /// ``` self: QtC.KBookmarkGroup, allocator: std.mem.Allocator ```
    pub fn Icon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmark_Icon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#setIcon)
    ///
    /// ``` self: QtC.KBookmarkGroup, icon: []const u8 ```
    pub fn SetIcon(self: ?*anyopaque, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.KBookmark_SetIcon(@ptrCast(self), icon_str);
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#description)
    ///
    /// ``` self: QtC.KBookmarkGroup, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmark_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#setDescription)
    ///
    /// ``` self: QtC.KBookmarkGroup, description: []const u8 ```
    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.KBookmark_SetDescription(@ptrCast(self), description_str);
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#mimeType)
    ///
    /// ``` self: QtC.KBookmarkGroup, allocator: std.mem.Allocator ```
    pub fn MimeType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmark_MimeType(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#setMimeType)
    ///
    /// ``` self: QtC.KBookmarkGroup, mimeType: []const u8 ```
    pub fn SetMimeType(self: ?*anyopaque, mimeType: []const u8) void {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        qtc.KBookmark_SetMimeType(@ptrCast(self), mimeType_str);
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#showInToolbar)
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn ShowInToolbar(self: ?*anyopaque) bool {
        return qtc.KBookmark_ShowInToolbar(@ptrCast(self));
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#setShowInToolbar)
    ///
    /// ``` self: QtC.KBookmarkGroup, show: bool ```
    pub fn SetShowInToolbar(self: ?*anyopaque, show: bool) void {
        qtc.KBookmark_SetShowInToolbar(@ptrCast(self), show);
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#parentGroup)
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn ParentGroup(self: ?*anyopaque) QtC.KBookmarkGroup {
        return qtc.KBookmark_ParentGroup(@ptrCast(self));
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#toGroup)
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn ToGroup(self: ?*anyopaque) QtC.KBookmarkGroup {
        return qtc.KBookmark_ToGroup(@ptrCast(self));
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#address)
    ///
    /// ``` self: QtC.KBookmarkGroup, allocator: std.mem.Allocator ```
    pub fn Address(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmark_Address(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.Address: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#positionInParent)
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn PositionInParent(self: ?*anyopaque) i32 {
        return qtc.KBookmark_PositionInParent(@ptrCast(self));
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#internalElement)
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn InternalElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.KBookmark_InternalElement(@ptrCast(self));
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#updateAccessMetadata)
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn UpdateAccessMetadata(self: ?*anyopaque) void {
        qtc.KBookmark_UpdateAccessMetadata(@ptrCast(self));
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#parentAddress)
    ///
    /// ``` address: []const u8, allocator: std.mem.Allocator ```
    pub fn ParentAddress(address: []const u8, allocator: std.mem.Allocator) []const u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        const _str = qtc.KBookmark_ParentAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.ParentAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#positionInParent)
    ///
    /// ``` address: []const u8 ```
    pub fn PositionInParent2(address: []const u8) u32 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        return qtc.KBookmark_PositionInParent2(address_str);
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#previousAddress)
    ///
    /// ``` address: []const u8, allocator: std.mem.Allocator ```
    pub fn PreviousAddress(address: []const u8, allocator: std.mem.Allocator) []const u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        const _str = qtc.KBookmark_PreviousAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.PreviousAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#nextAddress)
    ///
    /// ``` address: []const u8, allocator: std.mem.Allocator ```
    pub fn NextAddress(address: []const u8, allocator: std.mem.Allocator) []const u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        const _str = qtc.KBookmark_NextAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.NextAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#commonParent)
    ///
    /// ``` A: []const u8, B: []const u8, allocator: std.mem.Allocator ```
    pub fn CommonParent(A: []const u8, B: []const u8, allocator: std.mem.Allocator) []const u8 {
        const A_str = qtc.libqt_string{
            .len = A.len,
            .data = A.ptr,
        };
        const B_str = qtc.libqt_string{
            .len = B.len,
            .data = B.ptr,
        };
        const _str = qtc.KBookmark_CommonParent(A_str, B_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.CommonParent: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#metaData)
    ///
    /// ``` self: QtC.KBookmarkGroup, owner: []const u8, create: bool ```
    pub fn MetaData(self: ?*anyopaque, owner: []const u8, create: bool) QtC.QDomNode {
        const owner_str = qtc.libqt_string{
            .len = owner.len,
            .data = owner.ptr,
        };
        return qtc.KBookmark_MetaData(@ptrCast(self), owner_str, create);
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#metaDataItem)
    ///
    /// ``` self: QtC.KBookmarkGroup, key: []const u8, allocator: std.mem.Allocator ```
    pub fn MetaDataItem(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.KBookmark_MetaDataItem(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.MetaDataItem: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#setMetaDataItem)
    ///
    /// ``` self: QtC.KBookmarkGroup, key: []const u8, value: []const u8 ```
    pub fn SetMetaDataItem(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KBookmark_SetMetaDataItem(@ptrCast(self), key_str, value_str);
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#populateMimeData)
    ///
    /// ``` self: QtC.KBookmarkGroup, mimeData: QtC.QMimeData ```
    pub fn PopulateMimeData(self: ?*anyopaque, mimeData: ?*anyopaque) void {
        qtc.KBookmark_PopulateMimeData(@ptrCast(self), @ptrCast(mimeData));
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#operator-eq-eq)
    ///
    /// ``` self: QtC.KBookmarkGroup, rhs: QtC.KBookmark ```
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.KBookmark_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// Inherited from KBookmark
    ///
    /// [Qt documentation](https://api.kde.org/kbookmark.html#setMetaDataItem)
    ///
    /// ``` self: QtC.KBookmarkGroup, key: []const u8, value: []const u8, mode: kbookmark_enums.MetaDataOverwriteMode ```
    pub fn SetMetaDataItem3(self: ?*anyopaque, key: []const u8, value: []const u8, mode: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KBookmark_SetMetaDataItem3(@ptrCast(self), key_str, value_str, @intCast(mode));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#dtor.KBookmarkGroup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KBookmarkGroup ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KBookmarkGroup_Delete(@ptrCast(self));
    }
};

// Also inherits unprojectable QList<KBookmark>

/// https://api.kde.org/kbookmark-list.html
pub const kbookmark__list = struct {
    /// New constructs a new KBookmark::List object.
    ///
    ///
    pub fn New() QtC.KBookmark__List {
        return qtc.KBookmark__List_new();
    }

    /// [Qt documentation](https://api.kde.org/kbookmark-list.html#populateMimeData)
    ///
    /// ``` self: QtC.KBookmark__List, mimeData: QtC.QMimeData ```
    pub fn PopulateMimeData(self: ?*anyopaque, mimeData: ?*anyopaque) void {
        qtc.KBookmark__List_PopulateMimeData(@ptrCast(self), @ptrCast(mimeData));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark-list.html#canDecode)
    ///
    /// ``` mimeData: QtC.QMimeData ```
    pub fn CanDecode(mimeData: ?*anyopaque) bool {
        return qtc.KBookmark__List_CanDecode(@ptrCast(mimeData));
    }

    /// [Qt documentation](https://api.kde.org/kbookmark-list.html#mimeDataTypes)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn MimeDataTypes(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KBookmark__List_MimeDataTypes();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kbookmark::list.MimeDataTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kbookmark::list.MimeDataTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmark-list.html#fromMimeData)
    ///
    /// ``` mimeData: QtC.QMimeData, parentDocument: QtC.QDomDocument ```
    pub fn FromMimeData(mimeData: ?*anyopaque, parentDocument: ?*anyopaque) QtC.KBookmark__List {
        return qtc.KBookmark__List_FromMimeData(@ptrCast(mimeData), @ptrCast(parentDocument));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KBookmark__List ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KBookmark__List_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kbookmark.html#types
pub const enums = struct {
    pub const MetaDataOverwriteMode = enum {
        pub const OverwriteMetaData: i32 = 0;
        pub const DontOverwriteMetaData: i32 = 1;
    };
};
