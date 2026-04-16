const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const achievement_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-achievement.html)
pub const Attica__Achievement = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Achievement,

    pub const _is_Attica__Achievement = {};

    /// New constructs a new Attica::Achievement object.
    ///
    pub fn New() Attica__Achievement {
        return .{ .ptr = qtc.Attica__Achievement_new() };
    }

    /// New2 constructs a new Attica::Achievement object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Achievement `
    ///
    pub fn New2(other: anytype) Attica__Achievement {
        comptime _ = @TypeOf(other)._is_Attica__Achievement;
        return .{ .ptr = qtc.Attica__Achievement_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#stringToAchievementType)
    ///
    /// ## Parameter(s):
    ///
    /// ` achievementTypeString: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` achievement_enums.Type `
    ///
    pub fn StringToAchievementType(achievementTypeString: []const u8) i32 {
        const achievementTypeString_str = qtc.libqt_string{
            .len = achievementTypeString.len,
            .data = achievementTypeString.ptr,
        };
        return qtc.Attica__Achievement_StringToAchievementType(achievementTypeString_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#achievementTypeToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: achievement_enums.Type `
    ///
    pub fn AchievementTypeToString(allocator: std.mem.Allocator, typeVal: i32) []const u8 {
        var _str = qtc.Attica__Achievement_AchievementTypeToString(@bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__achievement.AchievementTypeToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#stringToAchievementVisibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` achievementVisibilityString: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` achievement_enums.Visibility `
    ///
    pub fn StringToAchievementVisibility(achievementVisibilityString: []const u8) i32 {
        const achievementVisibilityString_str = qtc.libqt_string{
            .len = achievementVisibilityString.len,
            .data = achievementVisibilityString.ptr,
        };
        return qtc.Attica__Achievement_StringToAchievementVisibility(achievementVisibilityString_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#achievementVisibilityToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` visibility: achievement_enums.Visibility `
    ///
    pub fn AchievementVisibilityToString(allocator: std.mem.Allocator, visibility: i32) []const u8 {
        var _str = qtc.Attica__Achievement_AchievementVisibilityToString(@bitCast(visibility));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__achievement.AchievementVisibilityToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` other: Attica__Achievement `
    ///
    pub fn OperatorAssign(self: Attica__Achievement, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Achievement;
        qtc.Attica__Achievement_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__Achievement, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Achievement_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__Achievement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Achievement_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__achievement.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setContentId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` contentId: []const u8 `
    ///
    pub fn SetContentId(self: Attica__Achievement, contentId: []const u8) void {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        qtc.Attica__Achievement_SetContentId(@ptrCast(self.ptr), contentId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#contentId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContentId(self: Attica__Achievement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Achievement_ContentId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__achievement.ContentId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: Attica__Achievement, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Achievement_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__Achievement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Achievement_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__achievement.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetDescription(self: Attica__Achievement, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Attica__Achievement_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: Attica__Achievement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Achievement_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__achievement.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setExplanation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` explanation: []const u8 `
    ///
    pub fn SetExplanation(self: Attica__Achievement, explanation: []const u8) void {
        const explanation_str = qtc.libqt_string{
            .len = explanation.len,
            .data = explanation.ptr,
        };
        qtc.Attica__Achievement_SetExplanation(@ptrCast(self.ptr), explanation_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#explanation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Explanation(self: Attica__Achievement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Achievement_Explanation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__achievement.Explanation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` points: i32 `
    ///
    pub fn SetPoints(self: Attica__Achievement, points: i32) void {
        qtc.Attica__Achievement_SetPoints(@ptrCast(self.ptr), @bitCast(points));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    pub fn Points(self: Attica__Achievement) i32 {
        return qtc.Attica__Achievement_Points(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` image: QUrl `
    ///
    pub fn SetImage(self: Attica__Achievement, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QUrl;
        qtc.Attica__Achievement_SetImage(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    pub fn Image(self: Attica__Achievement) QUrl {
        return .{ .ptr = qtc.Attica__Achievement_Image(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setDependencies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` dependencies: []const []const u8 `
    ///
    pub fn SetDependencies(self: Attica__Achievement, allocator: std.mem.Allocator, dependencies: []const []const u8) void {
        const dependencies_arr = allocator.alloc(qtc.libqt_string, dependencies.len) catch @panic("attica__achievement.SetDependencies: Memory allocation failed");
        defer allocator.free(dependencies_arr);
        for (dependencies, 0..dependencies.len) |item, i|
            dependencies_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const dependencies_list = qtc.libqt_list{
            .len = dependencies.len,
            .data = dependencies_arr.ptr,
        };
        qtc.Attica__Achievement_SetDependencies(@ptrCast(self.ptr), dependencies_list);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#addDependency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` dependency: []const u8 `
    ///
    pub fn AddDependency(self: Attica__Achievement, dependency: []const u8) void {
        const dependency_str = qtc.libqt_string{
            .len = dependency.len,
            .data = dependency.ptr,
        };
        qtc.Attica__Achievement_AddDependency(@ptrCast(self.ptr), dependency_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#removeDependency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` dependency: []const u8 `
    ///
    pub fn RemoveDependency(self: Attica__Achievement, dependency: []const u8) void {
        const dependency_str = qtc.libqt_string{
            .len = dependency.len,
            .data = dependency.ptr,
        };
        qtc.Attica__Achievement_RemoveDependency(@ptrCast(self.ptr), dependency_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#dependencies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Dependencies(self: Attica__Achievement, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__Achievement_Dependencies(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("attica__achievement.Dependencies: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("attica__achievement.Dependencies: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setVisibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` visibility: achievement_enums.Visibility `
    ///
    pub fn SetVisibility(self: Attica__Achievement, visibility: i32) void {
        qtc.Attica__Achievement_SetVisibility(@ptrCast(self.ptr), @bitCast(visibility));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#visibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ## Returns:
    ///
    /// ` achievement_enums.Visibility `
    ///
    pub fn Visibility(self: Attica__Achievement) i32 {
        return qtc.Attica__Achievement_Visibility(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` typeVal: achievement_enums.Type `
    ///
    pub fn SetType(self: Attica__Achievement, typeVal: i32) void {
        qtc.Attica__Achievement_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ## Returns:
    ///
    /// ` achievement_enums.Type `
    ///
    pub fn Type(self: Attica__Achievement) i32 {
        return qtc.Attica__Achievement_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` options: []const []const u8 `
    ///
    pub fn SetOptions(self: Attica__Achievement, allocator: std.mem.Allocator, options: []const []const u8) void {
        const options_arr = allocator.alloc(qtc.libqt_string, options.len) catch @panic("attica__achievement.SetOptions: Memory allocation failed");
        defer allocator.free(options_arr);
        for (options, 0..options.len) |item, i|
            options_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const options_list = qtc.libqt_list{
            .len = options.len,
            .data = options_arr.ptr,
        };
        qtc.Attica__Achievement_SetOptions(@ptrCast(self.ptr), options_list);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#addOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` option: []const u8 `
    ///
    pub fn AddOption(self: Attica__Achievement, option: []const u8) void {
        const option_str = qtc.libqt_string{
            .len = option.len,
            .data = option.ptr,
        };
        qtc.Attica__Achievement_AddOption(@ptrCast(self.ptr), option_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#removeOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` option: []const u8 `
    ///
    pub fn RemoveOption(self: Attica__Achievement, option: []const u8) void {
        const option_str = qtc.libqt_string{
            .len = option.len,
            .data = option.ptr,
        };
        qtc.Attica__Achievement_RemoveOption(@ptrCast(self.ptr), option_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#options)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Options(self: Attica__Achievement, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__Achievement_Options(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("attica__achievement.Options: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("attica__achievement.Options: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setSteps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` steps: i32 `
    ///
    pub fn SetSteps(self: Attica__Achievement, steps: i32) void {
        qtc.Attica__Achievement_SetSteps(@ptrCast(self.ptr), @bitCast(steps));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#steps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    pub fn Steps(self: Attica__Achievement) i32 {
        return qtc.Attica__Achievement_Steps(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` progress: QVariant `
    ///
    pub fn SetProgress(self: Attica__Achievement, progress: anytype) void {
        comptime _ = @TypeOf(progress)._is_QVariant;
        qtc.Attica__Achievement_SetProgress(@ptrCast(self.ptr), @ptrCast(progress.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#progress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    pub fn Progress(self: Attica__Achievement) QVariant {
        return .{ .ptr = qtc.Attica__Achievement_Progress(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    pub fn IsValid(self: Attica__Achievement) bool {
        return qtc.Attica__Achievement_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Achievement `
    ///
    pub fn Delete(self: Attica__Achievement) void {
        qtc.Attica__Achievement_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/attica-achievement.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const FlowingAchievement: i32 = 0;
        pub const SteppedAchievement: i32 = 1;
        pub const NamedstepsAchievement: i32 = 2;
        pub const SetAchievement: i32 = 3;
    };

    pub const Visibility = enum(i32) {
        pub const VisibleAchievement: i32 = 0;
        pub const DependentsAchievement: i32 = 1;
        pub const SecretAchievement: i32 = 2;
    };
};
