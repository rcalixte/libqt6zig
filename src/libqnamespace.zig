const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = enums;

/// https://doc.qt.io/qt-6/disambiguated_t.html
pub const disambiguated_t = struct {
    /// New constructs a new Qt::Disambiguated_t object.
    ///
    /// ``` other: QtC.Disambiguated_t ```
    pub fn New(other: ?*anyopaque) QtC.Disambiguated_t {
        return qtc.Disambiguated_t_new(@ptrCast(other));
    }

    /// New2 constructs a new Qt::Disambiguated_t object and invalidates the source Qt::Disambiguated_t object.
    ///
    /// ``` other: QtC.Disambiguated_t ```
    pub fn New2(other: ?*anyopaque) QtC.Disambiguated_t {
        return qtc.Disambiguated_t_new2(@ptrCast(other));
    }

    /// New3 constructs a new Qt::Disambiguated_t object.
    ///
    ///
    pub fn New3() QtC.Disambiguated_t {
        return qtc.Disambiguated_t_new3();
    }

    /// New4 constructs a new Qt::Disambiguated_t object.
    ///
    /// ``` param1: QtC.Disambiguated_t ```
    pub fn New4(param1: ?*anyopaque) QtC.Disambiguated_t {
        return qtc.Disambiguated_t_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.Disambiguated_t, other: QtC.Disambiguated_t ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Disambiguated_t_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.Disambiguated_t, other: QtC.Disambiguated_t ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Disambiguated_t_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/disambiguated_t.html#dtor.Disambiguated_t)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Disambiguated_t ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Disambiguated_t_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qinternal.html
pub const qinternal = struct {
    /// New constructs a new QInternal object.
    ///
    /// ``` other: QtC.QInternal ```
    pub fn New(other: ?*anyopaque) QtC.QInternal {
        return qtc.QInternal_new(@ptrCast(other));
    }

    /// New2 constructs a new QInternal object and invalidates the source QInternal object.
    ///
    /// ``` other: QtC.QInternal ```
    pub fn New2(other: ?*anyopaque) QtC.QInternal {
        return qtc.QInternal_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QInternal, other: QtC.QInternal ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QInternal_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QInternal, other: QtC.QInternal ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QInternal_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinternal.html#activateCallbacks)
    ///
    /// ``` param1: qnamespace_enums.Callback, param2: ?*anyopaque ```
    pub fn ActivateCallbacks(param1: i64, param2: ?*anyopaque) bool {
        return qtc.QInternal_ActivateCallbacks(@intCast(param1), param2);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qinternal.html#dtor.QInternal)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QInternal ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QInternal_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qkeycombination.html
pub const qkeycombination = struct {
    /// New constructs a new QKeyCombination object.
    ///
    /// ``` other: QtC.QKeyCombination ```
    pub fn New(other: ?*anyopaque) QtC.QKeyCombination {
        return qtc.QKeyCombination_new(@ptrCast(other));
    }

    /// New2 constructs a new QKeyCombination object and invalidates the source QKeyCombination object.
    ///
    /// ``` other: QtC.QKeyCombination ```
    pub fn New2(other: ?*anyopaque) QtC.QKeyCombination {
        return qtc.QKeyCombination_new2(@ptrCast(other));
    }

    /// New3 constructs a new QKeyCombination object.
    ///
    ///
    pub fn New3() QtC.QKeyCombination {
        return qtc.QKeyCombination_new3();
    }

    /// New4 constructs a new QKeyCombination object.
    ///
    /// ``` modifiers: i32 ```
    pub fn New4(modifiers: i64) QtC.QKeyCombination {
        return qtc.QKeyCombination_new4(@intCast(modifiers));
    }

    /// New5 constructs a new QKeyCombination object.
    ///
    /// ``` modifiers: i32 ```
    pub fn New5(modifiers: i64) QtC.QKeyCombination {
        return qtc.QKeyCombination_new5(@intCast(modifiers));
    }

    /// New6 constructs a new QKeyCombination object.
    ///
    /// ``` param1: QtC.QKeyCombination ```
    pub fn New6(param1: ?*anyopaque) QtC.QKeyCombination {
        return qtc.QKeyCombination_new6(@ptrCast(param1));
    }

    /// New7 constructs a new QKeyCombination object.
    ///
    /// ``` key: qnamespace_enums.Key ```
    pub fn New7(key: i64) QtC.QKeyCombination {
        return qtc.QKeyCombination_new7(@intCast(key));
    }

    /// New8 constructs a new QKeyCombination object.
    ///
    /// ``` modifiers: i32, key: qnamespace_enums.Key ```
    pub fn New8(modifiers: i64, key: i64) QtC.QKeyCombination {
        return qtc.QKeyCombination_new8(@intCast(modifiers), @intCast(key));
    }

    /// New9 constructs a new QKeyCombination object.
    ///
    /// ``` modifiers: i32, key: qnamespace_enums.Key ```
    pub fn New9(modifiers: i64, key: i64) QtC.QKeyCombination {
        return qtc.QKeyCombination_new9(@intCast(modifiers), @intCast(key));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QKeyCombination, other: QtC.QKeyCombination ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QKeyCombination_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QKeyCombination, other: QtC.QKeyCombination ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QKeyCombination_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#keyboardModifiers)
    ///
    /// ``` self: QtC.QKeyCombination ```
    pub fn KeyboardModifiers(self: ?*anyopaque) i64 {
        return qtc.QKeyCombination_KeyboardModifiers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#key)
    ///
    /// ``` self: QtC.QKeyCombination ```
    pub fn Key(self: ?*anyopaque) i64 {
        return qtc.QKeyCombination_Key(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#fromCombined)
    ///
    /// ``` combined: i32 ```
    pub fn FromCombined(combined: i32) QtC.QKeyCombination {
        return qtc.QKeyCombination_FromCombined(@intCast(combined));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#toCombined)
    ///
    /// ``` self: QtC.QKeyCombination ```
    pub fn ToCombined(self: ?*anyopaque) i32 {
        return qtc.QKeyCombination_ToCombined(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#operator int)
    ///
    /// ``` self: QtC.QKeyCombination ```
    pub fn ToInt(self: ?*anyopaque) i32 {
        return qtc.QKeyCombination_ToInt(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#dtor.QKeyCombination)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QKeyCombination ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QKeyCombination_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qt.html#types
pub const enums = struct {
    pub const GlobalColor = enum {
        pub const Color0: i32 = 0;
        pub const Color1: i32 = 1;
        pub const Black: i32 = 2;
        pub const White: i32 = 3;
        pub const DarkGray: i32 = 4;
        pub const Gray: i32 = 5;
        pub const LightGray: i32 = 6;
        pub const Red: i32 = 7;
        pub const Green: i32 = 8;
        pub const Blue: i32 = 9;
        pub const Cyan: i32 = 10;
        pub const Magenta: i32 = 11;
        pub const Yellow: i32 = 12;
        pub const DarkRed: i32 = 13;
        pub const DarkGreen: i32 = 14;
        pub const DarkBlue: i32 = 15;
        pub const DarkCyan: i32 = 16;
        pub const DarkMagenta: i32 = 17;
        pub const DarkYellow: i32 = 18;
        pub const Transparent: i32 = 19;
    };

    pub const ColorScheme = enum {
        pub const Unknown: i32 = 0;
        pub const Light: i32 = 1;
        pub const Dark: i32 = 2;
    };

    pub const MouseButton = enum {
        pub const NoButton: i32 = 0;
        pub const LeftButton: i32 = 1;
        pub const RightButton: i32 = 2;
        pub const MiddleButton: i32 = 4;
        pub const BackButton: i32 = 8;
        pub const XButton1: i32 = 8;
        pub const ExtraButton1: i32 = 8;
        pub const ForwardButton: i32 = 16;
        pub const XButton2: i32 = 16;
        pub const ExtraButton2: i32 = 16;
        pub const TaskButton: i32 = 32;
        pub const ExtraButton3: i32 = 32;
        pub const ExtraButton4: i32 = 64;
        pub const ExtraButton5: i32 = 128;
        pub const ExtraButton6: i32 = 256;
        pub const ExtraButton7: i32 = 512;
        pub const ExtraButton8: i32 = 1024;
        pub const ExtraButton9: i32 = 2048;
        pub const ExtraButton10: i32 = 4096;
        pub const ExtraButton11: i32 = 8192;
        pub const ExtraButton12: i32 = 16384;
        pub const ExtraButton13: i32 = 32768;
        pub const ExtraButton14: i32 = 65536;
        pub const ExtraButton15: i32 = 131072;
        pub const ExtraButton16: i32 = 262144;
        pub const ExtraButton17: i32 = 524288;
        pub const ExtraButton18: i32 = 1048576;
        pub const ExtraButton19: i32 = 2097152;
        pub const ExtraButton20: i32 = 4194304;
        pub const ExtraButton21: i32 = 8388608;
        pub const ExtraButton22: i32 = 16777216;
        pub const ExtraButton23: i32 = 33554432;
        pub const ExtraButton24: i32 = 67108864;
        pub const AllButtons: i32 = 134217727;
        pub const MaxMouseButton: i32 = 67108864;
        pub const MouseButtonMask: i64 = 4294967295;
    };

    pub const Orientation = enum {
        pub const Horizontal: i32 = 1;
        pub const Vertical: i32 = 2;
    };

    pub const FocusPolicy = enum {
        pub const NoFocus: i32 = 0;
        pub const TabFocus: i32 = 1;
        pub const ClickFocus: i32 = 2;
        pub const StrongFocus: i32 = 11;
        pub const WheelFocus: i32 = 15;
    };

    pub const TabFocusBehavior = enum {
        pub const NoTabFocus: i32 = 0;
        pub const TabFocusTextControls: i32 = 1;
        pub const TabFocusListControls: i32 = 2;
        pub const TabFocusAllControls: i32 = 255;
    };

    pub const SortOrder = enum {
        pub const AscendingOrder: i32 = 0;
        pub const DescendingOrder: i32 = 1;
    };

    pub const SplitBehaviorFlags = enum {
        pub const KeepEmptyParts: i32 = 0;
        pub const SkipEmptyParts: i32 = 1;
    };

    pub const TileRule = enum {
        pub const StretchTile: i32 = 0;
        pub const RepeatTile: i32 = 1;
        pub const RoundTile: i32 = 2;
    };

    pub const AlignmentFlag = enum {
        pub const AlignLeft: i32 = 1;
        pub const AlignLeading: i32 = 1;
        pub const AlignRight: i32 = 2;
        pub const AlignTrailing: i32 = 2;
        pub const AlignHCenter: i32 = 4;
        pub const AlignJustify: i32 = 8;
        pub const AlignAbsolute: i32 = 16;
        pub const AlignHorizontal_Mask: i32 = 31;
        pub const AlignTop: i32 = 32;
        pub const AlignBottom: i32 = 64;
        pub const AlignVCenter: i32 = 128;
        pub const AlignBaseline: i32 = 256;
        pub const AlignVertical_Mask: i32 = 480;
        pub const AlignCenter: i32 = 132;
    };

    pub const TextFlag = enum {
        pub const TextSingleLine: i32 = 256;
        pub const TextDontClip: i32 = 512;
        pub const TextExpandTabs: i32 = 1024;
        pub const TextShowMnemonic: i32 = 2048;
        pub const TextWordWrap: i32 = 4096;
        pub const TextWrapAnywhere: i32 = 8192;
        pub const TextDontPrint: i32 = 16384;
        pub const TextIncludeTrailingSpaces: i32 = 134217728;
        pub const TextHideMnemonic: i32 = 32768;
        pub const TextJustificationForced: i32 = 65536;
        pub const TextForceLeftToRight: i32 = 131072;
        pub const TextForceRightToLeft: i32 = 262144;
        pub const TextLongestVariant: i32 = 524288;
    };

    pub const TextElideMode = enum {
        pub const ElideLeft: i32 = 0;
        pub const ElideRight: i32 = 1;
        pub const ElideMiddle: i32 = 2;
        pub const ElideNone: i32 = 3;
    };

    pub const WhiteSpaceMode = enum {
        pub const WhiteSpaceNormal: i32 = 0;
        pub const WhiteSpacePre: i32 = 1;
        pub const WhiteSpaceNoWrap: i32 = 2;
        pub const WhiteSpaceModeUndefined: i32 = -1;
    };

    pub const HitTestAccuracy = enum {
        pub const ExactHit: i32 = 0;
        pub const FuzzyHit: i32 = 1;
    };

    pub const WindowType = enum {
        pub const Widget: i32 = 0;
        pub const Window: i32 = 1;
        pub const Dialog: i32 = 3;
        pub const Sheet: i32 = 5;
        pub const Drawer: i32 = 7;
        pub const Popup: i32 = 9;
        pub const Tool: i32 = 11;
        pub const ToolTip: i32 = 13;
        pub const SplashScreen: i32 = 15;
        pub const Desktop: i32 = 17;
        pub const SubWindow: i32 = 18;
        pub const ForeignWindow: i32 = 33;
        pub const CoverWindow: i32 = 65;
        pub const WindowType_Mask: i32 = 255;
        pub const MSWindowsFixedSizeDialogHint: i32 = 256;
        pub const MSWindowsOwnDC: i32 = 512;
        pub const BypassWindowManagerHint: i32 = 1024;
        pub const X11BypassWindowManagerHint: i32 = 1024;
        pub const FramelessWindowHint: i32 = 2048;
        pub const WindowTitleHint: i32 = 4096;
        pub const WindowSystemMenuHint: i32 = 8192;
        pub const WindowMinimizeButtonHint: i32 = 16384;
        pub const WindowMaximizeButtonHint: i32 = 32768;
        pub const WindowMinMaxButtonsHint: i32 = 49152;
        pub const WindowContextHelpButtonHint: i32 = 65536;
        pub const WindowShadeButtonHint: i32 = 131072;
        pub const WindowStaysOnTopHint: i32 = 262144;
        pub const WindowTransparentForInput: i32 = 524288;
        pub const WindowOverridesSystemGestures: i32 = 1048576;
        pub const WindowDoesNotAcceptFocus: i32 = 2097152;
        pub const MaximizeUsingFullscreenGeometryHint: i32 = 4194304;
        pub const CustomizeWindowHint: i32 = 33554432;
        pub const WindowStaysOnBottomHint: i32 = 67108864;
        pub const WindowCloseButtonHint: i32 = 134217728;
        pub const MacWindowToolBarButtonHint: i32 = 268435456;
        pub const BypassGraphicsProxyWidget: i32 = 536870912;
        pub const NoDropShadowWindowHint: i32 = 1073741824;
        pub const WindowFullscreenButtonHint: i64 = 2147483648;
    };

    pub const WindowState = enum {
        pub const WindowNoState: i32 = 0;
        pub const WindowMinimized: i32 = 1;
        pub const WindowMaximized: i32 = 2;
        pub const WindowFullScreen: i32 = 4;
        pub const WindowActive: i32 = 8;
    };

    pub const ApplicationState = enum {
        pub const ApplicationSuspended: i32 = 0;
        pub const ApplicationHidden: i32 = 1;
        pub const ApplicationInactive: i32 = 2;
        pub const ApplicationActive: i32 = 4;
    };

    pub const ScreenOrientation = enum {
        pub const PrimaryOrientation: i32 = 0;
        pub const PortraitOrientation: i32 = 1;
        pub const LandscapeOrientation: i32 = 2;
        pub const InvertedPortraitOrientation: i32 = 4;
        pub const InvertedLandscapeOrientation: i32 = 8;
    };

    pub const WidgetAttribute = enum {
        pub const WA_Disabled: i32 = 0;
        pub const WA_UnderMouse: i32 = 1;
        pub const WA_MouseTracking: i32 = 2;
        pub const WA_OpaquePaintEvent: i32 = 4;
        pub const WA_StaticContents: i32 = 5;
        pub const WA_LaidOut: i32 = 7;
        pub const WA_PaintOnScreen: i32 = 8;
        pub const WA_NoSystemBackground: i32 = 9;
        pub const WA_UpdatesDisabled: i32 = 10;
        pub const WA_Mapped: i32 = 11;
        pub const WA_InputMethodEnabled: i32 = 14;
        pub const WA_WState_Visible: i32 = 15;
        pub const WA_WState_Hidden: i32 = 16;
        pub const WA_ForceDisabled: i32 = 32;
        pub const WA_KeyCompression: i32 = 33;
        pub const WA_PendingMoveEvent: i32 = 34;
        pub const WA_PendingResizeEvent: i32 = 35;
        pub const WA_SetPalette: i32 = 36;
        pub const WA_SetFont: i32 = 37;
        pub const WA_SetCursor: i32 = 38;
        pub const WA_NoChildEventsFromChildren: i32 = 39;
        pub const WA_WindowModified: i32 = 41;
        pub const WA_Resized: i32 = 42;
        pub const WA_Moved: i32 = 43;
        pub const WA_PendingUpdate: i32 = 44;
        pub const WA_InvalidSize: i32 = 45;
        pub const WA_CustomWhatsThis: i32 = 47;
        pub const WA_LayoutOnEntireRect: i32 = 48;
        pub const WA_OutsideWSRange: i32 = 49;
        pub const WA_GrabbedShortcut: i32 = 50;
        pub const WA_TransparentForMouseEvents: i32 = 51;
        pub const WA_PaintUnclipped: i32 = 52;
        pub const WA_SetWindowIcon: i32 = 53;
        pub const WA_NoMouseReplay: i32 = 54;
        pub const WA_DeleteOnClose: i32 = 55;
        pub const WA_RightToLeft: i32 = 56;
        pub const WA_SetLayoutDirection: i32 = 57;
        pub const WA_NoChildEventsForParent: i32 = 58;
        pub const WA_ForceUpdatesDisabled: i32 = 59;
        pub const WA_WState_Created: i32 = 60;
        pub const WA_WState_CompressKeys: i32 = 61;
        pub const WA_WState_InPaintEvent: i32 = 62;
        pub const WA_WState_Reparented: i32 = 63;
        pub const WA_WState_ConfigPending: i32 = 64;
        pub const WA_WState_Polished: i32 = 66;
        pub const WA_WState_OwnSizePolicy: i32 = 68;
        pub const WA_WState_ExplicitShowHide: i32 = 69;
        pub const WA_ShowModal: i32 = 70;
        pub const WA_MouseNoMask: i32 = 71;
        pub const WA_NoMousePropagation: i32 = 73;
        pub const WA_Hover: i32 = 74;
        pub const WA_InputMethodTransparent: i32 = 75;
        pub const WA_QuitOnClose: i32 = 76;
        pub const WA_KeyboardFocusChange: i32 = 77;
        pub const WA_AcceptDrops: i32 = 78;
        pub const WA_DropSiteRegistered: i32 = 79;
        pub const WA_WindowPropagation: i32 = 80;
        pub const WA_NoX11EventCompression: i32 = 81;
        pub const WA_TintedBackground: i32 = 82;
        pub const WA_X11OpenGLOverlay: i32 = 83;
        pub const WA_AlwaysShowToolTips: i32 = 84;
        pub const WA_MacOpaqueSizeGrip: i32 = 85;
        pub const WA_SetStyle: i32 = 86;
        pub const WA_SetLocale: i32 = 87;
        pub const WA_MacShowFocusRect: i32 = 88;
        pub const WA_MacNormalSize: i32 = 89;
        pub const WA_MacSmallSize: i32 = 90;
        pub const WA_MacMiniSize: i32 = 91;
        pub const WA_LayoutUsesWidgetRect: i32 = 92;
        pub const WA_StyledBackground: i32 = 93;
        pub const WA_CanHostQMdiSubWindowTitleBar: i32 = 95;
        pub const WA_MacAlwaysShowToolWindow: i32 = 96;
        pub const WA_StyleSheet: i32 = 97;
        pub const WA_ShowWithoutActivating: i32 = 98;
        pub const WA_X11BypassTransientForHint: i32 = 99;
        pub const WA_NativeWindow: i32 = 100;
        pub const WA_DontCreateNativeAncestors: i32 = 101;
        pub const WA_DontShowOnScreen: i32 = 103;
        pub const WA_X11NetWmWindowTypeDesktop: i32 = 104;
        pub const WA_X11NetWmWindowTypeDock: i32 = 105;
        pub const WA_X11NetWmWindowTypeToolBar: i32 = 106;
        pub const WA_X11NetWmWindowTypeMenu: i32 = 107;
        pub const WA_X11NetWmWindowTypeUtility: i32 = 108;
        pub const WA_X11NetWmWindowTypeSplash: i32 = 109;
        pub const WA_X11NetWmWindowTypeDialog: i32 = 110;
        pub const WA_X11NetWmWindowTypeDropDownMenu: i32 = 111;
        pub const WA_X11NetWmWindowTypePopupMenu: i32 = 112;
        pub const WA_X11NetWmWindowTypeToolTip: i32 = 113;
        pub const WA_X11NetWmWindowTypeNotification: i32 = 114;
        pub const WA_X11NetWmWindowTypeCombo: i32 = 115;
        pub const WA_X11NetWmWindowTypeDND: i32 = 116;
        pub const WA_SetWindowModality: i32 = 118;
        pub const WA_WState_WindowOpacitySet: i32 = 119;
        pub const WA_TranslucentBackground: i32 = 120;
        pub const WA_AcceptTouchEvents: i32 = 121;
        pub const WA_WState_AcceptedTouchBeginEvent: i32 = 122;
        pub const WA_TouchPadAcceptSingleTouchEvents: i32 = 123;
        pub const WA_X11DoNotAcceptFocus: i32 = 126;
        pub const WA_AlwaysStackOnTop: i32 = 128;
        pub const WA_TabletTracking: i32 = 129;
        pub const WA_ContentsMarginsRespectsSafeArea: i32 = 130;
        pub const WA_StyleSheetTarget: i32 = 131;
        pub const WA_AttributeCount: i32 = 132;
    };

    pub const ApplicationAttribute = enum {
        pub const AA_QtQuickUseDefaultSizePolicy: i32 = 1;
        pub const AA_DontShowIconsInMenus: i32 = 2;
        pub const AA_NativeWindows: i32 = 3;
        pub const AA_DontCreateNativeWidgetSiblings: i32 = 4;
        pub const AA_PluginApplication: i32 = 5;
        pub const AA_DontUseNativeMenuBar: i32 = 6;
        pub const AA_MacDontSwapCtrlAndMeta: i32 = 7;
        pub const AA_Use96Dpi: i32 = 8;
        pub const AA_DisableNativeVirtualKeyboard: i32 = 9;
        pub const AA_DontUseNativeMenuWindows: i32 = 10;
        pub const AA_SynthesizeTouchForUnhandledMouseEvents: i32 = 11;
        pub const AA_SynthesizeMouseForUnhandledTouchEvents: i32 = 12;
        pub const AA_UseHighDpiPixmaps: i32 = 13;
        pub const AA_ForceRasterWidgets: i32 = 14;
        pub const AA_UseDesktopOpenGL: i32 = 15;
        pub const AA_UseOpenGLES: i32 = 16;
        pub const AA_UseSoftwareOpenGL: i32 = 17;
        pub const AA_ShareOpenGLContexts: i32 = 18;
        pub const AA_SetPalette: i32 = 19;
        pub const AA_EnableHighDpiScaling: i32 = 20;
        pub const AA_DisableHighDpiScaling: i32 = 21;
        pub const AA_UseStyleSheetPropagationInWidgetStyles: i32 = 22;
        pub const AA_DontUseNativeDialogs: i32 = 23;
        pub const AA_SynthesizeMouseForUnhandledTabletEvents: i32 = 24;
        pub const AA_CompressHighFrequencyEvents: i32 = 25;
        pub const AA_DontCheckOpenGLContextThreadAffinity: i32 = 26;
        pub const AA_DisableShaderDiskCache: i32 = 27;
        pub const AA_DontShowShortcutsInContextMenus: i32 = 28;
        pub const AA_CompressTabletEvents: i32 = 29;
        pub const AA_DisableSessionManager: i32 = 31;
        pub const AA_AttributeCount: i32 = 32;
    };

    pub const ImageConversionFlag = enum {
        pub const ColorMode_Mask: i32 = 3;
        pub const AutoColor: i32 = 0;
        pub const ColorOnly: i32 = 3;
        pub const MonoOnly: i32 = 2;
        pub const AlphaDither_Mask: i32 = 12;
        pub const ThresholdAlphaDither: i32 = 0;
        pub const OrderedAlphaDither: i32 = 4;
        pub const DiffuseAlphaDither: i32 = 8;
        pub const NoAlpha: i32 = 12;
        pub const Dither_Mask: i32 = 48;
        pub const DiffuseDither: i32 = 0;
        pub const OrderedDither: i32 = 16;
        pub const ThresholdDither: i32 = 32;
        pub const DitherMode_Mask: i32 = 192;
        pub const AutoDither: i32 = 0;
        pub const PreferDither: i32 = 64;
        pub const AvoidDither: i32 = 128;
        pub const NoOpaqueDetection: i32 = 256;
        pub const NoFormatConversion: i32 = 512;
    };

    pub const BGMode = enum {
        pub const TransparentMode: i32 = 0;
        pub const OpaqueMode: i32 = 1;
    };

    pub const Key = enum {
        pub const Key_Space: i32 = 32;
        pub const Key_Any: i32 = 32;
        pub const Key_Exclam: i32 = 33;
        pub const Key_QuoteDbl: i32 = 34;
        pub const Key_NumberSign: i32 = 35;
        pub const Key_Dollar: i32 = 36;
        pub const Key_Percent: i32 = 37;
        pub const Key_Ampersand: i32 = 38;
        pub const Key_Apostrophe: i32 = 39;
        pub const Key_ParenLeft: i32 = 40;
        pub const Key_ParenRight: i32 = 41;
        pub const Key_Asterisk: i32 = 42;
        pub const Key_Plus: i32 = 43;
        pub const Key_Comma: i32 = 44;
        pub const Key_Minus: i32 = 45;
        pub const Key_Period: i32 = 46;
        pub const Key_Slash: i32 = 47;
        pub const Key_0: i32 = 48;
        pub const Key_1: i32 = 49;
        pub const Key_2: i32 = 50;
        pub const Key_3: i32 = 51;
        pub const Key_4: i32 = 52;
        pub const Key_5: i32 = 53;
        pub const Key_6: i32 = 54;
        pub const Key_7: i32 = 55;
        pub const Key_8: i32 = 56;
        pub const Key_9: i32 = 57;
        pub const Key_Colon: i32 = 58;
        pub const Key_Semicolon: i32 = 59;
        pub const Key_Less: i32 = 60;
        pub const Key_Equal: i32 = 61;
        pub const Key_Greater: i32 = 62;
        pub const Key_Question: i32 = 63;
        pub const Key_At: i32 = 64;
        pub const Key_A: i32 = 65;
        pub const Key_B: i32 = 66;
        pub const Key_C: i32 = 67;
        pub const Key_D: i32 = 68;
        pub const Key_E: i32 = 69;
        pub const Key_F: i32 = 70;
        pub const Key_G: i32 = 71;
        pub const Key_H: i32 = 72;
        pub const Key_I: i32 = 73;
        pub const Key_J: i32 = 74;
        pub const Key_K: i32 = 75;
        pub const Key_L: i32 = 76;
        pub const Key_M: i32 = 77;
        pub const Key_N: i32 = 78;
        pub const Key_O: i32 = 79;
        pub const Key_P: i32 = 80;
        pub const Key_Q: i32 = 81;
        pub const Key_R: i32 = 82;
        pub const Key_S: i32 = 83;
        pub const Key_T: i32 = 84;
        pub const Key_U: i32 = 85;
        pub const Key_V: i32 = 86;
        pub const Key_W: i32 = 87;
        pub const Key_X: i32 = 88;
        pub const Key_Y: i32 = 89;
        pub const Key_Z: i32 = 90;
        pub const Key_BracketLeft: i32 = 91;
        pub const Key_Backslash: i32 = 92;
        pub const Key_BracketRight: i32 = 93;
        pub const Key_AsciiCircum: i32 = 94;
        pub const Key_Underscore: i32 = 95;
        pub const Key_QuoteLeft: i32 = 96;
        pub const Key_BraceLeft: i32 = 123;
        pub const Key_Bar: i32 = 124;
        pub const Key_BraceRight: i32 = 125;
        pub const Key_AsciiTilde: i32 = 126;
        pub const Key_nobreakspace: i32 = 160;
        pub const Key_exclamdown: i32 = 161;
        pub const Key_cent: i32 = 162;
        pub const Key_sterling: i32 = 163;
        pub const Key_currency: i32 = 164;
        pub const Key_yen: i32 = 165;
        pub const Key_brokenbar: i32 = 166;
        pub const Key_section: i32 = 167;
        pub const Key_diaeresis: i32 = 168;
        pub const Key_copyright: i32 = 169;
        pub const Key_ordfeminine: i32 = 170;
        pub const Key_guillemotleft: i32 = 171;
        pub const Key_notsign: i32 = 172;
        pub const Key_hyphen: i32 = 173;
        pub const Key_registered: i32 = 174;
        pub const Key_macron: i32 = 175;
        pub const Key_degree: i32 = 176;
        pub const Key_plusminus: i32 = 177;
        pub const Key_twosuperior: i32 = 178;
        pub const Key_threesuperior: i32 = 179;
        pub const Key_acute: i32 = 180;
        pub const Key_micro: i32 = 181;
        pub const Key_mu: i32 = 181;
        pub const Key_paragraph: i32 = 182;
        pub const Key_periodcentered: i32 = 183;
        pub const Key_cedilla: i32 = 184;
        pub const Key_onesuperior: i32 = 185;
        pub const Key_masculine: i32 = 186;
        pub const Key_guillemotright: i32 = 187;
        pub const Key_onequarter: i32 = 188;
        pub const Key_onehalf: i32 = 189;
        pub const Key_threequarters: i32 = 190;
        pub const Key_questiondown: i32 = 191;
        pub const Key_Agrave: i32 = 192;
        pub const Key_Aacute: i32 = 193;
        pub const Key_Acircumflex: i32 = 194;
        pub const Key_Atilde: i32 = 195;
        pub const Key_Adiaeresis: i32 = 196;
        pub const Key_Aring: i32 = 197;
        pub const Key_AE: i32 = 198;
        pub const Key_Ccedilla: i32 = 199;
        pub const Key_Egrave: i32 = 200;
        pub const Key_Eacute: i32 = 201;
        pub const Key_Ecircumflex: i32 = 202;
        pub const Key_Ediaeresis: i32 = 203;
        pub const Key_Igrave: i32 = 204;
        pub const Key_Iacute: i32 = 205;
        pub const Key_Icircumflex: i32 = 206;
        pub const Key_Idiaeresis: i32 = 207;
        pub const Key_ETH: i32 = 208;
        pub const Key_Ntilde: i32 = 209;
        pub const Key_Ograve: i32 = 210;
        pub const Key_Oacute: i32 = 211;
        pub const Key_Ocircumflex: i32 = 212;
        pub const Key_Otilde: i32 = 213;
        pub const Key_Odiaeresis: i32 = 214;
        pub const Key_multiply: i32 = 215;
        pub const Key_Ooblique: i32 = 216;
        pub const Key_Ugrave: i32 = 217;
        pub const Key_Uacute: i32 = 218;
        pub const Key_Ucircumflex: i32 = 219;
        pub const Key_Udiaeresis: i32 = 220;
        pub const Key_Yacute: i32 = 221;
        pub const Key_THORN: i32 = 222;
        pub const Key_ssharp: i32 = 223;
        pub const Key_division: i32 = 247;
        pub const Key_ydiaeresis: i32 = 255;
        pub const Key_Escape: i32 = 16777216;
        pub const Key_Tab: i32 = 16777217;
        pub const Key_Backtab: i32 = 16777218;
        pub const Key_Backspace: i32 = 16777219;
        pub const Key_Return: i32 = 16777220;
        pub const Key_Enter: i32 = 16777221;
        pub const Key_Insert: i32 = 16777222;
        pub const Key_Delete: i32 = 16777223;
        pub const Key_Pause: i32 = 16777224;
        pub const Key_Print: i32 = 16777225;
        pub const Key_SysReq: i32 = 16777226;
        pub const Key_Clear: i32 = 16777227;
        pub const Key_Home: i32 = 16777232;
        pub const Key_End: i32 = 16777233;
        pub const Key_Left: i32 = 16777234;
        pub const Key_Up: i32 = 16777235;
        pub const Key_Right: i32 = 16777236;
        pub const Key_Down: i32 = 16777237;
        pub const Key_PageUp: i32 = 16777238;
        pub const Key_PageDown: i32 = 16777239;
        pub const Key_Shift: i32 = 16777248;
        pub const Key_Control: i32 = 16777249;
        pub const Key_Meta: i32 = 16777250;
        pub const Key_Alt: i32 = 16777251;
        pub const Key_CapsLock: i32 = 16777252;
        pub const Key_NumLock: i32 = 16777253;
        pub const Key_ScrollLock: i32 = 16777254;
        pub const Key_F1: i32 = 16777264;
        pub const Key_F2: i32 = 16777265;
        pub const Key_F3: i32 = 16777266;
        pub const Key_F4: i32 = 16777267;
        pub const Key_F5: i32 = 16777268;
        pub const Key_F6: i32 = 16777269;
        pub const Key_F7: i32 = 16777270;
        pub const Key_F8: i32 = 16777271;
        pub const Key_F9: i32 = 16777272;
        pub const Key_F10: i32 = 16777273;
        pub const Key_F11: i32 = 16777274;
        pub const Key_F12: i32 = 16777275;
        pub const Key_F13: i32 = 16777276;
        pub const Key_F14: i32 = 16777277;
        pub const Key_F15: i32 = 16777278;
        pub const Key_F16: i32 = 16777279;
        pub const Key_F17: i32 = 16777280;
        pub const Key_F18: i32 = 16777281;
        pub const Key_F19: i32 = 16777282;
        pub const Key_F20: i32 = 16777283;
        pub const Key_F21: i32 = 16777284;
        pub const Key_F22: i32 = 16777285;
        pub const Key_F23: i32 = 16777286;
        pub const Key_F24: i32 = 16777287;
        pub const Key_F25: i32 = 16777288;
        pub const Key_F26: i32 = 16777289;
        pub const Key_F27: i32 = 16777290;
        pub const Key_F28: i32 = 16777291;
        pub const Key_F29: i32 = 16777292;
        pub const Key_F30: i32 = 16777293;
        pub const Key_F31: i32 = 16777294;
        pub const Key_F32: i32 = 16777295;
        pub const Key_F33: i32 = 16777296;
        pub const Key_F34: i32 = 16777297;
        pub const Key_F35: i32 = 16777298;
        pub const Key_Super_L: i32 = 16777299;
        pub const Key_Super_R: i32 = 16777300;
        pub const Key_Menu: i32 = 16777301;
        pub const Key_Hyper_L: i32 = 16777302;
        pub const Key_Hyper_R: i32 = 16777303;
        pub const Key_Help: i32 = 16777304;
        pub const Key_Direction_L: i32 = 16777305;
        pub const Key_Direction_R: i32 = 16777312;
        pub const Key_AltGr: i32 = 16781571;
        pub const Key_Multi_key: i32 = 16781600;
        pub const Key_Codeinput: i32 = 16781623;
        pub const Key_SingleCandidate: i32 = 16781628;
        pub const Key_MultipleCandidate: i32 = 16781629;
        pub const Key_PreviousCandidate: i32 = 16781630;
        pub const Key_Mode_switch: i32 = 16781694;
        pub const Key_Kanji: i32 = 16781601;
        pub const Key_Muhenkan: i32 = 16781602;
        pub const Key_Henkan: i32 = 16781603;
        pub const Key_Romaji: i32 = 16781604;
        pub const Key_Hiragana: i32 = 16781605;
        pub const Key_Katakana: i32 = 16781606;
        pub const Key_Hiragana_Katakana: i32 = 16781607;
        pub const Key_Zenkaku: i32 = 16781608;
        pub const Key_Hankaku: i32 = 16781609;
        pub const Key_Zenkaku_Hankaku: i32 = 16781610;
        pub const Key_Touroku: i32 = 16781611;
        pub const Key_Massyo: i32 = 16781612;
        pub const Key_Kana_Lock: i32 = 16781613;
        pub const Key_Kana_Shift: i32 = 16781614;
        pub const Key_Eisu_Shift: i32 = 16781615;
        pub const Key_Eisu_toggle: i32 = 16781616;
        pub const Key_Hangul: i32 = 16781617;
        pub const Key_Hangul_Start: i32 = 16781618;
        pub const Key_Hangul_End: i32 = 16781619;
        pub const Key_Hangul_Hanja: i32 = 16781620;
        pub const Key_Hangul_Jamo: i32 = 16781621;
        pub const Key_Hangul_Romaja: i32 = 16781622;
        pub const Key_Hangul_Jeonja: i32 = 16781624;
        pub const Key_Hangul_Banja: i32 = 16781625;
        pub const Key_Hangul_PreHanja: i32 = 16781626;
        pub const Key_Hangul_PostHanja: i32 = 16781627;
        pub const Key_Hangul_Special: i32 = 16781631;
        pub const Key_Dead_Grave: i32 = 16781904;
        pub const Key_Dead_Acute: i32 = 16781905;
        pub const Key_Dead_Circumflex: i32 = 16781906;
        pub const Key_Dead_Tilde: i32 = 16781907;
        pub const Key_Dead_Macron: i32 = 16781908;
        pub const Key_Dead_Breve: i32 = 16781909;
        pub const Key_Dead_Abovedot: i32 = 16781910;
        pub const Key_Dead_Diaeresis: i32 = 16781911;
        pub const Key_Dead_Abovering: i32 = 16781912;
        pub const Key_Dead_Doubleacute: i32 = 16781913;
        pub const Key_Dead_Caron: i32 = 16781914;
        pub const Key_Dead_Cedilla: i32 = 16781915;
        pub const Key_Dead_Ogonek: i32 = 16781916;
        pub const Key_Dead_Iota: i32 = 16781917;
        pub const Key_Dead_Voiced_Sound: i32 = 16781918;
        pub const Key_Dead_Semivoiced_Sound: i32 = 16781919;
        pub const Key_Dead_Belowdot: i32 = 16781920;
        pub const Key_Dead_Hook: i32 = 16781921;
        pub const Key_Dead_Horn: i32 = 16781922;
        pub const Key_Dead_Stroke: i32 = 16781923;
        pub const Key_Dead_Abovecomma: i32 = 16781924;
        pub const Key_Dead_Abovereversedcomma: i32 = 16781925;
        pub const Key_Dead_Doublegrave: i32 = 16781926;
        pub const Key_Dead_Belowring: i32 = 16781927;
        pub const Key_Dead_Belowmacron: i32 = 16781928;
        pub const Key_Dead_Belowcircumflex: i32 = 16781929;
        pub const Key_Dead_Belowtilde: i32 = 16781930;
        pub const Key_Dead_Belowbreve: i32 = 16781931;
        pub const Key_Dead_Belowdiaeresis: i32 = 16781932;
        pub const Key_Dead_Invertedbreve: i32 = 16781933;
        pub const Key_Dead_Belowcomma: i32 = 16781934;
        pub const Key_Dead_Currency: i32 = 16781935;
        pub const Key_Dead_a: i32 = 16781952;
        pub const Key_Dead_A: i32 = 16781953;
        pub const Key_Dead_e: i32 = 16781954;
        pub const Key_Dead_E: i32 = 16781955;
        pub const Key_Dead_i: i32 = 16781956;
        pub const Key_Dead_I: i32 = 16781957;
        pub const Key_Dead_o: i32 = 16781958;
        pub const Key_Dead_O: i32 = 16781959;
        pub const Key_Dead_u: i32 = 16781960;
        pub const Key_Dead_U: i32 = 16781961;
        pub const Key_Dead_Small_Schwa: i32 = 16781962;
        pub const Key_Dead_Capital_Schwa: i32 = 16781963;
        pub const Key_Dead_Greek: i32 = 16781964;
        pub const Key_Dead_Lowline: i32 = 16781968;
        pub const Key_Dead_Aboveverticalline: i32 = 16781969;
        pub const Key_Dead_Belowverticalline: i32 = 16781970;
        pub const Key_Dead_Longsolidusoverlay: i32 = 16781971;
        pub const Key_Back: i32 = 16777313;
        pub const Key_Forward: i32 = 16777314;
        pub const Key_Stop: i32 = 16777315;
        pub const Key_Refresh: i32 = 16777316;
        pub const Key_VolumeDown: i32 = 16777328;
        pub const Key_VolumeMute: i32 = 16777329;
        pub const Key_VolumeUp: i32 = 16777330;
        pub const Key_BassBoost: i32 = 16777331;
        pub const Key_BassUp: i32 = 16777332;
        pub const Key_BassDown: i32 = 16777333;
        pub const Key_TrebleUp: i32 = 16777334;
        pub const Key_TrebleDown: i32 = 16777335;
        pub const Key_MediaPlay: i32 = 16777344;
        pub const Key_MediaStop: i32 = 16777345;
        pub const Key_MediaPrevious: i32 = 16777346;
        pub const Key_MediaNext: i32 = 16777347;
        pub const Key_MediaRecord: i32 = 16777348;
        pub const Key_MediaPause: i32 = 16777349;
        pub const Key_MediaTogglePlayPause: i32 = 16777350;
        pub const Key_HomePage: i32 = 16777360;
        pub const Key_Favorites: i32 = 16777361;
        pub const Key_Search: i32 = 16777362;
        pub const Key_Standby: i32 = 16777363;
        pub const Key_OpenUrl: i32 = 16777364;
        pub const Key_LaunchMail: i32 = 16777376;
        pub const Key_LaunchMedia: i32 = 16777377;
        pub const Key_Launch0: i32 = 16777378;
        pub const Key_Launch1: i32 = 16777379;
        pub const Key_Launch2: i32 = 16777380;
        pub const Key_Launch3: i32 = 16777381;
        pub const Key_Launch4: i32 = 16777382;
        pub const Key_Launch5: i32 = 16777383;
        pub const Key_Launch6: i32 = 16777384;
        pub const Key_Launch7: i32 = 16777385;
        pub const Key_Launch8: i32 = 16777386;
        pub const Key_Launch9: i32 = 16777387;
        pub const Key_LaunchA: i32 = 16777388;
        pub const Key_LaunchB: i32 = 16777389;
        pub const Key_LaunchC: i32 = 16777390;
        pub const Key_LaunchD: i32 = 16777391;
        pub const Key_LaunchE: i32 = 16777392;
        pub const Key_LaunchF: i32 = 16777393;
        pub const Key_MonBrightnessUp: i32 = 16777394;
        pub const Key_MonBrightnessDown: i32 = 16777395;
        pub const Key_KeyboardLightOnOff: i32 = 16777396;
        pub const Key_KeyboardBrightnessUp: i32 = 16777397;
        pub const Key_KeyboardBrightnessDown: i32 = 16777398;
        pub const Key_PowerOff: i32 = 16777399;
        pub const Key_WakeUp: i32 = 16777400;
        pub const Key_Eject: i32 = 16777401;
        pub const Key_ScreenSaver: i32 = 16777402;
        pub const Key_WWW: i32 = 16777403;
        pub const Key_Memo: i32 = 16777404;
        pub const Key_LightBulb: i32 = 16777405;
        pub const Key_Shop: i32 = 16777406;
        pub const Key_History: i32 = 16777407;
        pub const Key_AddFavorite: i32 = 16777408;
        pub const Key_HotLinks: i32 = 16777409;
        pub const Key_BrightnessAdjust: i32 = 16777410;
        pub const Key_Finance: i32 = 16777411;
        pub const Key_Community: i32 = 16777412;
        pub const Key_AudioRewind: i32 = 16777413;
        pub const Key_BackForward: i32 = 16777414;
        pub const Key_ApplicationLeft: i32 = 16777415;
        pub const Key_ApplicationRight: i32 = 16777416;
        pub const Key_Book: i32 = 16777417;
        pub const Key_CD: i32 = 16777418;
        pub const Key_Calculator: i32 = 16777419;
        pub const Key_ToDoList: i32 = 16777420;
        pub const Key_ClearGrab: i32 = 16777421;
        pub const Key_Close: i32 = 16777422;
        pub const Key_Copy: i32 = 16777423;
        pub const Key_Cut: i32 = 16777424;
        pub const Key_Display: i32 = 16777425;
        pub const Key_DOS: i32 = 16777426;
        pub const Key_Documents: i32 = 16777427;
        pub const Key_Excel: i32 = 16777428;
        pub const Key_Explorer: i32 = 16777429;
        pub const Key_Game: i32 = 16777430;
        pub const Key_Go: i32 = 16777431;
        pub const Key_iTouch: i32 = 16777432;
        pub const Key_LogOff: i32 = 16777433;
        pub const Key_Market: i32 = 16777434;
        pub const Key_Meeting: i32 = 16777435;
        pub const Key_MenuKB: i32 = 16777436;
        pub const Key_MenuPB: i32 = 16777437;
        pub const Key_MySites: i32 = 16777438;
        pub const Key_News: i32 = 16777439;
        pub const Key_OfficeHome: i32 = 16777440;
        pub const Key_Option: i32 = 16777441;
        pub const Key_Paste: i32 = 16777442;
        pub const Key_Phone: i32 = 16777443;
        pub const Key_Calendar: i32 = 16777444;
        pub const Key_Reply: i32 = 16777445;
        pub const Key_Reload: i32 = 16777446;
        pub const Key_RotateWindows: i32 = 16777447;
        pub const Key_RotationPB: i32 = 16777448;
        pub const Key_RotationKB: i32 = 16777449;
        pub const Key_Save: i32 = 16777450;
        pub const Key_Send: i32 = 16777451;
        pub const Key_Spell: i32 = 16777452;
        pub const Key_SplitScreen: i32 = 16777453;
        pub const Key_Support: i32 = 16777454;
        pub const Key_TaskPane: i32 = 16777455;
        pub const Key_Terminal: i32 = 16777456;
        pub const Key_Tools: i32 = 16777457;
        pub const Key_Travel: i32 = 16777458;
        pub const Key_Video: i32 = 16777459;
        pub const Key_Word: i32 = 16777460;
        pub const Key_Xfer: i32 = 16777461;
        pub const Key_ZoomIn: i32 = 16777462;
        pub const Key_ZoomOut: i32 = 16777463;
        pub const Key_Away: i32 = 16777464;
        pub const Key_Messenger: i32 = 16777465;
        pub const Key_WebCam: i32 = 16777466;
        pub const Key_MailForward: i32 = 16777467;
        pub const Key_Pictures: i32 = 16777468;
        pub const Key_Music: i32 = 16777469;
        pub const Key_Battery: i32 = 16777470;
        pub const Key_Bluetooth: i32 = 16777471;
        pub const Key_WLAN: i32 = 16777472;
        pub const Key_UWB: i32 = 16777473;
        pub const Key_AudioForward: i32 = 16777474;
        pub const Key_AudioRepeat: i32 = 16777475;
        pub const Key_AudioRandomPlay: i32 = 16777476;
        pub const Key_Subtitle: i32 = 16777477;
        pub const Key_AudioCycleTrack: i32 = 16777478;
        pub const Key_Time: i32 = 16777479;
        pub const Key_Hibernate: i32 = 16777480;
        pub const Key_View: i32 = 16777481;
        pub const Key_TopMenu: i32 = 16777482;
        pub const Key_PowerDown: i32 = 16777483;
        pub const Key_Suspend: i32 = 16777484;
        pub const Key_ContrastAdjust: i32 = 16777485;
        pub const Key_LaunchG: i32 = 16777486;
        pub const Key_LaunchH: i32 = 16777487;
        pub const Key_TouchpadToggle: i32 = 16777488;
        pub const Key_TouchpadOn: i32 = 16777489;
        pub const Key_TouchpadOff: i32 = 16777490;
        pub const Key_MicMute: i32 = 16777491;
        pub const Key_Red: i32 = 16777492;
        pub const Key_Green: i32 = 16777493;
        pub const Key_Yellow: i32 = 16777494;
        pub const Key_Blue: i32 = 16777495;
        pub const Key_ChannelUp: i32 = 16777496;
        pub const Key_ChannelDown: i32 = 16777497;
        pub const Key_Guide: i32 = 16777498;
        pub const Key_Info: i32 = 16777499;
        pub const Key_Settings: i32 = 16777500;
        pub const Key_MicVolumeUp: i32 = 16777501;
        pub const Key_MicVolumeDown: i32 = 16777502;
        pub const Key_New: i32 = 16777504;
        pub const Key_Open: i32 = 16777505;
        pub const Key_Find: i32 = 16777506;
        pub const Key_Undo: i32 = 16777507;
        pub const Key_Redo: i32 = 16777508;
        pub const Key_MediaLast: i32 = 16842751;
        pub const Key_Select: i32 = 16842752;
        pub const Key_Yes: i32 = 16842753;
        pub const Key_No: i32 = 16842754;
        pub const Key_Cancel: i32 = 16908289;
        pub const Key_Printer: i32 = 16908290;
        pub const Key_Execute: i32 = 16908291;
        pub const Key_Sleep: i32 = 16908292;
        pub const Key_Play: i32 = 16908293;
        pub const Key_Zoom: i32 = 16908294;
        pub const Key_Exit: i32 = 16908298;
        pub const Key_Context1: i32 = 17825792;
        pub const Key_Context2: i32 = 17825793;
        pub const Key_Context3: i32 = 17825794;
        pub const Key_Context4: i32 = 17825795;
        pub const Key_Call: i32 = 17825796;
        pub const Key_Hangup: i32 = 17825797;
        pub const Key_Flip: i32 = 17825798;
        pub const Key_ToggleCallHangup: i32 = 17825799;
        pub const Key_VoiceDial: i32 = 17825800;
        pub const Key_LastNumberRedial: i32 = 17825801;
        pub const Key_Camera: i32 = 17825824;
        pub const Key_CameraFocus: i32 = 17825825;
        pub const Key_unknown: i32 = 33554431;
    };

    pub const KeyboardModifier = enum {
        pub const NoModifier: i32 = 0;
        pub const ShiftModifier: i32 = 33554432;
        pub const ControlModifier: i32 = 67108864;
        pub const AltModifier: i32 = 134217728;
        pub const MetaModifier: i32 = 268435456;
        pub const KeypadModifier: i32 = 536870912;
        pub const GroupSwitchModifier: i32 = 1073741824;
        pub const KeyboardModifierMask: i64 = 4261412864;
    };

    pub const Modifier = enum {
        pub const META: i32 = 268435456;
        pub const SHIFT: i32 = 33554432;
        pub const CTRL: i32 = 67108864;
        pub const ALT: i32 = 134217728;
        pub const MODIFIER_MASK: i64 = 4261412864;
    };

    pub const ArrowType = enum {
        pub const NoArrow: i32 = 0;
        pub const UpArrow: i32 = 1;
        pub const DownArrow: i32 = 2;
        pub const LeftArrow: i32 = 3;
        pub const RightArrow: i32 = 4;
    };

    pub const PenStyle = enum {
        pub const NoPen: i32 = 0;
        pub const SolidLine: i32 = 1;
        pub const DashLine: i32 = 2;
        pub const DotLine: i32 = 3;
        pub const DashDotLine: i32 = 4;
        pub const DashDotDotLine: i32 = 5;
        pub const CustomDashLine: i32 = 6;
        pub const MPenStyle: i32 = 15;
    };

    pub const PenCapStyle = enum {
        pub const FlatCap: i32 = 0;
        pub const SquareCap: i32 = 16;
        pub const RoundCap: i32 = 32;
        pub const MPenCapStyle: i32 = 48;
    };

    pub const PenJoinStyle = enum {
        pub const MiterJoin: i32 = 0;
        pub const BevelJoin: i32 = 64;
        pub const RoundJoin: i32 = 128;
        pub const SvgMiterJoin: i32 = 256;
        pub const MPenJoinStyle: i32 = 448;
    };

    pub const BrushStyle = enum {
        pub const NoBrush: i32 = 0;
        pub const SolidPattern: i32 = 1;
        pub const Dense1Pattern: i32 = 2;
        pub const Dense2Pattern: i32 = 3;
        pub const Dense3Pattern: i32 = 4;
        pub const Dense4Pattern: i32 = 5;
        pub const Dense5Pattern: i32 = 6;
        pub const Dense6Pattern: i32 = 7;
        pub const Dense7Pattern: i32 = 8;
        pub const HorPattern: i32 = 9;
        pub const VerPattern: i32 = 10;
        pub const CrossPattern: i32 = 11;
        pub const BDiagPattern: i32 = 12;
        pub const FDiagPattern: i32 = 13;
        pub const DiagCrossPattern: i32 = 14;
        pub const LinearGradientPattern: i32 = 15;
        pub const RadialGradientPattern: i32 = 16;
        pub const ConicalGradientPattern: i32 = 17;
        pub const TexturePattern: i32 = 24;
    };

    pub const SizeMode = enum {
        pub const AbsoluteSize: i32 = 0;
        pub const RelativeSize: i32 = 1;
    };

    pub const UIEffect = enum {
        pub const UI_General: i32 = 0;
        pub const UI_AnimateMenu: i32 = 1;
        pub const UI_FadeMenu: i32 = 2;
        pub const UI_AnimateCombo: i32 = 3;
        pub const UI_AnimateTooltip: i32 = 4;
        pub const UI_FadeTooltip: i32 = 5;
        pub const UI_AnimateToolBox: i32 = 6;
    };

    pub const CursorShape = enum {
        pub const ArrowCursor: i32 = 0;
        pub const UpArrowCursor: i32 = 1;
        pub const CrossCursor: i32 = 2;
        pub const WaitCursor: i32 = 3;
        pub const IBeamCursor: i32 = 4;
        pub const SizeVerCursor: i32 = 5;
        pub const SizeHorCursor: i32 = 6;
        pub const SizeBDiagCursor: i32 = 7;
        pub const SizeFDiagCursor: i32 = 8;
        pub const SizeAllCursor: i32 = 9;
        pub const BlankCursor: i32 = 10;
        pub const SplitVCursor: i32 = 11;
        pub const SplitHCursor: i32 = 12;
        pub const PointingHandCursor: i32 = 13;
        pub const ForbiddenCursor: i32 = 14;
        pub const WhatsThisCursor: i32 = 15;
        pub const BusyCursor: i32 = 16;
        pub const OpenHandCursor: i32 = 17;
        pub const ClosedHandCursor: i32 = 18;
        pub const DragCopyCursor: i32 = 19;
        pub const DragMoveCursor: i32 = 20;
        pub const DragLinkCursor: i32 = 21;
        pub const LastCursor: i32 = 21;
        pub const BitmapCursor: i32 = 24;
        pub const CustomCursor: i32 = 25;
    };

    pub const TextFormat = enum {
        pub const PlainText: i32 = 0;
        pub const RichText: i32 = 1;
        pub const AutoText: i32 = 2;
        pub const MarkdownText: i32 = 3;
    };

    pub const AspectRatioMode = enum {
        pub const IgnoreAspectRatio: i32 = 0;
        pub const KeepAspectRatio: i32 = 1;
        pub const KeepAspectRatioByExpanding: i32 = 2;
    };

    pub const DockWidgetArea = enum {
        pub const LeftDockWidgetArea: i32 = 1;
        pub const RightDockWidgetArea: i32 = 2;
        pub const TopDockWidgetArea: i32 = 4;
        pub const BottomDockWidgetArea: i32 = 8;
        pub const DockWidgetArea_Mask: i32 = 15;
        pub const AllDockWidgetAreas: i32 = 15;
        pub const NoDockWidgetArea: i32 = 0;
    };

    pub const DockWidgetAreaSizes = enum {
        pub const NDockWidgetAreas: i32 = 4;
    };

    pub const ToolBarArea = enum {
        pub const LeftToolBarArea: i32 = 1;
        pub const RightToolBarArea: i32 = 2;
        pub const TopToolBarArea: i32 = 4;
        pub const BottomToolBarArea: i32 = 8;
        pub const ToolBarArea_Mask: i32 = 15;
        pub const AllToolBarAreas: i32 = 15;
        pub const NoToolBarArea: i32 = 0;
    };

    pub const ToolBarAreaSizes = enum {
        pub const NToolBarAreas: i32 = 4;
    };

    pub const DateFormat = enum {
        pub const TextDate: i32 = 0;
        pub const ISODate: i32 = 1;
        pub const RFC2822Date: i32 = 8;
        pub const ISODateWithMs: i32 = 9;
    };

    pub const TimeSpec = enum {
        pub const LocalTime: i32 = 0;
        pub const UTC: i32 = 1;
        pub const OffsetFromUTC: i32 = 2;
        pub const TimeZone: i32 = 3;
    };

    pub const DayOfWeek = enum {
        pub const Monday: i32 = 1;
        pub const Tuesday: i32 = 2;
        pub const Wednesday: i32 = 3;
        pub const Thursday: i32 = 4;
        pub const Friday: i32 = 5;
        pub const Saturday: i32 = 6;
        pub const Sunday: i32 = 7;
    };

    pub const ScrollBarPolicy = enum {
        pub const ScrollBarAsNeeded: i32 = 0;
        pub const ScrollBarAlwaysOff: i32 = 1;
        pub const ScrollBarAlwaysOn: i32 = 2;
    };

    pub const CaseSensitivity = enum {
        pub const CaseInsensitive: i32 = 0;
        pub const CaseSensitive: i32 = 1;
    };

    pub const Corner = enum {
        pub const TopLeftCorner: i32 = 0;
        pub const TopRightCorner: i32 = 1;
        pub const BottomLeftCorner: i32 = 2;
        pub const BottomRightCorner: i32 = 3;
    };

    pub const Edge = enum {
        pub const TopEdge: i32 = 1;
        pub const LeftEdge: i32 = 2;
        pub const RightEdge: i32 = 4;
        pub const BottomEdge: i32 = 8;
    };

    pub const ConnectionType = enum {
        pub const AutoConnection: i32 = 0;
        pub const DirectConnection: i32 = 1;
        pub const QueuedConnection: i32 = 2;
        pub const BlockingQueuedConnection: i32 = 3;
        pub const UniqueConnection: i32 = 128;
        pub const SingleShotConnection: i32 = 256;
    };

    pub const ShortcutContext = enum {
        pub const WidgetShortcut: i32 = 0;
        pub const WindowShortcut: i32 = 1;
        pub const ApplicationShortcut: i32 = 2;
        pub const WidgetWithChildrenShortcut: i32 = 3;
    };

    pub const FillRule = enum {
        pub const OddEvenFill: i32 = 0;
        pub const WindingFill: i32 = 1;
    };

    pub const MaskMode = enum {
        pub const MaskInColor: i32 = 0;
        pub const MaskOutColor: i32 = 1;
    };

    pub const ClipOperation = enum {
        pub const NoClip: i32 = 0;
        pub const ReplaceClip: i32 = 1;
        pub const IntersectClip: i32 = 2;
    };

    pub const ItemSelectionMode = enum {
        pub const ContainsItemShape: i32 = 0;
        pub const IntersectsItemShape: i32 = 1;
        pub const ContainsItemBoundingRect: i32 = 2;
        pub const IntersectsItemBoundingRect: i32 = 3;
    };

    pub const ItemSelectionOperation = enum {
        pub const ReplaceSelection: i32 = 0;
        pub const AddToSelection: i32 = 1;
    };

    pub const TransformationMode = enum {
        pub const FastTransformation: i32 = 0;
        pub const SmoothTransformation: i32 = 1;
    };

    pub const Axis = enum {
        pub const XAxis: i32 = 0;
        pub const YAxis: i32 = 1;
        pub const ZAxis: i32 = 2;
    };

    pub const FocusReason = enum {
        pub const MouseFocusReason: i32 = 0;
        pub const TabFocusReason: i32 = 1;
        pub const BacktabFocusReason: i32 = 2;
        pub const ActiveWindowFocusReason: i32 = 3;
        pub const PopupFocusReason: i32 = 4;
        pub const ShortcutFocusReason: i32 = 5;
        pub const MenuBarFocusReason: i32 = 6;
        pub const OtherFocusReason: i32 = 7;
        pub const NoFocusReason: i32 = 8;
    };

    pub const ContextMenuPolicy = enum {
        pub const NoContextMenu: i32 = 0;
        pub const DefaultContextMenu: i32 = 1;
        pub const ActionsContextMenu: i32 = 2;
        pub const CustomContextMenu: i32 = 3;
        pub const PreventContextMenu: i32 = 4;
    };

    pub const ContextMenuTrigger = enum {
        pub const Press: i32 = 0;
        pub const Release: i32 = 1;
    };

    pub const InputMethodQuery = enum {
        pub const ImEnabled: i32 = 1;
        pub const ImCursorRectangle: i32 = 2;
        pub const ImFont: i32 = 4;
        pub const ImCursorPosition: i32 = 8;
        pub const ImSurroundingText: i32 = 16;
        pub const ImCurrentSelection: i32 = 32;
        pub const ImMaximumTextLength: i32 = 64;
        pub const ImAnchorPosition: i32 = 128;
        pub const ImHints: i32 = 256;
        pub const ImPreferredLanguage: i32 = 512;
        pub const ImAbsolutePosition: i32 = 1024;
        pub const ImTextBeforeCursor: i32 = 2048;
        pub const ImTextAfterCursor: i32 = 4096;
        pub const ImEnterKeyType: i32 = 8192;
        pub const ImAnchorRectangle: i32 = 16384;
        pub const ImInputItemClipRectangle: i32 = 32768;
        pub const ImReadOnly: i32 = 65536;
        pub const ImPlatformData: i64 = 2147483648;
        pub const ImQueryInput: i32 = 16570;
        pub const ImQueryAll: i64 = 4294967295;
    };

    pub const InputMethodHint = enum {
        pub const ImhNone: i32 = 0;
        pub const ImhHiddenText: i32 = 1;
        pub const ImhSensitiveData: i32 = 2;
        pub const ImhNoAutoUppercase: i32 = 4;
        pub const ImhPreferNumbers: i32 = 8;
        pub const ImhPreferUppercase: i32 = 16;
        pub const ImhPreferLowercase: i32 = 32;
        pub const ImhNoPredictiveText: i32 = 64;
        pub const ImhDate: i32 = 128;
        pub const ImhTime: i32 = 256;
        pub const ImhPreferLatin: i32 = 512;
        pub const ImhMultiLine: i32 = 1024;
        pub const ImhNoEditMenu: i32 = 2048;
        pub const ImhNoTextHandles: i32 = 4096;
        pub const ImhDigitsOnly: i32 = 65536;
        pub const ImhFormattedNumbersOnly: i32 = 131072;
        pub const ImhUppercaseOnly: i32 = 262144;
        pub const ImhLowercaseOnly: i32 = 524288;
        pub const ImhDialableCharactersOnly: i32 = 1048576;
        pub const ImhEmailCharactersOnly: i32 = 2097152;
        pub const ImhUrlCharactersOnly: i32 = 4194304;
        pub const ImhLatinOnly: i32 = 8388608;
        pub const ImhExclusiveInputMask: i64 = 4294901760;
    };

    pub const EnterKeyType = enum {
        pub const EnterKeyDefault: i32 = 0;
        pub const EnterKeyReturn: i32 = 1;
        pub const EnterKeyDone: i32 = 2;
        pub const EnterKeyGo: i32 = 3;
        pub const EnterKeySend: i32 = 4;
        pub const EnterKeySearch: i32 = 5;
        pub const EnterKeyNext: i32 = 6;
        pub const EnterKeyPrevious: i32 = 7;
    };

    pub const ToolButtonStyle = enum {
        pub const ToolButtonIconOnly: i32 = 0;
        pub const ToolButtonTextOnly: i32 = 1;
        pub const ToolButtonTextBesideIcon: i32 = 2;
        pub const ToolButtonTextUnderIcon: i32 = 3;
        pub const ToolButtonFollowStyle: i32 = 4;
    };

    pub const LayoutDirection = enum {
        pub const LeftToRight: i32 = 0;
        pub const RightToLeft: i32 = 1;
        pub const LayoutDirectionAuto: i32 = 2;
    };

    pub const AnchorPoint = enum {
        pub const AnchorLeft: i32 = 0;
        pub const AnchorHorizontalCenter: i32 = 1;
        pub const AnchorRight: i32 = 2;
        pub const AnchorTop: i32 = 3;
        pub const AnchorVerticalCenter: i32 = 4;
        pub const AnchorBottom: i32 = 5;
    };

    pub const FindChildOption = enum {
        pub const FindDirectChildrenOnly: i32 = 0;
        pub const FindChildrenRecursively: i32 = 1;
    };

    pub const DropAction = enum {
        pub const CopyAction: i32 = 1;
        pub const MoveAction: i32 = 2;
        pub const LinkAction: i32 = 4;
        pub const ActionMask: i32 = 255;
        pub const TargetMoveAction: i32 = 32770;
        pub const IgnoreAction: i32 = 0;
    };

    pub const CheckState = enum {
        pub const Unchecked: i32 = 0;
        pub const PartiallyChecked: i32 = 1;
        pub const Checked: i32 = 2;
    };

    pub const ItemDataRole = enum {
        pub const DisplayRole: i32 = 0;
        pub const DecorationRole: i32 = 1;
        pub const EditRole: i32 = 2;
        pub const ToolTipRole: i32 = 3;
        pub const StatusTipRole: i32 = 4;
        pub const WhatsThisRole: i32 = 5;
        pub const FontRole: i32 = 6;
        pub const TextAlignmentRole: i32 = 7;
        pub const BackgroundRole: i32 = 8;
        pub const ForegroundRole: i32 = 9;
        pub const CheckStateRole: i32 = 10;
        pub const AccessibleTextRole: i32 = 11;
        pub const AccessibleDescriptionRole: i32 = 12;
        pub const SizeHintRole: i32 = 13;
        pub const InitialSortOrderRole: i32 = 14;
        pub const DisplayPropertyRole: i32 = 27;
        pub const DecorationPropertyRole: i32 = 28;
        pub const ToolTipPropertyRole: i32 = 29;
        pub const StatusTipPropertyRole: i32 = 30;
        pub const WhatsThisPropertyRole: i32 = 31;
        pub const UserRole: i32 = 256;
    };

    pub const ItemFlag = enum {
        pub const NoItemFlags: i32 = 0;
        pub const ItemIsSelectable: i32 = 1;
        pub const ItemIsEditable: i32 = 2;
        pub const ItemIsDragEnabled: i32 = 4;
        pub const ItemIsDropEnabled: i32 = 8;
        pub const ItemIsUserCheckable: i32 = 16;
        pub const ItemIsEnabled: i32 = 32;
        pub const ItemIsAutoTristate: i32 = 64;
        pub const ItemNeverHasChildren: i32 = 128;
        pub const ItemIsUserTristate: i32 = 256;
    };

    pub const MatchFlag = enum {
        pub const MatchExactly: i32 = 0;
        pub const MatchContains: i32 = 1;
        pub const MatchStartsWith: i32 = 2;
        pub const MatchEndsWith: i32 = 3;
        pub const MatchRegularExpression: i32 = 4;
        pub const MatchWildcard: i32 = 5;
        pub const MatchFixedString: i32 = 8;
        pub const MatchTypeMask: i32 = 15;
        pub const MatchCaseSensitive: i32 = 16;
        pub const MatchWrap: i32 = 32;
        pub const MatchRecursive: i32 = 64;
    };

    pub const WindowModality = enum {
        pub const NonModal: i32 = 0;
        pub const WindowModal: i32 = 1;
        pub const ApplicationModal: i32 = 2;
    };

    pub const TextInteractionFlag = enum {
        pub const NoTextInteraction: i32 = 0;
        pub const TextSelectableByMouse: i32 = 1;
        pub const TextSelectableByKeyboard: i32 = 2;
        pub const LinksAccessibleByMouse: i32 = 4;
        pub const LinksAccessibleByKeyboard: i32 = 8;
        pub const TextEditable: i32 = 16;
        pub const TextEditorInteraction: i32 = 19;
        pub const TextBrowserInteraction: i32 = 13;
    };

    pub const EventPriority = enum {
        pub const HighEventPriority: i32 = 1;
        pub const NormalEventPriority: i32 = 0;
        pub const LowEventPriority: i32 = -1;
    };

    pub const SizeHint = enum {
        pub const MinimumSize: i32 = 0;
        pub const PreferredSize: i32 = 1;
        pub const MaximumSize: i32 = 2;
        pub const MinimumDescent: i32 = 3;
        pub const NSizeHints: i32 = 4;
    };

    pub const WindowFrameSection = enum {
        pub const NoSection: i32 = 0;
        pub const LeftSection: i32 = 1;
        pub const TopLeftSection: i32 = 2;
        pub const TopSection: i32 = 3;
        pub const TopRightSection: i32 = 4;
        pub const RightSection: i32 = 5;
        pub const BottomRightSection: i32 = 6;
        pub const BottomSection: i32 = 7;
        pub const BottomLeftSection: i32 = 8;
        pub const TitleBarArea: i32 = 9;
    };

    pub const Initialization = enum {
        pub const Uninitialized: i32 = 0;
    };

    pub const CoordinateSystem = enum {
        pub const DeviceCoordinates: i32 = 0;
        pub const LogicalCoordinates: i32 = 1;
    };

    pub const TouchPointState = enum {
        pub const TouchPointUnknownState: i32 = 0;
        pub const TouchPointPressed: i32 = 1;
        pub const TouchPointMoved: i32 = 2;
        pub const TouchPointStationary: i32 = 4;
        pub const TouchPointReleased: i32 = 8;
    };

    pub const GestureState = enum {
        pub const NoGesture: i32 = 0;
        pub const GestureStarted: i32 = 1;
        pub const GestureUpdated: i32 = 2;
        pub const GestureFinished: i32 = 3;
        pub const GestureCanceled: i32 = 4;
    };

    pub const GestureType = enum {
        pub const TapGesture: i32 = 1;
        pub const TapAndHoldGesture: i32 = 2;
        pub const PanGesture: i32 = 3;
        pub const PinchGesture: i32 = 4;
        pub const SwipeGesture: i32 = 5;
        pub const CustomGesture: i32 = 256;
        pub const LastGestureType: i64 = 4294967295;
    };

    pub const GestureFlag = enum {
        pub const DontStartGestureOnChildren: i32 = 1;
        pub const ReceivePartialGestures: i32 = 2;
        pub const IgnoredGesturesPropagateToParent: i32 = 4;
    };

    pub const NativeGestureType = enum {
        pub const BeginNativeGesture: i32 = 0;
        pub const EndNativeGesture: i32 = 1;
        pub const PanNativeGesture: i32 = 2;
        pub const ZoomNativeGesture: i32 = 3;
        pub const SmartZoomNativeGesture: i32 = 4;
        pub const RotateNativeGesture: i32 = 5;
        pub const SwipeNativeGesture: i32 = 6;
    };

    pub const NavigationMode = enum {
        pub const NavigationModeNone: i32 = 0;
        pub const NavigationModeKeypadTabOrder: i32 = 1;
        pub const NavigationModeKeypadDirectional: i32 = 2;
        pub const NavigationModeCursorAuto: i32 = 3;
        pub const NavigationModeCursorForceVisible: i32 = 4;
    };

    pub const CursorMoveStyle = enum {
        pub const LogicalMoveStyle: i32 = 0;
        pub const VisualMoveStyle: i32 = 1;
    };

    pub const TimerType = enum {
        pub const PreciseTimer: i32 = 0;
        pub const CoarseTimer: i32 = 1;
        pub const VeryCoarseTimer: i32 = 2;
    };

    pub const TimerId = enum {
        pub const Invalid: i32 = 0;
    };

    pub const ScrollPhase = enum {
        pub const NoScrollPhase: i32 = 0;
        pub const ScrollBegin: i32 = 1;
        pub const ScrollUpdate: i32 = 2;
        pub const ScrollEnd: i32 = 3;
        pub const ScrollMomentum: i32 = 4;
    };

    pub const MouseEventSource = enum {
        pub const MouseEventNotSynthesized: i32 = 0;
        pub const MouseEventSynthesizedBySystem: i32 = 1;
        pub const MouseEventSynthesizedByQt: i32 = 2;
        pub const MouseEventSynthesizedByApplication: i32 = 3;
    };

    pub const MouseEventFlag = enum {
        pub const NoMouseEventFlag: i32 = 0;
        pub const MouseEventCreatedDoubleClick: i32 = 1;
        pub const MouseEventFlagMask: i32 = 255;
    };

    pub const ChecksumType = enum {
        pub const ChecksumIso3309: i32 = 0;
        pub const ChecksumItuV41: i32 = 1;
    };

    pub const HighDpiScaleFactorRoundingPolicy = enum {
        pub const Unset: i32 = 0;
        pub const Round: i32 = 1;
        pub const Ceil: i32 = 2;
        pub const Floor: i32 = 3;
        pub const RoundPreferFloor: i32 = 4;
        pub const PassThrough: i32 = 5;
    };

    pub const PermissionStatus = enum {
        pub const Undetermined: i32 = 0;
        pub const Granted: i32 = 1;
        pub const Denied: i32 = 2;
    };

    pub const ReturnByValueConstant = enum {
        pub const ReturnByValue: i32 = 0;
    };

    pub const PaintDeviceFlags = enum {
        pub const UnknownDevice: i32 = 0;
        pub const Widget: i32 = 1;
        pub const Pixmap: i32 = 2;
        pub const Image: i32 = 3;
        pub const Printer: i32 = 4;
        pub const Picture: i32 = 5;
        pub const Pbuffer: i32 = 6;
        pub const FramebufferObject: i32 = 7;
        pub const CustomRaster: i32 = 8;
        pub const PaintBuffer: i32 = 10;
        pub const OpenGL: i32 = 11;
    };

    pub const RelayoutType = enum {
        pub const RelayoutNormal: i32 = 0;
        pub const RelayoutDragging: i32 = 1;
        pub const RelayoutDropped: i32 = 2;
    };

    pub const DockPosition = enum {
        pub const LeftDock: i32 = 0;
        pub const RightDock: i32 = 1;
        pub const TopDock: i32 = 2;
        pub const BottomDock: i32 = 3;
        pub const DockCount: i32 = 4;
    };

    pub const Callback = enum {
        pub const EventNotifyCallback: i32 = 0;
        pub const LastCallback: i32 = 1;
    };
};
