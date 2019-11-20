open ReactNative;
include NativeElement;

type scaledSize = {
  .
  "width": int,
  "height": int,
  "scale": float,
  "fontScale": float,
};

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~acceptDoubleTap: bool=?,
    ~acceptPan: bool=?,
    ~acceptTap: bool=?,
    ~captureGestures: bool=?,
    ~open_: bool=?,
    ~closedDrawerOffset: int=?,
    ~content: 'content=?,
    ~deviceScreen: scaledSize=?,
    ~disabled: bool=?,
    ~initializeOpen: bool=?,
    ~negotiatePan: bool=?,
    ~onClose: unit => unit=?,
    ~nonCloseStart: unit => unit=?,
    ~onOpen: unit => unit=?,
    ~onOpenStart: unit => unit=?,
    ~openDrawerOffset: int=?,
    ~openDrawerThreshold: int=?,
    ~panCloseMask: int=?,
    ~panOpenMask: int=?,
    ~panStartCompensation: bool=?,
    ~relativeDrag: bool=?,
    ~side: [@bs.string] [ `left | `right ]=?,
    ~styles: NativeBase_DrawerStyles.element=?,
    ~tapToClose: bool=?,
    ~tweenDuration: int=?,
    ~tweenEasing: string,
    ~tweenHandler: unit => unit,
    ~type_: [@bs.string] [ `overlay | `static | `displace ] =?,
    ~style: Style.t=?,
    ~testID: string=?,
    ~children: React.element=?
  ) => React.element = "Drawer";