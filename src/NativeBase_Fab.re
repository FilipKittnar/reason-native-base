open ReactNative;
include NativeElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~active: bool=?,
		~direction: [@bs.string] [ `down | `up | `left | `right ]=?,
		~containerStyle: Style.t=?,
		~onPress: unit => unit=?,
		~position: [@bs.string] [ `topLeft | `topRight | `bottomLeft | `bottomRight ]=?,
    ~style: Style.t=?,
    ~testID: string=?,
    ~children: React.element=?
  ) => React.element = "Fab";