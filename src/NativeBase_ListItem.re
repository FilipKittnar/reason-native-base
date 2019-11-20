open ReactNative;
include TouchableOpacityElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~header: bool=?,
    ~noBorder: bool=?,
    ~noIndent: bool=?,
    ~iconRight: bool=?,
    ~iconLeft: bool=?,
    ~icon: bool=?,
    ~avatar: bool=?,
    ~thumbnail: bool=?,
    ~button: bool=?,
    ~itemDivider: bool=?,
    ~note: string=?,
    ~itemHeader: bool=?,
    ~first: bool=?,
    ~last: bool=?,
    ~selected: bool=?,
    ~androidRippleColor: string=?,
    ~touchableHighlightStyle: Style.t=?,
    // TouchableOpacity props
    ~activeOpacity: float=?,
    ~focusedOpacity: float=?,
    ~hasTVPreferredFocus: bool=?,
    ~style: Style.t=?,
    ~tvParallaxProperties: TV.parallax=?,
    // TouchableWithoutFeedback props
    ~accessible: bool=?,
    ~accessibilityComponentType: [@bs.string] [
                                   | `none
                                   | `button
                                   | `radiobutton_checked
                                   | `radiobutton_unchecked
                                 ]=?,
    ~accessibilityHint: string=?,
    ~accessibilityIgnoresInvertColors: bool=?,
    ~accessibilityLabel: string=?,
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
    ~delayLongPress: int=?,
    ~delayPressIn: int=?,
    ~delayPressOut: int=?,
    ~disabled: bool=?,
    ~hitSlop: View.edgeInsets=?,
    ~onLayout: Event.layoutEvent => unit=?,
    ~onLongPress: Event.pressEvent => unit=?,
    ~onPress: Event.pressEvent => unit=?,
    ~onPressIn: Event.pressEvent => unit=?,
    ~onPressOut: Event.pressEvent => unit=?,
    ~pressRetentionOffset: View.edgeInsets=?,
    ~testID: string=?,
    ~children: React.element=?
  ) =>
  React.element = "ListItem";