open ReactNative;
include NativeElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~leftOpenValue: int=?,
		~rightOpenValue: int=?,
		~closeOnRowPress: bool=?,
		~disableLeftSwipe: bool=?,
		~disableRightSwipe: bool=?,
		~recalculateHiddenLayout: bool=?,
		~preview: bool=?,
		~previewDuration: int=?,
		~directionalDistanceChangeThreshold: int=?,
		~swipeToOpenPercent: int=?,
		~stopLeftSwipe: int=?,
		~stopRightSwipe: int=?,
		~onRowOpen: unit => unit=?,
		~onRowClose: unit => unit=?,
		~left: React.element=?,
		~body: React.element=?,
		~right: React.element=?,
    ~style: Style.t=?,
    ~testID: string=?,
    ~children: React.element=?
  ) => React.element = "SwipeRow";