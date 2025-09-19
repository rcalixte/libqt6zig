const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const achievement_enums = enums;
const std = @import("std");

/// https://api.kde.org/attica-achievement.html
pub const attica__achievement = struct {
    /// New constructs a new Attica::Achievement object.
    ///
    ///
    pub fn New() QtC.Attica__Achievement {
        return qtc.Attica__Achievement_new();
    }

    /// New2 constructs a new Attica::Achievement object.
    ///
    /// ``` other: QtC.Attica__Achievement ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__Achievement {
        return qtc.Attica__Achievement_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#stringToAchievementType)
    ///
    /// ``` achievementTypeString: []const u8 ```
    ///
    /// Returns: ``` achievement_enums.Type ```
    pub fn StringToAchievementType(achievementTypeString: []const u8) i32 {
        const achievementTypeString_str = qtc.libqt_string{
            .len = achievementTypeString.len,
            .data = achievementTypeString.ptr,
        };
        return qtc.Attica__Achievement_StringToAchievementType(achievementTypeString_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#achievementTypeToString)
    ///
    /// ``` typeVal: achievement_enums.Type, allocator: std.mem.Allocator ```
    pub fn AchievementTypeToString(typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Achievement_AchievementTypeToString(@intCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::achievement.AchievementTypeToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#stringToAchievementVisibility)
    ///
    /// ``` achievementVisibilityString: []const u8 ```
    ///
    /// Returns: ``` achievement_enums.Visibility ```
    pub fn StringToAchievementVisibility(achievementVisibilityString: []const u8) i32 {
        const achievementVisibilityString_str = qtc.libqt_string{
            .len = achievementVisibilityString.len,
            .data = achievementVisibilityString.ptr,
        };
        return qtc.Attica__Achievement_StringToAchievementVisibility(achievementVisibilityString_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#achievementVisibilityToString)
    ///
    /// ``` visibility: achievement_enums.Visibility, allocator: std.mem.Allocator ```
    pub fn AchievementVisibilityToString(visibility: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Achievement_AchievementVisibilityToString(@intCast(visibility));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::achievement.AchievementVisibilityToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__Achievement, other: QtC.Attica__Achievement ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Achievement_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#setId)
    ///
    /// ``` self: QtC.Attica__Achievement, id: []const u8 ```
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Achievement_SetId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#id)
    ///
    /// ``` self: QtC.Attica__Achievement, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Achievement_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::achievement.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#setContentId)
    ///
    /// ``` self: QtC.Attica__Achievement, contentId: []const u8 ```
    pub fn SetContentId(self: ?*anyopaque, contentId: []const u8) void {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        qtc.Attica__Achievement_SetContentId(@ptrCast(self), contentId_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#contentId)
    ///
    /// ``` self: QtC.Attica__Achievement, allocator: std.mem.Allocator ```
    pub fn ContentId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Achievement_ContentId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::achievement.ContentId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#setName)
    ///
    /// ``` self: QtC.Attica__Achievement, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Achievement_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#name)
    ///
    /// ``` self: QtC.Attica__Achievement, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Achievement_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::achievement.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#setDescription)
    ///
    /// ``` self: QtC.Attica__Achievement, description: []const u8 ```
    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Attica__Achievement_SetDescription(@ptrCast(self), description_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#description)
    ///
    /// ``` self: QtC.Attica__Achievement, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Achievement_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::achievement.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#setExplanation)
    ///
    /// ``` self: QtC.Attica__Achievement, explanation: []const u8 ```
    pub fn SetExplanation(self: ?*anyopaque, explanation: []const u8) void {
        const explanation_str = qtc.libqt_string{
            .len = explanation.len,
            .data = explanation.ptr,
        };
        qtc.Attica__Achievement_SetExplanation(@ptrCast(self), explanation_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#explanation)
    ///
    /// ``` self: QtC.Attica__Achievement, allocator: std.mem.Allocator ```
    pub fn Explanation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Achievement_Explanation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::achievement.Explanation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#setPoints)
    ///
    /// ``` self: QtC.Attica__Achievement, points: i32 ```
    pub fn SetPoints(self: ?*anyopaque, points: i32) void {
        qtc.Attica__Achievement_SetPoints(@ptrCast(self), @intCast(points));
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#points)
    ///
    /// ``` self: QtC.Attica__Achievement ```
    pub fn Points(self: ?*anyopaque) i32 {
        return qtc.Attica__Achievement_Points(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#setImage)
    ///
    /// ``` self: QtC.Attica__Achievement, image: QtC.QUrl ```
    pub fn SetImage(self: ?*anyopaque, image: ?*anyopaque) void {
        qtc.Attica__Achievement_SetImage(@ptrCast(self), @ptrCast(image));
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#image)
    ///
    /// ``` self: QtC.Attica__Achievement ```
    pub fn Image(self: ?*anyopaque) QtC.QUrl {
        return qtc.Attica__Achievement_Image(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#setDependencies)
    ///
    /// ``` self: QtC.Attica__Achievement, dependencies: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetDependencies(self: ?*anyopaque, dependencies: [][]const u8, allocator: std.mem.Allocator) void {
        var dependencies_arr = allocator.alloc(qtc.libqt_string, dependencies.len) catch @panic("attica::achievement.SetDependencies: Memory allocation failed");
        defer allocator.free(dependencies_arr);
        for (dependencies, 0..dependencies.len) |item, i| {
            dependencies_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const dependencies_list = qtc.libqt_list{
            .len = dependencies.len,
            .data = dependencies_arr.ptr,
        };
        qtc.Attica__Achievement_SetDependencies(@ptrCast(self), dependencies_list);
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#addDependency)
    ///
    /// ``` self: QtC.Attica__Achievement, dependency: []const u8 ```
    pub fn AddDependency(self: ?*anyopaque, dependency: []const u8) void {
        const dependency_str = qtc.libqt_string{
            .len = dependency.len,
            .data = dependency.ptr,
        };
        qtc.Attica__Achievement_AddDependency(@ptrCast(self), dependency_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#removeDependency)
    ///
    /// ``` self: QtC.Attica__Achievement, dependency: []const u8 ```
    pub fn RemoveDependency(self: ?*anyopaque, dependency: []const u8) void {
        const dependency_str = qtc.libqt_string{
            .len = dependency.len,
            .data = dependency.ptr,
        };
        qtc.Attica__Achievement_RemoveDependency(@ptrCast(self), dependency_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#dependencies)
    ///
    /// ``` self: QtC.Attica__Achievement, allocator: std.mem.Allocator ```
    pub fn Dependencies(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__Achievement_Dependencies(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("attica::achievement.Dependencies: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("attica::achievement.Dependencies: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#setVisibility)
    ///
    /// ``` self: QtC.Attica__Achievement, visibility: achievement_enums.Visibility ```
    pub fn SetVisibility(self: ?*anyopaque, visibility: i32) void {
        qtc.Attica__Achievement_SetVisibility(@ptrCast(self), @intCast(visibility));
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#visibility)
    ///
    /// ``` self: QtC.Attica__Achievement ```
    ///
    /// Returns: ``` achievement_enums.Visibility ```
    pub fn Visibility(self: ?*anyopaque) i32 {
        return qtc.Attica__Achievement_Visibility(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#setType)
    ///
    /// ``` self: QtC.Attica__Achievement, typeVal: achievement_enums.Type ```
    pub fn SetType(self: ?*anyopaque, typeVal: i32) void {
        qtc.Attica__Achievement_SetType(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#type)
    ///
    /// ``` self: QtC.Attica__Achievement ```
    ///
    /// Returns: ``` achievement_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Attica__Achievement_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#setOptions)
    ///
    /// ``` self: QtC.Attica__Achievement, options: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetOptions(self: ?*anyopaque, options: [][]const u8, allocator: std.mem.Allocator) void {
        var options_arr = allocator.alloc(qtc.libqt_string, options.len) catch @panic("attica::achievement.SetOptions: Memory allocation failed");
        defer allocator.free(options_arr);
        for (options, 0..options.len) |item, i| {
            options_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const options_list = qtc.libqt_list{
            .len = options.len,
            .data = options_arr.ptr,
        };
        qtc.Attica__Achievement_SetOptions(@ptrCast(self), options_list);
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#addOption)
    ///
    /// ``` self: QtC.Attica__Achievement, option: []const u8 ```
    pub fn AddOption(self: ?*anyopaque, option: []const u8) void {
        const option_str = qtc.libqt_string{
            .len = option.len,
            .data = option.ptr,
        };
        qtc.Attica__Achievement_AddOption(@ptrCast(self), option_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#removeOption)
    ///
    /// ``` self: QtC.Attica__Achievement, option: []const u8 ```
    pub fn RemoveOption(self: ?*anyopaque, option: []const u8) void {
        const option_str = qtc.libqt_string{
            .len = option.len,
            .data = option.ptr,
        };
        qtc.Attica__Achievement_RemoveOption(@ptrCast(self), option_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#options)
    ///
    /// ``` self: QtC.Attica__Achievement, allocator: std.mem.Allocator ```
    pub fn Options(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__Achievement_Options(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("attica::achievement.Options: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("attica::achievement.Options: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#setSteps)
    ///
    /// ``` self: QtC.Attica__Achievement, steps: i32 ```
    pub fn SetSteps(self: ?*anyopaque, steps: i32) void {
        qtc.Attica__Achievement_SetSteps(@ptrCast(self), @intCast(steps));
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#steps)
    ///
    /// ``` self: QtC.Attica__Achievement ```
    pub fn Steps(self: ?*anyopaque) i32 {
        return qtc.Attica__Achievement_Steps(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#setProgress)
    ///
    /// ``` self: QtC.Attica__Achievement, progress: QtC.QVariant ```
    pub fn SetProgress(self: ?*anyopaque, progress: ?*anyopaque) void {
        qtc.Attica__Achievement_SetProgress(@ptrCast(self), @ptrCast(progress));
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#progress)
    ///
    /// ``` self: QtC.Attica__Achievement ```
    pub fn Progress(self: ?*anyopaque) QtC.QVariant {
        return qtc.Attica__Achievement_Progress(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-achievement.html#isValid)
    ///
    /// ``` self: QtC.Attica__Achievement ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Achievement_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__Achievement ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Achievement_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/attica-achievement.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const FlowingAchievement: i32 = 0;
        pub const SteppedAchievement: i32 = 1;
        pub const NamedstepsAchievement: i32 = 2;
        pub const SetAchievement: i32 = 3;
    };

    pub const Visibility = enum {
        pub const VisibleAchievement: i32 = 0;
        pub const DependentsAchievement: i32 = 1;
        pub const SecretAchievement: i32 = 2;
    };
};
