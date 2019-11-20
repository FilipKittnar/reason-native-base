open ReactNative;
include NativeElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~dataArray: array('a)=?,
		~headerStyle: Style.t=?,
		~contentStyle: Style.t=?,
		~renderHeader: ('a, bool) => React.element=?,
		~renderContent: ('a) => React.element=?,
		~expanded: int=?,
		~icon: string=?,
		~expandedIcon: string=?,
		~iconStyle: Style.t=?,
		~expandedIconStyle: Style.t=?,
    ~style: Style.t=?,
    ~testID: string=?,
    ~children: React.element=?
  ) => React.element = "Accordion";