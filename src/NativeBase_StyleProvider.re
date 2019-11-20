open ReactNative;
include NativeElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~style: Js.Dict.t('a)=?,
    ~testID: string=?,
    ~children: React.element=?
  ) => React.element = "StyleProvider";