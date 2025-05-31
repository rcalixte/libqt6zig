#pragma once
#ifndef SRCC_LIBQNAMESPACE_H
#define SRCC_LIBQNAMESPACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t)
typedef Qt::Disambiguated_t Disambiguated_t;
#endif
#else
typedef struct Disambiguated_t Disambiguated_t;
typedef struct QInternal QInternal;
typedef struct QKeyCombination QKeyCombination;
#endif

#ifdef __cplusplus
typedef QInternal::Callback Callback;                                          // C++ enum
typedef QInternal::DockPosition DockPosition;                                  // C++ enum
typedef QInternal::PaintDeviceFlags PaintDeviceFlags;                          // C++ enum
typedef QInternal::RelayoutType RelayoutType;                                  // C++ enum
typedef Qt::Alignment Alignment;                                               // C++ QFlags
typedef Qt::AlignmentFlag AlignmentFlag;                                       // C++ enum
typedef Qt::AnchorPoint AnchorPoint;                                           // C++ enum
typedef Qt::ApplicationAttribute ApplicationAttribute;                         // C++ enum
typedef Qt::ApplicationState ApplicationState;                                 // C++ enum
typedef Qt::ApplicationStates ApplicationStates;                               // C++ QFlags
typedef Qt::ArrowType ArrowType;                                               // C++ enum
typedef Qt::AspectRatioMode AspectRatioMode;                                   // C++ enum
typedef Qt::Axis Axis;                                                         // C++ enum
typedef Qt::BGMode BGMode;                                                     // C++ enum
typedef Qt::BrushStyle BrushStyle;                                             // C++ enum
typedef Qt::CaseSensitivity CaseSensitivity;                                   // C++ enum
typedef Qt::CheckState CheckState;                                             // C++ enum
typedef Qt::ChecksumType ChecksumType;                                         // C++ enum
typedef Qt::ClipOperation ClipOperation;                                       // C++ enum
typedef Qt::ConnectionType ConnectionType;                                     // C++ enum
typedef Qt::ContextMenuPolicy ContextMenuPolicy;                               // C++ enum
typedef Qt::CoordinateSystem CoordinateSystem;                                 // C++ enum
typedef Qt::Corner Corner;                                                     // C++ enum
typedef Qt::CursorMoveStyle CursorMoveStyle;                                   // C++ enum
typedef Qt::CursorShape CursorShape;                                           // C++ enum
typedef Qt::DateFormat DateFormat;                                             // C++ enum
typedef Qt::DayOfWeek DayOfWeek;                                               // C++ enum
typedef Qt::DockWidgetArea DockWidgetArea;                                     // C++ enum
typedef Qt::DockWidgetAreaSizes DockWidgetAreaSizes;                           // C++ enum
typedef Qt::DockWidgetAreas DockWidgetAreas;                                   // C++ QFlags
typedef Qt::DropAction DropAction;                                             // C++ enum
typedef Qt::DropActions DropActions;                                           // C++ QFlags
typedef Qt::Edge Edge;                                                         // C++ enum
typedef Qt::Edges Edges;                                                       // C++ QFlags
typedef Qt::EnterKeyType EnterKeyType;                                         // C++ enum
typedef Qt::EventPriority EventPriority;                                       // C++ enum
typedef Qt::FillRule FillRule;                                                 // C++ enum
typedef Qt::FindChildOption FindChildOption;                                   // C++ enum
typedef Qt::FindChildOptions FindChildOptions;                                 // C++ QFlags
typedef Qt::FocusPolicy FocusPolicy;                                           // C++ enum
typedef Qt::FocusReason FocusReason;                                           // C++ enum
typedef Qt::GestureFlag GestureFlag;                                           // C++ enum
typedef Qt::GestureFlags GestureFlags;                                         // C++ QFlags
typedef Qt::GestureState GestureState;                                         // C++ enum
typedef Qt::GestureType GestureType;                                           // C++ enum
typedef Qt::GlobalColor GlobalColor;                                           // C++ enum
typedef Qt::HANDLE HANDLE;                                                     // C++ QFlags
typedef Qt::HighDpiScaleFactorRoundingPolicy HighDpiScaleFactorRoundingPolicy; // C++ enum
typedef Qt::HitTestAccuracy HitTestAccuracy;                                   // C++ enum
typedef Qt::ImageConversionFlag ImageConversionFlag;                           // C++ enum
typedef Qt::ImageConversionFlags ImageConversionFlags;                         // C++ QFlags
typedef Qt::Initialization Initialization;                                     // C++ enum
typedef Qt::InputMethodHint InputMethodHint;                                   // C++ enum
typedef Qt::InputMethodHints InputMethodHints;                                 // C++ QFlags
typedef Qt::InputMethodQueries InputMethodQueries;                             // C++ QFlags
typedef Qt::InputMethodQuery InputMethodQuery;                                 // C++ enum
typedef Qt::ItemDataRole ItemDataRole;                                         // C++ enum
typedef Qt::ItemFlag ItemFlag;                                                 // C++ enum
typedef Qt::ItemFlags ItemFlags;                                               // C++ QFlags
typedef Qt::ItemSelectionMode ItemSelectionMode;                               // C++ enum
typedef Qt::ItemSelectionOperation ItemSelectionOperation;                     // C++ enum
typedef Qt::Key Key;                                                           // C++ enum
typedef Qt::KeyboardModifier KeyboardModifier;                                 // C++ enum
typedef Qt::KeyboardModifiers KeyboardModifiers;                               // C++ QFlags
typedef Qt::LayoutDirection LayoutDirection;                                   // C++ enum
typedef Qt::MaskMode MaskMode;                                                 // C++ enum
typedef Qt::MatchFlag MatchFlag;                                               // C++ enum
typedef Qt::MatchFlags MatchFlags;                                             // C++ QFlags
typedef Qt::Modifier Modifier;                                                 // C++ enum
typedef Qt::Modifiers Modifiers;                                               // C++ QFlags
typedef Qt::MouseButton MouseButton;                                           // C++ enum
typedef Qt::MouseButtons MouseButtons;                                         // C++ QFlags
typedef Qt::MouseEventFlag MouseEventFlag;                                     // C++ enum
typedef Qt::MouseEventFlags MouseEventFlags;                                   // C++ QFlags
typedef Qt::MouseEventSource MouseEventSource;                                 // C++ enum
typedef Qt::NativeGestureType NativeGestureType;                               // C++ enum
typedef Qt::NavigationMode NavigationMode;                                     // C++ enum
typedef Qt::Orientation Orientation;                                           // C++ enum
typedef Qt::Orientations Orientations;                                         // C++ QFlags
typedef Qt::PenCapStyle PenCapStyle;                                           // C++ enum
typedef Qt::PenJoinStyle PenJoinStyle;                                         // C++ enum
typedef Qt::PenStyle PenStyle;                                                 // C++ enum
typedef Qt::ReturnByValueConstant ReturnByValueConstant;                       // C++ enum
typedef Qt::ScreenOrientation ScreenOrientation;                               // C++ enum
typedef Qt::ScreenOrientations ScreenOrientations;                             // C++ QFlags
typedef Qt::ScrollBarPolicy ScrollBarPolicy;                                   // C++ enum
typedef Qt::ScrollPhase ScrollPhase;                                           // C++ enum
typedef Qt::ShortcutContext ShortcutContext;                                   // C++ enum
typedef Qt::SizeHint SizeHint;                                                 // C++ enum
typedef Qt::SizeMode SizeMode;                                                 // C++ enum
typedef Qt::SortOrder SortOrder;                                               // C++ enum
typedef Qt::SplitBehavior SplitBehavior;                                       // C++ QFlags
typedef Qt::SplitBehaviorFlags SplitBehaviorFlags;                             // C++ enum
typedef Qt::TabFocusBehavior TabFocusBehavior;                                 // C++ enum
typedef Qt::TextElideMode TextElideMode;                                       // C++ enum
typedef Qt::TextFlag TextFlag;                                                 // C++ enum
typedef Qt::TextFormat TextFormat;                                             // C++ enum
typedef Qt::TextInteractionFlag TextInteractionFlag;                           // C++ enum
typedef Qt::TextInteractionFlags TextInteractionFlags;                         // C++ QFlags
typedef Qt::TileRule TileRule;                                                 // C++ enum
typedef Qt::TimeSpec TimeSpec;                                                 // C++ enum
typedef Qt::TimerType TimerType;                                               // C++ enum
typedef Qt::ToolBarArea ToolBarArea;                                           // C++ enum
typedef Qt::ToolBarAreaSizes ToolBarAreaSizes;                                 // C++ enum
typedef Qt::ToolBarAreas ToolBarAreas;                                         // C++ QFlags
typedef Qt::ToolButtonStyle ToolButtonStyle;                                   // C++ enum
typedef Qt::TouchPointState TouchPointState;                                   // C++ enum
typedef Qt::TouchPointStates TouchPointStates;                                 // C++ QFlags
typedef Qt::TransformationMode TransformationMode;                             // C++ enum
typedef Qt::UIEffect UIEffect;                                                 // C++ enum
typedef Qt::WhiteSpaceMode WhiteSpaceMode;                                     // C++ enum
typedef Qt::WidgetAttribute WidgetAttribute;                                   // C++ enum
typedef Qt::WindowFlags WindowFlags;                                           // C++ QFlags
typedef Qt::WindowFrameSection WindowFrameSection;                             // C++ enum
typedef Qt::WindowModality WindowModality;                                     // C++ enum
typedef Qt::WindowState WindowState;                                           // C++ enum
typedef Qt::WindowStates WindowStates;                                         // C++ QFlags
typedef Qt::WindowType WindowType;                                             // C++ enum
#else
typedef int Alignment;                        // C ABI QFlags
typedef int AlignmentFlag;                    // C ABI enum
typedef int AnchorPoint;                      // C ABI enum
typedef int ApplicationAttribute;             // C ABI enum
typedef int ApplicationState;                 // C ABI enum
typedef int ApplicationStates;                // C ABI QFlags
typedef int ArrowType;                        // C ABI enum
typedef int AspectRatioMode;                  // C ABI enum
typedef int Axis;                             // C ABI enum
typedef int BGMode;                           // C ABI enum
typedef int BrushStyle;                       // C ABI enum
typedef int Callback;                         // C ABI enum
typedef int CaseSensitivity;                  // C ABI enum
typedef int CheckState;                       // C ABI enum
typedef int ChecksumType;                     // C ABI enum
typedef int ClipOperation;                    // C ABI enum
typedef int ConnectionType;                   // C ABI enum
typedef int ContextMenuPolicy;                // C ABI enum
typedef int CoordinateSystem;                 // C ABI enum
typedef int Corner;                           // C ABI enum
typedef int CursorMoveStyle;                  // C ABI enum
typedef int CursorShape;                      // C ABI enum
typedef int DateFormat;                       // C ABI enum
typedef int DayOfWeek;                        // C ABI enum
typedef int DockPosition;                     // C ABI enum
typedef int DockWidgetArea;                   // C ABI enum
typedef int DockWidgetAreaSizes;              // C ABI enum
typedef int DockWidgetAreas;                  // C ABI QFlags
typedef int DropAction;                       // C ABI enum
typedef int DropActions;                      // C ABI QFlags
typedef int Edge;                             // C ABI enum
typedef int Edges;                            // C ABI QFlags
typedef int EnterKeyType;                     // C ABI enum
typedef int EventPriority;                    // C ABI enum
typedef int FillRule;                         // C ABI enum
typedef int FindChildOption;                  // C ABI enum
typedef int FindChildOptions;                 // C ABI QFlags
typedef int FocusPolicy;                      // C ABI enum
typedef int FocusReason;                      // C ABI enum
typedef int GestureFlag;                      // C ABI enum
typedef int GestureFlags;                     // C ABI QFlags
typedef int GestureState;                     // C ABI enum
typedef int GestureType;                      // C ABI enum
typedef int GlobalColor;                      // C ABI enum
typedef int HighDpiScaleFactorRoundingPolicy; // C ABI enum
typedef int HitTestAccuracy;                  // C ABI enum
typedef int ImageConversionFlag;              // C ABI enum
typedef int ImageConversionFlags;             // C ABI QFlags
typedef int Initialization;                   // C ABI enum
typedef int InputMethodHint;                  // C ABI enum
typedef int InputMethodHints;                 // C ABI QFlags
typedef int InputMethodQueries;               // C ABI QFlags
typedef int InputMethodQuery;                 // C ABI enum
typedef int ItemDataRole;                     // C ABI enum
typedef int ItemFlag;                         // C ABI enum
typedef int ItemFlags;                        // C ABI QFlags
typedef int ItemSelectionMode;                // C ABI enum
typedef int ItemSelectionOperation;           // C ABI enum
typedef int Key;                              // C ABI enum
typedef int KeyboardModifier;                 // C ABI enum
typedef int KeyboardModifiers;                // C ABI QFlags
typedef int LayoutDirection;                  // C ABI enum
typedef int MaskMode;                         // C ABI enum
typedef int MatchFlag;                        // C ABI enum
typedef int MatchFlags;                       // C ABI QFlags
typedef int Modifier;                         // C ABI enum
typedef int Modifiers;                        // C ABI QFlags
typedef int MouseButton;                      // C ABI enum
typedef int MouseButtons;                     // C ABI QFlags
typedef int MouseEventFlag;                   // C ABI enum
typedef int MouseEventFlags;                  // C ABI QFlags
typedef int MouseEventSource;                 // C ABI enum
typedef int NativeGestureType;                // C ABI enum
typedef int NavigationMode;                   // C ABI enum
typedef int Orientation;                      // C ABI enum
typedef int Orientations;                     // C ABI QFlags
typedef int PaintDeviceFlags;                 // C ABI enum
typedef int PenCapStyle;                      // C ABI enum
typedef int PenJoinStyle;                     // C ABI enum
typedef int PenStyle;                         // C ABI enum
typedef int RelayoutType;                     // C ABI enum
typedef int ReturnByValueConstant;            // C ABI enum
typedef int ScreenOrientation;                // C ABI enum
typedef int ScreenOrientations;               // C ABI QFlags
typedef int ScrollBarPolicy;                  // C ABI enum
typedef int ScrollPhase;                      // C ABI enum
typedef int ShortcutContext;                  // C ABI enum
typedef int SizeHint;                         // C ABI enum
typedef int SizeMode;                         // C ABI enum
typedef int SortOrder;                        // C ABI enum
typedef int SplitBehavior;                    // C ABI QFlags
typedef int SplitBehaviorFlags;               // C ABI enum
typedef int TabFocusBehavior;                 // C ABI enum
typedef int TextElideMode;                    // C ABI enum
typedef int TextFlag;                         // C ABI enum
typedef int TextFormat;                       // C ABI enum
typedef int TextInteractionFlag;              // C ABI enum
typedef int TextInteractionFlags;             // C ABI QFlags
typedef int TileRule;                         // C ABI enum
typedef int TimeSpec;                         // C ABI enum
typedef int TimerType;                        // C ABI enum
typedef int ToolBarArea;                      // C ABI enum
typedef int ToolBarAreaSizes;                 // C ABI enum
typedef int ToolBarAreas;                     // C ABI QFlags
typedef int ToolButtonStyle;                  // C ABI enum
typedef int TouchPointState;                  // C ABI enum
typedef int TouchPointStates;                 // C ABI QFlags
typedef int TransformationMode;               // C ABI enum
typedef int UIEffect;                         // C ABI enum
typedef int WhiteSpaceMode;                   // C ABI enum
typedef int WidgetAttribute;                  // C ABI enum
typedef int WindowFlags;                      // C ABI QFlags
typedef int WindowFrameSection;               // C ABI enum
typedef int WindowModality;                   // C ABI enum
typedef int WindowState;                      // C ABI enum
typedef int WindowStates;                     // C ABI QFlags
typedef int WindowType;                       // C ABI enum
typedef void* HANDLE;                         // C ABI QFlags
#endif

