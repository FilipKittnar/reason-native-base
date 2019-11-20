open ReactNative;
include NativeElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~style: Style.t=?,
    ~testID: string=?,
    ~datasource: array('a)=?,
    ~onSwipeLeft: unit => unit=?,
    ~onSwipeRight: unit => unit=?,
    ~renderItem: unit => React.element=?,
    ~renderBottom: unit => React.element=?,
    ~renderEmpty: unit => React.element=?,
    // Children
    ~children: React.element=?
  ) =>
  React.element = "DeckSwiper";