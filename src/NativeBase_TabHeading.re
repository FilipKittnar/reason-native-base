open ReactNative;
include NativeElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~tabStyle: Style.t=?,
    ~activeTabStyle: Style.t=?,
    ~textStyle: Style.t=?,
    ~activeTextStyle: Style.t=?,
    ~testID: string=?,
    ~style: Style.t=?,
    ~children: React.element=?
  ) => React.element = "TabHeading";