open ReactNative;
include NativeElement;

type sectionId = string;
type rowId = string;
type rowSelected = bool;
type sectionRowSelections = (sectionId, array((rowId, rowSelected)));

let convertSectionsRowSelections = (sections: array(sectionRowSelections)) => {
  Js.Dict.fromArray(Belt.Array.map(sections, ((sectionId, rows)) => (sectionId, Js.Dict.fromArray(rows))));
};

[@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~dataArray: array('a)=?,
    ~transparent: bool=?,
    ~noShadow: bool=?,
    ~enableEmptySections: bool=?,
    ~initialListSize: int=?,
    ~onChangeVisibleRows: (
      array(sectionRowSelections),
      array(sectionRowSelections),
    ) => unit=?,
    ~onEndReached: unit => unit=?,
    ~onEndReachedThreshold: int=?,
    ~pageSize: int=?,
    ~renderFooter: unit => React.element=?,
    ~renderHeader: unit => React.element=?,
    ~renderRow: (
      'rowData,
      sectionId,
      rowId,
      rowSelected
    ) => React.element=?,
    ~renderScrollComponent: ('props) => ReactNative.ScrollView.element=?,
    ~renderSectionHeader: ('rowData, sectionId) => React.element=?,
    ~renderSeparator: (
      sectionId,
      rowId,
      rowSelected
    ) => React.element=?,
    ~scrollRenderAheadDistance: int=?,
    ~stickyHeaderIndices: array(int)=?,
    ~stickySectionHeadersEnabled: bool=?,
    // View props
    ~accessibilityComponentType: [@bs.string] [
                                   | `none
                                   | `button
                                   | `radiobutton_checked
                                   | `radiobutton_unchecked
                                 ]=?,
    ~accessibilityElementsHidden: bool=?,
    ~accessibilityHint: string=?,
    ~accessibilityIgnoresInvertColors: bool=?,
    ~accessibilityLabel: string=?,
    ~accessibilityLiveRegion: [@bs.string] [ `none | `polite | `assertive]=?,
    ~accessibilityRole: [@bs.string] [
                          | `none
                          | `button
                          | `link
                          | `search
                          | `image
                          | `keyboardkey
                          | `text
                          | `adjustable
                          | `header
                          | `summary
                          | `imagebutton
                        ]=?,
    ~accessibilityStates: array(AccessibilityState.t)=?,
    ~accessibilityTraits: array(AccessibilityTrait.t)=?,
    ~accessibilityViewIsModal: bool=?,
    ~accessible: bool=?,
    ~collapsable: bool=?,
    ~hitSlop: View.edgeInsets=?,
    ~importantForAccessibility: [@bs.string] [
                                  | `auto
                                  | `yes
                                  | `no
                                  | [@bs.as "no-hide-descendants"]
                                    `no_hide_descendants
                                ]=?,
    ~nativeID: string=?,
    ~needsOffscreenAlphaCompositing: bool=?,
    ~onAccessibilityEscape: unit => unit=?,
    ~onAccessibilityTap: unit => unit=?,
    ~onLayout: Event.layoutEvent => unit=?,
    ~onMagicTap: unit => unit=?,
    // Gesture Responder props
    ~onMoveShouldSetResponder: Event.pressEvent => bool=?,
    ~onMoveShouldSetResponderCapture: Event.pressEvent => bool=?,
    ~onResponderEnd: Event.pressEvent => unit=?,
    ~onResponderGrant: Event.pressEvent => unit=?,
    ~onResponderMove: Event.pressEvent => unit=?,
    ~onResponderReject: Event.pressEvent => unit=?,
    ~onResponderRelease: Event.pressEvent => unit=?,
    ~onResponderStart: Event.pressEvent => unit=?,
    ~onResponderTerminate: Event.pressEvent => unit=?,
    ~onResponderTerminationRequest: Event.pressEvent => bool=?,
    ~onStartShouldSetResponder: Event.pressEvent => bool=?,
    ~onStartShouldSetResponderCapture: Event.pressEvent => bool=?,
    ~pointerEvents: [@bs.string] [
                      | `auto
                      | `none
                      | [@bs.as "box-none"] `box_none
                      | [@bs.as "box-only"] `box_only
                    ]=?,
    ~removeClippedSubviews: bool=?,
    ~renderToHardwareTextureAndroid: bool=?,
    ~shouldRasterizeIOS: bool=?,
    ~style: Style.t=?,
    ~testID: string=?,
    // Children
    ~children: React.element=?
  ) =>
  React.element = "Card";

[@react.component] 
let make = (
  ~dataArray,
  ~transparent,
  ~noShadow,
  ~enableEmptySections,
  ~initialListSize,
  ~onChangeVisibleRows,
  ~onEndReached,
  ~onEndReachedThreshold,
  ~pageSize,
  ~renderFooter,
  ~renderHeader,
  ~renderRow,
  ~renderScrollComponent,
  ~renderSectionHeader,
  ~renderSeparator,
  ~scrollRenderAheadDistance,
  ~stickyHeaderIndices,
  ~stickySectionHeadersEnabled,
  ~accessibilityComponentType,
  ~accessibilityElementsHidden,
  ~accessibilityHint,
  ~accessibilityIgnoresInvertColors,
  ~accessibilityLabel,
  ~accessibilityLiveRegion,
  ~accessibilityRole,
  ~accessibilityStates,
  ~accessibilityTraits,
  ~accessibilityViewIsModal,
  ~accessible,
  ~collapsable,
  ~hitSlop,
  ~importantForAccessibility,
  ~nativeID,
  ~needsOffscreenAlphaCompositing,
  ~onAccessibilityEscape,
  ~onAccessibilityTap,
  ~onLayout,
  ~onMagicTap,
  ~onMoveShouldSetResponder,
  ~onMoveShouldSetResponderCapture,
  ~onResponderEnd,
  ~onResponderGrant,
  ~onResponderMove,
  ~onResponderReject,
  ~onResponderRelease,
  ~onResponderStart,
  ~onResponderTerminate,
  ~onResponderTerminationRequest,
  ~onStartShouldSetResponder,
  ~onStartShouldSetResponderCapture,
  ~pointerEvents,
  ~removeClippedSubviews,
  ~renderToHardwareTextureAndroid,
  ~shouldRasterizeIOS,
  ~style,
  ~testID,
  ~children,
) => make(
  ~dataArray,
  ~transparent,
  ~noShadow,
  ~enableEmptySections,
  ~initialListSize,
  ~onChangeVisibleRows=(a, b) => onChangeVisibleRows(convertSectionsRowSelections(a), convertSectionsRowSelections(b)),
  ~onEndReached,
  ~onEndReachedThreshold,
  ~pageSize,
  ~renderFooter,
  ~renderHeader,
  ~renderRow,
  ~renderScrollComponent,
  ~renderSectionHeader,
  ~renderSeparator,
  ~scrollRenderAheadDistance,
  ~stickyHeaderIndices,
  ~stickySectionHeadersEnabled,
  ~accessibilityComponentType,
  ~accessibilityElementsHidden,
  ~accessibilityHint,
  ~accessibilityIgnoresInvertColors,
  ~accessibilityLabel,
  ~accessibilityLiveRegion,
  ~accessibilityRole,
  ~accessibilityStates,
  ~accessibilityTraits,
  ~accessibilityViewIsModal,
  ~accessible,
  ~collapsable,
  ~hitSlop,
  ~importantForAccessibility,
  ~nativeID,
  ~needsOffscreenAlphaCompositing,
  ~onAccessibilityEscape,
  ~onAccessibilityTap,
  ~onLayout,
  ~onMagicTap,
  ~onMoveShouldSetResponder,
  ~onMoveShouldSetResponderCapture,
  ~onResponderEnd,
  ~onResponderGrant,
  ~onResponderMove,
  ~onResponderReject,
  ~onResponderRelease,
  ~onResponderStart,
  ~onResponderTerminate,
  ~onResponderTerminationRequest,
  ~onStartShouldSetResponder,
  ~onStartShouldSetResponderCapture,
  ~pointerEvents,
  ~removeClippedSubviews,
  ~renderToHardwareTextureAndroid,
  ~shouldRasterizeIOS,
  ~style,
  ~testID,
  ~children,
);