Disambiguated_t* Disambiguated_t_new(const Disambiguated_t* other);
Disambiguated_t* Disambiguated_t_new2(Disambiguated_t* other);
Disambiguated_t* Disambiguated_t_new3();
Disambiguated_t* Disambiguated_t_new4(const Disambiguated_t* param1);
void Disambiguated_t_CopyAssign(Disambiguated_t* self, Disambiguated_t* other);
void Disambiguated_t_MoveAssign(Disambiguated_t* self, Disambiguated_t* other);
void Disambiguated_t_Delete(Disambiguated_t* self);

QInternal* QInternal_new(const QInternal* other);
QInternal* QInternal_new2(QInternal* other);
void QInternal_CopyAssign(QInternal* self, QInternal* other);
void QInternal_MoveAssign(QInternal* self, QInternal* other);
bool QInternal_ActivateCallbacks(int param1, void** param2);
void QInternal_Delete(QInternal* self);

QKeyCombination* QKeyCombination_new(const QKeyCombination* other);
QKeyCombination* QKeyCombination_new2(QKeyCombination* other);
QKeyCombination* QKeyCombination_new3();
QKeyCombination* QKeyCombination_new4(int modifiers);
QKeyCombination* QKeyCombination_new5(int modifiers);
QKeyCombination* QKeyCombination_new6(const QKeyCombination* param1);
QKeyCombination* QKeyCombination_new7(int key);
QKeyCombination* QKeyCombination_new8(int modifiers, int key);
QKeyCombination* QKeyCombination_new9(int modifiers, int key);
void QKeyCombination_CopyAssign(QKeyCombination* self, QKeyCombination* other);
void QKeyCombination_MoveAssign(QKeyCombination* self, QKeyCombination* other);
int QKeyCombination_KeyboardModifiers(const QKeyCombination* self);
int QKeyCombination_Key(const QKeyCombination* self);
QKeyCombination* QKeyCombination_FromCombined(int combined);
int QKeyCombination_ToCombined(const QKeyCombination* self);
int QKeyCombination_ToInt(const QKeyCombination* self);
void QKeyCombination_Delete(QKeyCombination* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
