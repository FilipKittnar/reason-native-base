open ReactNative;
include TextInputElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~label: string=?,
    ~inlineLabel: bool=?,
    ~stackedLabel: bool=?,
    ~disabled: bool=?,
    ~getRef: ReactNative.TextInput.ref=?,
    // TextInput props
    ~allowFontScaling: bool=?,
    ~autoCapitalize: [@bs.string] [
                       | `characters
                       | `words
                       | `sentences
                       | `none
                     ]=?,
    ~autoComplete: [@bs.string] [
                     | `off
                     | `username
                     | `password
                     | `email
                     | `name
                     | `tel
                     | [@bs.as "street-address"] `streetAddress
                     | [@bs.as "postal-code"] `postalCode
                     | [@bs.as "cc-number"] `ccNumber
                     | [@bs.as "cc-csc"] `ccCsc
                     | [@bs.as "cc-exp"] `ccExp
                     | [@bs.as "cc-exp-month"] `ccExpMonth
                     | [@bs.as "cc-exp-year"] `ccExpYear
                   ]=?,
    ~autoCorrect: bool=?,
    ~autoFocus: bool=?,
    ~blurOnSubmit: bool=?,
    ~caretHidden: bool=?,
    ~clearButtonMode: [@bs.string] [
                        | `never
                        | [@bs.as "while-editing"] `whileEditing
                        | [@bs.as "unless-editing"] `unlessEditing
                        | `always
                      ]=?,
    ~clearTextOnFocus: bool=?,
    ~contextMenuHidden: bool=?,
    ~dataDetectorTypes: array(TextInput.DataDetectorTypes.t)=?,
    ~defaultValue: string=?,
    ~disableFullscreenUI: bool=?,
    ~editable: bool=?,
    ~enablesReturnKeyAutomatically: bool=?,
    ~importantForAutofill: [@bs.string] [
                             | `auto
                             | `no
                             | `noExcludeDescendants
                             | `yes
                             | `yesExcludeDescendants
                           ]=?,
    ~inlineImageLeft: string=?,
    ~inlineImagePadding: float=?,
    ~inputAccessoryViewID: string=?,
    ~keyboardAppearance: [@bs.string] [ `default | `light | `dark]=?,
    ~keyboardType: [@bs.string] [
                     | `default
                     | [@bs.as "number-pad"] `numberPad
                     | [@bs.as "decimal-pad"] `decimalPad
                     | `numeric
                     | [@bs.as "email-address"] `emailAddress
                     | [@bs.as "phone-pad"] `phonePad
                     | [@bs.as "ascii-capable"] `asciiCapable
                     | [@bs.as "numbers-and-punctuation"]
                       `numbersAndPunctuation
                     | `url
                     | [@bs.as "name-phone-pad"] `namePhonePad
                     | `twitter
                     | [@bs.as "web-search"] `webSearch
                     | [@bs.as "visible-password"] `visiblePassword
                   ]=?,
    ~maxFontSizeMultiplier: float=?,
    ~maxLength: int=?,
    ~multiline: bool=?,
    ~numberOfLines: int=?,
    ~onBlur: Event.targetEvent => unit=?,
    ~onChange: TextInput.changeEvent => unit=?,
    ~onChangeText: string => unit=?,
    ~onContentSizeChange: TextInput.contentSizeChangeEvent => unit=?,
    ~onEndEditing: TextInput.editingEvent => unit=?,
    ~onFocus: Event.targetEvent => unit=?,
    ~onKeyPress: TextInput.keyPressEvent => unit=?,
    ~onScroll: TextInput.scrollEvent => unit=?,
    ~onSelectionChange: TextInput.selectionChangeEvent => unit=?,
    ~onSubmitEditing: TextInput.editingEvent => unit=?,
    ~onTextInput: TextInput.textInputEvent => unit=?,
    ~placeholder: string=?,
    ~placeholderTextColor: Color.t=?,
    ~returnKeyLabel: string=?,
    ~returnKeyType: [@bs.string] [
                      | [@bs.as "done"] `done_
                      | `go
                      | `next
                      | `search
                      | `send
                      | `none
                      | `previous
                      | `default
                      | [@bs.as "emergency-call"] `emergencyCall
                      | `google
                      | `join
                      | `route
                      | `yahoo
                    ]=?,
    ~rejectResponderTermination: bool=?,
    ~scrollEnabled: bool=?,
    ~secureTextEntry: bool=?,
    ~selection: TextInput.selection=?,
    ~selectionColor: Color.t=?,
    ~selectionState: 'documentSelectionState=?, // TODO
    ~selectTextOnFocus: bool=?,
    ~spellCheck: bool=?,
    ~textBreakStrategy: [@bs.string] [ `balanced | `highQuality | `simple]=?,
    ~textContentType: [@bs.string] [
                        | `none
                        | `URL
                        | `addressCity
                        | `addressCityAndState
                        | `addressState
                        | `countryName
                        | `creditCardNumber
                        | `emailAddress
                        | `familyName
                        | `fullStreetAddress
                        | `givenName
                        | `jobTitle
                        | `location
                        | `middleName
                        | `name
                        | `namePrefix
                        | `nameSuffix
                        | `nickname
                        | `organizationName
                        | `postalCode
                        | `streetAddressLine1
                        | `streetAddressLine2
                        | `sublocality
                        | `telephoneNumber
                        | `username
                        | `password
                        | `newPassword
                        | `oneTimeCode
                      ]=?,
    ~underlineColorAndroid: Color.t=?,
    ~value: string=?,
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
  React.element = "Input";