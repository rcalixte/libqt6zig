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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Achievement object in C++ memory
    ///
    pub fn new() Attica__Achievement {
        return .{ .ptr = qtc.Attica__Achievement_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Achievement object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Achievement `
    ///
    pub fn new2(other: anytype) Attica__Achievement {
        comptime _ = @TypeOf(other)._is_Attica__Achievement;
        return .{ .ptr = qtc.Attica__Achievement_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `stringToAchievementType` instead
    ///
    pub const StringToAchievementType = stringToAchievementType;

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
    pub fn stringToAchievementType(achievementTypeString: []const u8) i32 {
        const achievementTypeString_str = qtc.libqt_string{
            .len = achievementTypeString.len,
            .data = achievementTypeString.ptr,
        };
        return qtc.Attica__Achievement_StringToAchievementType(achievementTypeString_str);
    }

    /// ### DEPRECATED: Use `achievementTypeToString` instead
    ///
    pub const AchievementTypeToString = achievementTypeToString;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#achievementTypeToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: achievement_enums.Type `
    ///
    pub fn achievementTypeToString(allocator: std.mem.Allocator, typeVal: i32) []const u8 {
        var _str = qtc.Attica__Achievement_AchievementTypeToString(@bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Achievement.achievementTypeToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `stringToAchievementVisibility` instead
    ///
    pub const StringToAchievementVisibility = stringToAchievementVisibility;

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
    pub fn stringToAchievementVisibility(achievementVisibilityString: []const u8) i32 {
        const achievementVisibilityString_str = qtc.libqt_string{
            .len = achievementVisibilityString.len,
            .data = achievementVisibilityString.ptr,
        };
        return qtc.Attica__Achievement_StringToAchievementVisibility(achievementVisibilityString_str);
    }

    /// ### DEPRECATED: Use `achievementVisibilityToString` instead
    ///
    pub const AchievementVisibilityToString = achievementVisibilityToString;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#achievementVisibilityToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _visibility: achievement_enums.Visibility `
    ///
    pub fn achievementVisibilityToString(allocator: std.mem.Allocator, _visibility: i32) []const u8 {
        var _str = qtc.Attica__Achievement_AchievementVisibilityToString(@bitCast(_visibility));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Achievement.achievementVisibilityToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` other: Attica__Achievement `
    ///
    pub fn operatorAssign(self: Attica__Achievement, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Achievement;
        qtc.Attica__Achievement_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__Achievement, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__Achievement_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__Achievement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Achievement_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Achievement.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContentId` instead
    ///
    pub const SetContentId = setContentId;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setContentId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` _contentId: []const u8 `
    ///
    pub fn setContentId(self: Attica__Achievement, _contentId: []const u8) void {
        const contentId_str = qtc.libqt_string{
            .len = _contentId.len,
            .data = _contentId.ptr,
        };
        qtc.Attica__Achievement_SetContentId(@ptrCast(self.ptr), contentId_str);
    }

    /// ### DEPRECATED: Use `contentId` instead
    ///
    pub const ContentId = contentId;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#contentId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contentId(self: Attica__Achievement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Achievement_ContentId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Achievement.contentId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__Achievement, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__Achievement_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__Achievement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Achievement_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Achievement.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDescription` instead
    ///
    pub const SetDescription = setDescription;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn setDescription(self: Attica__Achievement, _description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        qtc.Attica__Achievement_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: Attica__Achievement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Achievement_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Achievement.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setExplanation` instead
    ///
    pub const SetExplanation = setExplanation;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setExplanation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` _explanation: []const u8 `
    ///
    pub fn setExplanation(self: Attica__Achievement, _explanation: []const u8) void {
        const explanation_str = qtc.libqt_string{
            .len = _explanation.len,
            .data = _explanation.ptr,
        };
        qtc.Attica__Achievement_SetExplanation(@ptrCast(self.ptr), explanation_str);
    }

    /// ### DEPRECATED: Use `explanation` instead
    ///
    pub const Explanation = explanation;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#explanation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn explanation(self: Attica__Achievement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Achievement_Explanation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Achievement.explanation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPoints` instead
    ///
    pub const SetPoints = setPoints;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` _points: i32 `
    ///
    pub fn setPoints(self: Attica__Achievement, _points: i32) void {
        qtc.Attica__Achievement_SetPoints(@ptrCast(self.ptr), @bitCast(_points));
    }

    /// ### DEPRECATED: Use `points` instead
    ///
    pub const Points = points;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    pub fn points(self: Attica__Achievement) i32 {
        return qtc.Attica__Achievement_Points(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setImage` instead
    ///
    pub const SetImage = setImage;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` _image: QUrl `
    ///
    pub fn setImage(self: Attica__Achievement, _image: anytype) void {
        comptime _ = @TypeOf(_image)._is_QUrl;
        qtc.Attica__Achievement_SetImage(@ptrCast(self.ptr), @ptrCast(_image.ptr));
    }

    /// ### DEPRECATED: Use `image` instead
    ///
    pub const Image = image;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    pub fn image(self: Attica__Achievement) QUrl {
        return .{ .ptr = qtc.Attica__Achievement_Image(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDependencies` instead
    ///
    pub const SetDependencies = setDependencies;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setDependencies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _dependencies: []const []const u8 `
    ///
    pub fn setDependencies(self: Attica__Achievement, allocator: std.mem.Allocator, _dependencies: []const []const u8) void {
        const dependencies_arr = allocator.alloc(qtc.libqt_string, _dependencies.len) catch @panic("Attica__Achievement.setDependencies: Memory allocation failed");
        defer allocator.free(dependencies_arr);
        for (_dependencies, 0.._dependencies.len) |str_item, i|
            dependencies_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const dependencies_list = qtc.libqt_list{
            .len = _dependencies.len,
            .data = dependencies_arr.ptr,
        };
        qtc.Attica__Achievement_SetDependencies(@ptrCast(self.ptr), dependencies_list);
    }

    /// ### DEPRECATED: Use `addDependency` instead
    ///
    pub const AddDependency = addDependency;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#addDependency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` dependency: []const u8 `
    ///
    pub fn addDependency(self: Attica__Achievement, dependency: []const u8) void {
        const dependency_str = qtc.libqt_string{
            .len = dependency.len,
            .data = dependency.ptr,
        };
        qtc.Attica__Achievement_AddDependency(@ptrCast(self.ptr), dependency_str);
    }

    /// ### DEPRECATED: Use `removeDependency` instead
    ///
    pub const RemoveDependency = removeDependency;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#removeDependency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` dependency: []const u8 `
    ///
    pub fn removeDependency(self: Attica__Achievement, dependency: []const u8) void {
        const dependency_str = qtc.libqt_string{
            .len = dependency.len,
            .data = dependency.ptr,
        };
        qtc.Attica__Achievement_RemoveDependency(@ptrCast(self.ptr), dependency_str);
    }

    /// ### DEPRECATED: Use `dependencies` instead
    ///
    pub const Dependencies = dependencies;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#dependencies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dependencies(self: Attica__Achievement, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__Achievement_Dependencies(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Attica__Achievement.dependencies: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Attica__Achievement.dependencies: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setVisibility` instead
    ///
    pub const SetVisibility = setVisibility;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setVisibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` _visibility: achievement_enums.Visibility `
    ///
    pub fn setVisibility(self: Attica__Achievement, _visibility: i32) void {
        qtc.Attica__Achievement_SetVisibility(@ptrCast(self.ptr), @bitCast(_visibility));
    }

    /// ### DEPRECATED: Use `visibility` instead
    ///
    pub const Visibility = visibility;

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
    pub fn visibility(self: Attica__Achievement) i32 {
        return qtc.Attica__Achievement_Visibility(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` typeVal: achievement_enums.Type `
    ///
    pub fn setType(self: Attica__Achievement, typeVal: i32) void {
        qtc.Attica__Achievement_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: Attica__Achievement) i32 {
        return qtc.Attica__Achievement_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOptions` instead
    ///
    pub const SetOptions = setOptions;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _options: []const []const u8 `
    ///
    pub fn setOptions(self: Attica__Achievement, allocator: std.mem.Allocator, _options: []const []const u8) void {
        const options_arr = allocator.alloc(qtc.libqt_string, _options.len) catch @panic("Attica__Achievement.setOptions: Memory allocation failed");
        defer allocator.free(options_arr);
        for (_options, 0.._options.len) |str_item, i|
            options_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const options_list = qtc.libqt_list{
            .len = _options.len,
            .data = options_arr.ptr,
        };
        qtc.Attica__Achievement_SetOptions(@ptrCast(self.ptr), options_list);
    }

    /// ### DEPRECATED: Use `addOption` instead
    ///
    pub const AddOption = addOption;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#addOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` option: []const u8 `
    ///
    pub fn addOption(self: Attica__Achievement, option: []const u8) void {
        const option_str = qtc.libqt_string{
            .len = option.len,
            .data = option.ptr,
        };
        qtc.Attica__Achievement_AddOption(@ptrCast(self.ptr), option_str);
    }

    /// ### DEPRECATED: Use `removeOption` instead
    ///
    pub const RemoveOption = removeOption;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#removeOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` option: []const u8 `
    ///
    pub fn removeOption(self: Attica__Achievement, option: []const u8) void {
        const option_str = qtc.libqt_string{
            .len = option.len,
            .data = option.ptr,
        };
        qtc.Attica__Achievement_RemoveOption(@ptrCast(self.ptr), option_str);
    }

    /// ### DEPRECATED: Use `options` instead
    ///
    pub const Options = options;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#options)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn options(self: Attica__Achievement, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__Achievement_Options(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Attica__Achievement.options: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Attica__Achievement.options: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setSteps` instead
    ///
    pub const SetSteps = setSteps;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setSteps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` _steps: i32 `
    ///
    pub fn setSteps(self: Attica__Achievement, _steps: i32) void {
        qtc.Attica__Achievement_SetSteps(@ptrCast(self.ptr), @bitCast(_steps));
    }

    /// ### DEPRECATED: Use `steps` instead
    ///
    pub const Steps = steps;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#steps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    pub fn steps(self: Attica__Achievement) i32 {
        return qtc.Attica__Achievement_Steps(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProgress` instead
    ///
    pub const SetProgress = setProgress;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#setProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    /// ` _progress: QVariant `
    ///
    pub fn setProgress(self: Attica__Achievement, _progress: anytype) void {
        comptime _ = @TypeOf(_progress)._is_QVariant;
        qtc.Attica__Achievement_SetProgress(@ptrCast(self.ptr), @ptrCast(_progress.ptr));
    }

    /// ### DEPRECATED: Use `progress` instead
    ///
    pub const Progress = progress;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#progress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    pub fn progress(self: Attica__Achievement) QVariant {
        return .{ .ptr = qtc.Attica__Achievement_Progress(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-achievement.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Achievement `
    ///
    pub fn isValid(self: Attica__Achievement) bool {
        return qtc.Attica__Achievement_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Achievement `
    ///
    pub fn delete(self: Attica__Achievement) void {
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
