const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const QMatrix4x4 = @import("libqt6").QMatrix4x4;
const QRect = @import("libqt6").QRect;
const QSGMaterial = @import("libqt6").QSGMaterial;
const QSGTexture = @import("libqt6").QSGTexture;
const qsgmaterialshader_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html)
pub const QSGMaterialShader = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGMaterialShader,

    pub const _is_QSGMaterialShader = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGMaterialShader object in C++ memory
    ///
    pub fn new() QSGMaterialShader {
        return .{ .ptr = qtc.QSGMaterialShader_new() };
    }

    /// ### DEPRECATED: Use `updateUniformData` instead
    ///
    pub const UpdateUniformData = updateUniformData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateUniformData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` state: QSGMaterialShader__RenderState `
    ///
    /// ` newMaterial: QSGMaterial `
    ///
    /// ` oldMaterial: QSGMaterial `
    ///
    pub fn updateUniformData(self: QSGMaterialShader, state: anytype, newMaterial: anytype, oldMaterial: anytype) bool {
        comptime _ = @TypeOf(state)._is_QSGMaterialShader__RenderState;
        comptime _ = @TypeOf(newMaterial)._is_QSGMaterial;
        comptime _ = @TypeOf(oldMaterial)._is_QSGMaterial;
        return qtc.QSGMaterialShader_UpdateUniformData(@ptrCast(self.ptr), @ptrCast(state.ptr), @ptrCast(newMaterial.ptr), @ptrCast(oldMaterial.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateUniformData` instead
    ///
    pub const OnUpdateUniformData = onUpdateUniformData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateUniformData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` callback: *const fn (self: QSGMaterialShader, state: QSGMaterialShader__RenderState, newMaterial: QSGMaterial, oldMaterial: QSGMaterial) callconv(.c) bool `
    ///
    pub fn onUpdateUniformData(self: QSGMaterialShader, callback: *const fn (QSGMaterialShader, QSGMaterialShader__RenderState, QSGMaterial, QSGMaterial) callconv(.c) bool) void {
        qtc.QSGMaterialShader_OnUpdateUniformData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateUniformData` instead
    ///
    pub const SuperUpdateUniformData = superUpdateUniformData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateUniformData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` state: QSGMaterialShader__RenderState `
    ///
    /// ` newMaterial: QSGMaterial `
    ///
    /// ` oldMaterial: QSGMaterial `
    ///
    pub fn superUpdateUniformData(self: QSGMaterialShader, state: anytype, newMaterial: anytype, oldMaterial: anytype) bool {
        comptime _ = @TypeOf(state)._is_QSGMaterialShader__RenderState;
        comptime _ = @TypeOf(newMaterial)._is_QSGMaterial;
        comptime _ = @TypeOf(oldMaterial)._is_QSGMaterial;
        return qtc.QSGMaterialShader_SuperUpdateUniformData(@ptrCast(self.ptr), @ptrCast(state.ptr), @ptrCast(newMaterial.ptr), @ptrCast(oldMaterial.ptr));
    }

    /// ### DEPRECATED: Use `updateSampledImage` instead
    ///
    pub const UpdateSampledImage = updateSampledImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateSampledImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` state: QSGMaterialShader__RenderState `
    ///
    /// ` binding: i32 `
    ///
    /// ` texture: *QSGTexture.ptr `
    ///
    /// ` newMaterial: QSGMaterial `
    ///
    /// ` oldMaterial: QSGMaterial `
    ///
    pub fn updateSampledImage(self: QSGMaterialShader, state: anytype, binding: i32, texture: *?*anyopaque, newMaterial: anytype, oldMaterial: anytype) void {
        comptime _ = @TypeOf(state)._is_QSGMaterialShader__RenderState;
        comptime _ = @TypeOf(newMaterial)._is_QSGMaterial;
        comptime _ = @TypeOf(oldMaterial)._is_QSGMaterial;
        qtc.QSGMaterialShader_UpdateSampledImage(@ptrCast(self.ptr), @ptrCast(state.ptr), @bitCast(binding), @ptrCast(texture), @ptrCast(newMaterial.ptr), @ptrCast(oldMaterial.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateSampledImage` instead
    ///
    pub const OnUpdateSampledImage = onUpdateSampledImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateSampledImage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` callback: *const fn (self: QSGMaterialShader, state: QSGMaterialShader__RenderState, binding: i32, texture: *QSGTexture.ptr, newMaterial: QSGMaterial, oldMaterial: QSGMaterial) callconv(.c) void `
    ///
    pub fn onUpdateSampledImage(self: QSGMaterialShader, callback: *const fn (QSGMaterialShader, QSGMaterialShader__RenderState, i32, *?*anyopaque, QSGMaterial, QSGMaterial) callconv(.c) void) void {
        qtc.QSGMaterialShader_OnUpdateSampledImage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateSampledImage` instead
    ///
    pub const SuperUpdateSampledImage = superUpdateSampledImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateSampledImage)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` state: QSGMaterialShader__RenderState `
    ///
    /// ` binding: i32 `
    ///
    /// ` texture: *QSGTexture.ptr `
    ///
    /// ` newMaterial: QSGMaterial `
    ///
    /// ` oldMaterial: QSGMaterial `
    ///
    pub fn superUpdateSampledImage(self: QSGMaterialShader, state: anytype, binding: i32, texture: *?*anyopaque, newMaterial: anytype, oldMaterial: anytype) void {
        comptime _ = @TypeOf(state)._is_QSGMaterialShader__RenderState;
        comptime _ = @TypeOf(newMaterial)._is_QSGMaterial;
        comptime _ = @TypeOf(oldMaterial)._is_QSGMaterial;
        qtc.QSGMaterialShader_SuperUpdateSampledImage(@ptrCast(self.ptr), @ptrCast(state.ptr), @bitCast(binding), @ptrCast(texture), @ptrCast(newMaterial.ptr), @ptrCast(oldMaterial.ptr));
    }

    /// ### DEPRECATED: Use `updateGraphicsPipelineState` instead
    ///
    pub const UpdateGraphicsPipelineState = updateGraphicsPipelineState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateGraphicsPipelineState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` state: QSGMaterialShader__RenderState `
    ///
    /// ` ps: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ` newMaterial: QSGMaterial `
    ///
    /// ` oldMaterial: QSGMaterial `
    ///
    pub fn updateGraphicsPipelineState(self: QSGMaterialShader, state: anytype, ps: anytype, newMaterial: anytype, oldMaterial: anytype) bool {
        comptime _ = @TypeOf(state)._is_QSGMaterialShader__RenderState;
        comptime _ = @TypeOf(ps)._is_QSGMaterialShader__GraphicsPipelineState;
        comptime _ = @TypeOf(newMaterial)._is_QSGMaterial;
        comptime _ = @TypeOf(oldMaterial)._is_QSGMaterial;
        return qtc.QSGMaterialShader_UpdateGraphicsPipelineState(@ptrCast(self.ptr), @ptrCast(state.ptr), @ptrCast(ps.ptr), @ptrCast(newMaterial.ptr), @ptrCast(oldMaterial.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateGraphicsPipelineState` instead
    ///
    pub const OnUpdateGraphicsPipelineState = onUpdateGraphicsPipelineState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateGraphicsPipelineState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` callback: *const fn (self: QSGMaterialShader, state: QSGMaterialShader__RenderState, ps: QSGMaterialShader__GraphicsPipelineState, newMaterial: QSGMaterial, oldMaterial: QSGMaterial) callconv(.c) bool `
    ///
    pub fn onUpdateGraphicsPipelineState(self: QSGMaterialShader, callback: *const fn (QSGMaterialShader, QSGMaterialShader__RenderState, QSGMaterialShader__GraphicsPipelineState, QSGMaterial, QSGMaterial) callconv(.c) bool) void {
        qtc.QSGMaterialShader_OnUpdateGraphicsPipelineState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateGraphicsPipelineState` instead
    ///
    pub const SuperUpdateGraphicsPipelineState = superUpdateGraphicsPipelineState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateGraphicsPipelineState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` state: QSGMaterialShader__RenderState `
    ///
    /// ` ps: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ` newMaterial: QSGMaterial `
    ///
    /// ` oldMaterial: QSGMaterial `
    ///
    pub fn superUpdateGraphicsPipelineState(self: QSGMaterialShader, state: anytype, ps: anytype, newMaterial: anytype, oldMaterial: anytype) bool {
        comptime _ = @TypeOf(state)._is_QSGMaterialShader__RenderState;
        comptime _ = @TypeOf(ps)._is_QSGMaterialShader__GraphicsPipelineState;
        comptime _ = @TypeOf(newMaterial)._is_QSGMaterial;
        comptime _ = @TypeOf(oldMaterial)._is_QSGMaterial;
        return qtc.QSGMaterialShader_SuperUpdateGraphicsPipelineState(@ptrCast(self.ptr), @ptrCast(state.ptr), @ptrCast(ps.ptr), @ptrCast(newMaterial.ptr), @ptrCast(oldMaterial.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgmaterialshader_enums.Flag `
    ///
    pub fn flags(self: QSGMaterialShader) i32 {
        return qtc.QSGMaterialShader_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` _flags: flag of qsgmaterialshader_enums.Flag `
    ///
    pub fn setFlag(self: QSGMaterialShader, _flags: i32) void {
        qtc.QSGMaterialShader_SetFlag(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` _flags: flag of qsgmaterialshader_enums.Flag `
    ///
    pub fn setFlags(self: QSGMaterialShader, _flags: i32) void {
        qtc.QSGMaterialShader_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `combinedImageSamplerCount` instead
    ///
    pub const CombinedImageSamplerCount = combinedImageSamplerCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#combinedImageSamplerCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` binding: i32 `
    ///
    pub fn combinedImageSamplerCount(self: QSGMaterialShader, binding: i32) i32 {
        return qtc.QSGMaterialShader_CombinedImageSamplerCount(@ptrCast(self.ptr), @bitCast(binding));
    }

    /// ### DEPRECATED: Use `setShaderFileName` instead
    ///
    pub const SetShaderFileName = setShaderFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setShaderFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` stage: qsgmaterialshader_enums.Stage `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn setShaderFileName(self: QSGMaterialShader, stage: i32, filename: []const u8) void {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.QSGMaterialShader_SetShaderFileName(@ptrCast(self.ptr), @bitCast(stage), filename_str);
    }

    /// ### DEPRECATED: Use `onSetShaderFileName` instead
    ///
    pub const OnSetShaderFileName = onSetShaderFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setShaderFileName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` callback: *const fn (self: QSGMaterialShader, stage: qsgmaterialshader_enums.Stage, filename: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetShaderFileName(self: QSGMaterialShader, callback: *const fn (QSGMaterialShader, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QSGMaterialShader_OnSetShaderFileName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetShaderFileName` instead
    ///
    pub const SuperSetShaderFileName = superSetShaderFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setShaderFileName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` stage: qsgmaterialshader_enums.Stage `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn superSetShaderFileName(self: QSGMaterialShader, stage: i32, filename: []const u8) void {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.QSGMaterialShader_SuperSetShaderFileName(@ptrCast(self.ptr), @bitCast(stage), filename_str);
    }

    /// ### DEPRECATED: Use `setShaderFileName2` instead
    ///
    pub const SetShaderFileName2 = setShaderFileName2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setShaderFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` stage: qsgmaterialshader_enums.Stage `
    ///
    /// ` filename: []const u8 `
    ///
    /// ` viewCount: i32 `
    ///
    pub fn setShaderFileName2(self: QSGMaterialShader, stage: i32, filename: []const u8, viewCount: i32) void {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.QSGMaterialShader_SetShaderFileName2(@ptrCast(self.ptr), @bitCast(stage), filename_str, @bitCast(viewCount));
    }

    /// ### DEPRECATED: Use `onSetShaderFileName2` instead
    ///
    pub const OnSetShaderFileName2 = onSetShaderFileName2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setShaderFileName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` callback: *const fn (self: QSGMaterialShader, stage: qsgmaterialshader_enums.Stage, filename: [*:0]const u8, viewCount: i32) callconv(.c) void `
    ///
    pub fn onSetShaderFileName2(self: QSGMaterialShader, callback: *const fn (QSGMaterialShader, i32, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QSGMaterialShader_OnSetShaderFileName2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetShaderFileName2` instead
    ///
    pub const SuperSetShaderFileName2 = superSetShaderFileName2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setShaderFileName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` stage: qsgmaterialshader_enums.Stage `
    ///
    /// ` filename: []const u8 `
    ///
    /// ` viewCount: i32 `
    ///
    pub fn superSetShaderFileName2(self: QSGMaterialShader, stage: i32, filename: []const u8, viewCount: i32) void {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.QSGMaterialShader_SuperSetShaderFileName2(@ptrCast(self.ptr), @bitCast(stage), filename_str, @bitCast(viewCount));
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader `
    ///
    /// ` _flags: flag of qsgmaterialshader_enums.Flag `
    ///
    /// ` on: bool `
    ///
    pub fn setFlag2(self: QSGMaterialShader, _flags: i32, on: bool) void {
        qtc.QSGMaterialShader_SetFlag2(@ptrCast(self.ptr), @bitCast(_flags), on);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#dtor.QSGMaterialShader)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGMaterialShader `
    ///
    pub fn delete(self: QSGMaterialShader) void {
        qtc.QSGMaterialShader_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html)
pub const QSGMaterialShader__RenderState = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGMaterialShader__RenderState,

    pub const _is_QSGMaterialShader__RenderState = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGMaterialShader::RenderState object in C++ memory
    ///
    pub fn new() QSGMaterialShader__RenderState {
        return .{ .ptr = qtc.QSGMaterialShader__RenderState_new() };
    }

    /// ### DEPRECATED: Use `dirtyStates` instead
    ///
    pub const DirtyStates = dirtyStates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#dirtyStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__RenderState `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgmaterialshader_enums.DirtyState `
    ///
    pub fn dirtyStates(self: QSGMaterialShader__RenderState) i32 {
        return qtc.QSGMaterialShader__RenderState_DirtyStates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMatrixDirty` instead
    ///
    pub const IsMatrixDirty = isMatrixDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#isMatrixDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__RenderState `
    ///
    pub fn isMatrixDirty(self: QSGMaterialShader__RenderState) bool {
        return qtc.QSGMaterialShader__RenderState_IsMatrixDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isOpacityDirty` instead
    ///
    pub const IsOpacityDirty = isOpacityDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#isOpacityDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__RenderState `
    ///
    pub fn isOpacityDirty(self: QSGMaterialShader__RenderState) bool {
        return qtc.QSGMaterialShader__RenderState_IsOpacityDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__RenderState `
    ///
    pub fn opacity(self: QSGMaterialShader__RenderState) f32 {
        return qtc.QSGMaterialShader__RenderState_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `combinedMatrix` instead
    ///
    pub const CombinedMatrix = combinedMatrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#combinedMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__RenderState `
    ///
    pub fn combinedMatrix(self: QSGMaterialShader__RenderState) QMatrix4x4 {
        return .{ .ptr = qtc.QSGMaterialShader__RenderState_CombinedMatrix(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `combinedMatrix2` instead
    ///
    pub const CombinedMatrix2 = combinedMatrix2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#combinedMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__RenderState `
    ///
    /// ` index: isize `
    ///
    pub fn combinedMatrix2(self: QSGMaterialShader__RenderState, index: isize) QMatrix4x4 {
        return .{ .ptr = qtc.QSGMaterialShader__RenderState_CombinedMatrix2(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `modelViewMatrix` instead
    ///
    pub const ModelViewMatrix = modelViewMatrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#modelViewMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__RenderState `
    ///
    pub fn modelViewMatrix(self: QSGMaterialShader__RenderState) QMatrix4x4 {
        return .{ .ptr = qtc.QSGMaterialShader__RenderState_ModelViewMatrix(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `projectionMatrix` instead
    ///
    pub const ProjectionMatrix = projectionMatrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#projectionMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__RenderState `
    ///
    pub fn projectionMatrix(self: QSGMaterialShader__RenderState) QMatrix4x4 {
        return .{ .ptr = qtc.QSGMaterialShader__RenderState_ProjectionMatrix(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `projectionMatrix2` instead
    ///
    pub const ProjectionMatrix2 = projectionMatrix2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#projectionMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__RenderState `
    ///
    /// ` index: isize `
    ///
    pub fn projectionMatrix2(self: QSGMaterialShader__RenderState, index: isize) QMatrix4x4 {
        return .{ .ptr = qtc.QSGMaterialShader__RenderState_ProjectionMatrix2(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `projectionMatrixCount` instead
    ///
    pub const ProjectionMatrixCount = projectionMatrixCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#projectionMatrixCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__RenderState `
    ///
    pub fn projectionMatrixCount(self: QSGMaterialShader__RenderState) isize {
        return qtc.QSGMaterialShader__RenderState_ProjectionMatrixCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `viewportRect` instead
    ///
    pub const ViewportRect = viewportRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#viewportRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__RenderState `
    ///
    pub fn viewportRect(self: QSGMaterialShader__RenderState) QRect {
        return .{ .ptr = qtc.QSGMaterialShader__RenderState_ViewportRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceRect` instead
    ///
    pub const DeviceRect = deviceRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#deviceRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__RenderState `
    ///
    pub fn deviceRect(self: QSGMaterialShader__RenderState) QRect {
        return .{ .ptr = qtc.QSGMaterialShader__RenderState_DeviceRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `determinant` instead
    ///
    pub const Determinant = determinant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#determinant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__RenderState `
    ///
    pub fn determinant(self: QSGMaterialShader__RenderState) f32 {
        return qtc.QSGMaterialShader__RenderState_Determinant(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__RenderState `
    ///
    pub fn devicePixelRatio(self: QSGMaterialShader__RenderState) f32 {
        return qtc.QSGMaterialShader__RenderState_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `uniformData` instead
    ///
    pub const UniformData = uniformData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#uniformData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__RenderState `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniformData(self: QSGMaterialShader__RenderState, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSGMaterialShader__RenderState_UniformData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSGMaterialShader__RenderState.uniformData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGMaterialShader__RenderState `
    ///
    pub fn delete(self: QSGMaterialShader__RenderState) void {
        qtc.QSGMaterialShader__RenderState_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html)
pub const QSGMaterialShader__GraphicsPipelineState = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGMaterialShader__GraphicsPipelineState,

    pub const _is_QSGMaterialShader__GraphicsPipelineState = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGMaterialShader::GraphicsPipelineState object in C++ memory
    ///
    pub fn new() QSGMaterialShader__GraphicsPipelineState {
        return .{ .ptr = qtc.QSGMaterialShader__GraphicsPipelineState_new() };
    }

    /// ### DEPRECATED: Use `blendEnable` instead
    ///
    pub const BlendEnable = blendEnable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#blendEnable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    pub fn blendEnable(self: QSGMaterialShader__GraphicsPipelineState) bool {
        return qtc.QSGMaterialShader__GraphicsPipelineState_BlendEnable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBlendEnable` instead
    ///
    pub const SetBlendEnable = setBlendEnable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#blendEnable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ` _blendEnable: bool `
    ///
    pub fn setBlendEnable(self: QSGMaterialShader__GraphicsPipelineState, _blendEnable: bool) void {
        qtc.QSGMaterialShader__GraphicsPipelineState_SetBlendEnable(@ptrCast(self.ptr), _blendEnable);
    }

    /// ### DEPRECATED: Use `srcColor` instead
    ///
    pub const SrcColor = srcColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#srcColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ## Returns:
    ///
    /// ` qsgmaterialshader_enums.BlendFactor `
    ///
    pub fn srcColor(self: QSGMaterialShader__GraphicsPipelineState) i32 {
        return qtc.QSGMaterialShader__GraphicsPipelineState_SrcColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSrcColor` instead
    ///
    pub const SetSrcColor = setSrcColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#srcColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ` _srcColor: qsgmaterialshader_enums.BlendFactor `
    ///
    pub fn setSrcColor(self: QSGMaterialShader__GraphicsPipelineState, _srcColor: i32) void {
        qtc.QSGMaterialShader__GraphicsPipelineState_SetSrcColor(@ptrCast(self.ptr), @bitCast(_srcColor));
    }

    /// ### DEPRECATED: Use `dstColor` instead
    ///
    pub const DstColor = dstColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#dstColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ## Returns:
    ///
    /// ` qsgmaterialshader_enums.BlendFactor `
    ///
    pub fn dstColor(self: QSGMaterialShader__GraphicsPipelineState) i32 {
        return qtc.QSGMaterialShader__GraphicsPipelineState_DstColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDstColor` instead
    ///
    pub const SetDstColor = setDstColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#dstColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ` _dstColor: qsgmaterialshader_enums.BlendFactor `
    ///
    pub fn setDstColor(self: QSGMaterialShader__GraphicsPipelineState, _dstColor: i32) void {
        qtc.QSGMaterialShader__GraphicsPipelineState_SetDstColor(@ptrCast(self.ptr), @bitCast(_dstColor));
    }

    /// ### DEPRECATED: Use `colorWrite` instead
    ///
    pub const ColorWrite = colorWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#colorWrite-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgmaterialshader_enums.ColorMaskComponent `
    ///
    pub fn colorWrite(self: QSGMaterialShader__GraphicsPipelineState) i32 {
        return qtc.QSGMaterialShader__GraphicsPipelineState_ColorWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorWrite` instead
    ///
    pub const SetColorWrite = setColorWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#colorWrite-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ` _colorWrite: flag of qsgmaterialshader_enums.ColorMaskComponent `
    ///
    pub fn setColorWrite(self: QSGMaterialShader__GraphicsPipelineState, _colorWrite: i32) void {
        qtc.QSGMaterialShader__GraphicsPipelineState_SetColorWrite(@ptrCast(self.ptr), @bitCast(_colorWrite));
    }

    /// ### DEPRECATED: Use `blendConstant` instead
    ///
    pub const BlendConstant = blendConstant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#blendConstant-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    pub fn blendConstant(self: QSGMaterialShader__GraphicsPipelineState) QColor {
        return .{ .ptr = qtc.QSGMaterialShader__GraphicsPipelineState_BlendConstant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBlendConstant` instead
    ///
    pub const SetBlendConstant = setBlendConstant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#blendConstant-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ` _blendConstant: QColor `
    ///
    pub fn setBlendConstant(self: QSGMaterialShader__GraphicsPipelineState, _blendConstant: anytype) void {
        comptime _ = @TypeOf(_blendConstant)._is_QColor;
        qtc.QSGMaterialShader__GraphicsPipelineState_SetBlendConstant(@ptrCast(self.ptr), @ptrCast(_blendConstant.ptr));
    }

    /// ### DEPRECATED: Use `cullMode` instead
    ///
    pub const CullMode = cullMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#cullMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ## Returns:
    ///
    /// ` qsgmaterialshader_enums.CullMode `
    ///
    pub fn cullMode(self: QSGMaterialShader__GraphicsPipelineState) i32 {
        return qtc.QSGMaterialShader__GraphicsPipelineState_CullMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCullMode` instead
    ///
    pub const SetCullMode = setCullMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#cullMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ` _cullMode: qsgmaterialshader_enums.CullMode `
    ///
    pub fn setCullMode(self: QSGMaterialShader__GraphicsPipelineState, _cullMode: i32) void {
        qtc.QSGMaterialShader__GraphicsPipelineState_SetCullMode(@ptrCast(self.ptr), @bitCast(_cullMode));
    }

    /// ### DEPRECATED: Use `polygonMode` instead
    ///
    pub const PolygonMode = polygonMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#polygonMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ## Returns:
    ///
    /// ` qsgmaterialshader_enums.PolygonMode `
    ///
    pub fn polygonMode(self: QSGMaterialShader__GraphicsPipelineState) i32 {
        return qtc.QSGMaterialShader__GraphicsPipelineState_PolygonMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPolygonMode` instead
    ///
    pub const SetPolygonMode = setPolygonMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#polygonMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ` _polygonMode: qsgmaterialshader_enums.PolygonMode `
    ///
    pub fn setPolygonMode(self: QSGMaterialShader__GraphicsPipelineState, _polygonMode: i32) void {
        qtc.QSGMaterialShader__GraphicsPipelineState_SetPolygonMode(@ptrCast(self.ptr), @bitCast(_polygonMode));
    }

    /// ### DEPRECATED: Use `separateBlendFactors` instead
    ///
    pub const SeparateBlendFactors = separateBlendFactors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#separateBlendFactors-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    pub fn separateBlendFactors(self: QSGMaterialShader__GraphicsPipelineState) bool {
        return qtc.QSGMaterialShader__GraphicsPipelineState_SeparateBlendFactors(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSeparateBlendFactors` instead
    ///
    pub const SetSeparateBlendFactors = setSeparateBlendFactors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#separateBlendFactors-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ` _separateBlendFactors: bool `
    ///
    pub fn setSeparateBlendFactors(self: QSGMaterialShader__GraphicsPipelineState, _separateBlendFactors: bool) void {
        qtc.QSGMaterialShader__GraphicsPipelineState_SetSeparateBlendFactors(@ptrCast(self.ptr), _separateBlendFactors);
    }

    /// ### DEPRECATED: Use `srcAlpha` instead
    ///
    pub const SrcAlpha = srcAlpha;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#srcAlpha-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ## Returns:
    ///
    /// ` qsgmaterialshader_enums.BlendFactor `
    ///
    pub fn srcAlpha(self: QSGMaterialShader__GraphicsPipelineState) i32 {
        return qtc.QSGMaterialShader__GraphicsPipelineState_SrcAlpha(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSrcAlpha` instead
    ///
    pub const SetSrcAlpha = setSrcAlpha;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#srcAlpha-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ` _srcAlpha: qsgmaterialshader_enums.BlendFactor `
    ///
    pub fn setSrcAlpha(self: QSGMaterialShader__GraphicsPipelineState, _srcAlpha: i32) void {
        qtc.QSGMaterialShader__GraphicsPipelineState_SetSrcAlpha(@ptrCast(self.ptr), @bitCast(_srcAlpha));
    }

    /// ### DEPRECATED: Use `dstAlpha` instead
    ///
    pub const DstAlpha = dstAlpha;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#dstAlpha-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ## Returns:
    ///
    /// ` qsgmaterialshader_enums.BlendFactor `
    ///
    pub fn dstAlpha(self: QSGMaterialShader__GraphicsPipelineState) i32 {
        return qtc.QSGMaterialShader__GraphicsPipelineState_DstAlpha(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDstAlpha` instead
    ///
    pub const SetDstAlpha = setDstAlpha;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#dstAlpha-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ` _dstAlpha: qsgmaterialshader_enums.BlendFactor `
    ///
    pub fn setDstAlpha(self: QSGMaterialShader__GraphicsPipelineState, _dstAlpha: i32) void {
        qtc.QSGMaterialShader__GraphicsPipelineState_SetDstAlpha(@ptrCast(self.ptr), @bitCast(_dstAlpha));
    }

    /// ### DEPRECATED: Use `opColor` instead
    ///
    pub const OpColor = opColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#opColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ## Returns:
    ///
    /// ` qsgmaterialshader_enums.BlendOp `
    ///
    pub fn opColor(self: QSGMaterialShader__GraphicsPipelineState) i32 {
        return qtc.QSGMaterialShader__GraphicsPipelineState_OpColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpColor` instead
    ///
    pub const SetOpColor = setOpColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#opColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ` _opColor: qsgmaterialshader_enums.BlendOp `
    ///
    pub fn setOpColor(self: QSGMaterialShader__GraphicsPipelineState, _opColor: i32) void {
        qtc.QSGMaterialShader__GraphicsPipelineState_SetOpColor(@ptrCast(self.ptr), @bitCast(_opColor));
    }

    /// ### DEPRECATED: Use `opAlpha` instead
    ///
    pub const OpAlpha = opAlpha;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#opAlpha-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ## Returns:
    ///
    /// ` qsgmaterialshader_enums.BlendOp `
    ///
    pub fn opAlpha(self: QSGMaterialShader__GraphicsPipelineState) i32 {
        return qtc.QSGMaterialShader__GraphicsPipelineState_OpAlpha(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpAlpha` instead
    ///
    pub const SetOpAlpha = setOpAlpha;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#opAlpha-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    /// ` _opAlpha: qsgmaterialshader_enums.BlendOp `
    ///
    pub fn setOpAlpha(self: QSGMaterialShader__GraphicsPipelineState, _opAlpha: i32) void {
        qtc.QSGMaterialShader__GraphicsPipelineState_SetOpAlpha(@ptrCast(self.ptr), @bitCast(_opAlpha));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGMaterialShader__GraphicsPipelineState `
    ///
    pub fn delete(self: QSGMaterialShader__GraphicsPipelineState) void {
        qtc.QSGMaterialShader__GraphicsPipelineState_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#public-types)
pub const enums = struct {
    pub const Flag = enum {
        pub const UpdatesGraphicsPipelineState: i32 = 1;
    };

    pub const Stage = enum {
        pub const VertexStage: i32 = 0;
        pub const FragmentStage: i32 = 1;
    };

    pub const DirtyState = enum {
        pub const DirtyMatrix: i32 = 1;
        pub const DirtyOpacity: i32 = 2;
        pub const DirtyCachedMaterialData: i32 = 4;
        pub const DirtyAll: i32 = 65535;
    };

    pub const BlendFactor = enum {
        pub const Zero: i32 = 0;
        pub const One: i32 = 1;
        pub const SrcColor: i32 = 2;
        pub const OneMinusSrcColor: i32 = 3;
        pub const DstColor: i32 = 4;
        pub const OneMinusDstColor: i32 = 5;
        pub const SrcAlpha: i32 = 6;
        pub const OneMinusSrcAlpha: i32 = 7;
        pub const DstAlpha: i32 = 8;
        pub const OneMinusDstAlpha: i32 = 9;
        pub const ConstantColor: i32 = 10;
        pub const OneMinusConstantColor: i32 = 11;
        pub const ConstantAlpha: i32 = 12;
        pub const OneMinusConstantAlpha: i32 = 13;
        pub const SrcAlphaSaturate: i32 = 14;
        pub const Src1Color: i32 = 15;
        pub const OneMinusSrc1Color: i32 = 16;
        pub const Src1Alpha: i32 = 17;
        pub const OneMinusSrc1Alpha: i32 = 18;
    };

    pub const BlendOp = enum {
        pub const Add: i32 = 0;
        pub const Subtract: i32 = 1;
        pub const ReverseSubtract: i32 = 2;
        pub const Min: i32 = 3;
        pub const Max: i32 = 4;
    };

    pub const ColorMaskComponent = enum {
        pub const R: i32 = 1;
        pub const G: i32 = 2;
        pub const B: i32 = 4;
        pub const A: i32 = 8;
    };

    pub const CullMode = enum {
        pub const CullNone: i32 = 0;
        pub const CullFront: i32 = 1;
        pub const CullBack: i32 = 2;
    };

    pub const PolygonMode = enum {
        pub const Fill: i32 = 0;
        pub const Line: i32 = 1;
    };
};
