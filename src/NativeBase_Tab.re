open ReactNative;
include NativeElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~heading: string,
    ~tabStyle: Style.t=?,
    ~activeTabStyle: Style.t=?,
    ~textStyle: Style.t=?,
    ~activeTextStyle: Style.t=?,
    ~testID: string=?,
    ~children: React.element=?
  ) => React.element = "Tab";