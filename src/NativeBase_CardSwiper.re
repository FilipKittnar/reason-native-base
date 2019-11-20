open ReactNative;
include NativeElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~style: Style.t=?,
    ~testID: string=?,
    // Children
    ~children: React.element=?
  ) =>
  React.element = "CardSwiper";