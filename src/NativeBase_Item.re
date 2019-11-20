open ReactNative;
include NativeElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~onPress: Event.pressEvent => unit=?,
		~fixedLabel: bool=?,
		~floatingLabel: bool=?,
		~inlineLabel: bool=?,
		~stackedLabel: bool=?,
		~placeholderLabel: bool=?,
		~bordered: bool=?,
		~regular: bool=?,
		~underline: bool=?,
		~rounded: bool=?,
		~disabled: bool=?,
		~error: bool=?,
		~placeholder: string=?,
		~secureTextEntry: bool=?,
		~success: bool=?,
		~last: bool=?,
		~picker: bool=?,
    ~style: Style.t=?,
    ~testID: string=?,
    ~children: React.element=?
  ) => React.element = "Item";