const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qaccessible_base_enums = enums;
pub const struct_i32_i32 = struct { first: i32, second: i32 };

/// https://doc.qt.io/qt-6/qaccessible.html
pub const qaccessible = struct {
    /// New constructs a new QAccessible object.
    ///
    /// ``` other: QtC.QAccessible ```
    pub fn New(other: ?*anyopaque) QtC.QAccessible {
        return qtc.QAccessible_new(@ptrCast(other));
    }

    /// New2 constructs a new QAccessible object and invalidates the source QAccessible object.
    ///
    /// ``` other: QtC.QAccessible ```
    pub fn New2(other: ?*anyopaque) QtC.QAccessible {
        return qtc.QAccessible_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QAccessible, other: QtC.QAccessible ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAccessible_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QAccessible, other: QtC.QAccessible ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAccessible_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#installActivationObserver)
    ///
    /// ``` param1: QtC.QAccessible__ActivationObserver ```
    pub fn InstallActivationObserver(param1: ?*anyopaque) void {
        qtc.QAccessible_InstallActivationObserver(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#removeActivationObserver)
    ///
    /// ``` param1: QtC.QAccessible__ActivationObserver ```
    pub fn RemoveActivationObserver(param1: ?*anyopaque) void {
        qtc.QAccessible_RemoveActivationObserver(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#queryAccessibleInterface)
    ///
    /// ``` param1: QtC.QObject ```
    pub fn QueryAccessibleInterface(param1: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessible_QueryAccessibleInterface(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#uniqueId)
    ///
    /// ``` iface: QtC.QAccessibleInterface ```
    pub fn UniqueId(iface: ?*anyopaque) u32 {
        return qtc.QAccessible_UniqueId(@ptrCast(iface));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#accessibleInterface)
    ///
    /// ``` uniqueId: u32 ```
    pub fn AccessibleInterface(uniqueId: u32) QtC.QAccessibleInterface {
        return qtc.QAccessible_AccessibleInterface(@intCast(uniqueId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#registerAccessibleInterface)
    ///
    /// ``` iface: QtC.QAccessibleInterface ```
    pub fn RegisterAccessibleInterface(iface: ?*anyopaque) u32 {
        return qtc.QAccessible_RegisterAccessibleInterface(@ptrCast(iface));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#deleteAccessibleInterface)
    ///
    /// ``` uniqueId: u32 ```
    pub fn DeleteAccessibleInterface(uniqueId: u32) void {
        qtc.QAccessible_DeleteAccessibleInterface(@intCast(uniqueId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#updateAccessibility)
    ///
    /// ``` event: QtC.QAccessibleEvent ```
    pub fn UpdateAccessibility(event: ?*anyopaque) void {
        qtc.QAccessible_UpdateAccessibility(@ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#isActive)
    ///
    ///
    pub fn IsActive() bool {
        return qtc.QAccessible_IsActive();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#setActive)
    ///
    /// ``` active: bool ```
    pub fn SetActive(active: bool) void {
        qtc.QAccessible_SetActive(active);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#setRootObject)
    ///
    /// ``` object: QtC.QObject ```
    pub fn SetRootObject(object: ?*anyopaque) void {
        qtc.QAccessible_SetRootObject(@ptrCast(object));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#cleanup)
    ///
    ///
    pub fn Cleanup() void {
        qtc.QAccessible_Cleanup();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#qAccessibleTextBoundaryHelper)
    ///
    /// ``` cursor: QtC.QTextCursor, boundaryType: qaccessible_base_enums.TextBoundaryType ```
    pub fn QAccessibleTextBoundaryHelper(cursor: ?*anyopaque, boundaryType: i64) struct_i32_i32 {
        const _pair: qtc.struct_libqt_pair = qtc.QAccessible_QAccessibleTextBoundaryHelper(@ptrCast(cursor), @intCast(boundaryType));
        return struct_i32_i32{ .first = @intCast(@intFromPtr(_pair.first)), .second = @intCast(@intFromPtr(_pair.second)) };
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#dtor.QAccessible)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessible ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessible_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessible-state.html
pub const qaccessible__state = struct {
    /// New constructs a new QAccessible::State object.
    ///
    /// ``` other: QtC.QAccessible__State ```
    pub fn New(other: ?*anyopaque) QtC.QAccessible__State {
        return qtc.QAccessible__State_new(@ptrCast(other));
    }

    /// New2 constructs a new QAccessible::State object and invalidates the source QAccessible::State object.
    ///
    /// ``` other: QtC.QAccessible__State ```
    pub fn New2(other: ?*anyopaque) QtC.QAccessible__State {
        return qtc.QAccessible__State_new2(@ptrCast(other));
    }

    /// New3 constructs a new QAccessible::State object.
    ///
    ///
    pub fn New3() QtC.QAccessible__State {
        return qtc.QAccessible__State_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QAccessible__State, other: QtC.QAccessible__State ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAccessible__State_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QAccessible__State, other: QtC.QAccessible__State ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAccessible__State_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessible__State ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessible__State_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessible-activationobserver.html
pub const qaccessible__activationobserver = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessible__activationobserver.html#accessibilityActiveChanged)
    ///
    /// ``` self: QtC.QAccessible__ActivationObserver, active: bool ```
    pub fn AccessibilityActiveChanged(self: ?*anyopaque, active: bool) void {
        qtc.QAccessible__ActivationObserver_AccessibilityActiveChanged(@ptrCast(self), active);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessible__activationobserver.html#operator-eq)
    ///
    /// ``` self: QtC.QAccessible__ActivationObserver, param1: QtC.QAccessible__ActivationObserver ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessible__ActivationObserver_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessible__ActivationObserver ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessible__ActivationObserver_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessible_base.html#types
pub const enums = struct {
    pub const Event = enum {
        pub const SoundPlayed: i32 = 1;
        pub const Alert: i32 = 2;
        pub const ForegroundChanged: i32 = 3;
        pub const MenuStart: i32 = 4;
        pub const MenuEnd: i32 = 5;
        pub const PopupMenuStart: i32 = 6;
        pub const PopupMenuEnd: i32 = 7;
        pub const ContextHelpStart: i32 = 12;
        pub const ContextHelpEnd: i32 = 13;
        pub const DragDropStart: i32 = 14;
        pub const DragDropEnd: i32 = 15;
        pub const DialogStart: i32 = 16;
        pub const DialogEnd: i32 = 17;
        pub const ScrollingStart: i32 = 18;
        pub const ScrollingEnd: i32 = 19;
        pub const MenuCommand: i32 = 24;
        pub const ActionChanged: i32 = 257;
        pub const ActiveDescendantChanged: i32 = 258;
        pub const AttributeChanged: i32 = 259;
        pub const DocumentContentChanged: i32 = 260;
        pub const DocumentLoadComplete: i32 = 261;
        pub const DocumentLoadStopped: i32 = 262;
        pub const DocumentReload: i32 = 263;
        pub const HyperlinkEndIndexChanged: i32 = 264;
        pub const HyperlinkNumberOfAnchorsChanged: i32 = 265;
        pub const HyperlinkSelectedLinkChanged: i32 = 266;
        pub const HypertextLinkActivated: i32 = 267;
        pub const HypertextLinkSelected: i32 = 268;
        pub const HyperlinkStartIndexChanged: i32 = 269;
        pub const HypertextChanged: i32 = 270;
        pub const HypertextNLinksChanged: i32 = 271;
        pub const ObjectAttributeChanged: i32 = 272;
        pub const PageChanged: i32 = 273;
        pub const SectionChanged: i32 = 274;
        pub const TableCaptionChanged: i32 = 275;
        pub const TableColumnDescriptionChanged: i32 = 276;
        pub const TableColumnHeaderChanged: i32 = 277;
        pub const TableModelChanged: i32 = 278;
        pub const TableRowDescriptionChanged: i32 = 279;
        pub const TableRowHeaderChanged: i32 = 280;
        pub const TableSummaryChanged: i32 = 281;
        pub const TextAttributeChanged: i32 = 282;
        pub const TextCaretMoved: i32 = 283;
        pub const TextColumnChanged: i32 = 285;
        pub const TextInserted: i32 = 286;
        pub const TextRemoved: i32 = 287;
        pub const TextUpdated: i32 = 288;
        pub const TextSelectionChanged: i32 = 289;
        pub const VisibleDataChanged: i32 = 290;
        pub const ObjectCreated: i32 = 32768;
        pub const ObjectDestroyed: i32 = 32769;
        pub const ObjectShow: i32 = 32770;
        pub const ObjectHide: i32 = 32771;
        pub const ObjectReorder: i32 = 32772;
        pub const Focus: i32 = 32773;
        pub const Selection: i32 = 32774;
        pub const SelectionAdd: i32 = 32775;
        pub const SelectionRemove: i32 = 32776;
        pub const SelectionWithin: i32 = 32777;
        pub const StateChanged: i32 = 32778;
        pub const LocationChanged: i32 = 32779;
        pub const NameChanged: i32 = 32780;
        pub const DescriptionChanged: i32 = 32781;
        pub const ValueChanged: i32 = 32782;
        pub const ParentChanged: i32 = 32783;
        pub const HelpChanged: i32 = 32928;
        pub const DefaultActionChanged: i32 = 32944;
        pub const AcceleratorChanged: i32 = 32960;
        pub const Announcement: i32 = 32976;
        pub const IdentifierChanged: i32 = 32992;
        pub const InvalidEvent: i32 = 32961;
    };

    pub const Role = enum {
        pub const NoRole: i32 = 0;
        pub const TitleBar: i32 = 1;
        pub const MenuBar: i32 = 2;
        pub const ScrollBar: i32 = 3;
        pub const Grip: i32 = 4;
        pub const Sound: i32 = 5;
        pub const Cursor: i32 = 6;
        pub const Caret: i32 = 7;
        pub const AlertMessage: i32 = 8;
        pub const Window: i32 = 9;
        pub const Client: i32 = 10;
        pub const PopupMenu: i32 = 11;
        pub const MenuItem: i32 = 12;
        pub const ToolTip: i32 = 13;
        pub const Application: i32 = 14;
        pub const Document: i32 = 15;
        pub const Pane: i32 = 16;
        pub const Chart: i32 = 17;
        pub const Dialog: i32 = 18;
        pub const Border: i32 = 19;
        pub const Grouping: i32 = 20;
        pub const Separator: i32 = 21;
        pub const ToolBar: i32 = 22;
        pub const StatusBar: i32 = 23;
        pub const Table: i32 = 24;
        pub const ColumnHeader: i32 = 25;
        pub const RowHeader: i32 = 26;
        pub const Column: i32 = 27;
        pub const Row: i32 = 28;
        pub const Cell: i32 = 29;
        pub const Link: i32 = 30;
        pub const HelpBalloon: i32 = 31;
        pub const Assistant: i32 = 32;
        pub const List: i32 = 33;
        pub const ListItem: i32 = 34;
        pub const Tree: i32 = 35;
        pub const TreeItem: i32 = 36;
        pub const PageTab: i32 = 37;
        pub const PropertyPage: i32 = 38;
        pub const Indicator: i32 = 39;
        pub const Graphic: i32 = 40;
        pub const StaticText: i32 = 41;
        pub const EditableText: i32 = 42;
        pub const Button: i32 = 43;
        pub const PushButton: i32 = 43;
        pub const CheckBox: i32 = 44;
        pub const RadioButton: i32 = 45;
        pub const ComboBox: i32 = 46;
        pub const ProgressBar: i32 = 48;
        pub const Dial: i32 = 49;
        pub const HotkeyField: i32 = 50;
        pub const Slider: i32 = 51;
        pub const SpinBox: i32 = 52;
        pub const Canvas: i32 = 53;
        pub const Animation: i32 = 54;
        pub const Equation: i32 = 55;
        pub const ButtonDropDown: i32 = 56;
        pub const ButtonMenu: i32 = 57;
        pub const ButtonDropGrid: i32 = 58;
        pub const Whitespace: i32 = 59;
        pub const PageTabList: i32 = 60;
        pub const Clock: i32 = 61;
        pub const Splitter: i32 = 62;
        pub const LayeredPane: i32 = 128;
        pub const Terminal: i32 = 129;
        pub const Desktop: i32 = 130;
        pub const Paragraph: i32 = 131;
        pub const WebDocument: i32 = 132;
        pub const Section: i32 = 133;
        pub const Notification: i32 = 134;
        pub const ColorChooser: i32 = 1028;
        pub const Footer: i32 = 1038;
        pub const Form: i32 = 1040;
        pub const Heading: i32 = 1044;
        pub const Note: i32 = 1051;
        pub const ComplementaryContent: i32 = 1068;
        pub const UserRole: i32 = 65535;
    };

    pub const Text = enum {
        pub const Name: i32 = 0;
        pub const Description: i32 = 1;
        pub const Value: i32 = 2;
        pub const Help: i32 = 3;
        pub const Accelerator: i32 = 4;
        pub const DebugDescription: i32 = 5;
        pub const Identifier: i32 = 6;
        pub const UserText: i32 = 65535;
    };

    pub const RelationFlag = enum {
        pub const Label: i32 = 1;
        pub const Labelled: i32 = 2;
        pub const Controller: i32 = 4;
        pub const Controlled: i32 = 8;
        pub const DescriptionFor: i32 = 16;
        pub const Described: i32 = 32;
        pub const FlowsFrom: i32 = 64;
        pub const FlowsTo: i32 = 128;
        pub const AllRelations: i64 = 4294967295;
    };

    pub const InterfaceType = enum {
        pub const TextInterface: i32 = 0;
        pub const EditableTextInterface: i32 = 1;
        pub const ValueInterface: i32 = 2;
        pub const ActionInterface: i32 = 3;
        pub const ImageInterface: i32 = 4;
        pub const TableInterface: i32 = 5;
        pub const TableCellInterface: i32 = 6;
        pub const HyperlinkInterface: i32 = 7;
        pub const SelectionInterface: i32 = 8;
        pub const AttributesInterface: i32 = 9;
    };

    pub const TextBoundaryType = enum {
        pub const CharBoundary: i32 = 0;
        pub const WordBoundary: i32 = 1;
        pub const SentenceBoundary: i32 = 2;
        pub const ParagraphBoundary: i32 = 3;
        pub const LineBoundary: i32 = 4;
        pub const NoBoundary: i32 = 5;
    };

    pub const Attribute = enum {
        pub const Custom: i32 = 0;
        pub const Level: i32 = 1;
    };

    pub const AnnouncementPoliteness = enum {
        pub const Polite: i32 = 0;
        pub const Assertive: i32 = 1;
    };
};
