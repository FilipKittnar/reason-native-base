open ReactNative;
include NativeElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~drawer: Style.t=?,
    ~main: Style.t=?,
    ~drawerOverlay: Style.t=?,
    ~mainOverlay: Style.t=?,
    ~style: Style.t=?,
    ~testID: string=?,
    ~children: React.element=?
  ) => React.element = "DrawerStyles";